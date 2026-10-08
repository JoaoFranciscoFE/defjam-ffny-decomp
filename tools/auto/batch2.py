"""Segunda rodada: tenta outras opções do m2c nas funções que não bateram."""
import sys, json, subprocess, os
from multiprocessing import Pool
sys.path.insert(0, '/home/claude/work')
from tester import check
prev = [json.loads(l) for l in open('results.jsonl')]
names = [x['name'] for x in prev if not x['ok'] and x['diff'] >= 0]
out = 'results2.jsonl'
done = {json.loads(l)['name'] for l in open(out)} if os.path.exists(out) else set()
names = [n for n in names if n not in done]
VARIANTS = [['--descending-regs'], ['--reg-vars', 'saved'], ['--no-andor'],
            ['--descending-regs', '--void'], ['--reg-vars', 'saved', '--void']]

def work(n):
    res = {'name': n, 'ok': False}
    for flags in VARIANTS:
        r = subprocess.run(['python3', '/home/claude/m2c/m2c.py', '-t', 'mips-gcc-c', '--valid-syntax', *flags,
                            f'/home/claude/work/fn/{n}.s'], capture_output=True, text=True)
        code = r.stdout
        if 'Decompilation failure' in code or not code.strip():
            continue
        ok, diff, msg = check(n, code, f'/tmp/claude-0/b2/{os.getpid()}')
        if ok:
            res.update(ok=True, diff=0, msg='ok', code=code, flags=flags)
            break
    return res

print(len(names), flush=True)
with Pool(2) as p, open(out, 'a') as f:
    for r in p.imap_unordered(work, names, chunksize=4):
        f.write(json.dumps(r) + '\n'); f.flush()
