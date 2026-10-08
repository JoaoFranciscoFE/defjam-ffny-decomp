"""Testa C de uma função contra o original.
check(name, c_code) -> (ok, n_diff, msg)"""
import subprocess, os, re, tempfile, json
ROM = open('/home/claude/ffny/decomp/SLUS_210.04.rom', 'rb').read()
META = json.load(open('/home/claude/work/meta.json'))
CC = '/home/claude/ffny/decomp/tools/compilers/ee-gcc2.95.3-136/bin/ee-gcc.exe'
ENV = dict(os.environ, WINEDEBUG='-all', WINEPREFIX='/root/.wine-ps2')
PRELUDE = open('/home/claude/work/prelude.h').read()

def orig_relocs(name):
    """offset -> conjunto de símbolos citados na instrução original"""
    out = {}
    txt = open(f'/home/claude/work/fn/{name}.s').read()
    base = META[name]['addr']
    for l in txt.splitlines():
        m = re.match(r'\s*/\* [0-9A-F]+ ([0-9A-F]{8}) [0-9A-F]{8} \*/\s+(.*)', l)
        if m:
            out[int(m.group(1), 16) - base] = set(re.findall(r'\b([A-Za-z_][\w.]*)\b', m.group(2)))
    return out

def check(name, code, workdir):
    os.makedirs(workdir, exist_ok=True)
    c = os.path.join(workdir, name + '.c'); o = os.path.join(workdir, name + '.o')
    open(c, 'w').write(PRELUDE + '\n' + code + '\n')
    r = subprocess.run(['wine', CC, '-c', '-O2', '-G0', '-ffunction-sections', c, '-o', o],
                       env=ENV, capture_output=True, text=True)
    if r.returncode != 0 or not os.path.exists(o):
        return False, -1, 'compile: ' + (r.stderr.strip().splitlines() or ['?'])[-1][:150]
    subprocess.run(['python3', '/home/claude/ffny/decomp/tools/fix_sn_obj.py', o], capture_output=True)
    secs = subprocess.run(['mips-linux-gnu-objdump', '-h', o], capture_output=True, text=True).stdout
    sec = f'.text.{name}'
    if sec not in secs.split():
        # nome C++/mangled ou função não emitida
        return False, -1, 'secao nao encontrada'
    data = subprocess.run(['mips-linux-gnu-objcopy', '-O', 'binary', '-j', sec, o, '/dev/stdout'],
                          capture_output=True).stdout
    rel = subprocess.run(['mips-linux-gnu-objdump', '-r', '-j', sec, o], capture_output=True, text=True).stdout
    relocs = {}
    for l in rel.splitlines():
        p = l.split()
        if len(p) == 3 and re.fullmatch(r'[0-9a-f]{8}', p[0]):
            relocs[int(p[0], 16)] = (p[1], p[2].split('+')[0])
    addr, size = META[name]['addr'], META[name]['size']
    orig = ROM[addr - 0x100000: addr - 0x100000 + size]
    # tira padding (nops) do final dos dois
    def strip(b):
        while len(b) >= 4 and b[-4:] == b'\0\0\0\0': b = b[:-4]
        return b
    mine, ref = strip(data), strip(orig)
    if len(mine) != len(ref):
        return False, abs(len(mine) - len(ref)) // 4 + 100, f'tamanho {len(mine)} vs {len(ref)}'
    osyms = orig_relocs(name)
    diff = 0
    for k in range(0, len(ref), 4):
        a = int.from_bytes(mine[k:k+4], 'little'); b = int.from_bytes(ref[k:k+4], 'little')
        if k in relocs:
            typ, sym = relocs[k]
            if typ == 'R_MIPS_26': mask = 0xFC000000
            elif typ in ('R_MIPS_HI16', 'R_MIPS_LO16', 'R_MIPS_GPREL16'): mask = 0xFFFF0000
            else: mask = 0xFFFFFFFF
            a &= mask; b &= mask
            if sym not in osyms.get(k, set()) and not sym.startswith('.'):
                diff += 1; continue
        if a != b: diff += 1
    return diff == 0, diff, 'ok' if diff == 0 else f'{diff} instr diferentes'
