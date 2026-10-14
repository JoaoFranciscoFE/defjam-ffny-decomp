"""Aplica a regra 'externa sem retorno usado -> void' (sozinha e com as outras) nas que não bateram."""
import sys, json, os, re
from multiprocessing import Pool
sys.path.insert(0, '/home/claude/work')
from rewrite import r_voidext, r_casts, r_compound, r_this
from tester import check
from tester_jt import check_switch, JT

src = open('/home/claude/ffny/decomp/src/cod/000000.c').read()
pending = lambda n: f'INCLUDE_ASM("asm/nonmatchings/cod/000000", {n});' in src
todo = {}
for f in ['results.jsonl', 'results_big.jsonl', 'results_jt.jsonl']:
    for l in open(f):
        x = json.loads(l)
        if not x.get('ok') and x.get('code') and x.get('diff', -1) >= 0 and pending(x['name']):
            todo[x['name']] = x['code']
out = 'results_void.jsonl'
done = {json.loads(l)['name'] for l in open(out)} if os.path.exists(out) else set()
items = [(n, c) for n, c in todo.items() if n not in done]

def work(item):
    n, code = item
    chk = check_switch if n in JT else check
    base = r_voidext(code)
    if base == code:
        return {'name': n, 'ok': False}
    for c in [base, r_casts(base), r_compound(r_casts(base)), r_this(base)]:
        ok, d, m = chk(n, c, f'/tmp/claude-0/vp/{os.getpid()}')
        if ok:
            return {'name': n, 'ok': True, 'code': c, 'switch': n in JT}
    return {'name': n, 'ok': False}

print(len(items), flush=True)
with Pool(2) as p, open(out, 'a') as f:
    for r in p.imap_unordered(work, items, chunksize=4):
        f.write(json.dumps(r) + '\n'); f.flush()
