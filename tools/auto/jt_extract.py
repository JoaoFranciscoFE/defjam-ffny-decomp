"""Para cada função com switch, monta jt/<nome>.s = função + suas jump tables (seção .rodata),
no formato que o m2c entende. Grava jt_meta.json: nome -> lista de (jtbl, endereço, n_entradas)."""
import json, re
RODATA = '/home/claude/ffny/decomp/asm/data/cod/2AAE00.rodata.s'
rod = open(RODATA).read()
blocks = {}
for m in re.finditer(r'^nonmatching (jtbl_([0-9A-F]{8}))\n.*?^enddlabel \1\n', rod, re.M | re.S):
    blocks[m.group(1)] = (int(m.group(2), 16), m.group(0))
meta = json.load(open('meta.json'))
out = {}
for n, mt in meta.items():
    t = open(f'fn/{n}.s').read()
    jts = sorted(set(re.findall(r'%lo\((jtbl_[0-9A-F]{8})\)', t)))
    if not jts or mt['handwritten']:
        continue
    body = t + '\n.section .rodata\n'
    info = []
    for j in jts:
        if j not in blocks:
            break
        addr, blk = blocks[j]
        body += blk.replace('nonmatching ', '# nonmatching ') + '\n'
        info.append((j, addr, len(re.findall(r'\.word', blk))))
    else:
        open(f'jt/{n}.s', 'w').write('.section .text\n' + body)
        out[n] = info
json.dump(out, open('jt_meta.json', 'w'))
print(len(out), 'funções com switch;', sum(len(v) for v in out.values()), 'tabelas')
