"""Gera o assembly das funções ainda não decompiladas, o .rodata e o linker script final.

Como funciona:
- O splat gera asm/cod/000000.s (todas as funções, sintaxe do binutils moderno).
- Cada função que ainda aparece como INCLUDE_ASM(...) em src/ é copiada para
  build/nonmatchings.s na sua própria seção .text.<nome>.
- As funções escritas em C são compiladas pelo SN com -ffunction-sections, então também
  ficam em .text.<nome>.
- O linker script lista todas as seções .text.<nome> na ordem original dos endereços.

Funções com switch:
- Ficam cada uma no seu próprio arquivo, src/cod/switch/<nome>.c. Assim o .rodata desse
  objeto contém só as jump tables daquela função.
- O .rodata original (asm/data/cod/2AAE00.rodata.s) é reescrito em build/rodata.s: as jump
  tables dessas funções são retiradas e o resto é dividido em pedaços (.rodata.pN), cada um
  preso no seu endereço original. Os ".align" viram ".org" com o deslocamento exato, para o
  pedaço não depender do alinhamento de onde começa.
- No buraco de cada tabela retirada entra o .rodata do objeto C da função.

Uso: python3 tools/gen_link.py <linker_script_do_splat> <saida.ld> <saida_nonmatchings.s> <saida_rodata.s>
"""
import os, re, sys

LD_IN, LD_OUT, ASM_OUT, RODATA_OUT = sys.argv[1:5]
FULL_ASM = "asm/cod/000000.s"
RODATA_IN = "asm/data/cod/2AAE00.rodata.s"
SWITCH_DIR = "src/cod/switch"
BASE = 0x100000  # endereço do início da seção .cod

# 1. funções ainda em asm (INCLUDE_ASM em algum .c)
still_asm = set()
for root, _, files in os.walk("src"):
    for f in files:
        if f.endswith(".c"):
            txt = open(os.path.join(root, f)).read()
            still_asm.update(m.group(1) for m in re.finditer(r'INCLUDE_ASM\("[^"]+",\s*(\w+)\)', txt))

switch_funcs = set()
if os.path.isdir(SWITCH_DIR):
    switch_funcs = {f[:-2] for f in os.listdir(SWITCH_DIR) if f.endswith(".c")}

# 2. divide o arquivo completo em funções (cada uma começa com ".align" + "nonmatching NOME")
src = open(FULL_ASM).read()
header_end = src.index(".align")
parts = re.split(r'\n(?=\.align \d+\n(?:/\* Handwritten function \*/\n)?nonmatching )', src[header_end:])
funcs = []
addr_re = re.compile(r'/\* [0-9A-F]+ ([0-9A-F]{8}) [0-9A-F]{8} \*/')
for p in parts:
    m = re.search(r'^nonmatching ([^,\s]+)', p, re.M)
    assert m, p[:200]
    a = addr_re.search(p)
    funcs.append((m.group(1), p, int(a.group(1), 16)))
bodies = {n: b for n, b, _ in funcs}

# 3. assembly das funções que ainda não viraram C
with open(ASM_OUT, "w") as o:
    o.write('.include "macro.inc"\n\n.set noat\n.set noreorder\n\n')
    for name, body, _ in funcs:
        if name in still_asm:
            o.write(f'.section .text.{name}, "ax"\n{body}\n')

# 4. .rodata: tira as jump tables das funções com switch em C e divide o resto em pedaços
owned = {}  # jtbl -> função dona
for name in switch_funcs:
    for j in set(re.findall(r'%lo\((jtbl_[0-9A-F]{8})\)', bodies[name])):
        owned[j] = name

data_addr_re = re.compile(r'^\s*/\* [0-9A-F]+ ([0-9A-F]{8})\b')
lines = open(RODATA_IN).read().split("\n")
# endereço do próximo item de dados a partir de cada linha (para trocar .align por .org)
next_addr = [None] * (len(lines) + 1)
for i in range(len(lines) - 1, -1, -1):
    m = data_addr_re.match(lines[i])
    next_addr[i] = int(m.group(1), 16) if m else next_addr[i + 1]

out = []
layout = []  # (endereço, linha do linker script)
part_no = -1
part_start = None
pending = None   # endereço de início do próximo pedaço (criado só quando aparecer conteúdo)
skip_until = None
hole_owner = {}  # função -> endereço do buraco

def ensure_part():
    global part_no, part_start, pending
    if pending is not None:
        part_no += 1
        part_start = pending
        pending = None
        out.append(f'\n.section .rodata.p{part_no}, "a"')
        layout.append((part_start, f"build/rodata.o(.rodata.p{part_no});"))

for i, l in enumerate(lines):
    if skip_until:
        if l.startswith(f"enddlabel {skip_until}"):
            skip_until = None
            pending = next_addr[i + 1]
        continue
    if l.startswith('.section .rodata'):
        continue
    m = re.match(r'^nonmatching (jtbl_[0-9A-F]{8})', l)
    if m and m.group(1) in owned:
        j = m.group(1)
        owner = owned[j]
        if owner not in hole_owner:
            hole_owner[owner] = next_addr[i]
            layout.append((next_addr[i], f"build/src/cod/switch/{owner}.o(.rodata);"))
        pending = None
        skip_until = j
        continue
    if part_start is None and pending is None and (re.match(r'^\.align', l) or data_addr_re.match(l)):
        pending = next_addr[i]
    if re.match(r'^\.align \d+$', l.strip()):
        ensure_part()
        out.append(f".org 0x{next_addr[i] - part_start:X}")
        continue
    if l.strip() and not l.startswith('.include') and not l.startswith('/*'):
        ensure_part()
    out.append(l)

with open(RODATA_OUT, "w") as o:
    o.write("\n".join(out) + "\n")

missing = switch_funcs - set(hole_owner)
assert not missing, f"funções em {SWITCH_DIR} sem jump table encontrada: {sorted(missing)}"

layout.sort()
rodata_lines = "\n".join(f"        . = 0x{a - BASE:06X}; {s}" for a, s in layout)

# 5. linker script
ld = open(LD_IN).read()
# Cada função começa exatamente no endereço original. Se uma função em C ficar maior que a
# original, o ld acusa "cannot move location counter backwards" -- sinal de que não bateu.
order = "\n".join(f"        . = 0x{a - BASE:06X}; *(.text.{n}) *(.text.{n}__*)" for n, _, a in funcs)
ld, n = re.subn(r'^\s*build/src/cod/000000\.o\(\.text\*\);$', order, ld, flags=re.M)
assert n == 1, "linha do .text não encontrada no linker script"
ld, n = re.subn(r'^\s*build/asm/data/cod/2AAE00\.rodata\.o\(\.rodata\*\);$', rodata_lines, ld, flags=re.M)
assert n == 1, "linha do .rodata não encontrada no linker script"
# .sbss/.bss em endereços fixos, como no ELF original
ld = ld.replace(".cod_bss (NOLOAD) :", ".cod_bss 0x003FD500 (NOLOAD) :")
ld = ld.replace("cod_BSS_START = .;", ". = 0x300; cod_BSS_START = .;")
open(LD_OUT, "w").write(ld)
n_asm = sum(1 for n, _, _ in funcs if n in still_asm)
print(f"{len(funcs)} funções: {len(funcs) - n_asm} em C ({len(switch_funcs)} com switch), {n_asm} em asm")
