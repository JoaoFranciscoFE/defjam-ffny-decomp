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

## Rodadas seguintes

- `batch2.py` — tenta outras opções do m2c (`--descending-regs`, `--reg-vars saved`, `--no-andor`).
  Rendeu pouco (1 em 180) e foi interrompido.
- `rewrite.py` — aplica regras de reescrita ao rascunho do m2c (tira casts, troca `x = x | k` por `x |= k`,
  inverte a ordem base+índice, adiciona o `this` que o m2c esquece, troca `return x >= 0`). Rendeu 61.
- `show.py nome arquivo.c` — mostra o original e o compilado lado a lado, para ajustar à mão.
- `save.py nome arquivo.c` — confere e grava a versão manual em `manual.jsonl`.

Padrões comuns nos ajustes manuais:
- **`this` repassado:** o m2c às vezes some com o `arg0` quando ele só é repassado para outra função
  (métodos C++). Basta adicionar o parâmetro e passar adiante.
- **Arrays:** `*((i * 4) + &D_X)` do m2c escala o índice duas vezes; escreva `D_X[i]` com `D_X` declarado como array.
- **Struct com array:** `M2C_FIELD((p + i * N), T *, off)` vira `p->arr[i].campo` com uma struct de tamanho N.
- **Loop com `char`:** sequências `sll 24 / sra 24` dentro de loops indicam contador `s8`.
