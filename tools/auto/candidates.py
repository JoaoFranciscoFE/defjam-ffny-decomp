import json, re
meta = json.load(open('meta.json'))
src = open('/home/claude/ffny/decomp/src/cod/000000.c').read()
still = set(re.findall(r'INCLUDE_ASM\("[^"]+",\s*(\w+)\)', src))
out = []
for n, m in meta.items():
    if n not in still or m['handwritten'] or not (0xC <= m['size'] <= 0x100):
        continue
    t = open(f'fn/{n}.s').read()
    if re.search(r'\bjr\s+\$(?!ra)', t) or 'gp_rel' in t or '.word' in t:
        continue
    out.append((m['addr'], n))
out.sort()
open('cands.txt', 'w').write('\n'.join(n for _, n in out))
print(len(out))
