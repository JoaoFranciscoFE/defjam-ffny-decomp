# Def Jam: Fight for NY — decompilação (PS2, SLUS-21004)

Projeto inicial de decompilação do executável `SLUS_210.04` (versão americana).

**Estado atual:** o build compila C com o compilador original (SN ProDG) e gera um binário **byte a byte
idêntico** ao original. **1.730 de 9.457 funções já estão em C** (27 à mão, 164 vazias e 1.539 geradas pelo m2c
e conferidas automaticamente — ver `tools/auto/`). O resto ainda está em assembly.

## Requisitos

- Linux (ou WSL no Windows)
- `binutils-mips-linux-gnu` e `wine` (`sudo apt install binutils-mips-linux-gnu wine`)
- Python 3 com `splat64` e `spimdisasm` (`pip install splat64 spimdisasm`)
- Seu próprio dump do jogo: copie o `SLUS_210.04` do disco para a raiz deste projeto

O compilador (ee-gcc 2.95.3 do SN, versão Windows) é baixado automaticamente do repositório do
decomp.me pelo `make setup` e roda via Wine.

SHA-1 esperado do ELF: `6d2f8d92937ebb0220b650aeaa4d057d78f674ad`

## Como usar

```sh
make setup   # gera o SLUS_210.04.rom, divide o ELF em asm/ e baixa o compilador
make         # compila, linka e confere se bate com o original
```

### Como decompilar uma função

1. Ache a função em `src/cod/000000.c`, por exemplo `INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00216F48);`.
2. O assembly dela está em `asm/nonmatchings/cod/000000/func_00216F48.s`. Ajuda testar no
   [decomp.me](https://decomp.me) (preset `ee-gcc2.95.3-136`, flags `-O2 -G0`).
3. Troque a linha do `INCLUDE_ASM` pelo código C.
4. Rode `make`. Se aparecer `OK: binário idêntico ao original`, a função bateu.

Exemplos prontos: procure `func_00199D48`, `func_0022FF00`, `func_00216F48`, `func_001C7018` e
`func_002FF2B0` em `src/cod/000000.c`.

## O que já se sabe sobre o executável

| Item | Valor |
|---|---|
| Entry point | `0x00100008` (`_start`) |
| `main` | `0x001009F0` |
| `$gp` | `0x00405370` |
| Seções | `.text` 2,4 MB · `.data` · `.rodata` · `.gcc_except_table` · `.sdata` · `.sbss` · `.bss` |
| Funções detectadas | 9.465 (mediana 0x70 bytes; 27 com mais de 4 KB) |
| Símbolos de depuração | **Não** — o ELF está *stripped* |
| Linguagem | C++ com exceções (há `.gcc_except_table`) |
| Compilador | **ee-gcc 2.95.x do SN ProDG, `-O2 -G0`** — confirmado com 5 funções idênticas (ver `tools/compiler_test/`). A versão exata (2.95.2-273a até 2.95.3-136) ainda não foi diferenciada; use `ee-gcc2.95.3-136` |
| SDK da Sony | Bibliotecas 2.8.0 (`PsIIlibgraph2800`, `libpad 2800`, `libmc 2810`) |
| Engine gráfica | EAGL 4.08.07 (EA Graphics Library) — caminho `D:/eagl/4.08.07-DefJam/` |
| Áudio | EA SND 8.04.07 (`snddrv.irx`, arquivos `.abk/.ast`) |
| Arquivos de dados | Pacotes `.viv` (formato BIG da EA), vídeos `.mpc` |
| Código do jogo | Fonte da AKI (ex.: `com_think_dir.cpp`, `game_core_com_param.cpp`) |

Funções da inicialização (`_start`): `_InitSys`, `FlushCache`, `_init`, `_fini`, `atexit`, `main` e `exit` já
estão nomeadas em `symbol_addrs.txt`.

Outras 44 funções foram nomeadas automaticamente a partir de mensagens de log do tipo `Classe::Metodo`
(ex.: `CArena_Init`, `CRenderSubsystem_Init`, `CStageEnvironment_InitSubway`). Elas estão marcadas como
sugestões: confira antes de confiar 100%.

## Ferramentas incluídas

- `tools/str_xref.py`: lista quais funções usam quais strings. Ajuda muito a dar nome às funções.
  ```sh
  python3 tools/str_xref.py . > xref.tsv
  ```

## Detalhes do build

- **C:** compilado com o `ee-gcc.exe` do SN (`-O2 -G0 -ffunction-sections`). Cada função vai para a sua própria
  seção `.text.<nome>`. O `tools/fix_sn_obj.py` corrige um campo do `.o` que o assembler antigo grava errado
  e que o `ld` moderno rejeita.
- **Funções ainda em assembly:** o `tools/gen_link.py` copia cada uma de `asm/cod/000000.s` para
  `build/nonmatchings.s`, também numa seção própria. Elas são montadas com o binutils moderno.
  Não usamos o `INCLUDE_ASM` dentro do C porque o assembler do SN aplicaria a correção de "short loop"
  do Emotion Engine de novo em cima do código, que já tem esses `nop`.
- **Linker script:** gerado a partir do do splat, com todas as funções na ordem original e cada uma presa no
  seu endereço original. Se uma função em C ficar maior que a original, o `ld` reclama
  ("cannot move location counter backwards").
- O `.sbss` começa fixo em `0x3FD500` e o `.bss` em `0x3FD800`, como no ELF original.

## Próximos passos

1. ~~Descobrir o compilador~~ ✅ SN ProDG ee-gcc 2.95.x, `-O2 -G0`. No [decomp.me](https://decomp.me) use o
   preset **ee-gcc2.95.3-136** com `-O2 -G0`.
2. ~~Build com C~~ ✅ Feito. As funções podem ser trocadas por C uma de cada vez.
3. **Identificar bibliotecas conhecidas:** SDK da Sony (`sce*`), libc e EAGL. Não é código do jogo, então
   vale identificar e separar logo. As funções `sce*` têm nomes públicos e muitas já foram decompiladas
   por outros projetos de PS2.
4. **Abrir no Ghidra** (com a extensão de Emotion Engine) para entender a lógica e dar nome às coisas.
5. **Ferramentas de assets em repositório separado:** extrator de `.viv` (formato BIG da EA).
6. **Dados em C:** funções que usam constantes de `.rodata` (floats, strings, jump tables) ainda precisam de
   um jeito de colocar esses dados no lugar certo. Por enquanto, prefira funções que não usam `.rodata`.

## Sobre rodar nativo no PC

A decompilação "matching" é o primeiro passo. Um port nativo vem depois e exige reescrever a parte específica
do PS2: renderização (GS/VU1/EAGL), áudio (IOP/SND), leitura de disco e controles. Isso só fica viável quando
uma boa parte do código estiver em C/C++.

Outro caminho é a **recompilação estática**: traduzir o assembly MIPS direto para C, sem entender cada função.
Existe um projeto experimental chamado PS2Recomp nessa linha. Ele dá resultado mais rápido, mas o código
gerado é ilegível.

## Avisos legais

Não coloque no repositório o ELF, o `.rom`, a pasta `asm/` nem nenhum asset do jogo. O `.gitignore` já exclui
esses arquivos. Cada pessoa usa o dump do próprio disco.
