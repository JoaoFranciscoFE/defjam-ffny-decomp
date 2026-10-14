#include "common.h"

s32 func_00321808(s32 arg0) {
    s32 var_a1;

    var_a1 = 0;
    switch (arg0) {
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x24:
    case 0x29:
    case 0x2A:
    case 0x2C:
    case 0x2D:
    case 0x2E:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x38:
        var_a1 = 1;
        break;
    }
    return var_a1;
}
