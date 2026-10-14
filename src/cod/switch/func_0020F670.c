#include "common.h"

s32 func_0020F670(u32 arg0) {
    s32 var_a1;

    var_a1 = -1;
    switch (arg0) {
    case 20:
    case 36:
    case 44:
        var_a1 = 4;
        break;
    case 19:
    case 27:
        var_a1 = 8;
        break;
    case 2:
    case 50:
        var_a1 = 0x10;
        break;
    case 0:
    case 1:
    case 49:
        var_a1 = 0x20;
        break;
    }
    return var_a1;
}
