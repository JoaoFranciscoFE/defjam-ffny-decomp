"""Corrige objetos gerados pelo assembler antigo do SN para o ld moderno aceitar.

O as.exe 2.9x grava o campo sh_info do .symtab com o número errado de símbolos locais
("local symbol at index N (>= sh_info of N)"). Aqui recalculamos esse valor.
Uso: python3 tools/fix_sn_obj.py arquivo.o
"""
import struct, sys
p = sys.argv[1]
d = bytearray(open(p, 'rb').read())
e_shoff, = struct.unpack_from('<I', d, 0x20)
e_shentsize, e_shnum = struct.unpack_from('<HH', d, 0x2E)
for i in range(e_shnum):
    off = e_shoff + i * e_shentsize
    sh_type, = struct.unpack_from('<I', d, off + 4)
    if sh_type != 2:  # SHT_SYMTAB
        continue
    sym_off, sym_size = struct.unpack_from('<II', d, off + 16)
    nsyms = sym_size // 16
    binds = [d[sym_off + k * 16 + 12] >> 4 for k in range(nsyms)]
    nlocal = 0
    while nlocal < nsyms and binds[nlocal] == 0:
        nlocal += 1
    if any(b == 0 for b in binds[nlocal:]):
        sys.exit(f"{p}: símbolos locais fora de ordem, precisa reordenar (não suportado ainda)")
    struct.pack_into('<I', d, off + 28, nlocal)
open(p, 'wb').write(d)
