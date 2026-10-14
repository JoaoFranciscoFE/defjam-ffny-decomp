#include "common.h"

s32 func_002F8C40(u32 arg0, s32 arg1) {
    s32 var_a1;

    var_a1 = arg1;
    switch (arg0) {
    case 0:
    case 10:
    case 21:
        var_a1 = 0x206;
        break;
    case 5:
    case 15:
    case 22:
        var_a1 = 0x20B;
        break;
    case 1:
    case 11:
        var_a1 = 0x208;
        break;
    case 6:
    case 16:
        var_a1 = 0x20D;
        break;
    case 2:
    case 12:
        var_a1 = 0x20A;
        break;
    case 7:
    case 17:
        var_a1 = 0x20F;
        break;
    case 3:
    case 13:
        var_a1 = 0x207;
        break;
    case 8:
    case 18:
        var_a1 = 0x20C;
        break;
    case 4:
    case 14:
        var_a1 = 0x209;
        break;
    case 9:
    case 19:
        var_a1 = 0x20E;
        break;
    }
    return var_a1;
}
