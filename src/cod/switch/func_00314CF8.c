#include "common.h"

s32 func_00314CF8(void *arg0) {
    s32 temp_v0;
    s32 var_a2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x30);
    var_a2 = 0;
    switch (temp_v0) {
    case 0x47:
        var_a2 = M2C_FIELD(arg0, s32 *, 0xF50) - 0x37;
        break;
    case 0x45:
    case 0x46:
    case 0x48:
        var_a2 = M2C_FIELD(arg0, s32 *, 0xF50) - 0x31;
        break;
    case 0x4A:
    case 0x4B:
        var_a2 = M2C_FIELD(arg0, s32 *, 0xF50) - 0x1F;
        break;
    }
    return var_a2;
}
