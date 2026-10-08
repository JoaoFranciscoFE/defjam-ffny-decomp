# Decompilação automática (m2c + teste)

Scripts usados para converter em lote as funções simples:

1. `extract.py` — separa cada função de `asm/cod/000000.s` em `fn/<nome>.s` e grava `meta.json`.
2. `candidates.py` — escolhe as candidatas (até 0x100 bytes, sem jump table, sem `%gp_rel`).
3. `batch.py cands.txt results.jsonl` — roda o [m2c](https://github.com/matt-kempster/m2c) em cada uma
   (`--valid-syntax`, e de novo com `--void` se não bater), compila com o SN e compara com o original
   (`tester.py`). Só marca `ok` o que sair idêntico.
4. `integrate.py results.jsonl` — troca os `INCLUDE_ASM` das funções `ok` pelo código C. As declarações
   externas de cada trecho viram apelidos locais (`__asm__("simbolo")`) para não conflitar entre si.

Os caminhos dentro dos scripts apontam para o ambiente onde foram rodados (`/home/claude/...`);
ajuste antes de usar em outra máquina.

Resultado da primeira rodada (5.800 candidatas): 1.477 idênticas. Das que não bateram, ~540 ficaram a
1–3 instruções de diferença — boas para ajustar à mão.
