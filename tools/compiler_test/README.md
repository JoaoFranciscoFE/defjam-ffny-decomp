# Teste de compilador

`funcs.c` tem 5 funções do jogo reescritas em C. Todas geram assembly **idêntico** ao original com:

    ee-gcc 2.95.x (SN ProDG, versões Windows do decomp.me) -O2 -G0

Resultado do teste (instruções diferentes do original; 0 = idêntico):

| Compilador | 00199D48 | 001C7018 | 00216F48 | 0022FF00 | 002FF2B0 |
|---|---|---|---|---|---|
| ee-gcc2.95.2-273a / 2.95.2-274 / 2.95.3-107 / -114 / -136 (-O2) | 0 | 0 | 0 | 0 | 0 |
| ee-gcc2.9-991111 (-O2) | 3 | 2 | 0 | 16 | 0 |
| ee-gcc2.96 (-O2) | 11 | 6 | 0 | 17 | 0 |
| ee-gcc2.95.3-136 -O1 | 2 | 15 | 10 | 16 | 0 |
| ee-gcc2.95.3-136 -Os | 0 | 0 | 0 | 13 | 0 |

Como reproduzir (compiladores em https://github.com/decompme/compilers, os `.exe` rodam com Wine):

    wine ee-gcc2.95.3-136/bin/ee-gcc.exe -c -O2 -G0 funcs.c -o funcs.o
    python3 cmp.py funcs.o ../../SLUS_210.04.rom

Importante: use o `ee-gcc.exe` completo (com o `as.exe` que vem junto). O assembler do SN insere
os `nop` de correção do "short loop bug" do Emotion Engine, que aparecem no binário original.
