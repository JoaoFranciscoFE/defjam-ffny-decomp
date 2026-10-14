"""Integra funções com switch: cria src/cod/switch/<nome>.c e tira o INCLUDE_ASM do 000000.c.
Uso: add_switch.py results.jsonl [mais.jsonl ...]"""
import json, sys, re
SRC = '/home/claude/ffny/decomp/src/cod/000000.c'
DIR = '/home/claude/ffny/decomp/src/cod/switch'
src = open(SRC).read()
n = 0
for path in sys.argv[1:]:
    for l in open(path):
        r = json.loads(l)
        if not r.get('ok', True) or 'code' not in r:
            continue
        name = r['name']
        line = f'INCLUDE_ASM("asm/nonmatchings/cod/000000", {name});'
        if line not in src:
            continue
        open(f'{DIR}/{name}.c', 'w').write('#include "common.h"\n\n' + r['code'].strip() + '\n')
        src = src.replace(line, f'/* {name}: tem switch, está em src/cod/switch/{name}.c */')
        n += 1
open(SRC, 'w').write(src)
print(n, 'funções com switch integradas')
