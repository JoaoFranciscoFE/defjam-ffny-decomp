"""Terceira rodada: aplica regras de reescrita simples ao rascunho do m2c e testa as combinações."""
import sys, json, re, os, itertools
from multiprocessing import Pool
sys.path.insert(0, '/home/claude/work')
from tester import check

def r_casts(c):
    return re.sub(r'\((?:s32|u32)\) ', '', c)

def r_compound(c):
    # X = (X op E);  ->  X op= E;
    def f(m):
        lhs, op, e = m.group(1), m.group(3), m.group(4)
        return f'{lhs} {op}= {e};'
    pat = r'(M2C_FIELD\([^;=]*?\))\s*=\s*\(?(?:\((?:s32|u32|s16|u16|s8|u8)\) )?\(?\1 ([|&^+\-]) ([^;]+?)\)?\)?;'
    c2 = re.sub(r'(M2C_FIELD\([^;=]*?\)) = \(((?:s32|u32|s16|u16|s8|u8)\)) \((M2C_FIELD\([^;=]*?\)) ([|&^+\-]) ([^;]+)\);',
                lambda m: f'{m.group(1)} {m.group(4)}= {m.group(5)};' if m.group(1) == m.group(3) else m.group(0), c)
    c2 = re.sub(r'(M2C_FIELD\([^;=]*?\)) = \((M2C_FIELD\([^;=]*?\)) ([|&^+\-]) ([^;]+)\);',
                lambda m: f'{m.group(1)} {m.group(3)}= {m.group(4)};' if m.group(1) == m.group(2) else m.group(0), c2)
    return c2

def r_swapidx(c):
    # M2C_FIELD((B + (I * K)), ...)  ->  M2C_FIELD(((I * K) + B), ...)
    return re.sub(r'M2C_FIELD\(\((\w+) \+ (\([^()]+\))\),', r'M2C_FIELD((\2 + \1),', c)

def r_this(c):
    return re.sub(r'^(\w[\w\s\*]*\b\w+\()(?!void \*arg0)((?:[\w\s\*]+ )?arg1\b)', r'\1void *arg0, \2', c, count=1, flags=re.M)

def r_ge(c):
    return re.sub(r'return (.+?) >= 0;', r'if (\1 < 0) {\n        return 0;\n    }\n    return 1;', c)

RULES = [r_casts, r_compound, r_swapidx, r_this, r_ge]

def variants(code):
    seen = {code}
    for k in range(1, len(RULES) + 1):
        for combo in itertools.combinations(RULES, k):
            c = code
            for r in combo:
                c = r(c)
            if c not in seen:
                seen.add(c)
                yield c

def work(x):
    n = x['name']
    for c in itertools.islice(variants(x['code']), 12):
        ok, d, m = check(n, c, f'/tmp/claude-0/rw/{os.getpid()}')
        if ok:
            return {'name': n, 'ok': True, 'code': c}
    return {'name': n, 'ok': False}

if __name__ == '__main__':
    prev = [json.loads(l) for l in open('results.jsonl')]
    manual = {json.loads(l)['name'] for l in open('manual.jsonl')}
    todo = [x for x in prev if not x['ok'] and 'code' in x and x['name'] not in manual
            and (1 <= x['diff'] <= 10 or (x['diff'] >= 100 and x['diff'] <= 103))]
    out = 'results3.jsonl'
    done = {json.loads(l)['name'] for l in open(out)} if os.path.exists(out) else set()
    todo = [x for x in todo if x['name'] not in done]
    print(len(todo), flush=True)
    with Pool(2) as p, open(out, 'a') as f:
        for r in p.imap_unordered(work, todo, chunksize=2):
            f.write(json.dumps(r) + '\n'); f.flush()
