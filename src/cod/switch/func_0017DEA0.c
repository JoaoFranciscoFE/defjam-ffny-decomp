#include "common.h"

typedef struct { char pad[0x20]; s32 x20; char pad24[0x34 - 0x24]; } E17DEA0;
typedef struct { char pad[0x25C]; f32 x25C[1]; } T17DEA0;
extern E17DEA0 *D_00444C04;
extern T17DEA0 D_004C0D50;

f32 func_0017DEA0(void *arg0) {
    u32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u32 *, 4);
    switch (temp_v1) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
        return M2C_FIELD(arg0, f32 *, 0x68);
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 33:
    case 34:
    case 38:
    case 44:
    case 45:
    case 46:
        return D_004C0D50.x25C[D_00444C04[M2C_FIELD(arg0, s32 *, 0xC)].x20];
    default:
        return 1.0f;
    }
}
