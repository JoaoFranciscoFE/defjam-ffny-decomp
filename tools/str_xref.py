"""Mapeia strings do .rodata/.data para as funções que as referenciam.
Uso: python3 str_xref.py <dir_do_projeto> > xref.tsv"""
import re, sys, os
root = sys.argv[1]
labels = {}
for f in ["asm/data/cod/2AAE00.rodata.s", "asm/data/cod/26EB00.data.s", "asm/data/cod/2FD380.sdata.s"]:
    cur = None
    for line in open(os.path.join(root, f), errors="replace"):
        m = re.match(r'^dlabel (\S+)', line)
        if m: cur = m.group(1); continue
        m = re.search(r'\.asciz "(.*)"', line)
        if m and cur and cur not in labels:
            labels[cur] = m.group(1)
func = None
seen = set()
for line in open(os.path.join(root, "asm/cod/000000.s"), errors="replace"):
    m = re.match(r'^glabel (\S+)', line)
    if m: func = m.group(1); continue
    for sym in re.findall(r'%lo\((D_[0-9A-F]+)\)', line):
        if sym in labels and (func, sym) not in seen:
            seen.add((func, sym))
            print(f"{func}\t{sym}\t{labels[sym][:100]}")
