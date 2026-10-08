"""Coloca as funções aceitas no src/cod/000000.c, no lugar do INCLUDE_ASM correspondente.
Cada declaração externa do rascunho vira um apelido local via __asm__("simbolo") para não
conflitar com declarações de outros trechos."""
import json, re, sys
SRC = '/home/claude/ffny/decomp/src/cod/000000.c'
results = [json.loads(l) for l in open(sys.argv[1])]
accepted = {r['name']: r['code'] for r in results if r['ok']}

def transform(name, code):
    code = code.strip()
    lines = code.split('\n')
    decl_names = []
    out = []
    for l in lines:
        m = re.match(r'^(.*?\b)((?:func|D|jtbl|sym)_\w+|\w+)(\s*\([^;]*\))?\s*;\s*(/\* extern \*/)?\s*$', l)
        is_decl = (l.startswith('extern ') or l.rstrip().endswith('/* extern */')) and not l.startswith(' ')
        if is_decl:
            mm = re.search(r'\b([A-Za-z_]\w*)\s*(\(|\[|;)', l)
            # nome declarado = último identificador antes de ( [ ou ;
            TYPES = {'extern','static','const','volatile','struct','union','enum','unsigned','signed',
                     'void','char','short','int','long','float','double','s8','u8','s16','u16','s32','u32',
                     's64','u64','f32','f64','M2C_UNK','M2C_UNK8','M2C_UNK16','M2C_UNK32','M2C_UNK64'}
            ids = [i for i in re.findall(r'\b([A-Za-z_]\w*)\b', l.split('/*')[0]) if i not in TYPES]
            dn = ids[0] if ids else None
            if dn and dn != name:
                decl_names.append(dn)
        out.append(l)
    code = '\n'.join(out)
    for dn in decl_names:
        code = re.sub(rf'\b{re.escape(dn)}\b', f'{dn}__{name}', code)
    # adiciona __asm__("nome") nas declarações
    new = []
    for l in code.split('\n'):
        for dn in decl_names:
            alias = f'{dn}__{name}'
            if (l.startswith('extern ') or l.rstrip().endswith('/* extern */')) and not l.startswith(' ') and re.search(rf'\b{alias}\b', l):
                l = re.sub(r';(\s*/\* extern \*/)?\s*$', f' __asm__("{dn}");', l)
                l = l if l.startswith('extern') else 'extern ' + l
        new.append(l)
    return '\n'.join(new)

src = open(SRC).read()
n = 0
for name, code in accepted.items():
    line = f'INCLUDE_ASM("asm/nonmatchings/cod/000000", {name});'
    if line not in src:
        continue
    src = src.replace(line, transform(name, code))
    n += 1
open(SRC, 'w').write(src)
print(n, 'funções integradas')
