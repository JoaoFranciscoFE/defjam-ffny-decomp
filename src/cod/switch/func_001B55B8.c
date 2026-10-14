#include "common.h"

extern f32 D_0037A9E0;
extern f32 D_0037A9E4;
extern f32 D_0037A9E8;
extern f32 D_0037A9EC;
extern f32 D_0037A9F0;
extern f32 D_0037A9F4;

f32 func_001B55B8(void *arg0, u32 arg1) {
    switch (arg1) {
    case 2:
    case 3:
        return D_0037A9E4;
    case 4:
        if (M2C_FIELD(arg0, s32 *, 0x11EC) < 3) {
            return D_0037A9EC;
        }
        return D_0037A9F4;
    case 5:
        if (M2C_FIELD(arg0, s32 *, 0x11EC) < 3) {
            return D_0037A9E8;
        }
        return D_0037A9F0;
    case 0:
    case 1:
        return D_0037A9E0;
    default:
        return 1.0f;
    }
}
