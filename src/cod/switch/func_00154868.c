#include "common.h"

void func_00150C28(s32);
s32 func_00150E78(s32);                             /* extern */
s32 func_00152688(void *);                          /* extern */
void func_00153F20(void *, M2C_UNK);
void func_00154238(void *);
void func_00154698(void *);
void func_00154708(void *, s32);
void func_001547D8(void *, s32);
void func_001549E8(void *);
void func_00155958(void *);
s32 func_00168E28(s32);                             /* extern */
s32 func_00168E48(s32, s32);                        /* extern */

void func_00154868(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_v0;
    s32 var_s1;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDF0);
    if (temp_a0 != 0) {
        func_00150C28(temp_a0);
    }
    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    switch (temp_v0) {
    case 1:
        func_00154708(arg0, M2C_FIELD(arg0, s32 *, 0x34));
        return;
    case 2:
        if ((M2C_FIELD(arg0, s32 *, 0x1C) == 0) && (func_00168E28(M2C_FIELD(arg0, s32 *, 0x58)) != 0)) {
            func_001547D8(arg0, M2C_FIELD(arg0, s32 *, 0x34));
            return;
        }
    default:
        return;
    case 3:
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
        if (M2C_FIELD(arg0, s32 *, 0x2C) != 0) {
            var_s1 = func_00152688(arg0 + 0xF30);
        } else {
            var_s1 = 0;
            if (func_00152688(arg0 + 0xF30) != 0) {
                var_s1 = func_00168E48(M2C_FIELD(arg0, s32 *, 0x58), M2C_FIELD(arg0, s32 *, 0)) != 0;
            }
        }
        if (var_s1 != 0) {
            func_00154238(arg0);
            M2C_FIELD(arg0, s32 *, 0xF50) = 0;
            return;
        }
        break;
    case 4:
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
        if (func_00152688(arg0 + 0xF40) != 0) {
            func_00154698(arg0);
            return;
        }
        break;
    case 5:
        temp_a0_2 = M2C_FIELD(arg0, s32 *, 0xDF0);
        if ((temp_a0_2 != 0) && (func_00150E78(temp_a0_2) != 0)) {
            M2C_FIELD(arg0, s32 *, 8) = 6;
            return;
        }
        break;
    case 6:
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
        func_00155958(arg0);
        func_00153F20(arg0, 1);
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        func_001549E8(arg0);
        M2C_FIELD(arg0, s32 *, 8) = 0;
        M2C_FIELD(arg0, s32 *, 0xC) = 1;
        break;
    }
}
