"""Mostra o original e o compilado lado a lado. Uso: show.py nome arquivo.c"""
import sys, subprocess, re
sys.path.insert(0, '/home/claude/work')
from tester import check

n, f = sys.argv[1], sys.argv[2]
print(check(n, open(f).read(), '/tmp/claude-0/show'))
orig = [re.sub(r'/\* \S+ \S+ \S+ \*/\s+', '', l).strip()
        for l in open(f'/home/claude/work/fn/{n}.s').read().splitlines() if re.match(r'\s*/\*', l)]
d = subprocess.run(['mips-linux-gnu-objdump', '-d', '-r', '--no-show-raw-insn', '-m', 'mips:5900',
                    '-j', f'.text.{n}', f'/tmp/claude-0/show/{n}.o'], capture_output=True, text=True).stdout
mine = []
for l in d.splitlines():
    if 'R_MIPS' in l and mine:
        mine[-1] += '  <' + l.split()[-1] + '>'
    elif re.match(r'\s+[0-9a-f]+:\s', l):
        mine.append(l.split(':', 1)[1].strip())
import signal; signal.signal(signal.SIGPIPE, signal.SIG_DFL)
for i in range(max(len(orig), len(mine))):
    a = orig[i] if i < len(orig) else ''
    b = mine[i] if i < len(mine) else ''
    print(f'{a:<48} | {b}')
