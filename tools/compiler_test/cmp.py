import sys, subprocess, re
# compara bytes de cada função compilada com o original, ignorando campos relocáveis (lui/addiu/jal imm)
ORIG = open(sys.argv[2] if len(sys.argv) > 2 else 'SLUS_210.04.rom','rb').read()
obj = sys.argv[1]
syms = subprocess.run(['mips-linux-gnu-nm','-S',obj],capture_output=True,text=True).stdout
text = subprocess.run(['mips-linux-gnu-objcopy','-O','binary','-j','.text',obj,'/dev/stdout'],capture_output=True).stdout
relocs = subprocess.run(['mips-linux-gnu-objdump','-r','-j','.text',obj],capture_output=True,text=True).stdout
roff = {int(l.split()[0],16) for l in relocs.splitlines() if re.match(r'^[0-9a-f]{8} ',l)}
res = {}
for l in syms.splitlines():
    p = l.split()
    if len(p)==4 and p[2] in 'Tt' and p[3].startswith('func_'):
        off, size, name = int(p[0],16), int(p[1],16), p[3]
        name = name.split("__")[0]; addr = int(name[5:],16) - 0x100000
        mine = text[off:off+size]
        # remove nops finais (padding de alinhamento)
        ok = True; diff = 0
        for k in range(0, size, 4):
            a = int.from_bytes(mine[k:k+4],'little'); b = int.from_bytes(ORIG[addr+k:addr+k+4],'little')
            if off+k in roff: a &= 0xFFFF0000 if (a>>26) in (0x0F,0x09) else 0xFC000000; b &= 0xFFFF0000 if (b>>26) in (0x0F,0x09) else 0xFC000000
            if a != b: diff += 1
        res[name] = diff
for n in sorted(res): print(f"{n}: {'OK' if res[n]==0 else str(res[n])+' instr diferentes'}")
