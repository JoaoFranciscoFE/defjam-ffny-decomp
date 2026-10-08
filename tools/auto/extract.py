"""Extrai cada função de asm/cod/000000.s (registradores com nome) para work/fn/<nome>.s"""
import re, os, sys, json
src = open('/home/claude/ffny/decomp/asm/cod/000000.s').read()
src = src[src.index('.align'):]
parts = re.split(r'\n(?=\.align \d+\n(?:/\* Handwritten function \*/\n)?nonmatching )', src)
os.makedirs('fn', exist_ok=True)
meta = {}
for p in parts:
    m = re.search(r'^nonmatching ([^,\s]+)(?:, (0x[0-9A-F]+))?', p, re.M)
    a = re.search(r'/\* [0-9A-F]+ ([0-9A-F]{8}) [0-9A-F]{8} \*/', p)
    name = m.group(1)
    open(f'fn/{name}.s', 'w').write(p)
    meta[name] = {'addr': int(a.group(1), 16), 'size': int(m.group(2), 16) if m.group(2) else 0,
                  'handwritten': 'Handwritten' in p}
json.dump(meta, open('meta.json', 'w'))
print(len(meta))
