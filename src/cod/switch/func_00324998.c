#include "common.h"

s32 func_00324998(s32 arg0) {
    s32 var_a1;

    var_a1 = 0;
    switch (arg0) {
    case 15:
    case 16:
        var_a1 = 0x20;
        break;
    case 18:
    case 24:
        var_a1 = 0;
        break;
    case 32:
        var_a1 = 0x21;
        break;
    }
    return var_a1;
}
