"""Teste para funções com switch: confere o código (tester.check) e a jump table gerada."""
import subprocess, json, os, re, struct
from tester import check, META, ROM

JT = json.load(open('/home/claude/work/jt_meta.json'))

def obj_rodata(o):
    data = subprocess.run(['mips-linux-gnu-objcopy', '-O', 'binary', '-j', '.rodata', o, '/dev/stdout'],
                          capture_output=True).stdout
    rel = subprocess.run(['mips-linux-gnu-objdump', '-r', '-j', '.rodata', o], capture_output=True, text=True).stdout
    relocs = {}
    for l in rel.splitlines():
        p = l.split()
        if len(p) == 3 and re.fullmatch(r'[0-9a-f]{8}', p[0]):
            relocs[int(p[0], 16)] = (p[1], p[2])
    return data, relocs

def check_switch(name, code, workdir):
    ok, diff, msg = check(name, code, workdir)
    if not ok:
        return ok, diff, msg
    o = os.path.join(workdir, name + '.o')
    data, relocs = obj_rodata(o)
    faddr = META[name]['addr']
    tables = JT[name]
    # tabelas originais em ordem de endereço, precisam ser contíguas
    tables = sorted(tables, key=lambda t: t[1])
    start = tables[0][1]
    total = sum(t[2] for t in tables) * 4
    if tables[-1][1] + tables[-1][2] * 4 - start != total:
        return False, 50, 'tabelas originais não contíguas'
    # a última tabela pode ter palavras zero de alinhamento no fim (o build preenche com zero)
    if len(data) > total or (total - len(data)) > 12 or \
            any(ROM[start - 0x100000 + k] for k in range(len(data), total)):
        return False, 50, f'rodata {len(data)} vs {total}'
    for k in range(0, len(data), 4):
        if k not in relocs or relocs[k][0] != 'R_MIPS_32' or not relocs[k][1].startswith(f'.text.{name}'):
            return False, 50, f'tabela: entrada {k//4} sem relocação para a função'
        mine = struct.unpack_from('<I', data, k)[0]
        orig = struct.unpack_from('<I', ROM, start - 0x100000 + k)[0] - faddr
        if mine != orig:
            return False, 50, f'tabela: entrada {k//4} aponta para +{mine:#x}, original +{orig:#x}'
    return True, 0, 'ok'
