"""Gera o assembly das funções ainda não decompiladas e o linker script final.

Como funciona:
- O splat gera asm/cod/000000.s (todas as funções, sintaxe do binutils moderno).
- Cada função que ainda aparece como INCLUDE_ASM(...) em src/ é copiada para
  build/nonmatchings.s na sua própria seção .text.<nome>.
- As funções escritas em C são compiladas pelo SN com -ffunction-sections, então também
  ficam em .text.<nome>.
- O linker script lista todas as seções .text.<nome> na ordem original dos endereços.

Uso: python3 tools/gen_link.py <linker_script_do_splat> <saida.ld> <saida_nonmatchings.s>
"""
import os, re, sys

LD_IN, LD_OUT, ASM_OUT = sys.argv[1:4]
FULL_ASM = "asm/cod/000000.s"

# 1. funções ainda em asm (INCLUDE_ASM em algum .c)
still_asm = set()
for root, _, files in os.walk("src"):
    for f in files:
        if f.endswith(".c"):
            txt = open(os.path.join(root, f)).read()
            still_asm.update(m.group(1) for m in re.finditer(r'INCLUDE_ASM\("[^"]+",\s*(\w+)\)', txt))

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

# 3. assembly das funções que ainda não viraram C
with open(ASM_OUT, "w") as o:
    o.write('.include "macro.inc"\n\n.set noat\n.set noreorder\n\n')
    for name, body, _ in funcs:
        if name in still_asm:
            o.write(f'.section .text.{name}, "ax"\n{body}\n')

# 4. linker script: troca a linha de .text pela lista ordenada de seções
ld = open(LD_IN).read()
# Cada função começa exatamente no endereço original. Se uma função em C ficar maior que a
# original, o ld acusa "cannot move location counter backwards" -- sinal de que não bateu.
TEXT_START = 0x100000
order = "\n".join(f"        . = 0x{a - TEXT_START:06X}; *(.text.{n}) *(.text.{n}__*)" for n, _, a in funcs)
ld, n = re.subn(r'^\s*build/src/cod/000000\.o\(\.text\*\);$', order, ld, flags=re.M)
assert n == 1, "linha do .text não encontrada no linker script"
# .sbss/.bss em endereços fixos, como no ELF original
ld = ld.replace(".cod_bss (NOLOAD) :", ".cod_bss 0x003FD500 (NOLOAD) :")
ld = ld.replace("cod_BSS_START = .;", ". = 0x300; cod_BSS_START = .;")
open(LD_OUT, "w").write(ld)
n_asm = sum(1 for n, _, _ in funcs if n in still_asm)
print(f"{len(funcs)} funções: {len(funcs) - n_asm} em C, {n_asm} em asm")
