import sys, json, subprocess, os
from multiprocessing import Pool
sys.path.insert(0, '/home/claude/work')
from tester_jt import check_switch, JT
src = open('/home/claude/ffny/decomp/src/cod/000000.c').read()
names = [n for n in JT if f'INCLUDE_ASM("asm/nonmatchings/cod/000000", {n});' in src]
out = 'results_jt.jsonl'
done = {json.loads(l)['name'] for l in open(out)} if os.path.exists(out) else set()
names = [n for n in names if n not in done]

def work(n):
    res = {'name': n, 'ok': False, 'diff': -2, 'msg': 'm2c falhou'}
    for flags in ([], ['--void']):
        code = subprocess.run(['python3', '/home/claude/m2c/m2c.py', '-t', 'mips-gcc-c', '--valid-syntax', *flags,
                               f'/home/claude/work/jt/{n}.s'], capture_output=True, text=True).stdout
        if 'Decompilation failure' in code or not code.strip():
            continue
        ok, diff, msg = check_switch(n, code, f'/tmp/claude-0/bj/{os.getpid()}')
        if res['diff'] < 0 or (diff >= 0 and diff < res['diff']):
            res.update(ok=ok, diff=diff, msg=msg, code=code)
        if ok:
            break
    return res

print(len(names), flush=True)
with Pool(2) as p, open(out, 'a') as f:
    for r in p.imap_unordered(work, names, chunksize=2):
        f.write(json.dumps(r) + '\n'); f.flush()
