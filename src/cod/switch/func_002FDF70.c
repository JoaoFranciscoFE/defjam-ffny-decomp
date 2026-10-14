#include "common.h"

extern u8 D_004BBD2E;

s32 func_002FDF70(void **arg0) {
    s32 var_a1;
    u32 temp_a0;

    temp_a0 = M2C_FIELD(*arg0, u32 *, 0x30);
    switch (temp_a0) {
    case 0x0:
    case 0x1:
    case 0x6:
    case 0x7:
    case 0x8:
    case 0x9:
    case 0xA:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x13:
    case 0x19:
    case 0x1C:
    case 0x1D:
    case 0x33:
    case 0x59:
    case 0x5E:
    case 0x64:
    case 0x69:
    case 0x6A:
    case 0x6B:
        var_a1 = 0xA0;
        break;
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x48:
    case 0x49:
    case 0x4A:
    case 0x4B:
    case 0x4C:
    case 0x4D:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x5A:
    case 0x5B:
    case 0x6C:
    case 0x6D:
    case 0x6E:
    case 0x6F:
    case 0x70:
        var_a1 = 0xA1;
        break;
    case 0x1E:
        var_a1 = 0xA2;
        break;
    case 0x2:
    case 0x3:
    case 0x4E:
        var_a1 = 0xA3;
        break;
    case 0x55:
        var_a1 = 0xA4;
        break;
    case 0x15:
        var_a1 = 0xA5;
        break;
    case 0x22:
    case 0x24:
    case 0x26:
    case 0x28:
    case 0x2A:
    case 0x2D:
    case 0x3A:
    case 0x3C:
    case 0x3E:
    case 0x62:
    case 0x63:
    case 0x66:
    case 0x68:
        var_a1 = (D_004BBD2E & 1) ? 0xA5 : 0xA6;
        break;
    default:
        var_a1 = 0xA6;
        break;
    }
    return var_a1 - 0xA0;
}
