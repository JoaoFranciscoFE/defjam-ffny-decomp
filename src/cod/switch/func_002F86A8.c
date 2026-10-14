#include "common.h"

s32 func_002F86A8(void **arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(*arg0, s32 *, 0x30);
    switch (temp_v1) {
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
        return 0;
    default:
        return 1;
    }
}
