#include "common.h"

s32 func_003249E0(s32 arg0) {
    switch (arg0) {
    case 1:
        return 0;
    case 2:
        return 1;
    case 3:
    case 32:
        return 2;
    case 4:
        return 3;
    case 5:
    case 33:
        return 4;
    default:
        return -1;
    }
}
