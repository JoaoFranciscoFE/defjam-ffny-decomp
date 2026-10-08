import sys, json, subprocess, os
from multiprocessing import Pool
sys.path.insert(0, '/home/claude/work')
from tester import check
names = open(sys.argv[1]).read().split()
out = sys.argv[2]
done = set()
if os.path.exists(out):
    done = {json.loads(l)['name'] for l in open(out)}
names = [n for n in names if n not in done]

def work(n):
    res = {'name': n}
    for flags in ([], ['--void']):
        r = subprocess.run(['python3', '/home/claude/m2c/m2c.py', '-t', 'mips-gcc-c', '--valid-syntax', *flags,
                            f'/home/claude/work/fn/{n}.s'], capture_output=True, text=True)
        code = r.stdout
        if 'Decompilation failure' in code or not code.strip():
            res.update(ok=False, diff=-2, msg='m2c falhou'); continue
        ok, diff, msg = check(n, code, f'/tmp/claude-0/b/{os.getpid()}')
        if 'best' not in res or (diff >= 0 and (res['diff'] < 0 or diff < res['diff'])):
            res.update(ok=ok, diff=diff, msg=msg, code=code, flags=flags, best=1)
        if ok: break
    return res

with Pool(3) as p, open(out, 'a') as f:
    for i, r in enumerate(p.imap_unordered(work, names, chunksize=4)):
        f.write(json.dumps(r) + '\n'); f.flush()
