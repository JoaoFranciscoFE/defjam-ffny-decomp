# Def Jam: Fight for NY — decompilação (PS2, SLUS-21004)

Projeto inicial de decompilação do executável `SLUS_210.04` (versão americana).

**Estado atual:** o ELF foi dividido em assembly com o [splat](https://github.com/ethteck/splat) e o build
remonta um binário **byte a byte idêntico** ao original. A partir daqui é converter função por função para C/C++.

## Requisitos

- Linux (ou WSL no Windows)
- `binutils-mips-linux-gnu` (`sudo apt install binutils-mips-linux-gnu`)
- Python 3 com `splat64` e `spimdisasm` (`pip install splat64 spimdisasm`)
- Seu próprio dump do jogo: copie o `SLUS_210.04` do disco para a raiz deste projeto

SHA-1 esperado do ELF: `6d2f8d92937ebb0220b650aeaa4d057d78f674ad`

## Como usar

```sh
make setup   # gera o SLUS_210.04.rom e divide o ELF em asm/
make         # monta, linka e confere se bate com o original
```

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

O splat não sabe que no ELF original o `.sbss` começa fixo em `0x3FD500` e o `.bss` em `0x3FD800`.
O `Makefile` corrige isso no linker script gerado (`build/SLUS_210.04.ld`). Também foram desligados os
alinhamentos de fim de seção (`ld_align_section_vram_end`) para o tamanho bater.

## Próximos passos

1. ~~Descobrir o compilador~~ ✅ SN ProDG ee-gcc 2.95.x, `-O2 -G0`. No [decomp.me](https://decomp.me) use o
   preset **ee-gcc2.95.3-136** com `-O2 -G0`.
2. **Trocar o segmento `asm` por `c`** no `SLUS_210.04.yaml`. Assim o splat gera um arquivo `.s` por função
   em `asm/nonmatchings/` e arquivos `.c` com `INCLUDE_ASM`. Isso permite substituir uma função de cada vez.
3. **Identificar bibliotecas conhecidas:** SDK da Sony (`sce*`), libc e EAGL. Não é código do jogo, então
   vale identificar e separar logo. As funções `sce*` têm nomes públicos e muitas já foram decompiladas
   por outros projetos de PS2.
4. **Abrir no Ghidra** (com a extensão de Emotion Engine) para entender a lógica e dar nome às coisas.
5. **Ferramentas de assets em repositório separado:** extrator de `.viv` (formato BIG da EA).

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
