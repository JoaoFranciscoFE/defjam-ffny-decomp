import sys; sys.path.insert(0,'/home/claude/work')
from tester import check
name = sys.argv[1]; code = open(sys.argv[2]).read()
print(name, check(name, code, '/tmp/claude-0/try'))
