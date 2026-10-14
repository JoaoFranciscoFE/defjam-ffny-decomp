#include "common.h"

s32 func_0020F618(s32 arg0) {
    s32 var_a1;

    var_a1 = -1;
    switch (arg0) {
    case 4:
        var_a1 = 0x14;
        break;
    case 8:
        var_a1 = 0x13;
        break;
    case 15:
    case 16:
        var_a1 = 2;
        break;
    case 24:
        var_a1 = 1;
        break;
    case 32:
        var_a1 = 0;
        break;
    }
    return var_a1;
}
