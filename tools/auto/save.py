import json, sys
sys.path.insert(0, '/home/claude/work')
from tester import check
n, f = sys.argv[1], sys.argv[2]
code = open(f).read()
ok, d, m = check(n, code, '/tmp/claude-0/save')
assert ok, (n, m)
with open('/home/claude/work/manual.jsonl', 'a') as o:
    o.write(json.dumps({'name': n, 'code': code}) + '\n')
print('salvo', n)
