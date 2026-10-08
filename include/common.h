#ifndef COMMON_H
#define COMMON_H

/*
 * As funções ainda não decompiladas ficam em asm/nonmatchings/ e são montadas à parte
 * (tools/gen_link.py). No C, INCLUDE_ASM só marca a posição da função e não gera código.
 */
#define INCLUDE_ASM(FOLDER, NAME) extern int __include_asm_placeholder
#define INCLUDE_RODATA(FOLDER, NAME) extern int __include_rodata_placeholder

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef float f32;

#ifndef NULL
#define NULL 0
#endif

#endif /* COMMON_H */
