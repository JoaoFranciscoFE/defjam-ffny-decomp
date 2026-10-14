#include "common.h"

s32 func_001A8188(void *, s32);                     /* extern */
s32 func_001A83A0(void *, s32);                     /* extern */
s32 func_001A8650(void *, s32);                     /* extern */
s32 func_001A88D8(void *, s32);                     /* extern */
s32 func_001A8D58(void *, s32);                     /* extern */

s32 func_001A80E0(void *arg0) {
    s32 var_a0;
    s32 var_v0;
    u32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u32 *, 0x1A4);
    var_a0 = 0;
    switch (temp_v1) {
    case 0:
        var_v0 = func_001A8D58(arg0, M2C_FIELD(arg0, s32 *, 4));
block_7:
        var_a0 = var_v0;
        break;
    case 1:
        var_v0 = func_001A8188(arg0, M2C_FIELD(arg0, s32 *, 4));
        goto block_7;
    case 2:
        var_v0 = func_001A8650(arg0, M2C_FIELD(arg0, s32 *, 4));
        goto block_7;
    case 3:
        var_v0 = func_001A88D8(arg0, M2C_FIELD(arg0, s32 *, 4));
        goto block_7;
    case 4:
        var_v0 = func_001A83A0(arg0, M2C_FIELD(arg0, s32 *, 4));
        goto block_7;
    }
    return var_a0;
}
