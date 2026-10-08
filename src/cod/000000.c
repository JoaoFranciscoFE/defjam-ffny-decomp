#include "common.h"

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00100000);

INCLUDE_ASM("asm/nonmatchings/cod/000000", _start);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00100248);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00100250);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00100280);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00100428);

INCLUDE_ASM("asm/nonmatchings/cod/000000", main);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00101DF0);

extern M2C_UNK func_00101DF0__func_00101E28(M2C_UNK, M2C_UNK) __asm__("func_00101DF0");

void func_00101E28(void) {
    func_00101DF0__func_00101E28(1, 0xFFFF);
}

extern M2C_UNK func_00101DF0__func_00101E48(M2C_UNK, M2C_UNK) __asm__("func_00101DF0");

void func_00101E48(void) {
    func_00101DF0__func_00101E48(0, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00101E68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00101EA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00101EC8);

s32 func_00101EE0(s32 arg0, s32 arg1) {
    s32 *temp_a0;
    s32 temp_v0;

    temp_a0 = arg0 + (arg1 * 4);
    temp_v0 = *temp_a0;
    *temp_a0 = 0;
    return temp_v0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00101EF8);

extern M2C_UNK func_00101E68__func_00101F08(M2C_UNK *) __asm__("func_00101E68");
extern M2C_UNK func_00101EA0__func_00101F08(M2C_UNK *, M2C_UNK) __asm__("func_00101EA0");
extern M2C_UNK D_003FDAA0__func_00101F08 __asm__("D_003FDAA0");

void func_00101F08(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            func_00101E68__func_00101F08(&D_003FDAA0__func_00101F08);
            return;
        }
        func_00101EA0__func_00101F08(&D_003FDAA0__func_00101F08, 2);
    }
}

extern M2C_UNK func_00101F08__func_00101F48(M2C_UNK, M2C_UNK) __asm__("func_00101F08");

void func_00101F48(void) {
    func_00101F08__func_00101F48(1, 0xFFFF);
}

extern M2C_UNK func_00101F08__func_00101F68(M2C_UNK, M2C_UNK) __asm__("func_00101F08");

void func_00101F68(void) {
    func_00101F08__func_00101F68(0, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00101F88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00101FD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00102038);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00102938);

extern s32 D_00375A08__func_00102FB8 __asm__("D_00375A08");

void func_00102FB8(s32 arg0) {
    D_00375A08__func_00102FB8 |= arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00102FD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00103140);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001031B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001034E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001036B8);

extern M2C_UNK func_00360CE8__func_00103730(void *) __asm__("func_00360CE8");

void *func_00103730(void *arg0) {
    void *temp_a0;
    void *temp_v1;

    M2C_FIELD(arg0, s32 *, 0xC) = 1;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    func_00360CE8__func_00103730(arg0 + 0x14);
    M2C_FIELD(arg0, s32 *, 0x5934) = 0;
    temp_v1 = arg0 + 0x5934;
    M2C_FIELD(temp_v1, s32 *, 0x10) = 1;
    temp_a0 = arg0 + 0x5948;
    M2C_FIELD(temp_v1, void **, 0xC) = NULL;
    M2C_FIELD(temp_v1, s32 *, 4) = 0;
    M2C_FIELD(temp_v1, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0x5948) = 0;
    M2C_FIELD(temp_a0, s32 *, 0x10) = 1;
    M2C_FIELD(temp_a0, void **, 0xC) = NULL;
    M2C_FIELD(temp_a0, s32 *, 4) = 0;
    M2C_FIELD(temp_a0, s32 *, 8) = 0;
    M2C_FIELD(arg0, void **, 0x5930) = (void *) (arg0 + 0x56C8);
    M2C_FIELD(arg0, void **, 0x5920) = (void *) (arg0 + 0x5574);
    M2C_FIELD(arg0, void **, 0x5924) = (void *) (arg0 + 0x560C);
    M2C_FIELD(arg0, void **, 0x5928) = (void *) (arg0 + 0x5634);
    M2C_FIELD(arg0, void **, 0x592C) = (void *) (arg0 + 0x56A8);
    M2C_FIELD(arg0, s32 *, 0x595C) = 0;
    M2C_FIELD(temp_v1, void **, 0xC) = (void *) (arg0 + 0x51C0);
    M2C_FIELD(temp_v1, s32 *, 0x10) = 0;
    M2C_FIELD(temp_a0, void **, 0xC) = (void *) (arg0 + 0x53F4);
    M2C_FIELD(temp_a0, s32 *, 0x10) = 0;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001037F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001037F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001039F0);

void func_001041A8(void *arg0) {
    s32 *temp_v1;
    s32 *temp_v1_2;
    s32 temp_a1;
    s32 temp_a1_2;
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = arg0 + 0x5934;
    temp_a1 = M2C_FIELD(arg0, s32 *, 0x51BC);
    temp_v1 = M2C_FIELD(temp_v0, s32 **, 8);
    M2C_FIELD(temp_v0, s32 *, 4) = temp_a1;
    if (temp_v1 != NULL) {
        *temp_v1 = temp_a1;
    }
    temp_v0_2 = arg0 + 0x5948;
    temp_a1_2 = M2C_FIELD(arg0, s32 *, 0x53F0);
    temp_v1_2 = M2C_FIELD(temp_v0_2, s32 **, 8);
    M2C_FIELD(temp_v0_2, s32 *, 4) = temp_a1_2;
    if (temp_v1_2 != NULL) {
        *temp_v1_2 = temp_a1_2;
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001041E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00104298);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001042B8);

u32 func_001042C0(void *arg0, u32 arg1) {
    u32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u32 *, 0x28);
    if (temp_v1 >= arg1) {
        M2C_FIELD(arg0, u32 *, 0x28) = (u32) (temp_v1 - arg1);
    }
    return M2C_FIELD(arg0, u32 *, 0x28);
}

void func_001042E0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) + arg1);
}

extern M2C_UNK func_00347028__func_001042F0(s32, M2C_UNK) __asm__("func_00347028");
extern s32 func_00347140__func_001042F0(M2C_UNK) __asm__("func_00347140");

void func_001042F0(s32 arg0, M2C_UNK arg1) {
    if (func_00347140__func_001042F0(arg1) < 0xD) {
        func_00347028__func_001042F0(arg0 + 0x14, arg1);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00104338);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00104340);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00104378);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001043B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001043C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001043D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00104460);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001044F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001045E0);

void func_001046C0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg3 != 0) {
        M2C_FIELD(arg0, s32 *, 0x48) = arg1;
    }
    M2C_FIELD(arg0, s32 *, 0x4C) = arg2;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001046D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00104728);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00104790);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00104808);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00104868);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001049F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00104A00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00104A08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00104BC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00104C10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00104C48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001053C0);

extern M2C_UNK func_00105630__func_001055C0() __asm__("func_00105630");
extern M2C_UNK func_001058E0__func_001055C0(void *, s32) __asm__("func_001058E0");
extern M2C_UNK func_00105B90__func_001055C0(void *, s32) __asm__("func_00105B90");
extern M2C_UNK func_00105F48__func_001055C0(void *, s32) __asm__("func_00105F48");
extern M2C_UNK func_001063B8__func_001055C0(void *, s32) __asm__("func_001063B8");
extern M2C_UNK func_00106668__func_001055C0(void *, s32) __asm__("func_00106668");

void func_001055C0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x16C) = arg1;
    func_00105630__func_001055C0();
    func_001058E0__func_001055C0(arg0 + 0x3C, arg1);
    func_00105F48__func_001055C0(arg0 + 0xB4, arg1);
    func_00105B90__func_001055C0(arg0 + 0x78, arg1);
    func_001063B8__func_001055C0(arg0 + 0xF0, arg1);
    func_00106668__func_001055C0(arg0 + 0x12C, arg1);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00105630);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001058E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00105B90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00105F48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001063B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00106668);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00106918);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00106B80);

void func_00106C78(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00106C80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00106CE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00106FD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00107060);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00107090);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001070C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00107110);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00107158);

extern s32 func_00346EDC__func_00107C98(s32) __asm__("func_00346EDC");

s32 func_00107C98(s32 arg0) {
    return func_00346EDC__func_00107C98(arg0 + 0x1658) == 0;
}

extern s32 func_00346EDC__func_00107CB8(s32) __asm__("func_00346EDC");

s32 func_00107CB8(s32 arg0) {
    return func_00346EDC__func_00107CB8(arg0 + 0x1698) == 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00107CD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00107DE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00107E10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00107F60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00108020);

extern M2C_UNK func_00108C38__func_00108040() __asm__("func_00108C38");

void func_00108040(void) {
    func_00108C38__func_00108040();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00108060);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00108300);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00108360);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00108570);

void func_00108708(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x36A28) = arg1;
    M2C_FIELD(arg0, s32 *, 0x14) = 1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00108720);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00108B10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00108B90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00108BD0);

extern M2C_UNK func_00113380__func_00108C38(s32) __asm__("func_00113380");
extern M2C_UNK func_00119EB8__func_00108C38(s32) __asm__("func_00119EB8");

void func_00108C38(void *arg0) {
    func_00113380__func_00108C38(arg0 + 0x1C);
    func_00119EB8__func_00108C38(M2C_FIELD(arg0, s32 *, 0x18));
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}

void func_00108C70(void) {
}

extern M2C_UNK func_00107CD8__func_00108C78(M2C_UNK *) __asm__("func_00107CD8");
extern M2C_UNK func_00107DE8__func_00108C78(M2C_UNK *, M2C_UNK) __asm__("func_00107DE8");
extern M2C_UNK D_003FDB48__func_00108C78 __asm__("D_003FDB48");

void func_00108C78(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            func_00107CD8__func_00108C78(&D_003FDB48__func_00108C78);
            return;
        }
        func_00107DE8__func_00108C78(&D_003FDB48__func_00108C78, 2);
    }
}

extern M2C_UNK func_00108C78__func_00108CB8(M2C_UNK, M2C_UNK) __asm__("func_00108C78");

void func_00108CB8(void) {
    func_00108C78__func_00108CB8(1, 0xFFFF);
}

extern M2C_UNK func_00108C78__func_00108CD8(M2C_UNK, M2C_UNK) __asm__("func_00108C78");

void func_00108CD8(void) {
    func_00108C78__func_00108CD8(0, 0xFFFF);
}

extern s32 D_00375A24__func_00108CF8 __asm__("D_00375A24");

s32 func_00108CF8(void) {
    return D_00375A24__func_00108CF8;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00108D08);

extern M2C_UNK func_00348568__func_00108D90(s32) __asm__("func_00348568");

void func_00108D90(s32 arg0) {
    func_00348568__func_00108D90(arg0 + 2);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00108DB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00108DE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00108E38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", CRenderSubsystem_RegisterEnvMapTextures);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001092D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00109378);

extern M2C_UNK CRenderSubsystem_RegisterEnvMapTextures__func_00109478(void *, void *, M2C_UNK) __asm__("CRenderSubsystem_RegisterEnvMapTextures");
extern M2C_UNK func_00112BE8__func_00109478(void *, M2C_UNK *, M2C_UNK, M2C_UNK) __asm__("func_00112BE8");
extern void *func_0011A238__func_00109478(M2C_UNK, M2C_UNK *, M2C_UNK) __asm__("func_0011A238");
extern M2C_UNK D_003AC220__func_00109478 __asm__("D_003AC220");
extern M2C_UNK D_003AC250__func_00109478 __asm__("D_003AC250");

void func_00109478(void *arg0) {
    void *temp_v0;

    if (M2C_FIELD(arg0, void **, 0xB0) == NULL) {
        temp_v0 = func_0011A238__func_00109478(0x10, &D_003AC220__func_00109478, 0);
        M2C_FIELD(temp_v0, s32 *, 0) = 0;
        M2C_FIELD(temp_v0, s32 *, 4) = 0;
        M2C_FIELD(temp_v0, s32 *, 0xC) = 0;
        M2C_FIELD(temp_v0, s32 *, 8) = 0;
        M2C_FIELD(arg0, void **, 0xB0) = temp_v0;
        func_00112BE8__func_00109478(temp_v0, &D_003AC250__func_00109478, 0, 0x400);
        CRenderSubsystem_RegisterEnvMapTextures__func_00109478(arg0, M2C_FIELD(arg0, void **, 0xB0), 1);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001094F8);

extern M2C_UNK func_003312F8__func_00109550(M2C_UNK *, M2C_UNK, M2C_UNK) __asm__("func_003312F8");
extern M2C_UNK D_00375A38__func_00109550 __asm__("D_00375A38");
extern M2C_UNK D_00375A78__func_00109550 __asm__("D_00375A78");
extern M2C_UNK D_00375A98__func_00109550 __asm__("D_00375A98");

void func_00109550(void) {
    func_003312F8__func_00109550(&D_00375A38__func_00109550, 0, 0x40);
    func_003312F8__func_00109550(&D_00375A78__func_00109550, 0, 0x20);
    func_003312F8__func_00109550(&D_00375A98__func_00109550, 0, 0x10);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001095A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", CRenderSubsystem_Init);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00109BE0);

extern M2C_UNK func_00109478__func_00109CA8() __asm__("func_00109478");

s32 func_00109CA8(void) {
    func_00109478__func_00109CA8();
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00109CC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00109D40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00109EA8);

extern M2C_UNK func_0021B800__func_00109F90(s32, M2C_UNK) __asm__("func_0021B800");

void func_00109F90(void *arg0) {
    func_0021B800__func_00109F90(M2C_FIELD(arg0, s32 *, 0x34) + 0x10, 0x1E);
}

extern M2C_UNK func_0021B800__func_00109FB8(s32, M2C_UNK) __asm__("func_0021B800");

void func_00109FB8(void *arg0) {
    func_0021B800__func_00109FB8(M2C_FIELD(arg0, s32 *, 0x34) + 0x10, 0x3C);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00109FE0);

void func_0010A0C8(void *arg0, s32 arg1) {
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0x38);
    if (arg1 != M2C_FIELD(temp_v1, s32 *, 0x14)) {
        M2C_FIELD(temp_v1, s32 *, 0x14) = arg1;
        M2C_FIELD(temp_v1, s32 *, 0x40) = (s32) (M2C_FIELD(temp_v1, s32 *, 0x40) | 3);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010A0F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010A150);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010A1F8);

extern M2C_UNK func_0021E858__func_0010A260(s32, M2C_UNK) __asm__("func_0021E858");

void func_0010A260(void *arg0) {
    func_0021E858__func_0010A260(M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), s32 *, 8), 2);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010A288);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010A2F8);

extern M2C_UNK func_0021E2C0__func_0010A348(s32) __asm__("func_0021E2C0");

void func_0010A348(void *arg0) {
    func_0021E2C0__func_0010A348(M2C_FIELD(arg0, s32 *, 0x3C));
}

extern M2C_UNK func_0021F240__func_0010A368(s32) __asm__("func_0021F240");

void func_0010A368(void *arg0) {
    func_0021F240__func_0010A368(M2C_FIELD(arg0, s32 *, 0x3C));
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010A388);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010A410);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010A470);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010A4D0);

extern M2C_UNK func_0021A960__func_0010A4E8(s32, s32) __asm__("func_0021A960");
extern M2C_UNK func_0021AAD8__func_0010A4E8(s32) __asm__("func_0021AAD8");
extern M2C_UNK func_0021B8E8__func_0010A4E8(s32) __asm__("func_0021B8E8");
extern M2C_UNK func_0021B900__func_0010A4E8(s32, s32) __asm__("func_0021B900");
extern M2C_UNK func_0021B918__func_0010A4E8(f32, s32) __asm__("func_0021B918");
extern M2C_UNK func_0021B940__func_0010A4E8(f32, s32) __asm__("func_0021B940");
extern M2C_UNK func_0021B968__func_0010A4E8(f32, s32) __asm__("func_0021B968");

void func_0010A4E8(void *arg0, s32 arg1) {
    func_0021B8E8__func_0010A4E8(M2C_FIELD(arg0, s32 *, 0x34) + 0x10);
    if (arg1 != 0) {
        func_0021A960__func_0010A4E8(M2C_FIELD(arg0, s32 *, 0x34) + 0x10, M2C_FIELD(arg0, s32 *, 0xC));
        func_0021B900__func_0010A4E8(M2C_FIELD(arg0, s32 *, 0x34) + 0x10, M2C_FIELD(arg0, s32 *, 0x10));
        func_0021B918__func_0010A4E8(M2C_FIELD(arg0, f32 *, 0), M2C_FIELD(arg0, s32 *, 0x34) + 0x10);
        func_0021B940__func_0010A4E8(M2C_FIELD(arg0, f32 *, 4), M2C_FIELD(arg0, s32 *, 0x34) + 0x10);
        func_0021B968__func_0010A4E8(M2C_FIELD(arg0, f32 *, 8), M2C_FIELD(arg0, s32 *, 0x34) + 0x10);
        func_0021AAD8__func_0010A4E8(M2C_FIELD(arg0, s32 *, 0x34) + 0x10);
    }
}

s32 func_0010A588(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), s32 *, 8);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", CRenderSubsystem_NewRenderMethodLoader);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010A628);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010A710);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010A7C0);

f32 func_0010A868(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), f32 *, 0x10);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010A878);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010A8B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010A8E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010A908);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010A930);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010A9D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010AA00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010AA28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010AA70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010AAC0);

extern M2C_UNK func_0021EF50__func_0010AAD0(s32) __asm__("func_0021EF50");

void func_0010AAD0(void *arg0) {
    func_0021EF50__func_0010AAD0(M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), s32 *, 8));
}

s32 func_0010AAF0(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), s32 *, 0x3C);
}

extern s32 func_0021B1C8__func_0010AB00(s32) __asm__("func_0021B1C8");

s32 func_0010AB00(void *arg0) {
    return func_0021B1C8__func_0010AB00(M2C_FIELD(arg0, s32 *, 0x34) + 0x10) ^ 1;
}

extern M2C_UNK func_0021B9C8__func_0010AB28() __asm__("func_0021B9C8");
extern s32 func_00330E00__func_0010AB28(M2C_UNK) __asm__("func_00330E00");

void func_0010AB28(void) {
    if (func_00330E00__func_0010AB28(0) != 0) {
        func_0021B9C8__func_0010AB28();
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010AB58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010ABB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010ACA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010ACA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010AD28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010AF38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010AFB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010B028);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010B070);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010B078);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010B118);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010B1D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010B290);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010B3F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010B470);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010B5A0);

extern M2C_UNK func_0010B5A0__func_0010B648(M2C_UNK, M2C_UNK) __asm__("func_0010B5A0");

void func_0010B648(void) {
    func_0010B5A0__func_0010B648(1, 0xFFFF);
}

extern M2C_UNK func_0010B5A0__func_0010B668(M2C_UNK, M2C_UNK) __asm__("func_0010B5A0");

void func_0010B668(void) {
    func_0010B5A0__func_0010B668(0, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010B688);

extern M2C_UNK func_0032B758__func_0010B740(s32, M2C_UNK) __asm__("func_0032B758");

void func_0010B740(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_a0 != -1) {
        func_0032B758__func_0010B740(temp_a0, 0x32);
        M2C_FIELD(arg0, s32 *, 0x10) = -1;
    }
}

extern M2C_UNK func_0032B758__func_0010B788(s32, M2C_UNK) __asm__("func_0032B758");
extern M2C_UNK func_003608A8__func_0010B788(M2C_UNK *) __asm__("func_003608A8");
extern M2C_UNK D_003AC8B0__func_0010B788 __asm__("D_003AC8B0");

void func_0010B788(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_a0 != -1) {
        func_0032B758__func_0010B788(temp_a0, 0x32);
        M2C_FIELD(arg0, s32 *, 0x10) = -1;
    }
    if (M2C_FIELD(arg0, s32 *, 0) == 0) {
        func_003608A8__func_0010B788(&D_003AC8B0__func_0010B788);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010B7E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010B8B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010B8F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010B948);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010B998);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010B9E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010BA38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010BAB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010BB58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010BC10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010BC30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010BCE0);

extern M2C_UNK func_0011A318__func_0010BD68(s32) __asm__("func_0011A318");

void func_0010BD68(void *arg0) {
    s32 temp_a0;

    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    temp_a0 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (temp_a0 != 0) {
        func_0011A318__func_0010BD68(temp_a0);
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010BDA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010BE78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010BED0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010BF28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010BF80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010C1A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010C260);

void *func_0010C2B0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0x3ADE68B1;
    return arg0;
}

void *func_0010C2C8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x84) = 0;
    M2C_FIELD(arg0, s32 *, 0) = -1;
    return arg0;
}

extern s32 D_003FD50C__func_0010C2E0 __asm__("D_003FD50C");

s32 func_0010C2E0(s32 arg0) {
    D_003FD50C__func_0010C2E0 = 0;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010C2F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010C6B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010C770);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010C798);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010C8A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010C930);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010C980);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010C988);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010CAD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010CBD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010CD20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010CDF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010CDF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010CEF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010CFA0);

extern M2C_UNK func_0010DA20__func_0010D008() __asm__("func_0010DA20");
extern M2C_UNK func_00234C98__func_0010D008(s32) __asm__("func_00234C98");
extern s32 D_003FD54C__func_0010D008 __asm__("D_003FD54C");

void func_0010D008(s32 arg0) {
    if (arg0 == -1) {
        func_00234C98__func_0010D008(D_003FD54C__func_0010D008);
        return;
    }
    func_0010DA20__func_0010D008();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010D040);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010D0A8);

extern M2C_UNK func_0022F008__func_0010D0B0() __asm__("func_0022F008");
extern M2C_UNK func_0022F040__func_0010D0B0() __asm__("func_0022F040");
extern M2C_UNK func_00235240__func_0010D0B0(f32, s32, M2C_UNK) __asm__("func_00235240");
extern s32 D_003FD54C__func_0010D0B0 __asm__("D_003FD54C");
extern f32 D_003FD558__func_0010D0B0 __asm__("D_003FD558");

void func_0010D0B0(f32 arg0) {
    D_003FD558__func_0010D0B0 = arg0;
    if (arg0 > 1.0f) {
        D_003FD558__func_0010D0B0 = 1.0f;
    }
    func_0022F008__func_0010D0B0();
    func_00235240__func_0010D0B0(D_003FD558__func_0010D0B0, D_003FD54C__func_0010D0B0, -1);
    func_0022F040__func_0010D0B0();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010D110);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010D178);

extern s32 func_00251FE8__func_0010D1B0() __asm__("func_00251FE8");
extern s32 D_003FD55C__func_0010D1B0 __asm__("D_003FD55C");

s32 func_0010D1B0(void) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0;
    temp_v0 = func_00251FE8__func_0010D1B0();
    if (temp_v0 >= 0) {
        var_s0 = 1;
        D_003FD55C__func_0010D1B0 = temp_v0;
    }
    return var_s0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010D1F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010D2C0);

extern M2C_UNK func_0010D3F8__func_0010D3C8() __asm__("func_0010D3F8");
extern M2C_UNK func_0010D438__func_0010D3C8() __asm__("func_0010D438");
extern M2C_UNK func_00251180__func_0010D3C8(M2C_UNK) __asm__("func_00251180");

void func_0010D3C8(void) {
    func_00251180__func_0010D3C8(0xFFFFFF);
    func_0010D438__func_0010D3C8();
    func_0010D3F8__func_0010D3C8();
}

extern M2C_UNK func_00252700__func_0010D3F8(s32) __asm__("func_00252700");
extern s32 D_003FD518__func_0010D3F8 __asm__("D_003FD518");

void func_0010D3F8(void) {
    if (D_003FD518__func_0010D3F8 != -1) {
        func_00252700__func_0010D3F8(D_003FD518__func_0010D3F8);
        D_003FD518__func_0010D3F8 = -1;
    }
}

extern s32 func_002333C0__func_0010D438(s32) __asm__("func_002333C0");
extern M2C_UNK func_00252700__func_0010D438(s32) __asm__("func_00252700");
extern s32 D_003FD564__func_0010D438 __asm__("D_003FD564");
extern s32 D_0043D540__func_0010D438 __asm__("D_0043D540");

void func_0010D438(void) {
    if (D_0043D540__func_0010D438 != -1) {
        if (func_002333C0__func_0010D438(D_003FD564__func_0010D438) >= 0) {
            D_003FD564__func_0010D438 = -1;
        }
        func_00252700__func_0010D438(D_0043D540__func_0010D438);
        D_0043D540__func_0010D438 = -1;
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010D498);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010D4B0);

extern M2C_UNK func_00250A78__func_0010D4E0(M2C_UNK, s32) __asm__("func_00250A78");

void func_0010D4E0(s32 arg0) {
    func_00250A78__func_0010D4E0(-1, arg0);
}

extern M2C_UNK func_00253A08__func_0010D500(M2C_UNK, s8) __asm__("func_00253A08");

void func_0010D500(s8 arg0) {
    func_00253A08__func_0010D500(-1, arg0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010D528);

extern M2C_UNK func_00250D50__func_0010D530(M2C_UNK, s32) __asm__("func_00250D50");

void func_0010D530(s32 arg0) {
    func_00250D50__func_0010D530(-1, arg0 != 0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010D550);

extern s32 func_00250EC8__func_0010D558(s32, M2C_UNK *) __asm__("func_00250EC8");
extern s32 D_003FD560__func_0010D558 __asm__("D_003FD560");
extern M2C_UNK D_004DC578__func_0010D558 __asm__("D_004DC578");

M2C_UNK *func_0010D558(void) {
    return (func_00250EC8__func_0010D558(D_003FD560__func_0010D558, &D_004DC578__func_0010D558) < 0) ? NULL : &D_004DC578__func_0010D558;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010D598);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010D740);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010D830);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010D838);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010D910);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010D990);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010D998);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010DA20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010DA68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010DB28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010DB98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010DBA0);

extern M2C_UNK func_0010DBA0__func_0010DCD8(M2C_UNK, M2C_UNK) __asm__("func_0010DBA0");

void func_0010DCD8(void) {
    func_0010DBA0__func_0010DCD8(1, 0xFFFF);
}

extern M2C_UNK func_0010DBA0__func_0010DCF8(M2C_UNK, M2C_UNK) __asm__("func_0010DBA0");

void func_0010DCF8(void) {
    func_0010DBA0__func_0010DCF8(0, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010DD18);

extern M2C_UNK func_0011A2F8__func_0010DE28(s32) __asm__("func_0011A2F8");
extern M2C_UNK func_0014F7D0__func_0010DE28(s32, M2C_UNK) __asm__("func_0014F7D0");
extern M2C_UNK func_00150780__func_0010DE28(s32, M2C_UNK) __asm__("func_00150780");
extern M2C_UNK func_00151778__func_0010DE28(s32, M2C_UNK) __asm__("func_00151778");
extern M2C_UNK func_0015F1D0__func_0010DE28(s32, M2C_UNK) __asm__("func_0015F1D0");
extern M2C_UNK func_001616C0__func_0010DE28(s32, M2C_UNK) __asm__("func_001616C0");

void func_0010DE28(s32 arg0, s32 arg1) {
    func_00150780__func_0010DE28(arg0 + 0x1A14, 2);
    func_00151778__func_0010DE28(arg0 + 0x1A04, 2);
    func_001616C0__func_0010DE28(arg0 + 0x1A00, 2);
    func_0015F1D0__func_0010DE28(arg0 + 0x3C8, 2);
    func_0014F7D0__func_0010DE28(arg0 + 0xC, 2);
    if (arg1 & 1) {
        func_0011A2F8__func_0010DE28(arg0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", CBackEnd_Init);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010E2B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010E330);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010E3E8);

extern s32 func_00101EF8__func_0010E448(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern s32 func_001106A8__func_0010E448(void *, s32) __asm__("func_001106A8");
extern s32 func_001D2198__func_0010E448(s32, s32) __asm__("func_001D2198");
extern s32 func_001D21F8__func_0010E448(s32, s32) __asm__("func_001D21F8");
extern s32 func_001D2220__func_0010E448(s32, s32) __asm__("func_001D2220");
extern s32 func_001D2248__func_0010E448(s32, s32) __asm__("func_001D2248");
extern s32 func_001D2278__func_0010E448(s32, s32) __asm__("func_001D2278");
extern s32 func_001D22A8__func_0010E448(s32, s32) __asm__("func_001D22A8");
extern s32 func_001D22D8__func_0010E448(s32, s32) __asm__("func_001D22D8");
extern s32 func_001D2308__func_0010E448(s32, s32) __asm__("func_001D2308");
extern s32 func_001D2338__func_0010E448(s32, s32) __asm__("func_001D2338");
extern M2C_UNK D_003FDAA0__func_0010E448 __asm__("D_003FDAA0");

void func_0010E448(void *arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_s2;

    temp_s2 = func_00101EF8__func_0010E448(&D_003FDAA0__func_0010E448, 0x1F);
    temp_s0 = func_001106A8__func_0010E448(arg0, arg1);
    M2C_FIELD(arg0, s32 *, 0x3C0) = arg1;
    M2C_FIELD(arg0, s32 *, 0x160) = func_001D21F8__func_0010E448(temp_s2, temp_s0);
    M2C_FIELD(arg0, s32 *, 0x164) = func_001D2198__func_0010E448(temp_s2, temp_s0);
    M2C_FIELD(arg0, s32 *, 0x1EC) = func_001D2220__func_0010E448(temp_s2, temp_s0);
    M2C_FIELD(arg0, s32 *, 0x1F0) = func_001D2248__func_0010E448(temp_s2, temp_s0);
    M2C_FIELD(arg0, s32 *, 0x1F4) = func_001D2278__func_0010E448(temp_s2, temp_s0);
    M2C_FIELD(arg0, s32 *, 0x1F8) = func_001D22A8__func_0010E448(temp_s2, temp_s0);
    M2C_FIELD(arg0, s32 *, 0x1FC) = func_001D22D8__func_0010E448(temp_s2, temp_s0);
    M2C_FIELD(arg0, s32 *, 0x200) = func_001D2308__func_0010E448(temp_s2, temp_s0);
    M2C_FIELD(arg0, s32 *, 0x204) = func_001D2338__func_0010E448(temp_s2, temp_s0);
    M2C_FIELD(arg0, s32 *, 0x340) = (s32) (M2C_FIELD(arg0, s32 *, 0x340) | 2);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010E548);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010E550);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010E5C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010E5C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010FAF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0010FC18);

extern M2C_UNK func_001517D0__func_00110110(void *, void *, s32, s32) __asm__("func_001517D0");
extern M2C_UNK func_0015FAE8__func_00110110(s32) __asm__("func_0015FAE8");
extern M2C_UNK func_001616E8__func_00110110(s32) __asm__("func_001616E8");
extern s32 D_004C2180__func_00110110 __asm__("D_004C2180");

void func_00110110(void *arg0) {
    s32 temp_s1;
    void *temp_t1;

    temp_s1 = arg0 + 0x3C8;
    func_0015FAE8__func_00110110(temp_s1);
    if ((D_004C2180__func_00110110 ^ 1) & 1) {
        func_001616E8__func_00110110(arg0 + 0x1A00);
    }
    if (M2C_FIELD(arg0, s32 *, 0x350) == 0) {
        temp_t1 = M2C_FIELD(arg0, void **, 4);
        func_001517D0__func_00110110(arg0 + 0x1A04, temp_t1 + ((M2C_FIELD(temp_t1, s32 *, 0x2E1D8) * 0x5960) + 0x16D8), M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x14), temp_s1);
    }
}

extern M2C_UNK func_001517D0__func_001101A8(void *, void *, s32, M2C_UNK) __asm__("func_001517D0");

void func_001101A8(void *arg0) {
    void *temp_t1;

    if (M2C_FIELD(arg0, s32 *, 0x350) == 0) {
        temp_t1 = M2C_FIELD(arg0, void **, 4);
        func_001517D0__func_001101A8(arg0 + 0x1A04, temp_t1 + ((M2C_FIELD(temp_t1, s32 *, 0x2E1D8) * 0x5960) + 0x16D8), M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x14), 0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00110200);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001102A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001102B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001102B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001102C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001102C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00110330);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00110338);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00110340);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00110348);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00110350);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00110358);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00110360);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00110368);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001103D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00110440);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00110490);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001104D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00110668);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001106A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001106F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00110710);

s32 func_00110748(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 0x1AAC) + (arg1 << 5);
}

extern M2C_UNK func_00347028__func_00110758(s32) __asm__("func_00347028");

void func_00110758(s32 arg0) {
    func_00347028__func_00110758(arg0 + 0x358);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00110778);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001107E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00110A38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00111170);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001111E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00111520);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001123C8);

extern s32 func_00101EF8__func_001124E0(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_001E9DE0__func_001124E0(s32) __asm__("func_001E9DE0");
extern s32 func_001EB3D8__func_001124E0(s32) __asm__("func_001EB3D8");
extern M2C_UNK func_001EB480__func_001124E0(s32) __asm__("func_001EB480");
extern M2C_UNK func_001EB538__func_001124E0(s32) __asm__("func_001EB538");
extern M2C_UNK D_003FDAA0__func_001124E0 __asm__("D_003FDAA0");

void func_001124E0(void) {
    s32 temp_v0;

    temp_v0 = func_00101EF8__func_001124E0(&D_003FDAA0__func_001124E0, 0x19);
    func_001E9DE0__func_001124E0(func_001EB3D8__func_001124E0(temp_v0));
    func_001EB480__func_001124E0(temp_v0);
    func_001EB538__func_001124E0(temp_v0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00112530);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00112558);

void func_00112578(s32 arg0, s8 arg1, s8 arg2) {
    M2C_FIELD((arg0 + arg2), s8 *, 0x1AD0) = arg1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00112590);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001125B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001125D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001125D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00112630);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00112678);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00112698);

s8 func_001126B8(s32 arg0, s8 arg1) {
    return M2C_FIELD((arg0 + arg1), s8 *, 0x1AD0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001126D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001126F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00112750);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001127F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00112860);

extern s32 func_00101EF8__func_00112868(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_00160330__func_00112868(s32, s32, M2C_UNK) __asm__("func_00160330");
extern M2C_UNK D_003FDAA0__func_00112868 __asm__("D_003FDAA0");

void func_00112868(s32 arg0, M2C_UNK arg1) {
    s32 temp_v0;

    temp_v0 = func_00101EF8__func_00112868(&D_003FDAA0__func_00112868, 0x18);
    if (temp_v0 != 0) {
        func_00160330__func_00112868(temp_v0 + 0x3C8, arg0, arg1);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001128B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001128C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00112BE8);

s32 func_00112CC8(void *arg0, void *arg1) {
    M2C_FIELD(arg0, void **, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) | 1);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 8);
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00112CE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00112D38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00112D78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00112E20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00112E68);

void *func_00112E70(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00112E80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00112EC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00112FE8);

extern M2C_UNK func_00119EB8__func_001130A8(s32) __asm__("func_00119EB8");

void func_001130A8(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_a0 != 0) {
        func_00119EB8__func_001130A8(temp_a0);
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0) = 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001130E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001131E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001132B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00113338);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00113380);

extern s32 func_001F7518__func_001133F8(s32) __asm__("func_001F7518");
extern s32 func_001F75B8__func_001133F8(s32, s32) __asm__("func_001F75B8");

s32 func_001133F8(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_001F7518__func_001133F8(M2C_FIELD(arg0, s32 *, 4));
    var_v1 = 0;
    if (temp_v0 != -1) {
        var_v1 = func_001F75B8__func_001133F8(M2C_FIELD(arg0, s32 *, 4), temp_v0);
    }
    return var_v1;
}

extern s32 func_001F75B8__func_00113440(s32) __asm__("func_001F75B8");

s32 func_00113440(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (arg1 != -1) {
        var_v1 = func_001F75B8__func_00113440(M2C_FIELD(arg0, s32 *, 4));
    }
    return var_v1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00113470);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00113490);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001135B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001136E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00113710);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00113860);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00113A88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00113AC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00113AD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", CAnimation_InitMirror);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00113C88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00113CF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00113CF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00113D98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", CAnimEventSystem_Reset);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00113ED0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", CAnimEventSystem_ValidateEvents);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00113FD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00114090);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00114140);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00114268);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001143F8);

extern M2C_UNK func_001F49D0__func_00114468(s32, s32, M2C_UNK) __asm__("func_001F49D0");

void func_00114468(void *arg0) {
    func_001F49D0__func_00114468(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0xC), 0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00114490);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001144B0);

extern M2C_UNK func_001144D8__func_001144B8() __asm__("func_001144D8");

void func_001144B8(void) {
    func_001144D8__func_001144B8();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001144D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00114540);

extern M2C_UNK func_001F4F58__func_001145A8(s32, M2C_UNK, s32, M2C_UNK) __asm__("func_001F4F58");

void func_001145A8(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_001F4F58__func_001145A8(M2C_FIELD(arg0, s32 *, 4), arg2, M2C_FIELD(arg0, s32 *, 0xC), arg1);
}

extern M2C_UNK func_001F4F58__func_001145D8(s32, M2C_UNK, M2C_UNK, M2C_UNK) __asm__("func_001F4F58");

void func_001145D8(void *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_001F4F58__func_001145D8(M2C_FIELD(arg0, s32 *, 4), arg2, arg3, arg1);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00114608);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00114610);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00114640);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00114650);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00114820);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00114888);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001148C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001148F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00114928);

void *func_00114958(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00114970);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001149B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00114B38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00114BC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00114BE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00114C38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00114C78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00114CB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00114EA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00114F78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001151A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001152B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001153A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001153D8);

extern M2C_UNK func_001136E0__func_00115518(void *) __asm__("func_001136E0");

void func_00115518(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x128) != 0) {
        func_001136E0__func_00115518(arg0 + 0x1F0);
    }
}

extern M2C_UNK func_001136E0__func_00115540(void *) __asm__("func_001136E0");

void func_00115540(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x128) != 0) {
        func_001136E0__func_00115540(arg0 + 0x1F0);
        func_001136E0__func_00115540(arg0 + 0x220);
        func_001136E0__func_00115540(arg0 + 0x250);
    }
}

extern M2C_UNK func_003628E0__func_00115588() __asm__("func_003628E0");

void func_00115588(void) {
    func_003628E0__func_00115588();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001155A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00115608);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00115658);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00115788);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00115858);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00115920);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00115A48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00115B10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00115C58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00115F90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00116090);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00116148);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001161F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00116298);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00116368);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00116448);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001164F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001165D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00116688);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00116740);

void func_00116768(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x140) = (s32) (M2C_FIELD(arg0, s32 *, 0x140) | arg1);
}

extern M2C_UNK func_00212490__func_00116778(s32, s32) __asm__("func_00212490");

void func_00116778(void *arg0, s32 *arg1) {
    func_00212490__func_00116778(M2C_FIELD(arg0, s32 *, 0x12C), *arg1);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00116798);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001167A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001167E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00116880);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001168C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00116900);

void func_00116908(void *arg0, s32 arg1) {
    s32 temp_a1;
    void *temp_a2;
    void *temp_a3;

    temp_a1 = arg1 * 0xC;
    temp_a2 = temp_a1 + M2C_FIELD(arg0, s32 *, 0x418);
    temp_a3 = M2C_FIELD(temp_a2, void **, 0);
    if (temp_a3 != NULL) {
        M2C_FIELD(temp_a2, s32 *, 8) = (s32) (M2C_FIELD(temp_a2, s32 *, 8) & 0x7FFFFFFF);
        if (M2C_FIELD((temp_a1 + M2C_FIELD(arg0, s32 *, 0x418)), s32 *, 8) == M2C_FIELD(arg0, s32 *, 0x420)) {
            M2C_FIELD(temp_a3, s16 *, 2) = 1;
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00116958);

void func_00116998(void *arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x41C);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0x114) = arg1;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x414) = arg1;
}

extern M2C_UNK func_00169408__func_001169B8(s32, s32) __asm__("func_00169408");

void func_001169B8(void *arg0, s32 arg1) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x120);
    if (temp_a0 != 0) {
        func_00169408__func_001169B8(temp_a0, arg1 != 0);
    }
}

extern M2C_UNK func_001692E8__func_001169E0(s32, s32) __asm__("func_001692E8");

void func_001169E0(void *arg0, void *arg1) {
    s32 temp_a0;
    s32 temp_a1;

    temp_a1 = M2C_FIELD(arg1, s32 *, 0x120);
    if (temp_a1 != 0) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x120);
        if (temp_a0 != 0) {
            func_001692E8__func_001169E0(temp_a0, temp_a1);
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00116A18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00116A38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00116A60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00116A88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00116AA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00116AC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00116E60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00116F88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00117060);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00117148);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00117250);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001172D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001172E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00117428);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001174C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00117518);

s32 func_001175F8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x118) != 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00117608);

extern M2C_UNK func_00114BE8__func_00117628(s32 *) __asm__("func_00114BE8");
extern M2C_UNK func_00213650__func_00117628(void *) __asm__("func_00213650");
extern M2C_UNK func_00331508__func_00117628(M2C_UNK *) __asm__("func_00331508");
extern M2C_UNK func_003315F0__func_00117628(M2C_UNK *) __asm__("func_003315F0");
extern M2C_UNK D_003FDA90__func_00117628 __asm__("D_003FDA90");

void func_00117628(void *arg0, s32 *arg1) {
    func_00114BE8__func_00117628(arg1);
    func_00331508__func_00117628(&D_003FDA90__func_00117628);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x12C), s32 *, 0xD4) = (s32) *arg1;
    func_00213650__func_00117628(M2C_FIELD(arg0, void **, 0x12C));
    func_003315F0__func_00117628(&D_003FDA90__func_00117628);
}

extern M2C_UNK func_00213B20__func_00117690(s32) __asm__("func_00213B20");

void func_00117690(void *arg0) {
    func_00213B20__func_00117690(M2C_FIELD(arg0, s32 *, 0x12C));
}

extern M2C_UNK func_00117718__func_001176B0(s32, M2C_UNK, M2C_UNK) __asm__("func_00117718");
extern M2C_UNK func_00117820__func_001176B0(s32, M2C_UNK) __asm__("func_00117820");
extern M2C_UNK func_0021CE18__func_001176B0(M2C_UNK) __asm__("func_0021CE18");

void func_001176B0(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_0021CE18__func_001176B0(arg1);
    func_00117718__func_001176B0(arg0, arg1, arg2);
    func_00117820__func_001176B0(arg0, arg1);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00117710);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00117718);

INCLUDE_ASM("asm/nonmatchings/cod/000000", CModel_GetHierarchyTransform);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00117820);

extern M2C_UNK func_00169150__func_00117968(s32, M2C_UNK) __asm__("func_00169150");

void func_00117968(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x120);
    if (temp_a0 != 0) {
        func_00169150__func_00117968(temp_a0, 0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00117990);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00117A88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00117C60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00117C68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00117D00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00117DE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00117F60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00118078);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001180F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00118178);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00118288);

extern M2C_UNK func_0021CB50__func_001182F8(s32, s32, M2C_UNK) __asm__("func_0021CB50");

void func_001182F8(void *arg0, M2C_UNK arg1) {
    func_0021CB50__func_001182F8(M2C_FIELD(arg0, s32 *, 0x110) + 0x280, arg0 + 0x118, arg1);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", CModelContainer_Init);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00118410);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00118498);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001185D8);

void func_00118630(void *arg0, s32 arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x12C), s32 *, 0x110) = arg1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00118640);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00118648);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001186C0);

extern M2C_UNK func_00215178__func_00118720(s32, s32) __asm__("func_00215178");

void *func_00118720(void *arg0, s32 arg1) {
    void **temp_a1;
    void *temp_s1;

    temp_a1 = (arg1 * 4) + M2C_FIELD(arg0, s32 *, 0x118);
    temp_s1 = *temp_a1;
    *temp_a1 = NULL;
    if (temp_s1 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x114) = (s32) (M2C_FIELD(arg0, s32 *, 0x114) - 1);
        func_00215178__func_00118720(M2C_FIELD(arg0, s32 *, 0x11C), M2C_FIELD(temp_s1, s32 *, 0x12C));
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x12C), s32 *, 0x118) = 0;
    }
    return temp_s1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00118788);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00118800);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00118900);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001189E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00118AD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00118BF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00118D28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00118DF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001192E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00119410);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00119580);

extern M2C_UNK func_002232D8__func_00119630(s32, M2C_UNK) __asm__("func_002232D8");

void func_00119630(void *arg0) {
    func_002232D8__func_00119630(M2C_FIELD(arg0, s32 *, 0x1C), 4);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00119650);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00119678);

extern M2C_UNK func_001192E0__func_00119688() __asm__("func_001192E0");
extern M2C_UNK func_00119410__func_00119688() __asm__("func_00119410");

void func_00119688(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x20) = arg1;
    if (arg1 != 0) {
        func_00119410__func_00119688();
        return;
    }
    func_001192E0__func_00119688();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001196C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00119888);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001198B0);

extern M2C_UNK func_002123E8__func_00119970(s32) __asm__("func_002123E8");

void func_00119970(void *arg0) {
    func_002123E8__func_00119970(M2C_FIELD(arg0, s32 *, 0x14));
}

extern M2C_UNK func_002233A8__func_00119990(s32) __asm__("func_002233A8");

void func_00119990(void *arg0) {
    func_002233A8__func_00119990(M2C_FIELD(arg0, s32 *, 0x1C));
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001199B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001199C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00119AD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00119BB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00119BC8);

extern s32 D_00375AFC__func_00119BE8 __asm__("D_00375AFC");

void func_00119BE8(s32 arg0) {
    D_00375AFC__func_00119BE8 = arg0 | 0x400;
}

extern s32 D_00375AFC__func_00119BF8 __asm__("D_00375AFC");

void func_00119BF8(void) {
    D_00375AFC__func_00119BF8 = 0x400;
}

extern s32 D_00375B04__func_00119C08 __asm__("D_00375B04");

void func_00119C08(s32 arg0) {
    D_00375B04__func_00119C08 = arg0;
}

extern s32 D_00375B04__func_00119C18 __asm__("D_00375B04");

void func_00119C18(void) {
    D_00375B04__func_00119C18 = 0x400;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00119C28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00119C58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00119C88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00119C90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00119CD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00119D18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00119D50);

extern void *func_00119D18__func_00119E08(s32) __asm__("func_00119D18");
extern M2C_UNK func_0032CE38__func_00119E08(s32) __asm__("func_0032CE38");
extern M2C_UNK func_0032CEA8__func_00119E08(s32) __asm__("func_0032CEA8");
extern M2C_UNK func_0032CF68__func_00119E08(s32) __asm__("func_0032CF68");

void func_00119E08(s32 arg0) {
    s32 temp_s0;
    void *temp_v0;

    temp_s0 = arg0 & 0x7FFFFFFF;
    func_0032CEA8__func_00119E08(temp_s0);
    func_0032CE38__func_00119E08(temp_s0);
    temp_v0 = func_00119D18__func_00119E08(temp_s0);
    if (temp_v0 != NULL) {
        func_0032CF68__func_00119E08(M2C_FIELD(temp_v0, s32 *, 4));
        M2C_FIELD(temp_v0, s32 *, 4) = 0;
        M2C_FIELD(temp_v0, s32 *, 0) = -1;
    }
}

extern M2C_UNK func_0032D3B0__func_00119E68(s32) __asm__("func_0032D3B0");

void func_00119E68(s32 arg0) {
    func_0032D3B0__func_00119E68(arg0 & 0x7FFFFFFF);
}

extern M2C_UNK func_0032D2D8__func_00119E90(s32) __asm__("func_0032D2D8");

void func_00119E90(s32 arg0) {
    func_0032D2D8__func_00119E90(arg0 & 0x7FFFFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00119EB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00119F08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011A000);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011A128);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011A1E8);

extern M2C_UNK func_0011A2F8__func_0011A218() __asm__("func_0011A2F8");

void func_0011A218(void) {
    func_0011A2F8__func_0011A218();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011A238);

extern M2C_UNK func_0011A238__func_0011A288() __asm__("func_0011A238");

void func_0011A288(void) {
    func_0011A238__func_0011A288();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011A2A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011A2D0);

extern M2C_UNK func_00119EB8__func_0011A2F8() __asm__("func_00119EB8");

void func_0011A2F8(void) {
    func_00119EB8__func_0011A2F8();
}

extern M2C_UNK func_0011A2F8__func_0011A318() __asm__("func_0011A2F8");

void func_0011A318(void) {
    func_0011A2F8__func_0011A318();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011A338);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011A778);

void func_0011A7C0(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011A7C8);

extern M2C_UNK func_0011A7C8__func_0011A810(M2C_UNK, M2C_UNK) __asm__("func_0011A7C8");

void func_0011A810(void) {
    func_0011A7C8__func_0011A810(1, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011A830);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011A8B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011A8C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011A8F8);

extern M2C_UNK func_0011AA18__func_0011A9A8(M2C_UNK *, s32) __asm__("func_0011AA18");
extern M2C_UNK D_0043D5E8__func_0011A9A8 __asm__("D_0043D5E8");

void func_0011A9A8(s32 arg0) {
    func_0011AA18__func_0011A9A8(&D_0043D5E8__func_0011A9A8, arg0);
}

extern M2C_UNK func_0011AAC8__func_0011A9D0(M2C_UNK *) __asm__("func_0011AAC8");
extern M2C_UNK D_0043D5E8__func_0011A9D0 __asm__("D_0043D5E8");

void func_0011A9D0(void) {
    func_0011AAC8__func_0011A9D0(&D_0043D5E8__func_0011A9D0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011A9F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011AA18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011AAC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011ABA8);

extern M2C_UNK func_0011A9F0__func_0011ADF0(M2C_UNK *) __asm__("func_0011A9F0");
extern M2C_UNK D_0043D5E8__func_0011ADF0 __asm__("D_0043D5E8");

void func_0011ADF0(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            func_0011A9F0__func_0011ADF0(&D_0043D5E8__func_0011ADF0);
        }
    }
}

extern M2C_UNK func_0011ADF0__func_0011AE20(M2C_UNK, M2C_UNK) __asm__("func_0011ADF0");

void func_0011AE20(void) {
    func_0011ADF0__func_0011AE20(1, 0xFFFF);
}

extern s32 D_00375BE8__func_0011AE40 __asm__("D_00375BE8");

s32 func_0011AE40(void) {
    return D_00375BE8__func_0011AE40;
}

extern s32 D_00375BD8__func_0011AE50 __asm__("D_00375BD8");

s32 func_0011AE50(void) {
    return D_00375BD8__func_0011AE50;
}

extern s32 D_00375BDC__func_0011AE60 __asm__("D_00375BDC");

s32 func_0011AE60(void) {
    return D_00375BDC__func_0011AE60;
}

extern s32 D_00375BE0__func_0011AE70 __asm__("D_00375BE0");

s32 func_0011AE70(void) {
    return D_00375BE0__func_0011AE70;
}

extern s32 D_00375BE4__func_0011AE80 __asm__("D_00375BE4");

s32 func_0011AE80(void) {
    return D_00375BE4__func_0011AE80;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011AE90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011AEA0);

void func_0011AFA0(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011AFA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011AFF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011B258);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011B280);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011B2A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011B2D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011B2F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011B320);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011B3D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011B4D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011B5E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011B8D8);

extern M2C_UNK func_0011B8D8__func_0011B928(M2C_UNK, M2C_UNK) __asm__("func_0011B8D8");

void func_0011B928(void) {
    func_0011B8D8__func_0011B928(1, 0xFFFF);
}

extern M2C_UNK func_0011B8D8__func_0011B948(M2C_UNK, M2C_UNK) __asm__("func_0011B8D8");

void func_0011B948(void) {
    func_0011B8D8__func_0011B948(0, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011B968);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011B9F8);

extern M2C_UNK func_0011A318__func_0011BA40(s32) __asm__("func_0011A318");

void func_0011BA40(void *arg0) {
    s32 temp_a0;

    if (M2C_FIELD(arg0, s32 *, 0x14) == 1) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 4);
        if (temp_a0 != 0) {
            func_0011A318__func_0011BA40(temp_a0);
            M2C_FIELD(arg0, s32 *, 4) = 0;
        }
    }
}

void func_0011BA88(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 4);
}

void func_0011BA98(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
}

void func_0011BAB0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
}

void func_0011BAC8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011BAE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011BAE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011BB38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011BBB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011BC08);

s8 func_0011BCA8(void *arg0) {
    return *M2C_FIELD(arg0, s8 **, 0xC);
}

extern M2C_UNK func_0011BCE8__func_0011BCB8() __asm__("func_0011BCE8");

s8 func_0011BCB8(void *arg0) {
    s8 temp_s0;

    temp_s0 = *M2C_FIELD(arg0, s8 **, 0xC);
    func_0011BCE8__func_0011BCB8();
    return temp_s0;
}

void func_0011BCE8(void *arg0) {
    s32 temp_a1;
    s32 temp_v0;

    temp_a1 = M2C_FIELD(arg0, s32 *, 8);
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x10) + 1;
    M2C_FIELD(arg0, s32 *, 0x10) = temp_v0;
    if (temp_v0 >= temp_a1) {
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) (temp_a1 - 1);
    }
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 4) + M2C_FIELD(arg0, s32 *, 0x10));
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011BD20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011BD68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011BDE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011BDE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011BE00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011BE18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011BE90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011BF08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011BFA0);

extern M2C_UNK func_0011BCB8__func_0011C030() __asm__("func_0011BCB8");

void func_0011C030(void) {
    func_0011BCB8__func_0011C030();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011C050);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011C060);

extern M2C_UNK func_0011BCA8__func_0011C118() __asm__("func_0011BCA8");

void func_0011C118(void) {
    func_0011BCA8__func_0011C118();
}

s32 func_0011C138(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10) == (M2C_FIELD(arg0, s32 *, 8) - 1);
}

extern M2C_UNK func_0011C060__func_0011C150() __asm__("func_0011C060");

void func_0011C150(void) {
    func_0011C060__func_0011C150();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011C170);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011C1F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011C230);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011C328);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011C3C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011C448);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011C4F0);

void *func_0011C598(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011C5A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011C5F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011C6C8);

extern M2C_UNK func_0011BA88__func_0011C710(s32) __asm__("func_0011BA88");
extern M2C_UNK func_0011C170__func_0011C710(s32, M2C_UNK) __asm__("func_0011C170");
extern s32 func_0011C230__func_0011C710(s32, M2C_UNK, M2C_UNK) __asm__("func_0011C230");

s32 func_0011C710(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        func_0011BA88__func_0011C710(M2C_FIELD(arg0, s32 *, 4));
        if (func_0011C230__func_0011C710(M2C_FIELD(arg0, s32 *, 4), arg1, 0) != 0) {
            func_0011C170__func_0011C710(M2C_FIELD(arg0, s32 *, 4), arg2);
            return 1;
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

extern M2C_UNK func_0011BA88__func_0011C788(s32) __asm__("func_0011BA88");
extern s32 func_0011BFA0__func_0011C788(s32) __asm__("func_0011BFA0");
extern s32 func_0011C230__func_0011C788(s32, M2C_UNK, M2C_UNK) __asm__("func_0011C230");

s32 func_0011C788(void *arg0, M2C_UNK arg1, s32 *arg2) {
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        func_0011BA88__func_0011C788(M2C_FIELD(arg0, s32 *, 4));
        if (func_0011C230__func_0011C788(M2C_FIELD(arg0, s32 *, 4), arg1, 0) != 0) {
            *arg2 = func_0011BFA0__func_0011C788(M2C_FIELD(arg0, s32 *, 4));
            return 1;
        }
    }
    return 0;
}

s32 *func_0011C800(s32 *arg0) {
    *arg0 = 0;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011C810);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011C858);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011C940);

extern M2C_UNK func_0011A2F8__func_0011CA10(s32) __asm__("func_0011A2F8");

void func_0011CA10(void *arg0) {
    s32 temp_a0;

    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x84);
        if (temp_a0 != 0) {
            func_0011A2F8__func_0011CA10(temp_a0);
            M2C_FIELD(arg0, s32 *, 0x84) = 0;
        }
        M2C_FIELD(arg0, s32 *, 0) = 0;
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011CA58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011CC50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011CC58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011CCD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011CD28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011CD38);

extern M2C_UNK func_00133448__func_0011CE60() __asm__("func_00133448");

void func_0011CE60(void) {
    func_00133448__func_0011CE60();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011CE80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011CE90);

extern M2C_UNK func_0011CE90__func_0011CEC0(M2C_UNK, M2C_UNK) __asm__("func_0011CE90");

void func_0011CEC0(void) {
    func_0011CE90__func_0011CEC0(1, 0xFFFF);
}

extern M2C_UNK func_0011CE90__func_0011CEE0(M2C_UNK, M2C_UNK) __asm__("func_0011CE90");

void func_0011CEE0(void) {
    func_0011CE90__func_0011CEE0(0, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011CF00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011CF70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011D1C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011D310);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011D730);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011DBD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011DD80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011DD88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011E218);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011E338);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011E400);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011E498);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011E580);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011E5F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011E6E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011E750);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011E840);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011E8B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011E9B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011EA20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", CVertexInformation_Init);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011EC38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011ECB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011ECB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011ECF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011ECF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011EDF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011EE60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011EE68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011EEA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011EF08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011EF40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011EF48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011EFA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011EFC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011F028);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011F040);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011F120);

void func_0011F138(void) {
}

extern M2C_UNK func_0011F138__func_0011F140(M2C_UNK, M2C_UNK) __asm__("func_0011F138");

void func_0011F140(void) {
    func_0011F138__func_0011F140(1, 0xFFFF);
}

extern M2C_UNK func_0011F138__func_0011F160(M2C_UNK, M2C_UNK) __asm__("func_0011F138");

void func_0011F160(void) {
    func_0011F138__func_0011F160(0, 0xFFFF);
}

void *func_0011F180(void *arg0, void *arg1) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 0) + M2C_FIELD(arg1, f32 *, 0));
    M2C_FIELD(arg0, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 4) + M2C_FIELD(arg1, f32 *, 4));
    M2C_FIELD(arg0, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) + M2C_FIELD(arg1, f32 *, 8));
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011F1B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011F1D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011F208);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011F240);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011F270);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011F290);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011F2E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011F2E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011F3F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011F3F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011F448);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011F590);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011F5A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011F678);

extern s32 D_003FD570__func_0011F680 __asm__("D_003FD570");
extern s32 D_003FD574__func_0011F680 __asm__("D_003FD574");

s32 func_0011F680(s32 arg0) {
    D_003FD570__func_0011F680 = 0;
    D_003FD574__func_0011F680 = 0;
    return arg0;
}

extern M2C_UNK func_0011A2F8__func_0011F698(s32) __asm__("func_0011A2F8");
extern M2C_UNK func_00121030__func_0011F698() __asm__("func_00121030");
extern M2C_UNK func_003608A8__func_0011F698(M2C_UNK *) __asm__("func_003608A8");
extern M2C_UNK D_003B1068__func_0011F698 __asm__("D_003B1068");
extern s32 D_003FD570__func_0011F698 __asm__("D_003FD570");

void func_0011F698(s32 arg0, s32 arg1) {
    if (D_003FD570__func_0011F698 != 0) {
        func_003608A8__func_0011F698(&D_003B1068__func_0011F698);
        func_00121030__func_0011F698();
    }
    if (arg1 & 1) {
        func_0011A2F8__func_0011F698(arg0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011F6F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0011F708);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00121030);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001211F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00122530);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00123E58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00123E60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00124138);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00124230);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00124238);

extern s32 D_003FD660__func_001242B0 __asm__("D_003FD660");
extern s32 D_003FD664__func_001242B0 __asm__("D_003FD664");

void func_001242B0(s32 arg0) {
    if (arg0 & 1) {
        D_003FD660__func_001242B0 = 0;
    }
    if (arg0 & 2) {
        D_003FD664__func_001242B0 = 0x96000;
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001242E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00124CB8);

extern M2C_UNK func_00123E60__func_001254D8(M2C_UNK, M2C_UNK) __asm__("func_00123E60");

void func_001254D8(void) {
    func_00123E60__func_001254D8(1, 1);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001254F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001258E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00125BB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001271D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00127370);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00127460);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00127650);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00127848);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001278F0);

extern f32 D_003FD5B4__func_00127950 __asm__("D_003FD5B4");

f32 func_00127950(void) {
    return D_003FD5B4__func_00127950 * 100.0f;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00127968);

extern f32 D_003FD5BC__func_00127B10 __asm__("D_003FD5BC");

f32 func_00127B10(void) {
    return D_003FD5BC__func_00127B10 * 100.0f;
}

extern f32 D_003FD5AC__func_00127B28 __asm__("D_003FD5AC");

void func_00127B28(f32 arg0) {
    D_003FD5AC__func_00127B28 = arg0 / 100.0f;
}

extern f32 D_003FD5AC__func_00127B40 __asm__("D_003FD5AC");

f32 func_00127B40(void) {
    return D_003FD5AC__func_00127B40 * 100.0f;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00127B58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00129208);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00129528);

extern M2C_UNK func_0012C0A0__func_00129738(M2C_UNK) __asm__("func_0012C0A0");
extern s32 D_00376754__func_00129738 __asm__("D_00376754");
extern s32 D_00376758__func_00129738 __asm__("D_00376758");
extern s32 D_0037675C__func_00129738 __asm__("D_0037675C");
extern s32 D_003FD578__func_00129738 __asm__("D_003FD578");
extern s32 D_003FD588__func_00129738 __asm__("D_003FD588");

void func_00129738(void) {
    if (D_003FD578__func_00129738 == 0) {
        if (D_003FD588__func_00129738 == 3) {
            if (D_00376754__func_00129738 != 0) {
                func_0012C0A0__func_00129738(0);
                D_00376754__func_00129738 = 0;
            }
            if (D_00376758__func_00129738 != 0) {
                func_0012C0A0__func_00129738(1);
                D_00376758__func_00129738 = 0;
            }
            D_003FD588__func_00129738 = 0;
            D_0037675C__func_00129738 = 0;
        }
    }
}

extern M2C_UNK func_0012C048__func_001297C0(M2C_UNK, M2C_UNK) __asm__("func_0012C048");
extern s32 D_00376754__func_001297C0 __asm__("D_00376754");
extern s32 D_00376758__func_001297C0 __asm__("D_00376758");
extern s32 D_0037675C__func_001297C0 __asm__("D_0037675C");

void func_001297C0(void) {
    if (D_00376754__func_001297C0 != 0) {
        func_0012C048__func_001297C0(0, 0);
    }
    if (D_00376758__func_001297C0 != 0) {
        func_0012C048__func_001297C0(1, 0);
    }
    D_0037675C__func_001297C0 = 0;
}

extern M2C_UNK func_0012C048__func_00129810(M2C_UNK, M2C_UNK) __asm__("func_0012C048");
extern s32 D_00376754__func_00129810 __asm__("D_00376754");
extern s32 D_00376758__func_00129810 __asm__("D_00376758");
extern s32 D_0037675C__func_00129810 __asm__("D_0037675C");

void func_00129810(void) {
    if (D_00376754__func_00129810 != 0) {
        func_0012C048__func_00129810(0, 1);
    }
    if (D_00376758__func_00129810 != 0) {
        func_0012C048__func_00129810(1, 1);
    }
    D_0037675C__func_00129810 = 1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00129860);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00129900);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001299A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001299A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00129A30);

extern s32 D_003FD6E8__func_00129B20 __asm__("D_003FD6E8");

void func_00129B20(s32 arg0) {
    D_003FD6E8__func_00129B20 = arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00129B30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0012A120);

extern M2C_UNK func_0012A4F8__func_0012A408(M2C_UNK) __asm__("func_0012A4F8");
extern s32 D_003FD570__func_0012A408 __asm__("D_003FD570");
extern s32 D_003FD578__func_0012A408 __asm__("D_003FD578");
extern s32 D_003FD6EC__func_0012A408 __asm__("D_003FD6EC");

void func_0012A408(void) {
    if (D_003FD578__func_0012A408 == 0) {
        if (D_003FD570__func_0012A408 == 2) {
            func_0012A4F8__func_0012A408(0x11);
        }
        D_003FD6EC__func_0012A408 = 0;
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0012A450);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0012A468);

extern M2C_UNK func_0012A4F8__func_0012A4A8(M2C_UNK) __asm__("func_0012A4F8");
extern s32 D_003FD578__func_0012A4A8 __asm__("D_003FD578");

void func_0012A4A8(s32 arg0) {
    if (D_003FD578__func_0012A4A8 == 0) {
        if (arg0 != 0) {
            func_0012A4F8__func_0012A4A8(0x18);
            func_0012A4F8__func_0012A4A8(0xE);
            return;
        }
        func_0012A4F8__func_0012A4A8(0x10);
        func_0012A4F8__func_0012A4A8(0x19);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0012A4F8);

extern M2C_UNK func_0012A4F8__func_0012A568(M2C_UNK) __asm__("func_0012A4F8");
extern s32 D_003FD578__func_0012A568 __asm__("D_003FD578");

void func_0012A568(void) {
    if (D_003FD578__func_0012A568 == 0) {
        func_0012A4F8__func_0012A568(0xA);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0012A590);

extern M2C_UNK func_0010D500__func_0012A5E8(s32) __asm__("func_0010D500");
extern s32 D_003FD570__func_0012A5E8 __asm__("D_003FD570");
extern s32 D_003FD578__func_0012A5E8 __asm__("D_003FD578");
extern s32 D_003FD6F4__func_0012A5E8 __asm__("D_003FD6F4");

void func_0012A5E8(s32 arg0) {
    if (D_003FD578__func_0012A5E8 == 0) {
        if (D_003FD570__func_0012A5E8 == 2) {
            func_0010D500__func_0012A5E8(arg0);
        }
        D_003FD6F4__func_0012A5E8 = arg0;
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0012A638);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0012A7B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0012A980);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0012AAF0);

extern M2C_UNK func_0012ABF0__func_0012ABA0(f32) __asm__("func_0012ABF0");
extern f32 D_003FD6F8__func_0012ABA0 __asm__("D_003FD6F8");

void func_0012ABA0(f32 arg0) {
    func_0012ABF0__func_0012ABA0(D_003FD6F8__func_0012ABA0 + arg0);
}

extern M2C_UNK func_0012ABF0__func_0012ABC8(f32) __asm__("func_0012ABF0");
extern f32 D_003FD6F8__func_0012ABC8 __asm__("D_003FD6F8");

void func_0012ABC8(f32 arg0) {
    func_0012ABF0__func_0012ABC8(D_003FD6F8__func_0012ABC8 - arg0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0012ABF0);

extern M2C_UNK func_0012AD10__func_0012ACC0(f32) __asm__("func_0012AD10");
extern f32 D_003FD61C__func_0012ACC0 __asm__("D_003FD61C");

void func_0012ACC0(f32 arg0) {
    func_0012AD10__func_0012ACC0(D_003FD61C__func_0012ACC0 + arg0);
}

extern M2C_UNK func_0012AD10__func_0012ACE8(f32) __asm__("func_0012AD10");
extern f32 D_003FD61C__func_0012ACE8 __asm__("D_003FD61C");

void func_0012ACE8(f32 arg0) {
    func_0012AD10__func_0012ACE8(D_003FD61C__func_0012ACE8 - arg0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0012AD10);

extern M2C_UNK func_0012AE08__func_0012ADE0(f32) __asm__("func_0012AE08");
extern f32 D_003FD6C4__func_0012ADE0 __asm__("D_003FD6C4");

void func_0012ADE0(f32 arg0) {
    func_0012AE08__func_0012ADE0(D_003FD6C4__func_0012ADE0 + arg0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0012AE08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0012AEA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0012B070);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0012B2A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0012B828);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0012BA18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0012BA70);

extern s32 func_0010D110__func_0012BE80() __asm__("func_0010D110");

s32 func_0012BE80(void) {
    return func_0010D110__func_0012BE80() == 0;
}

extern M2C_UNK func_0010D008__func_0012BEA0() __asm__("func_0010D008");

void func_0012BEA0(void) {
    func_0010D008__func_0012BEA0();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0012BEC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0012BEC8);

extern s32 func_0010D838__func_0012BFB8(M2C_UNK, s8 *, M2C_UNK, M2C_UNK) __asm__("func_0010D838");
extern M2C_UNK func_0010D998__func_0012BFB8(M2C_UNK, M2C_UNK) __asm__("func_0010D998");
extern M2C_UNK func_0012C070__func_0012BFB8(M2C_UNK) __asm__("func_0012C070");
extern s32 D_003FD578__func_0012BFB8 __asm__("D_003FD578");

s32 func_0012BFB8(s8 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    if (D_003FD578__func_0012BFB8 == 0) {
        if (*arg0 != 0x2A) {
            func_0012C070__func_0012BFB8(arg1);
            func_0010D998__func_0012BFB8(arg1, 0);
            return func_0010D838__func_0012BFB8(arg1, arg0, 0, arg2);
        }
        func_0012C070__func_0012BFB8(arg1);
        goto block_4;
    }
block_4:
    return 1;
}

extern M2C_UNK func_0010D998__func_0012C048() __asm__("func_0010D998");
extern s32 D_003FD578__func_0012C048 __asm__("D_003FD578");

void func_0012C048(void) {
    if (D_003FD578__func_0012C048 == 0) {
        func_0010D998__func_0012C048();
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0012C070);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0012C098);

extern M2C_UNK func_0010D740__func_0012C0A0() __asm__("func_0010D740");

void func_0012C0A0(void) {
    func_0010D740__func_0012C0A0();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0012C0C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0012C0C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0012C140);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0012C220);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0012C2C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0012C300);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0012C330);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0012C448);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0012C480);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0012C9F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0012CFE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0012CFF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0012D0D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0012D310);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0012DBB8);

extern M2C_UNK func_00123E60__func_001300B8(M2C_UNK, M2C_UNK) __asm__("func_00123E60");

void func_001300B8(void) {
    func_00123E60__func_001300B8(1, 1);
}

extern M2C_UNK func_00123E60__func_001300D8(M2C_UNK, M2C_UNK) __asm__("func_00123E60");

void func_001300D8(void) {
    func_00123E60__func_001300D8(0, 1);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001300F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001301E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00130430);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00130578);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001307B8);

void func_001307D8(void) {
}

void func_001307E0(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001307E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00130920);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00130978);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00130B58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00130BB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00130CF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00130D30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00130DC8);

void func_00130E90(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00130E98);

extern M2C_UNK func_0012AAF0__func_001310D0(M2C_UNK) __asm__("func_0012AAF0");

void func_001310D0(void) {
    func_0012AAF0__func_001310D0(2);
}

void func_001310F0(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001310F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00131270);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00131380);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00131510);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00131640);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00131668);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00131690);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00131788);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001317C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00131898);

void func_00131980(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00131988);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00131B30);

extern M2C_UNK func_0012A4F8__func_00131DD8(M2C_UNK) __asm__("func_0012A4F8");
extern s32 D_00376728__func_00131DD8 __asm__("D_00376728");
extern s32 D_003FD588__func_00131DD8 __asm__("D_003FD588");

void func_00131DD8(void) {
    s32 temp_s0;

    temp_s0 = D_003FD588__func_00131DD8;
    if ((temp_s0 == 1) && (D_00376728__func_00131DD8 == 0)) {
        func_0012A4F8__func_00131DD8(0x14);
        D_00376728__func_00131DD8 = temp_s0;
    }
}

extern M2C_UNK func_0012A4F8__func_00131E28(M2C_UNK) __asm__("func_0012A4F8");
extern s32 D_00376728__func_00131E28 __asm__("D_00376728");
extern s32 D_003FD588__func_00131E28 __asm__("D_003FD588");

void func_00131E28(void) {
    if ((D_003FD588__func_00131E28 == 1) && (D_00376728__func_00131E28 != 0)) {
        func_0012A4F8__func_00131E28(0x15);
        D_00376728__func_00131E28 = 0;
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00131E70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00131EB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00132088);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001320B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00132200);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00132248);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00132380);

extern s32 D_003FD704__func_00132398 __asm__("D_003FD704");

s32 func_00132398(void) {
    return D_003FD704__func_00132398;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001323A8);

extern void *func_00101EF8__func_001323E0(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK D_003FDAA0__func_001323E0 __asm__("D_003FDAA0");

s32 func_001323E0(void) {
    void *temp_v0;

    temp_v0 = func_00101EF8__func_001323E0(&D_003FDAA0__func_001323E0, 9);
    if (temp_v0 != NULL) {
        return M2C_FIELD(temp_v0, s32 *, 0x2B0);
    }
    return 1;
}

extern s32 D_00444DD0__func_00132410 __asm__("D_00444DD0");

s32 func_00132410(void) {
    return D_00444DD0__func_00132410;
}

extern s32 D_00444E00__func_00132420 __asm__("D_00444E00");

s32 func_00132420(void) {
    return D_00444E00__func_00132420;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00132430);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00132460);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00132500);

extern void *func_00132500__func_00132590() __asm__("func_00132500");

s32 func_00132590(void) {
    return M2C_FIELD(func_00132500__func_00132590(), s32 *, 0xC);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001325B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001325B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001325E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00132610);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00132638);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00132778);

extern s32 func_00101EF8__func_001327D8(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_0010A878__func_001327D8(f32, s32, M2C_UNK) __asm__("func_0010A878");
extern M2C_UNK D_003FDAA0__func_001327D8 __asm__("D_003FDAA0");

void func_001327D8(f32 arg0) {
    func_0010A878__func_001327D8(arg0, func_00101EF8__func_001327D8(&D_003FDAA0__func_001327D8, 4), 1);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00132820);

extern s32 func_00132460__func_00132918() __asm__("func_00132460");
extern M2C_UNK func_001A2D78__func_00132918(f32, s32) __asm__("func_001A2D78");

void func_00132918(f32 arg0) {
    func_001A2D78__func_00132918(arg0, func_00132460__func_00132918());
}

extern s32 func_00132460__func_00132948() __asm__("func_00132460");
extern M2C_UNK func_001A2DC0__func_00132948(s32) __asm__("func_001A2DC0");

void func_00132948(void) {
    func_001A2DC0__func_00132948(func_00132460__func_00132948());
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00132970);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001329E0);

extern s32 func_00132460__func_00132A28(M2C_UNK) __asm__("func_00132460");
extern M2C_UNK func_001A2E18__func_00132A28(s32, s32, M2C_UNK) __asm__("func_001A2E18");

void func_00132A28(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_001A2E18__func_00132A28(func_00132460__func_00132A28(arg1), arg0, arg2);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00132A70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00132AB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00132AF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00132B00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00132B40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00132B48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00132BB8);

extern s32 func_00132460__func_00132C38() __asm__("func_00132460");
extern M2C_UNK func_001A3208__func_00132C38(s32) __asm__("func_001A3208");

void func_00132C38(void) {
    func_001A3208__func_00132C38(func_00132460__func_00132C38());
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00132C60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00132CA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00132CA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00132D60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00132E30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00133070);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001330A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00133180);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00133218);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001332C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00133330);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00133360);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00133388);

extern f32 D_00444DD4__func_00133390 __asm__("D_00444DD4");

void func_00133390(f32 arg0) {
    D_00444DD4__func_00133390 = arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001333A0);

void func_00133408(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00133410);

void func_00133440(void) {
}

extern M2C_UNK func_0011AFF0__func_00133448(M2C_UNK *) __asm__("func_0011AFF0");
extern s32 func_0011CE80__func_00133448(M2C_UNK *) __asm__("func_0011CE80");
extern M2C_UNK D_0043D600__func_00133448 __asm__("D_0043D600");
extern M2C_UNK D_0043D678__func_00133448 __asm__("D_0043D678");

void func_00133448(void) {
    if (func_0011CE80__func_00133448(&D_0043D678__func_00133448) != 0) {
        func_0011AFF0__func_00133448(&D_0043D600__func_00133448);
    }
}

void func_00133480(void *arg0, void *arg1) {
    M2C_FIELD(arg1, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0);
    M2C_FIELD(arg1, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 4);
    M2C_FIELD(arg1, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 8);
    M2C_FIELD(arg1, f32 *, 0xC) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
    M2C_FIELD(arg1, f32 *, 0x10) = (f32) M2C_FIELD(arg0, f32 *, 0x10);
    M2C_FIELD(arg1, f32 *, 0x14) = (f32) M2C_FIELD(arg0, f32 *, 0x14);
    M2C_FIELD(arg1, f32 *, 0x18) = (f32) M2C_FIELD(arg0, f32 *, 0x18);
    M2C_FIELD(arg1, f32 *, 0x1C) = (f32) M2C_FIELD(arg0, f32 *, 0x1C);
    M2C_FIELD(arg1, f32 *, 0x20) = (f32) M2C_FIELD(arg0, f32 *, 0x20);
    M2C_FIELD(arg1, f32 *, 0x24) = (f32) M2C_FIELD(arg0, f32 *, 0x24);
    M2C_FIELD(arg1, f32 *, 0x28) = (f32) M2C_FIELD(arg0, f32 *, 0x28);
    M2C_FIELD(arg1, f32 *, 0x2C) = (f32) M2C_FIELD(arg0, f32 *, 0x2C);
    M2C_FIELD(arg1, f32 *, 0x30) = (f32) M2C_FIELD(arg0, f32 *, 0x30);
    M2C_FIELD(arg1, f32 *, 0x34) = (f32) M2C_FIELD(arg0, f32 *, 0x34);
    M2C_FIELD(arg1, f32 *, 0x38) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(arg1, f32 *, 0x3C) = (f32) M2C_FIELD(arg0, f32 *, 0x3C);
}

void func_00133508(void *arg0, void *arg1) {
    M2C_FIELD(arg1, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0);
    M2C_FIELD(arg1, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 4);
    M2C_FIELD(arg1, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 8);
    M2C_FIELD(arg1, f32 *, 0xC) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
    M2C_FIELD(arg1, f32 *, 0x10) = (f32) M2C_FIELD(arg0, f32 *, 0x10);
    M2C_FIELD(arg1, f32 *, 0x14) = (f32) M2C_FIELD(arg0, f32 *, 0x14);
    M2C_FIELD(arg1, f32 *, 0x18) = (f32) M2C_FIELD(arg0, f32 *, 0x18);
    M2C_FIELD(arg1, f32 *, 0x1C) = (f32) M2C_FIELD(arg0, f32 *, 0x1C);
    M2C_FIELD(arg1, f32 *, 0x20) = (f32) M2C_FIELD(arg0, f32 *, 0x20);
    M2C_FIELD(arg1, f32 *, 0x24) = (f32) M2C_FIELD(arg0, f32 *, 0x24);
    M2C_FIELD(arg1, f32 *, 0x28) = (f32) M2C_FIELD(arg0, f32 *, 0x28);
    M2C_FIELD(arg1, f32 *, 0x2C) = (f32) M2C_FIELD(arg0, f32 *, 0x2C);
    M2C_FIELD(arg1, f32 *, 0x30) = (f32) M2C_FIELD(arg0, f32 *, 0x30);
    M2C_FIELD(arg1, f32 *, 0x34) = (f32) M2C_FIELD(arg0, f32 *, 0x34);
    M2C_FIELD(arg1, f32 *, 0x38) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(arg1, f32 *, 0x3C) = (f32) M2C_FIELD(arg0, f32 *, 0x3C);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00133590);

extern M2C_UNK func_00133590__func_001335B8(M2C_UNK, M2C_UNK) __asm__("func_00133590");

void func_001335B8(void) {
    func_00133590__func_001335B8(1, 0xFFFF);
}

void *func_001335D8(void *arg0) {
    s32 var_v1;
    void *var_v0;

    var_v1 = 2;
    var_v0 = arg0;
    do {
        M2C_FIELD(var_v0, s8 *, 0) = -1;
        var_v1 -= 1;
        M2C_FIELD(var_v0, s32 *, 4) = 0;
        M2C_FIELD(var_v0, s32 *, 0xC) = 0;
        var_v0 += 0x14;
    } while (var_v1 != -1);
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00133610);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00133690);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001336D8);

extern s32 func_0011A238__func_00133788(M2C_UNK, M2C_UNK *, M2C_UNK) __asm__("func_0011A238");
extern s32 func_001335D8__func_00133788(s32) __asm__("func_001335D8");
extern s32 D_00377268__func_00133788 __asm__("D_00377268");
extern M2C_UNK D_003B32B0__func_00133788 __asm__("D_003B32B0");

void func_00133788(void) {
    if (D_00377268__func_00133788 == 0) {
        D_00377268__func_00133788 = func_001335D8__func_00133788(func_0011A238__func_00133788(0x40, &D_003B32B0__func_00133788, 0));
    }
}

extern M2C_UNK func_00133610__func_001337D8(s32, M2C_UNK) __asm__("func_00133610");
extern s32 D_00377268__func_001337D8 __asm__("D_00377268");

void func_001337D8(void) {
    if (D_00377268__func_001337D8 != 0) {
        func_00133610__func_001337D8(D_00377268__func_001337D8, 3);
        D_00377268__func_001337D8 = 0;
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00133810);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00133848);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001338B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001338C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00133988);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001339D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001339E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00133A10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00133A88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00133AA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00133AC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00133AE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00133B18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00133B68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00133BF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00133D48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00133DA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00133DF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00133E28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00133E78);

s32 func_00133E80(s8 *arg0) {
    s32 var_a1;
    s8 *var_a0;
    u8 temp_v0;

    var_a0 = arg0;
    var_a1 = 0;
    if (*var_a0 != 0) {
        do {
            temp_v0 = *var_a0;
            var_a0 += 1;
            var_a1 = ((u32) (temp_v0 - 0x30) >= 0xAU) ? 1 : var_a1;
        } while (*var_a0 != 0);
    }
    return var_a1 ^ 1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00133EB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00134670);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001346C8);

extern M2C_UNK func_00164300__func_00134730(s32) __asm__("func_00164300");

s32 func_00134730(s32 arg0) {
    func_00164300__func_00134730(arg0 + 0xEB4);
    return 0;
}

extern M2C_UNK func_00163850__func_00134750(s32) __asm__("func_00163850");

s32 func_00134750(s32 arg0) {
    func_00163850__func_00134750(arg0 + 0xEB4);
    return 0;
}

extern M2C_UNK func_00163DA8__func_00134770(s32) __asm__("func_00163DA8");

s32 func_00134770(s32 arg0) {
    func_00163DA8__func_00134770(arg0 + 0xEB4);
    return 0;
}

extern M2C_UNK func_00163AE0__func_00134790(s32) __asm__("func_00163AE0");

void func_00134790(s32 arg0) {
    func_00163AE0__func_00134790(arg0 + 0xEB4);
}

extern M2C_UNK func_00164038__func_001347B0(s32) __asm__("func_00164038");

void func_001347B0(s32 arg0) {
    func_00164038__func_001347B0(arg0 + 0xEB4);
}

extern M2C_UNK func_00164588__func_001347D0(s32) __asm__("func_00164588");

void func_001347D0(s32 arg0) {
    func_00164588__func_001347D0(arg0 + 0xEB4);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001347F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00134900);

extern void *func_00101EF8__func_001349D8(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_00347680__func_001349D8(M2C_UNK *, M2C_UNK *, s32) __asm__("func_00347680");
extern M2C_UNK D_003B4008__func_001349D8 __asm__("D_003B4008");
extern M2C_UNK D_003FDAA0__func_001349D8 __asm__("D_003FDAA0");
extern M2C_UNK D_004E2520__func_001349D8 __asm__("D_004E2520");

M2C_UNK *func_001349D8(void) {
    void *temp_v0;

    temp_v0 = func_00101EF8__func_001349D8(&D_003FDAA0__func_001349D8, 0x18);
    if (M2C_FIELD(temp_v0, s32 *, 0x350) == 0) {
        func_00347680__func_001349D8(&D_004E2520__func_001349D8, &D_003B4008__func_001349D8, M2C_FIELD(M2C_FIELD(temp_v0, void **, 0), s32 *, 0x14));
    } else {
        func_00347680__func_001349D8(&D_004E2520__func_001349D8, &D_003B4008__func_001349D8, 0);
    }
    return &D_004E2520__func_001349D8;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00134A50);

extern s32 func_00101EF8__func_00134A88(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_00165EC0__func_00134A88(s32, M2C_UNK *, M2C_UNK *) __asm__("func_00165EC0");
extern M2C_UNK D_003B35C8__func_00134A88 __asm__("D_003B35C8");
extern M2C_UNK D_003B4010__func_00134A88 __asm__("D_003B4010");
extern M2C_UNK D_003FDAA0__func_00134A88 __asm__("D_003FDAA0");

s32 func_00134A88(void) {
    func_00165EC0__func_00134A88(func_00101EF8__func_00134A88(&D_003FDAA0__func_00134A88, 0xC), &D_003B35C8__func_00134A88, &D_003B4010__func_00134A88);
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00134AC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00134B28);

extern s32 func_00101EF8__func_00134B80(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_001E9DE0__func_00134B80(s32) __asm__("func_001E9DE0");
extern s32 func_001EB3D8__func_00134B80(s32) __asm__("func_001EB3D8");
extern M2C_UNK func_00347620__func_00134B80(M2C_UNK *, s32) __asm__("func_00347620");
extern s32 func_00348568__func_00134B80(s32) __asm__("func_00348568");
extern M2C_UNK D_003B4030__func_00134B80 __asm__("D_003B4030");
extern M2C_UNK D_003FDAA0__func_00134B80 __asm__("D_003FDAA0");

s32 func_00134B80(void *arg0, s32 *arg1) {
    s32 temp_v0;

    temp_v0 = func_00348568__func_00134B80(*arg1);
    func_00347620__func_00134B80(&D_003B4030__func_00134B80, temp_v0);
    M2C_FIELD(arg0, s32 *, 0xDA4) = temp_v0;
    func_001E9DE0__func_00134B80(func_001EB3D8__func_00134B80(func_00101EF8__func_00134B80(&D_003FDAA0__func_00134B80, 0x19)));
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00134BF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00134C98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00134D20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00134DE0);

extern s32 func_00101EF8__func_00134E28(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_00110330__func_00134E28(s32, M2C_UNK) __asm__("func_00110330");
extern M2C_UNK D_003FDAA0__func_00134E28 __asm__("D_003FDAA0");

s32 func_00134E28(void) {
    func_00110330__func_00134E28(func_00101EF8__func_00134E28(&D_003FDAA0__func_00134E28, 0x18), 1);
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00134E60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00134EA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00135750);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00135790);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00135860);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00135910);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00135990);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00135A10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00135A18);

extern void *func_00101EF8__func_00135A48(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_001103D0__func_00135A48(void *, s32) __asm__("func_001103D0");
extern s32 func_0011A2A8__func_00135A48(M2C_UNK) __asm__("func_0011A2A8");
extern s32 func_001CC3E8__func_00135A48(s32) __asm__("func_001CC3E8");
extern M2C_UNK D_003FDAA0__func_00135A48 __asm__("D_003FDAA0");

s32 func_00135A48(void) {
    void *temp_s0;

    temp_s0 = func_00101EF8__func_00135A48(&D_003FDAA0__func_00135A48, 0x18);
    func_001103D0__func_00135A48(temp_s0, func_001CC3E8__func_00135A48(func_0011A2A8__func_00135A48(4)));
    M2C_FIELD(temp_s0, s32 *, 0x350) = 1;
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00135AA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00135C50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00135CE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00135CE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00135DA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00135DF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00135E48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00135EF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00135F90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00135FF8);

extern M2C_UNK func_00164718__func_00136058() __asm__("func_00164718");

void func_00136058(void) {
    func_00164718__func_00136058();
}

extern M2C_UNK D_003B4088__func_00136078 __asm__("D_003B4088");

M2C_UNK *func_00136078(void) {
    return &D_003B4088__func_00136078;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00136088);

extern void *func_00101EF8__func_00136260(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_001036B8__func_00136260(void *, s32) __asm__("func_001036B8");
extern s32 func_00110200__func_00136260(void *) __asm__("func_00110200");
extern M2C_UNK func_00347680__func_00136260(M2C_UNK *, M2C_UNK *, s32, s32) __asm__("func_00347680");
extern M2C_UNK D_003B4100__func_00136260 __asm__("D_003B4100");
extern M2C_UNK D_003FDAA0__func_00136260 __asm__("D_003FDAA0");
extern M2C_UNK D_004E2520__func_00136260 __asm__("D_004E2520");

M2C_UNK *func_00136260(void) {
    s32 temp_v0_2;
    void *temp_s1;
    void *temp_v0;

    temp_v0 = func_00101EF8__func_00136260(&D_003FDAA0__func_00136260, 0x18);
    temp_s1 = M2C_FIELD(temp_v0, s32 *, 4) + 4;
    temp_v0_2 = func_00110200__func_00136260(temp_v0);
    func_001036B8__func_00136260(temp_s1, temp_v0_2);
    func_00347680__func_00136260(&D_004E2520__func_00136260, &D_003B4100__func_00136260, temp_v0_2, M2C_FIELD(temp_s1, s32 *, 0x4C));
    return &D_004E2520__func_00136260;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001362E0);

extern M2C_UNK func_00136B38__func_00136330(s32, M2C_UNK) __asm__("func_00136B38");

s32 func_00136330(s32 arg0) {
    func_00136B38__func_00136330(arg0 + 0xD40, 0);
    return 0;
}

extern M2C_UNK func_00137648__func_00136358(s32) __asm__("func_00137648");
extern s32 func_00330E00__func_00136358(M2C_UNK) __asm__("func_00330E00");
extern M2C_UNK func_00331B88__func_00136358(M2C_UNK) __asm__("func_00331B88");

void func_00136358(s32 arg0) {
    if (func_00330E00__func_00136358(0) != 0) {
        func_00331B88__func_00136358(0);
    }
    func_00137648__func_00136358(arg0 + 0xD40);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00136398);

extern M2C_UNK func_001367C0__func_001363E8(s32) __asm__("func_001367C0");

void func_001363E8(s32 arg0) {
    func_001367C0__func_001363E8(arg0 + 0xD0C);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00136408);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001367C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00136B28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00136B30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00136B38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00137648);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00138070);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00138078);

extern s32 func_00101EF8__func_00138080(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_0010E330__func_00138080(s32) __asm__("func_0010E330");
extern M2C_UNK func_001124E0__func_00138080(s32) __asm__("func_001124E0");
extern M2C_UNK D_003FDAA0__func_00138080 __asm__("D_003FDAA0");

s32 func_00138080(void) {
    s32 temp_v0;

    temp_v0 = func_00101EF8__func_00138080(&D_003FDAA0__func_00138080, 0x18);
    func_0010E330__func_00138080(temp_v0);
    func_001124E0__func_00138080(temp_v0);
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001380C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001381F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00138298);

extern void *func_00133810__func_00138340() __asm__("func_00133810");
extern M2C_UNK func_00347680__func_00138340(M2C_UNK *, M2C_UNK *, s32) __asm__("func_00347680");
extern M2C_UNK D_003B42B0__func_00138340 __asm__("D_003B42B0");
extern M2C_UNK D_004E2520__func_00138340 __asm__("D_004E2520");

M2C_UNK *func_00138340(void) {
    func_00347680__func_00138340(&D_004E2520__func_00138340, &D_003B42B0__func_00138340, M2C_FIELD(func_00133810__func_00138340(), s32 *, 0x3C));
    return &D_004E2520__func_00138340;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00138390);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001383F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00138528);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00138578);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00138868);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00138890);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00138920);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001389D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00138A60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00138B10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00138BA0);

extern M2C_UNK func_00347680__func_00138C50(M2C_UNK *, M2C_UNK *, u8) __asm__("func_00347680");
extern M2C_UNK D_003B49A8__func_00138C50 __asm__("D_003B49A8");
extern M2C_UNK D_004E2520__func_00138C50 __asm__("D_004E2520");

M2C_UNK *func_00138C50(void *arg0) {
    func_00347680__func_00138C50(&D_004E2520__func_00138C50, &D_003B49A8__func_00138C50, M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0xD0C), void **, 4), u8 *, 0x5E));
    return &D_004E2520__func_00138C50;
}

extern M2C_UNK func_00110348__func_00138C98(void *, M2C_UNK) __asm__("func_00110348");
extern s8 func_00348568__func_00138C98(s32) __asm__("func_00348568");

s32 func_00138C98(void *arg0, s32 *arg1) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xD0C), s32 *, 4) + 4;
    M2C_FIELD(temp_s0, s8 *, 0x5A) = func_00348568__func_00138C98(*arg1);
    func_00110348__func_00138C98(M2C_FIELD(arg0, void **, 0xD0C), 1);
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00138CE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00138D38);

extern M2C_UNK func_00347680__func_00138DC0(M2C_UNK *, M2C_UNK *, u8) __asm__("func_00347680");
extern M2C_UNK D_003B49A8__func_00138DC0 __asm__("D_003B49A8");
extern M2C_UNK D_004E2520__func_00138DC0 __asm__("D_004E2520");

M2C_UNK *func_00138DC0(void *arg0) {
    func_00347680__func_00138DC0(&D_004E2520__func_00138DC0, &D_003B49A8__func_00138DC0, M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0xD0C), void **, 4), u8 *, 0x5A));
    return &D_004E2520__func_00138DC0;
}

extern M2C_UNK func_00110348__func_00138E08(void *, M2C_UNK) __asm__("func_00110348");
extern s8 func_00348568__func_00138E08(s32) __asm__("func_00348568");

s32 func_00138E08(void *arg0, s32 *arg1) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xD0C), s32 *, 4) + 4;
    M2C_FIELD(temp_s0, s8 *, 0x56) = func_00348568__func_00138E08(*arg1);
    func_00110348__func_00138E08(M2C_FIELD(arg0, void **, 0xD0C), 1);
    return 0;
}

extern M2C_UNK func_00347680__func_00138E58(M2C_UNK *, M2C_UNK *, u8) __asm__("func_00347680");
extern M2C_UNK D_003B49A8__func_00138E58 __asm__("D_003B49A8");
extern M2C_UNK D_004E2520__func_00138E58 __asm__("D_004E2520");

M2C_UNK *func_00138E58(void *arg0) {
    func_00347680__func_00138E58(&D_004E2520__func_00138E58, &D_003B49A8__func_00138E58, M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0xD0C), void **, 4), u8 *, 0x5F));
    return &D_004E2520__func_00138E58;
}

extern M2C_UNK func_00110348__func_00138EA0(void *, M2C_UNK) __asm__("func_00110348");
extern s8 func_00348568__func_00138EA0(s32) __asm__("func_00348568");

s32 func_00138EA0(void *arg0, s32 *arg1) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xD0C), s32 *, 4) + 4;
    M2C_FIELD(temp_s0, s8 *, 0x5B) = func_00348568__func_00138EA0(*arg1);
    func_00110348__func_00138EA0(M2C_FIELD(arg0, void **, 0xD0C), 1);
    return 0;
}

extern M2C_UNK func_00347680__func_00138EF0(M2C_UNK *, M2C_UNK *, u8) __asm__("func_00347680");
extern M2C_UNK D_003B49A8__func_00138EF0 __asm__("D_003B49A8");
extern M2C_UNK D_004E2520__func_00138EF0 __asm__("D_004E2520");

M2C_UNK *func_00138EF0(void *arg0) {
    func_00347680__func_00138EF0(&D_004E2520__func_00138EF0, &D_003B49A8__func_00138EF0, M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0xD0C), void **, 4), u8 *, 0x5D));
    return &D_004E2520__func_00138EF0;
}

extern M2C_UNK func_00110348__func_00138F38(void *, M2C_UNK) __asm__("func_00110348");
extern s8 func_00348568__func_00138F38(s32) __asm__("func_00348568");

s32 func_00138F38(void *arg0, s32 *arg1) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xD0C), s32 *, 4) + 4;
    M2C_FIELD(temp_s0, s8 *, 0x59) = func_00348568__func_00138F38(*arg1);
    func_00110348__func_00138F38(M2C_FIELD(arg0, void **, 0xD0C), 1);
    return 0;
}

extern M2C_UNK func_00347680__func_00138F88(M2C_UNK *, M2C_UNK *, u8) __asm__("func_00347680");
extern M2C_UNK D_003B49A8__func_00138F88 __asm__("D_003B49A8");
extern M2C_UNK D_004E2520__func_00138F88 __asm__("D_004E2520");

M2C_UNK *func_00138F88(void *arg0) {
    func_00347680__func_00138F88(&D_004E2520__func_00138F88, &D_003B49A8__func_00138F88, M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0xD0C), void **, 4), u8 *, 0x5B));
    return &D_004E2520__func_00138F88;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00138FD0);

extern M2C_UNK func_00347680__func_00139160(M2C_UNK *, M2C_UNK *, u8) __asm__("func_00347680");
extern M2C_UNK D_003B49A8__func_00139160 __asm__("D_003B49A8");
extern M2C_UNK D_004E2520__func_00139160 __asm__("D_004E2520");

M2C_UNK *func_00139160(void *arg0) {
    func_00347680__func_00139160(&D_004E2520__func_00139160, &D_003B49A8__func_00139160, M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0xD0C), void **, 4), u8 *, 0x56));
    return &D_004E2520__func_00139160;
}

extern M2C_UNK func_00110348__func_001391A8(void *, M2C_UNK) __asm__("func_00110348");
extern s8 func_00348568__func_001391A8(s32) __asm__("func_00348568");

s32 func_001391A8(void *arg0, s32 *arg1) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xD0C), s32 *, 4) + 4;
    M2C_FIELD(temp_s0, s8 *, 0x52) = func_00348568__func_001391A8(*arg1);
    func_00110348__func_001391A8(M2C_FIELD(arg0, void **, 0xD0C), 1);
    return 0;
}

extern M2C_UNK func_00347680__func_001391F8(M2C_UNK *, M2C_UNK *, s16) __asm__("func_00347680");
extern M2C_UNK D_003B49A8__func_001391F8 __asm__("D_003B49A8");
extern M2C_UNK D_004E2520__func_001391F8 __asm__("D_004E2520");

M2C_UNK *func_001391F8(void *arg0) {
    func_00347680__func_001391F8(&D_004E2520__func_001391F8, &D_003B49A8__func_001391F8, M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0xD0C), void **, 4), s16 *, 0x54));
    return &D_004E2520__func_001391F8;
}

extern M2C_UNK func_00110348__func_00139240(void *, M2C_UNK) __asm__("func_00110348");
extern s16 func_00348568__func_00139240(s32) __asm__("func_00348568");

s32 func_00139240(void *arg0, s32 *arg1) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xD0C), s32 *, 4) + 4;
    M2C_FIELD(temp_s0, s16 *, 0x50) = func_00348568__func_00139240(*arg1);
    func_00110348__func_00139240(M2C_FIELD(arg0, void **, 0xD0C), 1);
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00139290);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00139300);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00139348);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00139398);

extern M2C_UNK func_00101EF8__func_00139480(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_00129900__func_00139480(M2C_UNK, M2C_UNK, M2C_UNK) __asm__("func_00129900");
extern s32 D_003FD5D8__func_00139480 __asm__("D_003FD5D8");
extern M2C_UNK D_003FDAA0__func_00139480 __asm__("D_003FDAA0");

s32 func_00139480(void *arg0) {
    func_00101EF8__func_00139480(&D_003FDAA0__func_00139480, 3);
    func_00129900__func_00139480(0, -1, 0);
    M2C_FIELD(arg0, s32 *, 0xD0C) = (s32) D_003FD5D8__func_00139480;
    return 0;
}

extern M2C_UNK func_00101EF8__func_001394D0(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_001254D8__func_001394D0() __asm__("func_001254D8");
extern M2C_UNK D_003FDAA0__func_001394D0 __asm__("D_003FDAA0");

s32 func_001394D0(void) {
    func_00101EF8__func_001394D0(&D_003FDAA0__func_001394D0, 3);
    func_001254D8__func_001394D0();
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00139500);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00139508);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00139550);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001395E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00139608);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001398A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013A048);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013A400);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013A500);

extern M2C_UNK func_00261E78__func_0013A5A0() __asm__("func_00261E78");

s32 func_0013A5A0(void) {
    func_00261E78__func_0013A5A0();
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013A5C0);

extern M2C_UNK func_00347680__func_0013A640(M2C_UNK *, M2C_UNK *, M2C_UNK) __asm__("func_00347680");
extern M2C_UNK D_003B54D8__func_0013A640 __asm__("D_003B54D8");
extern M2C_UNK D_004E2520__func_0013A640 __asm__("D_004E2520");

M2C_UNK *func_0013A640(void) {
    func_00347680__func_0013A640(&D_004E2520__func_0013A640, &D_003B54D8__func_0013A640, 0);
    return &D_004E2520__func_0013A640;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013A680);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013AE88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013B0D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013B108);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013B110);

extern M2C_UNK func_00158358__func_0013B118(s32, s32) __asm__("func_00158358");
extern s32 func_00348568__func_0013B118(s32) __asm__("func_00348568");

s32 func_0013B118(void *arg0, s32 *arg1) {
    s32 temp_a0;
    s32 temp_v0;

    temp_v0 = func_00348568__func_0013B118(*arg1);
    temp_a0 = M2C_FIELD(arg0, s32 *, 0xD0C);
    if (temp_a0 != 0) {
        func_00158358__func_0013B118(temp_a0, temp_v0);
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013B158);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013B180);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013B9A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013BA08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013BAC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013BB28);

extern M2C_UNK func_00158330__func_0013BC10(s32, s32) __asm__("func_00158330");
extern s32 func_00348568__func_0013BC10(s32) __asm__("func_00348568");

s32 func_0013BC10(void *arg0, s32 *arg1) {
    s32 temp_a0;
    s32 temp_v0;

    temp_v0 = func_00348568__func_0013BC10(*arg1);
    temp_a0 = M2C_FIELD(arg0, s32 *, 0xD0C);
    if (temp_a0 != 0) {
        func_00158330__func_0013BC10(temp_a0, temp_v0);
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013BC50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013BCF0);

extern M2C_UNK func_00108708__func_0013C350(M2C_UNK *, M2C_UNK) __asm__("func_00108708");
extern M2C_UNK func_00158338__func_0013C350(s32, M2C_UNK) __asm__("func_00158338");
extern M2C_UNK D_003FDB48__func_0013C350 __asm__("D_003FDB48");

s32 func_0013C350(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xD0C);
    if (temp_a0 != 0) {
        func_00158338__func_0013C350(temp_a0, 1);
    }
    func_00108708__func_0013C350(&D_003FDB48__func_0013C350, 1);
    return 0;
}

extern M2C_UNK func_00158338__func_0013C390(s32, M2C_UNK) __asm__("func_00158338");

s32 func_0013C390(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xD0C);
    if (temp_a0 != 0) {
        func_00158338__func_0013C390(temp_a0, 0);
    }
    return 0;
}

extern M2C_UNK func_00108708__func_0013C3C0(M2C_UNK *, M2C_UNK) __asm__("func_00108708");
extern M2C_UNK D_003FDB48__func_0013C3C0 __asm__("D_003FDB48");

s32 func_0013C3C0(void) {
    func_00108708__func_0013C3C0(&D_003FDB48__func_0013C3C0, 1);
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013C3E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013C448);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013C490);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013C550);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013C6E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013C8F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013C9F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013CD20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013CEC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013CF28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013CF30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013CFB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013D020);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013D0A0);

extern M2C_UNK func_00159008__func_0013D130(s32, s32) __asm__("func_00159008");
extern s32 func_00348568__func_0013D130(s32) __asm__("func_00348568");

s32 func_0013D130(void *arg0, s32 *arg1) {
    func_00159008__func_0013D130(M2C_FIELD(arg0, s32 *, 0xD5C), func_00348568__func_0013D130(*arg1));
    return 0;
}

extern s32 func_00101EF8__func_0013D168(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_00168228__func_0013D168(s32) __asm__("func_00168228");
extern M2C_UNK D_003FDAA0__func_0013D168 __asm__("D_003FDAA0");

s32 func_0013D168(void) {
    func_00168228__func_0013D168(func_00101EF8__func_0013D168(&D_003FDAA0__func_0013D168, 0xD));
    return 0;
}

extern s32 func_00101EF8__func_0013D198(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_00168390__func_0013D198(s32) __asm__("func_00168390");
extern M2C_UNK D_003FDAA0__func_0013D198 __asm__("D_003FDAA0");

s32 func_0013D198(void) {
    func_00168390__func_0013D198(func_00101EF8__func_0013D198(&D_003FDAA0__func_0013D198, 0xD));
    return 0;
}

extern s32 func_00101EF8__func_0013D1C8(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_001684C8__func_0013D1C8(s32) __asm__("func_001684C8");
extern M2C_UNK D_003FDAA0__func_0013D1C8 __asm__("D_003FDAA0");

s32 func_0013D1C8(void) {
    func_001684C8__func_0013D1C8(func_00101EF8__func_0013D1C8(&D_003FDAA0__func_0013D1C8, 0xD));
    return 0;
}

extern s32 func_00101EF8__func_0013D1F8(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_0010E3E8__func_0013D1F8(s32) __asm__("func_0010E3E8");
extern M2C_UNK func_00168870__func_0013D1F8(s32) __asm__("func_00168870");
extern M2C_UNK D_003FDAA0__func_0013D1F8 __asm__("D_003FDAA0");

s32 func_0013D1F8(void) {
    func_00168870__func_0013D1F8(func_00101EF8__func_0013D1F8(&D_003FDAA0__func_0013D1F8, 0xD));
    func_0010E3E8__func_0013D1F8(func_00101EF8__func_0013D1F8(&D_003FDAA0__func_0013D1F8, 0x18));
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013D248);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013D278);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013D280);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013D288);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013D580);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013D900);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013D948);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013D978);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013D9E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013DA18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013DA78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013DAD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013DB58);

extern M2C_UNK func_00141938__func_0013DBD8(s32, s32) __asm__("func_00141938");
extern s32 func_00348568__func_0013DBD8(s32) __asm__("func_00348568");

void func_0013DBD8(void *arg0, s32 *arg1) {
    func_00141938__func_0013DBD8(M2C_FIELD(arg0, s32 *, 0xF18), func_00348568__func_0013DBD8(*arg1));
}

extern M2C_UNK func_00141278__func_0013DC10(s32, s32) __asm__("func_00141278");
extern s32 func_00348568__func_0013DC10(s32) __asm__("func_00348568");

void func_0013DC10(void *arg0, s32 *arg1) {
    func_00141278__func_0013DC10(M2C_FIELD(arg0, s32 *, 0xF18), func_00348568__func_0013DC10(*arg1));
}

extern M2C_UNK func_00347680__func_0013DC48(M2C_UNK *, M2C_UNK *, s8) __asm__("func_00347680");
extern M2C_UNK D_003B6880__func_0013DC48 __asm__("D_003B6880");
extern M2C_UNK D_004E2520__func_0013DC48 __asm__("D_004E2520");

M2C_UNK *func_0013DC48(void *arg0) {
    func_00347680__func_0013DC48(&D_004E2520__func_0013DC48, &D_003B6880__func_0013DC48, M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0xD0C), void **, 4), s8 *, 0x14DC));
    return &D_004E2520__func_0013DC48;
}

extern M2C_UNK func_00142018__func_0013DC90(s32, s32) __asm__("func_00142018");
extern s32 func_00348568__func_0013DC90(s32) __asm__("func_00348568");

void func_0013DC90(void *arg0, s32 *arg1) {
    func_00142018__func_0013DC90(M2C_FIELD(arg0, s32 *, 0xF18), func_00348568__func_0013DC90(*arg1));
}

extern M2C_UNK func_00142590__func_0013DCC8(s32, s32) __asm__("func_00142590");
extern s32 func_00348568__func_0013DCC8(s32) __asm__("func_00348568");

void func_0013DCC8(void *arg0, s32 *arg1) {
    func_00142590__func_0013DCC8(M2C_FIELD(arg0, s32 *, 0xF18), func_00348568__func_0013DCC8(*arg1));
}

extern M2C_UNK func_00142B40__func_0013DD00(s32, s32, M2C_UNK) __asm__("func_00142B40");
extern s32 func_00348568__func_0013DD00(s32) __asm__("func_00348568");

void func_0013DD00(void *arg0, s32 *arg1) {
    func_00142B40__func_0013DD00(M2C_FIELD(arg0, s32 *, 0xF18), func_00348568__func_0013DD00(*arg1), 0);
}

extern M2C_UNK func_00144138__func_0013DD38(s32, s32) __asm__("func_00144138");
extern s32 func_00348568__func_0013DD38(s32) __asm__("func_00348568");

void func_0013DD38(void *arg0, s32 *arg1) {
    func_00144138__func_0013DD38(M2C_FIELD(arg0, s32 *, 0xF18), func_00348568__func_0013DD38(*arg1));
}

extern M2C_UNK func_00143DC8__func_0013DD70(s32) __asm__("func_00143DC8");

void func_0013DD70(void *arg0) {
    func_00143DC8__func_0013DD70(M2C_FIELD(arg0, s32 *, 0xF18));
}

extern M2C_UNK func_00143E10__func_0013DD90(s32, s32) __asm__("func_00143E10");
extern s32 func_00348568__func_0013DD90(s32) __asm__("func_00348568");

void func_0013DD90(void *arg0, s32 *arg1) {
    func_00143E10__func_0013DD90(M2C_FIELD(arg0, s32 *, 0xF18), func_00348568__func_0013DD90(*arg1));
}

extern s32 func_00348568__func_0013DDC8(s32) __asm__("func_00348568");

s32 func_0013DDC8(void *arg0, s32 *arg1) {
    M2C_FIELD(arg0, s32 *, 0xF1C) = (s32) (func_00348568__func_0013DDC8(*arg1) != 0);
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013DE00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013DE58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013E418);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013E548);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013E8F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013ED98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013F068);

s32 func_0013F070(s32 *arg0, s32 *arg1) {
    return *arg0 - *arg1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013F080);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013F4F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013FB18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013FD90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013FD98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0013FE28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00140308);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001407E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00141278);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00141938);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00142018);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00142590);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00142B40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00143390);

extern M2C_UNK func_00129900__func_00143DC8(M2C_UNK, M2C_UNK, M2C_UNK) __asm__("func_00129900");
extern M2C_UNK func_0012A408__func_00143DC8() __asm__("func_0012A408");
extern M2C_UNK D_003B6A40__func_00143DC8 __asm__("D_003B6A40");

M2C_UNK *func_00143DC8(void *arg0) {
    func_00129900__func_00143DC8(0, -1, 0);
    func_0012A408__func_00143DC8();
    *M2C_FIELD(arg0, s32 **, 0x44) = 0;
    return &D_003B6A40__func_00143DC8;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00143E10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00144138);

extern s32 D_004E2F2C__func_001444B0 __asm__("D_004E2F2C");

s32 func_001444B0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = 0xA;
    D_004E2F2C__func_001444B0 = arg1 - 0x1D;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001444D0);

extern M2C_UNK D_004E2F28__func_001448F8 __asm__("D_004E2F28");

s32 func_001448F8(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 4) = 3;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(&D_004E2F28__func_001448F8, s32 *, 0) = (s32) (arg1 + 1);
    M2C_FIELD(&D_004E2F28__func_001448F8, s32 *, 4) = (s32) (arg2 - 0x1D);
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00144928);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00144F80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001450F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001451C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00145560);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00145998);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00145AD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00145ED8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00146000);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00146008);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00146530);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00146F40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001474B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001474C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001475D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00147650);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00147778);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00147958);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00147D30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00147F00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00147F28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00147F60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001483E0);

extern M2C_UNK func_0014A5B0__func_00148408(s32, M2C_UNK, M2C_UNK) __asm__("func_0014A5B0");
extern M2C_UNK func_001DD2D8__func_00148408() __asm__("func_001DD2D8");
extern M2C_UNK func_00261838__func_00148408(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK) __asm__("func_00261838");
extern s32 func_00348568__func_00148408(s32) __asm__("func_00348568");
extern M2C_UNK D_003B7748__func_00148408 __asm__("D_003B7748");

s32 func_00148408(s32 arg0, s32 *arg1) {
    if ((func_00348568__func_00148408(*arg1) << 0x18) == 0) {
        func_00261838__func_00148408(&D_003B7748__func_00148408, 0, 0, 0);
        func_001DD2D8__func_00148408();
    } else {
        func_0014A5B0__func_00148408(arg0, 0, 0);
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00148478);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00148500);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00148568);

extern M2C_UNK func_001DDC40__func_001485D8() __asm__("func_001DDC40");
extern M2C_UNK func_00261838__func_001485D8(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK) __asm__("func_00261838");
extern M2C_UNK D_003B7748__func_001485D8 __asm__("D_003B7748");

s32 func_001485D8(void) {
    func_00261838__func_001485D8(&D_003B7748__func_001485D8, 0, 0, 0);
    func_001DDC40__func_001485D8();
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00148610);

extern M2C_UNK func_001DDC40__func_00148690() __asm__("func_001DDC40");
extern M2C_UNK func_00261838__func_00148690(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK) __asm__("func_00261838");
extern M2C_UNK D_003B7748__func_00148690 __asm__("D_003B7748");

s32 func_00148690(void) {
    func_00261838__func_00148690(&D_003B7748__func_00148690, 0, 0, 0);
    func_001DDC40__func_00148690();
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001486C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00148720);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00148858);

extern void *func_00101EF8__func_001488D8(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_00106C80__func_001488D8(s32) __asm__("func_00106C80");
extern M2C_UNK func_00147958__func_001488D8(M2C_UNK) __asm__("func_00147958");
extern M2C_UNK D_003FDAA0__func_001488D8 __asm__("D_003FDAA0");

s32 func_001488D8(void) {
    func_00106C80__func_001488D8(M2C_FIELD(func_00101EF8__func_001488D8(&D_003FDAA0__func_001488D8, 0x18), s32 *, 4));
    func_00147958__func_001488D8(1);
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00148910);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00148998);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001489F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00148AF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00148B50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00148BD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00148C28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00149D88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00149E10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00149EA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014A0A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014A108);

extern M2C_UNK func_001DEC28__func_0014A180() __asm__("func_001DEC28");
extern M2C_UNK func_00261838__func_0014A180(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK) __asm__("func_00261838");
extern M2C_UNK D_003B7748__func_0014A180 __asm__("D_003B7748");

s32 func_0014A180(void) {
    func_00261838__func_0014A180(&D_003B7748__func_0014A180, 0, 0, 0);
    func_001DEC28__func_0014A180();
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014A1B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014A3B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014A3F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014A4A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014A558);

extern M2C_UNK func_001DD078__func_0014A5B0() __asm__("func_001DD078");
extern M2C_UNK func_00261838__func_0014A5B0(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK) __asm__("func_00261838");
extern M2C_UNK D_003B7748__func_0014A5B0 __asm__("D_003B7748");

s32 func_0014A5B0(void) {
    func_00261838__func_0014A5B0(&D_003B7748__func_0014A5B0, 0, 0, 0);
    func_001DD078__func_0014A5B0();
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014A5E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014A610);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014A728);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014A7A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014A7A8);

extern M2C_UNK func_001DE868__func_0014A7B0() __asm__("func_001DE868");

s32 func_0014A7B0(void) {
    func_001DE868__func_0014A7B0();
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014A7D0);

extern M2C_UNK func_00261838__func_0014A818(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK) __asm__("func_00261838");
extern M2C_UNK D_003B7748__func_0014A818 __asm__("D_003B7748");
extern M2C_UNK D_003B77D0__func_0014A818 __asm__("D_003B77D0");

s32 func_0014A818(void) {
    func_00261838__func_0014A818(&D_003B7748__func_0014A818, 0, 0, 0);
    func_00261838__func_0014A818(&D_003B77D0__func_0014A818, 0, 0, 0);
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014A860);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014A8D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014ABA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014AF38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014B140);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014B260);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014B380);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014B408);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014B688);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014B7C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014BC28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014BD78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014BFB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014C0F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014C300);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014C508);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014C590);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014C970);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014CAB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014CB50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014CE68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014CEA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014CED8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014CF10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014D548);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014D668);

extern s32 func_00101EF8__func_0014D6C0(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_00165F30__func_0014D6C0(s32) __asm__("func_00165F30");
extern M2C_UNK D_003FDAA0__func_0014D6C0 __asm__("D_003FDAA0");

s32 func_0014D6C0(void) {
    s32 temp_v0;

    temp_v0 = func_00101EF8__func_0014D6C0(&D_003FDAA0__func_0014D6C0, 0xC);
    if (temp_v0 != 0) {
        func_00165F30__func_0014D6C0(temp_v0);
    }
    return 0;
}

extern s32 func_00101EF8__func_0014D6F8(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern s32 D_0037679C__func_0014D6F8 __asm__("D_0037679C");
extern s32 D_003767A0__func_0014D6F8 __asm__("D_003767A0");
extern M2C_UNK D_003FDAA0__func_0014D6F8 __asm__("D_003FDAA0");

s32 func_0014D6F8(void) {
    if ((func_00101EF8__func_0014D6F8(&D_003FDAA0__func_0014D6F8, 3) != 0) && (D_0037679C__func_0014D6F8 != 0)) {
        D_003767A0__func_0014D6F8 = 1;
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014D740);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014D748);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014D8D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014D8F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014D998);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014DAA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014DB40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014DCE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014DEB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014E190);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014E430);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014E4A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014E4A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014E4B0);

extern M2C_UNK func_0014E4B0__func_0014E500(M2C_UNK, M2C_UNK) __asm__("func_0014E4B0");

void func_0014E500(void) {
    func_0014E4B0__func_0014E500(1, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014E520);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014E598);

void func_0014E770(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x48) > 0) {
        M2C_FIELD(arg0, s32 *, 0x40) = arg1;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014E790);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014E8F8);

extern s32 func_0011A288__func_0014E9B0(s32, M2C_UNK *, M2C_UNK) __asm__("func_0011A288");
extern M2C_UNK D_003B8B70__func_0014E9B0 __asm__("D_003B8B70");

void func_0014E9B0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x48) = arg1;
    M2C_FIELD(arg0, s32 *, 0x50) = func_0011A288__func_0014E9B0(arg1 * 0x94, &D_003B8B70__func_0014E9B0, 0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014E9F8);

void *func_0014EAC0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 1;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014EAD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014EB20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014EB28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014EBB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014EC58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014EC98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014EDC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014EEB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014F268);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014F278);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014F598);

void func_0014F5A0(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014F5A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014F628);

extern M2C_UNK func_002AA0B8__func_0014F778(M2C_UNK) __asm__("func_002AA0B8");
extern M2C_UNK func_002AA0E0__func_0014F778(M2C_UNK) __asm__("func_002AA0E0");

void func_0014F778(void *arg0, s32 arg1) {
    if (arg1 == 0) {
        func_002AA0B8__func_0014F778(0x400);
        func_002AA0E0__func_0014F778(0x500);
    }
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
}

void *func_0014F7C0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xA0) = 0;
    M2C_FIELD(arg0, s32 *, 0xA4) = 0;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014F7D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014F7F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014FAC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014FB08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014FBE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014FC48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014FE50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014FEA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0014FED0);

extern s32 func_00101EF8__func_00150040(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_0010BE78__func_00150040(s32, s32, M2C_UNK) __asm__("func_0010BE78");
extern M2C_UNK func_0010BED0__func_00150040(s32, s32) __asm__("func_0010BED0");
extern M2C_UNK D_003FDAA0__func_00150040 __asm__("D_003FDAA0");

void func_00150040(void *arg0, s32 arg1) {
    s32 temp_a0;

    temp_a0 = func_00101EF8__func_00150040(&D_003FDAA0__func_00150040, 6);
    if ((M2C_FIELD(arg0, s32 *, 0x30) != 0) && (arg1 != 0)) {
        func_0010BE78__func_00150040(temp_a0, M2C_FIELD(arg0, s32 *, 0x14), 7);
        return;
    }
    func_0010BED0__func_00150040(temp_a0, M2C_FIELD(arg0, s32 *, 0x14));
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001500B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00150190);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00150228);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001502B8);

void func_00150418(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00150420);

extern s32 func_00101EF8__func_001504D0(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_001BF3F8__func_001504D0(s32, M2C_UNK *) __asm__("func_001BF3F8");
extern M2C_UNK D_003B94F8__func_001504D0 __asm__("D_003B94F8");
extern M2C_UNK D_003FDAA0__func_001504D0 __asm__("D_003FDAA0");

void func_001504D0(s32 *arg0) {
    func_001BF3F8__func_001504D0(func_00101EF8__func_001504D0(&D_003FDAA0__func_001504D0, 0xA), &D_003B94F8__func_001504D0);
    *arg0 = -1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00150518);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00150590);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00150708);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00150728);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00150730);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00150780);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001507B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001507F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001508C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001509B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00150A58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00150B20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00150C28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00150E78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00151040);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001511D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00151328);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00151330);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00151350);

extern M2C_UNK func_001504D0__func_00151398(s32) __asm__("func_001504D0");

void func_00151398(s32 arg0) {
    func_001504D0__func_00151398(arg0 + 0x3C);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001513B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00151440);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001514F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00151558);

extern M2C_UNK func_00151558__func_001515A8(M2C_UNK, M2C_UNK) __asm__("func_00151558");

void func_001515A8(void) {
    func_00151558__func_001515A8(1, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001515C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00151618);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00151668);

extern M2C_UNK func_001517A0__func_00151750() __asm__("func_001517A0");

s32 func_00151750(s32 arg0) {
    func_001517A0__func_00151750();
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00151778);

extern M2C_UNK func_003312D8__func_001517A0(s32, M2C_UNK) __asm__("func_003312D8");

void func_001517A0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    func_003312D8__func_001517A0(arg0 + 8, 8);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001517D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00151B18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00151BA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00151C18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00152520);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001525F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00152658);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00152688);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00152718);

void *func_00152758(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    return arg0;
}

extern M2C_UNK func_0011A2F8__func_00152778(s32 *) __asm__("func_0011A2F8");
extern M2C_UNK func_00152B90__func_00152778() __asm__("func_00152B90");

void func_00152778(s32 *arg0, s32 arg1) {
    if (*arg0 != 0) {
        func_00152B90__func_00152778();
        *arg0 = 0;
    }
    if (arg1 & 1) {
        func_0011A2F8__func_00152778(arg0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001527D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00152B90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00152CF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00152E70);

extern M2C_UNK func_00113380__func_00153020(s32) __asm__("func_00113380");
extern M2C_UNK func_00115540__func_00153020(s32) __asm__("func_00115540");
extern M2C_UNK func_0011A2F8__func_00153020(s32) __asm__("func_0011A2F8");
extern M2C_UNK func_0011A318__func_00153020(s32) __asm__("func_0011A318");

void func_00153020(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;

    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        if (M2C_FIELD(arg0, s32 *, 0x14) != 0) {
            func_00115540__func_00153020(M2C_FIELD(arg0, s32 *, 4));
            func_00113380__func_00153020(M2C_FIELD(arg0, s32 *, 0x14));
            temp_a0 = M2C_FIELD(arg0, s32 *, 0x14);
            if (temp_a0 != 0) {
                func_0011A2F8__func_00153020(temp_a0);
            }
            temp_a0_2 = M2C_FIELD(arg0, s32 *, 0x1C);
            M2C_FIELD(arg0, s32 *, 0x14) = 0;
            if (temp_a0_2 != 0) {
                func_0011A318__func_00153020(temp_a0_2);
            }
            M2C_FIELD(arg0, s32 *, 0x18) = 0;
            M2C_FIELD(arg0, s32 *, 0x1C) = 0;
            M2C_FIELD(arg0, s32 *, 0x20) = 0;
        }
        M2C_FIELD(arg0, s32 *, 0) = 0;
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001530A0);

extern s32 func_00101EF8__func_001530F8(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern s32 func_001106F0__func_001530F8(s32) __asm__("func_001106F0");
extern M2C_UNK func_0015D660__func_001530F8(s32) __asm__("func_0015D660");
extern s32 func_0015D680__func_001530F8(s32) __asm__("func_0015D680");
extern M2C_UNK func_0019EC30__func_001530F8(s32) __asm__("func_0019EC30");
extern M2C_UNK D_003FDAA0__func_001530F8 __asm__("D_003FDAA0");

void func_001530F8(void *arg0) {
    s32 temp_v0;

    if (M2C_FIELD(arg0, s32 *, 0x128) != 0) {
        temp_v0 = func_001106F0__func_001530F8(func_00101EF8__func_001530F8(&D_003FDAA0__func_001530F8, 0x18));
        func_0015D660__func_001530F8(temp_v0);
        func_0019EC30__func_001530F8(func_0015D680__func_001530F8(temp_v0) + 0x8D0);
        M2C_FIELD(arg0, s32 *, 0x128) = 0;
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00153160);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00153280);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00153300);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00153398);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001533B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00153498);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00153520);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00153570);

extern M2C_UNK func_00153570__func_001536E0(void *, M2C_UNK) __asm__("func_00153570");
extern M2C_UNK func_0021CE18__func_001536E0(s32) __asm__("func_0021CE18");

void func_001536E0(void *arg0) {
    func_0021CE18__func_001536E0(arg0 + 0xD0);
    M2C_FIELD(arg0, s32 *, 0x110) = 0;
    M2C_FIELD(arg0, s32 *, 0x114) = 0;
    M2C_FIELD(arg0, s32 *, 0x118) = 0;
    M2C_FIELD(arg0, s32 *, 0x124) = 0;
    func_00153570__func_001536E0(arg0, 0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00153728);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001537B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001539C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00153A80);

extern M2C_UNK func_00153020__func_00153BC0(s32) __asm__("func_00153020");

void func_00153BC0(s32 arg0) {
    func_00153020__func_00153BC0(arg0 + 4);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00153BE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00153DA8);

extern M2C_UNK func_00152B90__func_00153EF0(s32) __asm__("func_00152B90");

void func_00153EF0(void *arg0) {
    func_00152B90__func_00153EF0(arg0 + 0xDC4);
    M2C_FIELD(arg0, s32 *, 0xDDC) = 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00153F20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00154238);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00154698);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00154708);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001547D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00154868);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001549E8);

void func_00154AD0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x34) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = 1;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00154AE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00154B80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00154CD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00154E38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00154ED8);

extern M2C_UNK func_00156D50__func_00155138(void *) __asm__("func_00156D50");

void func_00155138(void *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0x28) == 2) && (M2C_FIELD(arg0, s32 *, 0xC) != 0)) {
        func_00156D50__func_00155138(arg0 + 0x68);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00155170);

extern M2C_UNK func_001D7AE8__func_00155278(s32) __asm__("func_001D7AE8");

void func_00155278(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x64);
    if (temp_a0 != 0) {
        func_001D7AE8__func_00155278(temp_a0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001552A0);

extern M2C_UNK func_001D7958__func_001554C8(s32) __asm__("func_001D7958");

void func_001554C8(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x64);
    if (temp_a0 != 0) {
        func_001D7958__func_001554C8(temp_a0);
    }
}

extern M2C_UNK func_00151440__func_001554F0(s32) __asm__("func_00151440");

void func_001554F0(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDF0);
    if (temp_a0 != 0) {
        func_00151440__func_001554F0(temp_a0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00155518);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00155598);

extern M2C_UNK func_0011A2F8__func_001556F8(s32) __asm__("func_0011A2F8");

void func_001556F8(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDEC);
    if (temp_a0 != 0) {
        func_0011A2F8__func_001556F8(temp_a0);
        M2C_FIELD(arg0, s32 *, 0xDEC) = 0;
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00155730);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00155848);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00155890);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00155958);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001559F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00155B90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00155C40);

void func_00155C48(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xF50) = 1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00155C58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00155C88);

extern M2C_UNK func_001530A0__func_00155CB0(s32) __asm__("func_001530A0");
extern M2C_UNK func_001530F8__func_00155CB0(s32) __asm__("func_001530F8");
extern M2C_UNK func_001536E0__func_00155CB0(s32) __asm__("func_001536E0");

void func_00155CB0(s32 arg0, s32 arg1) {
    s32 var_s0;

    if (arg1 != 0) {
        var_s0 = arg0 + 0xE00;
        func_001530A0__func_00155CB0(var_s0);
    } else {
        var_s0 = arg0 + 0xE00;
        func_001530F8__func_00155CB0(var_s0);
    }
    func_001536E0__func_00155CB0(var_s0);
}

void func_00155CF8(void) {
}

void func_00155D00(void) {
}

s32 func_00155D08(void *arg0) {
    s32 var_a1;

    var_a1 = 0;
    if (((M2C_FIELD(arg0, s32 *, 0xC) != 0) && (M2C_FIELD(arg0, s32 *, 0x28) == 2)) || (M2C_FIELD(arg0, s32 *, 0x24) != 0)) {
        var_a1 = 1;
    }
    return var_a1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00155D38);

extern M2C_UNK func_00155D38__func_00155E18(M2C_UNK, M2C_UNK) __asm__("func_00155D38");

void func_00155E18(void) {
    func_00155D38__func_00155E18(1, 0xFFFF);
}

extern M2C_UNK func_00155D38__func_00155E38(M2C_UNK, M2C_UNK) __asm__("func_00155D38");

void func_00155E38(void) {
    func_00155D38__func_00155E38(0, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00155E58);

extern M2C_UNK func_00119EB8__func_00155EE0() __asm__("func_00119EB8");

void func_00155EE0(void) {
    func_00119EB8__func_00155EE0();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00155F00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00156010);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00156098);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00156280);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00156318);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001564A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00156578);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00156580);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00156988);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00156BA8);

extern M2C_UNK func_00156988__func_00156BD8() __asm__("func_00156988");

void func_00156BD8(void *arg0, s32 arg1) {
    if (arg1 >= 0) {
        if (arg1 < M2C_FIELD(arg0, s32 *, 0xCF0)) {
            if (M2C_FIELD(arg0, s32 *, 0) != arg1) {
                M2C_FIELD(arg0, s32 *, 8) = 0;
            }
            M2C_FIELD(arg0, s32 *, 0) = arg1;
            func_00156988__func_00156BD8();
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00156C18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00156CF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00156D50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00156E68);

extern M2C_UNK func_00119630__func_00156EB8() __asm__("func_00119630");

void func_00156EB8(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x50) != 0) {
        func_00119630__func_00156EB8();
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00156EE0);

extern M2C_UNK func_00119580__func_00157018() __asm__("func_00119580");

void func_00157018(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x50) != 0) {
        func_00119580__func_00157018();
        M2C_FIELD(arg0, s32 *, 0x50) = 0;
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00157050);

extern M2C_UNK func_00157050__func_001570A0(M2C_UNK, M2C_UNK) __asm__("func_00157050");

void func_001570A0(void) {
    func_00157050__func_001570A0(1, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001570C0);

extern M2C_UNK func_00119EB8__func_00157148() __asm__("func_00119EB8");

void func_00157148(void) {
    func_00119EB8__func_00157148();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00157168);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00157248);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00157270);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00157450);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001574E0);

void func_00157538(void *arg0, s32 arg1) {
    if ((arg1 >= 0) && (arg1 < M2C_FIELD(arg0, s32 *, 0x98))) {
        if (M2C_FIELD(arg0, s32 *, 0) != arg1) {
            M2C_FIELD(arg0, s32 *, 4) = 0;
        }
        M2C_FIELD(arg0, s32 *, 0) = arg1;
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00157568);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00157748);

extern M2C_UNK D_003A6DD8__func_00157798 __asm__("D_003A6DD8");

void *func_00157798(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x90) = 20.0f;
    M2C_FIELD(arg0, M2C_UNK **, 0x94) = &D_003A6DD8__func_00157798;
    return arg0;
}

extern M2C_UNK func_0015CCA8__func_001577B8() __asm__("func_0015CCA8");

s32 func_001577B8(void *arg0) {
    func_0015CCA8__func_001577B8();
    M2C_FIELD(arg0, s32 *, 0x9C) = 0;
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001577E8);

void func_001579F8(void) {
}

extern M2C_UNK func_00155F00__func_00157A00(void *) __asm__("func_00155F00");
extern M2C_UNK D_003A6E10__func_00157A00 __asm__("D_003A6E10");

void *func_00157A00(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x90) = 20.0f;
    M2C_FIELD(arg0, M2C_UNK **, 0x94) = &D_003A6E10__func_00157A00;
    func_00155F00__func_00157A00(arg0 + 0xA8);
    M2C_FIELD(arg0, s32 *, 0x98) = 1;
    M2C_FIELD(arg0, s32 *, 0xA0) = 0;
    M2C_FIELD(arg0, s32 *, 0x9C) = 0;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00157A58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00157CB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00157E20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00157F20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00157F78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00158188);

void func_00158328(void) {
}

void func_00158330(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00158338);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00158358);

void func_00158380(void) {
}

extern M2C_UNK D_003A6E88__func_00158388 __asm__("D_003A6E88");

void *func_00158388(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x90) = 20.0f;
    M2C_FIELD(arg0, M2C_UNK **, 0x94) = &D_003A6E88__func_00158388;
    M2C_FIELD(arg0, s8 *, 0xA0) = 0;
    M2C_FIELD(arg0, s32 *, 0x98) = 0;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001583B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00158668);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00158670);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001588D8);

extern M2C_UNK D_003A6E48__func_00158A50 __asm__("D_003A6E48");

void *func_00158A50(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x90) = 20.0f;
    M2C_FIELD(arg0, M2C_UNK **, 0x94) = &D_003A6E48__func_00158A50;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00158A70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00159008);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00159078);

extern s32 func_00101EF8__func_001590C8(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_0010AB28__func_001590C8(s32) __asm__("func_0010AB28");
extern M2C_UNK func_00119580__func_001590C8(void *) __asm__("func_00119580");
extern M2C_UNK func_0011A2F8__func_001590C8(void *) __asm__("func_0011A2F8");
extern M2C_UNK func_0011EC38__func_001590C8(void *) __asm__("func_0011EC38");
extern M2C_UNK func_0015CDC0__func_001590C8(void *) __asm__("func_0015CDC0");
extern M2C_UNK func_0020EA98__func_001590C8(s32, M2C_UNK) __asm__("func_0020EA98");
extern M2C_UNK func_0031E8C0__func_001590C8(s32) __asm__("func_0031E8C0");
extern M2C_UNK D_003FDAA0__func_001590C8 __asm__("D_003FDAA0");

void func_001590C8(void *arg0) {
    s32 temp_a0_2;
    s32 temp_a0_3;
    void *temp_a0;
    void *temp_s0;

    func_0010AB28__func_001590C8(func_00101EF8__func_001590C8(&D_003FDAA0__func_001590C8, 4));
    func_0015CDC0__func_001590C8(arg0);
    temp_a0 = M2C_FIELD(arg0, void **, 0x98);
    if (temp_a0 != NULL) {
        func_00119580__func_001590C8(temp_a0);
        temp_s0 = M2C_FIELD(arg0, void **, 0x98);
        if (temp_s0 != NULL) {
            if (M2C_FIELD(temp_s0, s32 *, 0x4C) != 0) {
                func_00119580__func_001590C8(temp_s0);
            }
            func_0011EC38__func_001590C8(temp_s0);
            func_0011A2F8__func_001590C8(temp_s0);
        }
        M2C_FIELD(arg0, void **, 0x98) = NULL;
    }
    temp_a0_2 = M2C_FIELD(arg0, s32 *, 0xA4);
    if (temp_a0_2 != 0) {
        func_0020EA98__func_001590C8(temp_a0_2, 3);
        M2C_FIELD(arg0, s32 *, 0xA4) = 0;
    }
    temp_a0_3 = M2C_FIELD(arg0, s32 *, 0xA0);
    if (temp_a0_3 != 0) {
        func_0031E8C0__func_001590C8(temp_a0_3);
        M2C_FIELD(arg0, s32 *, 0xA0) = 0;
    }
}

extern s8 D_004E2728__func_00159188 __asm__("D_004E2728");

s32 func_00159188(s32 arg0) {
    D_004E2728__func_00159188 = 0;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00159198);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001591A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001591F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00159250);

extern M2C_UNK func_00159350__func_001592A8(s32) __asm__("func_00159350");

s32 func_001592A8(s32 arg0) {
    s32 var_v1;
    s32 var_v1_2;
    void *var_v0;
    void *var_v0_2;

    var_v1 = 7;
    var_v0 = arg0 + 0x20;
    do {
        M2C_FIELD(var_v0, s32 *, 0) = 0;
        var_v1 -= 1;
        M2C_FIELD(var_v0, s32 *, 4) = 0;
        var_v0 += 8;
    } while (var_v1 != -1);
    var_v0_2 = arg0 + 0x60;
    var_v1_2 = 7;
    do {
        M2C_FIELD(var_v0_2, s32 *, 0) = 0;
        var_v1_2 -= 1;
        M2C_FIELD(var_v0_2, s32 *, 4) = 0;
        var_v0_2 += 8;
    } while (var_v1_2 != -1);
    func_00159350__func_001592A8(arg0);
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00159328);

extern M2C_UNK func_00346B54__func_00159350(s32, M2C_UNK, M2C_UNK) __asm__("func_00346B54");

void func_00159350(s32 arg0) {
    func_00346B54__func_00159350(arg0 + 0x20, 0, 0x40);
    func_00346B54__func_00159350(arg0 + 0x60, 0, 0x40);
    func_00346B54__func_00159350(arg0, 0, 0x20);
    func_00346B54__func_00159350(arg0 + 0xA0, 0, 0x20);
    func_00346B54__func_00159350(arg0 + 0xC0, 0, 0x20);
    func_00346B54__func_00159350(arg0 + 0xE0, 0, 8);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001593D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00159CB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015A0A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015A118);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015A190);

extern void *func_00101EF8__func_0015A1D8(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK D_003FDAA0__func_0015A1D8 __asm__("D_003FDAA0");

s32 func_0015A1D8(void) {
    void *temp_v0;

    temp_v0 = func_00101EF8__func_0015A1D8(&D_003FDAA0__func_0015A1D8, 0x24);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0xF58) = 1;
    }
    return 0;
}

extern void *func_00101EF8__func_0015A210(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK D_003FDAA0__func_0015A210 __asm__("D_003FDAA0");

s32 func_0015A210(void) {
    void *temp_v0;

    temp_v0 = func_00101EF8__func_0015A210(&D_003FDAA0__func_0015A210, 0x24);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0xF58) = 0;
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015A240);

extern s32 func_00101EF8__func_0015A290(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_00154AE8__func_0015A290(s32) __asm__("func_00154AE8");
extern M2C_UNK D_003FDAA0__func_0015A290 __asm__("D_003FDAA0");

s32 func_0015A290(void) {
    s32 temp_v0;

    temp_v0 = func_00101EF8__func_0015A290(&D_003FDAA0__func_0015A290, 0x24);
    if (temp_v0 != 0) {
        func_00154AE8__func_0015A290(temp_v0);
    }
    return 0;
}

extern s32 func_00101EF8__func_0015A2C8(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_00155C48__func_0015A2C8(s32) __asm__("func_00155C48");
extern M2C_UNK D_003FDAA0__func_0015A2C8 __asm__("D_003FDAA0");

s32 func_0015A2C8(void) {
    s32 temp_v0;

    temp_v0 = func_00101EF8__func_0015A2C8(&D_003FDAA0__func_0015A2C8, 0x24);
    if (temp_v0 != 0) {
        func_00155C48__func_0015A2C8(temp_v0);
    }
    return 0;
}

extern s32 func_00101EF8__func_0015A300(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_00155C58__func_0015A300(s32) __asm__("func_00155C58");
extern M2C_UNK D_003FDAA0__func_0015A300 __asm__("D_003FDAA0");

s32 func_0015A300(void) {
    s32 temp_v0;

    temp_v0 = func_00101EF8__func_0015A300(&D_003FDAA0__func_0015A300, 0x24);
    if (temp_v0 != 0) {
        func_00155C58__func_0015A300(temp_v0);
    }
    return 0;
}

extern M2C_UNK D_003BB908__func_0015A338 __asm__("D_003BB908");

M2C_UNK *func_0015A338(void) {
    return &D_003BB908__func_0015A338;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015A348);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015A3A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015A3F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015A440);

extern M2C_UNK func_00347680__func_0015A4A8(M2C_UNK *, M2C_UNK *, s32) __asm__("func_00347680");
extern M2C_UNK D_003BB910__func_0015A4A8 __asm__("D_003BB910");
extern M2C_UNK D_004E2520__func_0015A4A8 __asm__("D_004E2520");

M2C_UNK *func_0015A4A8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xE18) = 0;
    func_00347680__func_0015A4A8(&D_004E2520__func_0015A4A8, &D_003BB910__func_0015A4A8, M2C_FIELD(**M2C_FIELD(arg0, void ****, 0xD0C), s32 *, 0x10));
    return &D_004E2520__func_0015A4A8;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015A4F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015A838);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015A898);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015A9D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015ACD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015B1A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015B6A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015B7B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015BB40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015BCA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015BD08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015BD58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015BDA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015BE08);

extern M2C_UNK D_003BB5D0__func_0015C0D0 __asm__("D_003BB5D0");
extern M2C_UNK D_003BBAC8__func_0015C0D0 __asm__("D_003BBAC8");

M2C_UNK *func_0015C0D0(void *arg0) {
    if (***M2C_FIELD(arg0, s32 ****, 0xD0C) != 3) {
        return &D_003BBAC8__func_0015C0D0;
    }
    return &D_003BB5D0__func_0015C0D0;
}

extern M2C_UNK func_00101EF8__func_0015C100(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_00131DD8__func_0015C100() __asm__("func_00131DD8");
extern M2C_UNK D_003FDAA0__func_0015C100 __asm__("D_003FDAA0");

s32 func_0015C100(void) {
    func_00101EF8__func_0015C100(&D_003FDAA0__func_0015C100, 3);
    func_00131DD8__func_0015C100();
    return 0;
}

extern M2C_UNK func_00101EF8__func_0015C130(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_00131E28__func_0015C130() __asm__("func_00131E28");
extern M2C_UNK D_003FDAA0__func_0015C130 __asm__("D_003FDAA0");

s32 func_0015C130(void) {
    func_00101EF8__func_0015C130(&D_003FDAA0__func_0015C130, 3);
    func_00131E28__func_0015C130();
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015C160);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015C210);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015C340);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015C6B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015C8A8);

void *func_0015C908(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    return arg0;
}

extern M2C_UNK func_0011A2F8__func_0015C920(s32 *) __asm__("func_0011A2F8");
extern M2C_UNK func_0015CBF0__func_0015C920() __asm__("func_0015CBF0");

void func_0015C920(s32 *arg0, s32 arg1) {
    if (*arg0 != 0) {
        func_0015CBF0__func_0015C920();
    }
    *arg0 = 0;
    if (arg1 & 1) {
        func_0011A2F8__func_0015C920(arg0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015C970);

extern M2C_UNK func_001189E0__func_0015C9A0(s32) __asm__("func_001189E0");

void func_0015C9A0(void *arg0) {
    func_001189E0__func_0015C9A0(M2C_FIELD(arg0, s32 *, 4));
}

extern M2C_UNK func_00118AD0__func_0015C9C0(s32) __asm__("func_00118AD0");

void func_0015C9C0(void *arg0) {
    func_00118AD0__func_0015C9C0(M2C_FIELD(arg0, s32 *, 4));
}

extern M2C_UNK func_001196C0__func_0015C9E0(s32) __asm__("func_001196C0");

void func_0015C9E0(void *arg0) {
    func_001196C0__func_0015C9E0(M2C_FIELD(arg0, s32 *, 4));
}

extern M2C_UNK func_00119888__func_0015CA00(s32) __asm__("func_00119888");

void func_0015CA00(void *arg0) {
    func_00119888__func_0015CA00(M2C_FIELD(arg0, s32 *, 4));
}

extern M2C_UNK func_00118900__func_0015CA20(s32) __asm__("func_00118900");

void func_0015CA20(void *arg0) {
    func_00118900__func_0015CA20(M2C_FIELD(arg0, s32 *, 4));
}

extern M2C_UNK func_001198B0__func_0015CA40(s32) __asm__("func_001198B0");

void func_0015CA40(void *arg0) {
    func_001198B0__func_0015CA40(M2C_FIELD(arg0, s32 *, 4));
}

extern M2C_UNK func_00119970__func_0015CA60(s32) __asm__("func_00119970");

void func_0015CA60(void *arg0) {
    func_00119970__func_0015CA60(M2C_FIELD(arg0, s32 *, 4));
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015CA80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015CA88);

extern M2C_UNK func_00119678__func_0015CB80(s32) __asm__("func_00119678");

void func_0015CB80(void *arg0) {
    func_00119678__func_0015CB80(M2C_FIELD(arg0, s32 *, 4));
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015CBA0);

extern M2C_UNK func_00119630__func_0015CBD0(s32) __asm__("func_00119630");

void func_0015CBD0(void *arg0) {
    func_00119630__func_0015CBD0(M2C_FIELD(arg0, s32 *, 4));
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015CBF0);

extern M2C_UNK func_00347028__func_0015CCA8() __asm__("func_00347028");

s32 func_0015CCA8(void) {
    func_00347028__func_0015CCA8();
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015CCC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015CDA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015CDC0);

extern M2C_UNK func_0015CFD0__func_0015CE00(M2C_UNK *) __asm__("func_0015CFD0");
extern M2C_UNK D_0043DD88__func_0015CE00 __asm__("D_0043DD88");

void func_0015CE00(void) {
    func_0015CFD0__func_0015CE00(&D_0043DD88__func_0015CE00);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015CE20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015CE80);

extern M2C_UNK func_0032B6E8__func_0015CEE8(M2C_UNK *, M2C_UNK, M2C_UNK, void *) __asm__("func_0032B6E8");
extern M2C_UNK D_003BBF70__func_0015CEE8 __asm__("D_003BBF70");
extern M2C_UNK D_003BBF88__func_0015CEE8 __asm__("D_003BBF88");
extern M2C_UNK D_003BBFA0__func_0015CEE8 __asm__("D_003BBFA0");
extern M2C_UNK D_003BBFB8__func_0015CEE8 __asm__("D_003BBFB8");

s32 func_0015CEE8(void *arg0, M2C_UNK arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x10) != 0) {
        return 1;
    }
    if (M2C_FIELD(arg0, s32 *, 0) == -1) {
        func_0032B6E8__func_0015CEE8(&D_003BBF70__func_0015CEE8, arg1, 0x32, arg0);
    }
    if (M2C_FIELD(arg0, s32 *, 4) == -1) {
        func_0032B6E8__func_0015CEE8(&D_003BBF88__func_0015CEE8, arg1, 0x32, arg0 + 4);
    }
    if (M2C_FIELD(arg0, s32 *, 8) == -1) {
        func_0032B6E8__func_0015CEE8(&D_003BBFA0__func_0015CEE8, arg1, 0x32, arg0 + 8);
    }
    if (M2C_FIELD(arg0, s32 *, 0xC) == -1) {
        func_0032B6E8__func_0015CEE8(&D_003BBFB8__func_0015CEE8, arg1, 0x32, arg0 + 0xC);
    }
    M2C_FIELD(arg0, s32 *, 0x10) = 1;
    return 1;
}

extern M2C_UNK func_0032B758__func_0015CFD0(s32, M2C_UNK) __asm__("func_0032B758");

void func_0015CFD0(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;

    if (M2C_FIELD(arg0, s32 *, 0x10) != 0) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 0);
        if (temp_a0 != -1) {
            func_0032B758__func_0015CFD0(temp_a0, 0x32);
            M2C_FIELD(arg0, s32 *, 0) = -1;
        }
        temp_a0_2 = M2C_FIELD(arg0, s32 *, 4);
        if (temp_a0_2 != -1) {
            func_0032B758__func_0015CFD0(temp_a0_2, 0x32);
            M2C_FIELD(arg0, s32 *, 4) = -1;
        }
        temp_a0_3 = M2C_FIELD(arg0, s32 *, 8);
        if (temp_a0_3 != -1) {
            func_0032B758__func_0015CFD0(temp_a0_3, 0x32);
            M2C_FIELD(arg0, s32 *, 8) = -1;
        }
        temp_a0_4 = M2C_FIELD(arg0, s32 *, 0xC);
        if (temp_a0_4 != -1) {
            func_0032B758__func_0015CFD0(temp_a0_4, 0x32);
            M2C_FIELD(arg0, s32 *, 0xC) = -1;
        }
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015D068);

extern M2C_UNK func_00119E08__func_0015D0C8(s32) __asm__("func_00119E08");
extern M2C_UNK func_0019C8F0__func_0015D0C8(s32) __asm__("func_0019C8F0");
extern s32 D_003A03DC__func_0015D0C8 __asm__("D_003A03DC");
extern s32 D_0043DDA0__func_0015D0C8 __asm__("D_0043DDA0");

void func_0015D0C8(void) {
    if (D_0043DDA0__func_0015D0C8 != D_003A03DC__func_0015D0C8) {
        func_0019C8F0__func_0015D0C8(D_003A03DC__func_0015D0C8);
        func_00119E08__func_0015D0C8(D_0043DDA0__func_0015D0C8);
        D_0043DDA0__func_0015D0C8 = 0;
    }
}

void *func_0015D110(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8) = 2;
    M2C_FIELD(arg0, s8 *, 0x1C) = -1;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    return arg0;
}

extern M2C_UNK func_0011A2F8__func_0015D138(s32 *) __asm__("func_0011A2F8");
extern M2C_UNK func_0015D498__func_0015D138() __asm__("func_0015D498");

void func_0015D138(s32 *arg0, s32 arg1) {
    if (*arg0 != 0) {
        func_0015D498__func_0015D138();
    }
    if (arg1 & 1) {
        func_0011A2F8__func_0015D138(arg0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015D188);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015D498);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015D538);

extern M2C_UNK func_00115540__func_0015D5F8(s32) __asm__("func_00115540");
extern M2C_UNK func_0019D400__func_0015D5F8(void *) __asm__("func_0019D400");

void func_0015D5F8(void *arg0) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 0xC) + 0x8D0;
    func_00115540__func_0015D5F8(M2C_FIELD(temp_s0, s32 *, 0x120));
    func_0019D400__func_0015D5F8(temp_s0);
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

extern M2C_UNK func_0019CF30__func_0015D640(s32) __asm__("func_0019CF30");

void func_0015D640(void *arg0) {
    func_0019CF30__func_0015D640(M2C_FIELD(arg0, s32 *, 0xC) + 0x8D0);
}

extern M2C_UNK func_0019CFB0__func_0015D660(s32) __asm__("func_0019CFB0");

void func_0015D660(void *arg0) {
    func_0019CFB0__func_0015D660(M2C_FIELD(arg0, s32 *, 0xC) + 0x8D0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015D680);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015D688);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015D810);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015DC88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015DCD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015DCD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015DD28);

extern M2C_UNK func_0015DEB8__func_0015DD70(s32) __asm__("func_0015DEB8");
extern M2C_UNK func_0015E168__func_0015DD70() __asm__("func_0015E168");
extern M2C_UNK func_0015E420__func_0015DD70(s32) __asm__("func_0015E420");

void func_0015DD70(s32 arg0) {
    func_0015E168__func_0015DD70();
    func_0015E420__func_0015DD70(arg0);
    func_0015DEB8__func_0015DD70(arg0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015DDA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015DE58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015DEB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015DF28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015DFD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015E088);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015E168);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015E420);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015E6D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015E7A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015E960);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015EDB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015EF00);

extern s32 D_003A03DC__func_0015F040 __asm__("D_003A03DC");
extern s32 D_0043DDA0__func_0015F040 __asm__("D_0043DDA0");

void func_0015F040(s32 arg0, s32 arg1) {
    if ((arg1 == 0xFFFF) && (arg0 != 0)) {
        D_0043DDA0__func_0015F040 = D_003A03DC__func_0015F040;
    }
}

extern M2C_UNK func_0015F040__func_0015F068(M2C_UNK, M2C_UNK) __asm__("func_0015F040");

void func_0015F068(void) {
    func_0015F040__func_0015F068(1, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015F088);

extern M2C_UNK func_0015F100__func_0015F0D8() __asm__("func_0015F100");

s32 func_0015F0D8(s32 arg0) {
    func_0015F100__func_0015F0D8();
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015F100);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015F130);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015F1D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015F1F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015FA88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015FAE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015FB48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0015FB60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001600D0);

void func_00160318(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 4) == -1) {
        M2C_FIELD(arg0, s32 *, 4) = arg1;
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00160330);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00160390);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00160B20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00160CC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00160F30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00161698);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001616B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001616C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001616E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00161738);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00161808);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00161B08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00161B88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00161C48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00161CF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00161DC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00161E98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00161F48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00161FD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001620B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001621A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00162288);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00162370);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00162380);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00162610);

void func_00162818(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00162820);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00162D58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00162E38);

extern void *func_00101EF8__func_00163810(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK D_003FDAA0__func_00163810 __asm__("D_003FDAA0");

s32 *func_00163810(s32 *arg0) {
    *arg0 = M2C_FIELD(func_00101EF8__func_00163810(&D_003FDAA0__func_00163810, 0x18), s32 *, 8);
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00163850);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00163AE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00163DA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00164038);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00164300);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00164588);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00164718);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00164FE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00165018);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00165068);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001650F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00165128);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00165160);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00165198);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001655B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00165660);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001656B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001656F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001657C0);

extern M2C_UNK func_00119EB8__func_00165878(s32) __asm__("func_00119EB8");
extern M2C_UNK func_002B3090__func_00165878(M2C_UNK, M2C_UNK, M2C_UNK) __asm__("func_002B3090");
extern M2C_UNK func_0032CE38__func_00165878(s32) __asm__("func_0032CE38");
extern s32 D_00378D14__func_00165878 __asm__("D_00378D14");
extern s32 D_00378D18__func_00165878 __asm__("D_00378D18");

void func_00165878(void) {
    func_002B3090__func_00165878(0, 0, 0);
    func_0032CE38__func_00165878(D_00378D18__func_00165878);
    D_00378D18__func_00165878 = -1;
    func_00119EB8__func_00165878(D_00378D14__func_00165878);
    D_00378D14__func_00165878 = 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001658D0);

extern M2C_UNK func_00347028__func_00165930() __asm__("func_00347028");

void func_00165930(void *arg0) {
    func_00347028__func_00165930();
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00165958);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001659A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00165C40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00165D60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00165D68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00165EC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00165EF0);

extern M2C_UNK func_00261E78__func_00165F30() __asm__("func_00261E78");
extern M2C_UNK func_00261EC0__func_00165F30() __asm__("func_00261EC0");

void func_00165F30(void) {
    func_00261EC0__func_00165F30();
    func_00261E78__func_00165F30();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00165F58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00165FF8);

extern M2C_UNK func_001593D0__func_00166060(s32) __asm__("func_001593D0");

void func_00166060(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x5C);
    if (temp_a0 != 0) {
        func_001593D0__func_00166060(temp_a0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00166088);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00166148);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00166168);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001661A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001661C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001661D8);

extern M2C_UNK func_002AA9B8__func_001661F0() __asm__("func_002AA9B8");

void func_001661F0(void) {
    func_002AA9B8__func_001661F0();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00166210);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00166448);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001664E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00166550);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00166618);

extern s32 func_00101EF8__func_00166698(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_0010AB28__func_00166698(s32) __asm__("func_0010AB28");
extern M2C_UNK D_003FDAA0__func_00166698 __asm__("D_003FDAA0");

void func_00166698(void) {
    func_0010AB28__func_00166698(func_00101EF8__func_00166698(&D_003FDAA0__func_00166698, 4));
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001666C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00166730);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001672E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00167400);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00167420);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00167458);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00167468);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001674B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001674C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001674F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00167508);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00167920);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00167AA8);

extern M2C_UNK func_00165958__func_00167B10(s32, M2C_UNK) __asm__("func_00165958");
extern M2C_UNK func_00165C40__func_00167B10(s32) __asm__("func_00165C40");

void func_00167B10(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;

    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 0xC);
        if (temp_a0 != 0) {
            func_00165C40__func_00167B10(temp_a0);
            temp_a0_2 = M2C_FIELD(arg0, s32 *, 0xC);
            if (temp_a0_2 != 0) {
                func_00165958__func_00167B10(temp_a0_2, 3);
            }
            M2C_FIELD(arg0, s32 *, 0xC) = 0;
        }
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00167B70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00167C90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00167E20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00167F18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00167F58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00167F60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00167F68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00167F70);

extern M2C_UNK func_00347028__func_00167F78(s32) __asm__("func_00347028");

void func_00167F78(s32 arg0) {
    func_00347028__func_00167F78(arg0 + 0x1C);
}

extern M2C_UNK func_00166148__func_00167F98(s32, M2C_UNK *, M2C_UNK *) __asm__("func_00166148");
extern M2C_UNK D_003BDF60__func_00167F98 __asm__("D_003BDF60");
extern M2C_UNK D_003BDF68__func_00167F98 __asm__("D_003BDF68");

void func_00167F98(void *arg0) {
    func_00166148__func_00167F98(M2C_FIELD(arg0, s32 *, 0xC), &D_003BDF60__func_00167F98, &D_003BDF68__func_00167F98);
}

extern M2C_UNK func_00166148__func_00167FC8(s32, M2C_UNK *, M2C_UNK *) __asm__("func_00166148");
extern M2C_UNK D_003BDF60__func_00167FC8 __asm__("D_003BDF60");
extern M2C_UNK D_003BDF70__func_00167FC8 __asm__("D_003BDF70");

void func_00167FC8(void *arg0) {
    func_00166148__func_00167FC8(M2C_FIELD(arg0, s32 *, 0xC), &D_003BDF60__func_00167FC8, &D_003BDF70__func_00167FC8);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00167FF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001681C0);

s32 func_001681C8(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x40);
}

extern M2C_UNK func_00166148__func_001681D8(s32, M2C_UNK *, M2C_UNK *) __asm__("func_00166148");
extern M2C_UNK D_003BDF68__func_001681D8 __asm__("D_003BDF68");
extern M2C_UNK D_003BDFB8__func_001681D8 __asm__("D_003BDFB8");
extern M2C_UNK D_003BDFC8__func_001681D8 __asm__("D_003BDFC8");

void func_001681D8(void *arg0, M2C_UNK *arg1) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_a0 != 0) {
        func_00166148__func_001681D8(temp_a0, &D_003BDFB8__func_001681D8, arg1);
        func_00166148__func_001681D8(M2C_FIELD(arg0, s32 *, 0xC), &D_003BDFC8__func_001681D8, &D_003BDF68__func_001681D8);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00168228);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00168390);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001684C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001685D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00168870);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001689E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00168A88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00168B08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00168CF0);

extern M2C_UNK func_0014EBB0__func_00168DF8(s32) __asm__("func_0014EBB0");

void func_00168DF8(void *arg0) {
    func_0014EBB0__func_00168DF8(M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x64));
}

void func_00168E18(void *arg0, s32 arg1) {
    M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 0x64), s32 *, 0x14) = arg1;
}

extern M2C_UNK func_001661F0__func_00168E28(s32) __asm__("func_001661F0");

void func_00168E28(void *arg0) {
    func_001661F0__func_00168E28(M2C_FIELD(arg0, s32 *, 0xC));
}

extern M2C_UNK func_0014EC58__func_00168E48(s32) __asm__("func_0014EC58");

void func_00168E48(void *arg0) {
    func_0014EC58__func_00168E48(M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x64));
}

void func_00168E68(void *arg0, s32 arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x6C) = arg1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00168E78);

extern M2C_UNK func_00119EB8__func_00168F00() __asm__("func_00119EB8");

void func_00168F00(void) {
    func_00119EB8__func_00168F00();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00168F20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00169150);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001692E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00169408);

void func_00169420(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(((arg1 * 0xD98) + arg0), s32 *, 0xD94) = (s32) (arg2 ^ 1);
    M2C_FIELD(arg0, s32 *, 0x38574) = (s32) (M2C_FIELD(arg0, s32 *, 0x38574) + 1);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00169450);

void func_00169668(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00169670);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0016A200);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0016A4A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0016A748);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0016A750);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0016AA80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0016AD18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0016B210);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0016B2E0);

void func_0016B328(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x38568) != 0) {
        M2C_FIELD(arg0, s32 *, 0x38568) = 0;
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0016B348);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0016B390);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0016B4A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0016B530);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0016C298);

extern M2C_UNK func_0016C298__func_0016C4E8(M2C_UNK, M2C_UNK) __asm__("func_0016C298");

void func_0016C4E8(void) {
    func_0016C298__func_0016C4E8(1, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0016C508);

extern M2C_UNK func_0016C508__func_0016CC58(M2C_UNK, M2C_UNK) __asm__("func_0016C508");

void func_0016CC58(void) {
    func_0016C508__func_0016CC58(1, 0xFFFF);
}

extern s32 func_00101EF8__func_0016CC78(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_0032B6E8__func_0016CC78(M2C_UNK *, M2C_UNK, M2C_UNK, void *) __asm__("func_0032B6E8");
extern M2C_UNK D_003BEFE0__func_0016CC78 __asm__("D_003BEFE0");
extern M2C_UNK D_003FDAA0__func_0016CC78 __asm__("D_003FDAA0");

s32 func_0016CC78(void *arg0) {
    s32 temp_v0;

    temp_v0 = func_00101EF8__func_0016CC78(&D_003FDAA0__func_0016CC78, 0);
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0) = temp_v0;
    func_0032B6E8__func_0016CC78(&D_003BEFE0__func_0016CC78, 0, 0x32, arg0 + 0x10);
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0016CCE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", CAssetManager_LoadAsset);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0016CEA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0016CF68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0016CFC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0016D028);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0016D080);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0016D100);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0016D158);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0016D188);

void func_0016D1B8(void *arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0x14);
    M2C_FIELD(arg1, void **, 0x10) = (void *) M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(arg0, void **, 8) = arg1;
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) + 1);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0016D1E8);

void func_0016D1F8(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", CEntityManager_AddEntityList);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0016DC98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0016DCA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", CEntityManager_AddEntity);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0016DFF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0016E640);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0016EAE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0016ED58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0016ED60);

void *func_0016ED98(void *arg0) {
    s32 var_v1;
    void *var_v0;

    var_v1 = 1;
    var_v0 = arg0;
    do {
        M2C_FIELD(var_v0, s32 *, 4) = 0;
        var_v1 -= 1;
        M2C_FIELD(var_v0, s32 *, 8) = 0;
        M2C_FIELD(var_v0, s32 *, 0xC) = 0;
        M2C_FIELD(var_v0, s32 *, 0x10) = 0;
        M2C_FIELD(var_v0, s32 *, 0x14) = 0;
        M2C_FIELD(var_v0, s32 *, 0x18) = 0;
        M2C_FIELD(var_v0, s32 *, 0x1C) = 0;
        M2C_FIELD(var_v0, s32 *, 0x20) = 0;
        M2C_FIELD(var_v0, s32 *, 0x24) = 0;
        M2C_FIELD(var_v0, s32 *, 0x28) = 0;
        M2C_FIELD(var_v0, s32 *, 0x2C) = 0;
        M2C_FIELD(var_v0, s32 *, 0) = 0;
        var_v0 += 0x30;
    } while (var_v1 != -1);
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", CCinemaCamera_Init);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0016EE50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0016EE78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0016EFA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0016F1E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0016F428);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0016F430);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0016F438);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0016F440);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0016F4A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0016F530);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0016F540);

extern M2C_UNK func_00119580__func_0016F608(void *) __asm__("func_00119580");
extern M2C_UNK func_0011A2F8__func_0016F608(void *, s32) __asm__("func_0011A2F8");
extern M2C_UNK func_0011EC38__func_0016F608(void *) __asm__("func_0011EC38");
extern M2C_UNK func_001D6318__func_0016F608(void *, M2C_UNK) __asm__("func_001D6318");
extern M2C_UNK func_001E7008__func_0016F608(s32, M2C_UNK) __asm__("func_001E7008");

void func_0016F608(void *arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a1;
    void *temp_s0;
    void *temp_v1;
    void *var_v0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x984);
    if (temp_a0 != 0) {
        func_001E7008__func_0016F608(temp_a0, 3);
        M2C_FIELD(arg0, s32 *, 0x984) = 0;
    }
    func_001D6318__func_0016F608(arg0 + 0x7FC, 2);
    temp_s0 = arg0 + 0x770;
    if (M2C_FIELD(temp_s0, s32 *, 0x4C) != 0) {
        func_00119580__func_0016F608(temp_s0);
    }
    func_0011EC38__func_0016F608(temp_s0);
    temp_v1 = arg0 + 0x34;
    temp_a1 = arg1 & 1;
    if (temp_v1 != NULL) {
        var_v0 = arg0 + 0x94;
        if (temp_v1 != var_v0) {
            do {
                var_v0 -= 0x30;
            } while (temp_v1 != var_v0);
        }
    }
    if (temp_a1 != 0) {
        func_0011A2F8__func_0016F608(arg0, temp_a1);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0016F6C8);

extern M2C_UNK func_001E7700__func_0016F7E0(s32) __asm__("func_001E7700");

void func_0016F7E0(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x984);
    if (temp_a0 != 0) {
        func_001E7700__func_0016F7E0(temp_a0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0016F808);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0016FA08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00170F08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00170F10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00171110);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001711B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001712C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00171350);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001713E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00171470);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00171CC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00171DE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00171F58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00172070);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00172148);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001721A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001721E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001722D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00172758);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00172ED0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00172F18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001732B0);

extern M2C_UNK CCinemaCamera_Init__func_00173868(s32, M2C_UNK) __asm__("CCinemaCamera_Init");
extern M2C_UNK func_0016EE50__func_00173868(s32, s32, s32) __asm__("func_0016EE50");

void func_00173868(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = arg0 + 0x34;
    CCinemaCamera_Init__func_00173868(temp_s1, 1);
    temp_s0 = arg1 + 0x34;
    func_0016EE50__func_00173868(temp_s1, temp_s0, temp_s0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001738B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00173E90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00173F90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001740E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00174110);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001742C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00174448);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00174808);

extern void **func_00101EF8__func_001748D8(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern s32 func_001EB610__func_001748D8(void **, s32) __asm__("func_001EB610");
extern s32 func_001EBE10__func_001748D8(s32, M2C_UNK) __asm__("func_001EBE10");
extern M2C_UNK D_003FDAA0__func_001748D8 __asm__("D_003FDAA0");

s32 func_001748D8(void) {
    s32 var_s1;
    void *temp_v0;

    temp_v0 = *func_00101EF8__func_001748D8(&D_003FDAA0__func_001748D8, 0x18);
    var_s1 = -1;
    if (temp_v0 != NULL) {
        var_s1 = M2C_FIELD(temp_v0, s32 *, 0x10);
    }
    return func_001EBE10__func_001748D8(func_001EB610__func_001748D8(func_00101EF8__func_001748D8(&D_003FDAA0__func_001748D8, 0x19), var_s1), 0) == 0x100;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00174950);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00174A80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00174C38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00174CB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00175128);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00175298);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00175410);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001754C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00175610);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00175618);

extern s32 func_00101EF8__func_00175678(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_0010A388__func_00175678(s32) __asm__("func_0010A388");
extern M2C_UNK func_0010A410__func_00175678(s32) __asm__("func_0010A410");
extern M2C_UNK func_00174C38__func_00175678(s32) __asm__("func_00174C38");
extern M2C_UNK D_003FDAA0__func_00175678 __asm__("D_003FDAA0");

void func_00175678(void) {
    s32 temp_s1;
    s32 temp_v0;

    temp_s1 = func_00101EF8__func_00175678(&D_003FDAA0__func_00175678, 0x15);
    temp_v0 = func_00101EF8__func_00175678(&D_003FDAA0__func_00175678, 4);
    func_0010A388__func_00175678(temp_v0);
    func_00174C38__func_00175678(temp_s1);
    func_0010A410__func_00175678(temp_v0);
}

extern s32 *func_00101EF8__func_001756E0(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_00174950__func_001756E0(f32, s32 *) __asm__("func_00174950");
extern s32 func_001EB5C8__func_001756E0(s32 *, M2C_UNK) __asm__("func_001EB5C8");
extern M2C_UNK func_001EBE10__func_001756E0(s32, M2C_UNK) __asm__("func_001EBE10");
extern M2C_UNK D_003FDAA0__func_001756E0 __asm__("D_003FDAA0");

s32 func_001756E0(f32 arg0) {
    s32 *temp_v0;
    s32 temp_s0;

    func_001EBE10__func_001756E0(func_001EB5C8__func_001756E0(func_00101EF8__func_001756E0(&D_003FDAA0__func_001756E0, 0x19), 0), 0);
    temp_v0 = func_00101EF8__func_001756E0(&D_003FDAA0__func_001756E0, 0x15);
    temp_s0 = (*temp_v0 & 1) ^ 1;
    func_00174950__func_001756E0(arg0, temp_v0);
    return temp_s0;
}

void func_00175760(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00175768);

extern M2C_UNK func_00175768__func_001758F0(M2C_UNK, M2C_UNK) __asm__("func_00175768");

void func_001758F0(void) {
    func_00175768__func_001758F0(1, 0xFFFF);
}

extern M2C_UNK func_00175768__func_00175910(M2C_UNK, M2C_UNK) __asm__("func_00175768");

void func_00175910(void) {
    func_00175768__func_00175910(0, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00175930);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00175980);

s32 func_00175A58(void *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0x18) == 0) || (M2C_FIELD(arg0, s32 *, 0x28) != 0)) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = 1;
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00175A88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00175C88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00175DE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00176210);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00176288);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00176340);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001763A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00176468);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00176568);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001769B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00176BA8);

extern s32 func_00101EF8__func_00176D60(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_00168E28__func_00176D60(s32) __asm__("func_00168E28");
extern M2C_UNK D_003FDAA0__func_00176D60 __asm__("D_003FDAA0");

void func_00176D60(void) {
    func_00168E28__func_00176D60(func_00101EF8__func_00176D60(&D_003FDAA0__func_00176D60, 0xD));
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00176D90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00176F40);

extern M2C_UNK func_001123C8__CRunModuleFE_Init(s32) __asm__("func_001123C8");
extern M2C_UNK func_001E1710__CRunModuleFE_Init(s32) __asm__("func_001E1710");
extern M2C_UNK func_001EA7C8__CRunModuleFE_Init(M2C_UNK) __asm__("func_001EA7C8");
extern M2C_UNK func_001EA7D8__CRunModuleFE_Init(M2C_UNK) __asm__("func_001EA7D8");
extern M2C_UNK func_003608A8__CRunModuleFE_Init(M2C_UNK *) __asm__("func_003608A8");
extern M2C_UNK D_003C2030__CRunModuleFE_Init __asm__("D_003C2030");

void CRunModuleFE_Init(void *arg0) {
    func_003608A8__CRunModuleFE_Init(&D_003C2030__CRunModuleFE_Init);
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0xAC) = 1;
    M2C_FIELD(arg0, f32 *, 0x4C) = 42.0f;
    func_001123C8__CRunModuleFE_Init(M2C_FIELD(arg0, s32 *, 0x1C));
    func_001EA7C8__CRunModuleFE_Init(1);
    func_001E1710__CRunModuleFE_Init(M2C_FIELD(arg0, s32 *, 0x30));
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    func_001EA7D8__CRunModuleFE_Init(0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00177240);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00177548);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001777C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00177830);

extern M2C_UNK func_001E1FE0__func_00177A10(M2C_UNK *, M2C_UNK) __asm__("func_001E1FE0");
extern M2C_UNK D_004DF7F8__func_00177A10 __asm__("D_004DF7F8");

void func_00177A10(void) {
    func_001E1FE0__func_00177A10(&D_004DF7F8__func_00177A10, 2);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00177A38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00177A70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00177C50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00177D18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00177E50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00178208);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00178400);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00178440);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001785F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00178880);

extern M2C_UNK func_00178B08__func_00178AD0() __asm__("func_00178B08");
extern M2C_UNK func_00189710__func_00178AD0(f32, M2C_UNK *) __asm__("func_00189710");
extern M2C_UNK D_00444DD0__func_00178AD0 __asm__("D_00444DD0");

void func_00178AD0(f32 arg0) {
    func_00178B08__func_00178AD0();
    func_00189710__func_00178AD0(arg0, &D_00444DD0__func_00178AD0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00178B08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00178C70);

extern M2C_UNK func_00178C70__func_00178DA8(M2C_UNK, M2C_UNK) __asm__("func_00178C70");

void func_00178DA8(void) {
    func_00178C70__func_00178DA8(1, 0xFFFF);
}

extern M2C_UNK func_00178C70__func_00178DC8(M2C_UNK, M2C_UNK) __asm__("func_00178C70");

void func_00178DC8(void) {
    func_00178C70__func_00178DC8(0, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00178DE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00178E20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00179710);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00179800);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00179958);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00179B58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00179BE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00179E70);

extern M2C_UNK func_0017A090__func_0017A058() __asm__("func_0017A090");
extern M2C_UNK func_00189710__func_0017A058(f32, M2C_UNK *) __asm__("func_00189710");
extern M2C_UNK D_00444DD0__func_0017A058 __asm__("D_00444DD0");

void func_0017A058(f32 arg0) {
    func_0017A090__func_0017A058();
    func_00189710__func_0017A058(arg0, &D_00444DD0__func_0017A058);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017A090);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017A1F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017A448);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017A570);

extern M2C_UNK func_0017A570__func_0017A6A8(M2C_UNK, M2C_UNK) __asm__("func_0017A570");

void func_0017A6A8(void) {
    func_0017A570__func_0017A6A8(1, 0xFFFF);
}

extern M2C_UNK func_0017A570__func_0017A6C8(M2C_UNK, M2C_UNK) __asm__("func_0017A570");

void func_0017A6C8(void) {
    func_0017A570__func_0017A6C8(0, 0xFFFF);
}

extern s32 func_00101EF8__func_0017A6E8(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK D_003A7448__func_0017A6E8 __asm__("D_003A7448");
extern M2C_UNK D_003FDAA0__func_0017A6E8 __asm__("D_003FDAA0");

void *func_0017A6E8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_003A7448__func_0017A6E8;
    M2C_FIELD(arg0, s32 *, 8) = func_00101EF8__func_0017A6E8(&D_003FDAA0__func_0017A6E8, 4);
    M2C_FIELD(arg0, f32 *, 0x10) = 2.0f;
    return arg0;
}

extern s32 func_00101EF8__func_0017A748(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_00175DE0__func_0017A748(s32, s32) __asm__("func_00175DE0");
extern M2C_UNK D_003FDAA0__func_0017A748 __asm__("D_003FDAA0");

void func_0017A748(void *arg0) {
    func_00175DE0__func_0017A748(func_00101EF8__func_0017A748(&D_003FDAA0__func_0017A748, 0x17), M2C_FIELD(arg0, s32 *, 4));
}

extern void *func_00101EF8__func_0017A788(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_00330D58__func_0017A788(M2C_UNK) __asm__("func_00330D58");
extern M2C_UNK D_003FDAA0__func_0017A788 __asm__("D_003FDAA0");

void func_0017A788(void) {
    if (M2C_FIELD(func_00101EF8__func_0017A788(&D_003FDAA0__func_0017A788, 0x18), s32 *, 0x350) != 0) {
        func_00330D58__func_0017A788(0x64);
    }
}

extern M2C_UNK func_001E3990__func_0017A7C0(M2C_UNK *) __asm__("func_001E3990");
extern M2C_UNK D_0049CF20__func_0017A7C0 __asm__("D_0049CF20");

void func_0017A7C0(void) {
    func_001E3990__func_0017A7C0(&D_0049CF20__func_0017A7C0);
}

void func_0017A7E0(void *arg0) {
    f32 temp_f1;

    temp_f1 = M2C_FIELD(arg0, f32 *, 0x14) + 0.016666668f;
    M2C_FIELD(arg0, f32 *, 0x14) = temp_f1;
    if (M2C_FIELD(arg0, f32 *, 0x10) <= temp_f1) {
        M2C_FIELD(arg0, f32 *, 0x14) = 0.0f;
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017A818);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017A9C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017AA00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017AA88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017AB18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017ABB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017AD10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017AD98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017AE20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017AEA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017AF30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017AFB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017B1C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017B240);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017B398);

extern s32 func_00101EF8__func_0017B540(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_00170F08__func_0017B540(s32) __asm__("func_00170F08");
extern M2C_UNK D_003FDAA0__func_0017B540 __asm__("D_003FDAA0");

void func_0017B540(void) {
    func_00170F08__func_0017B540(func_00101EF8__func_0017B540(&D_003FDAA0__func_0017B540, 0x15));
}

extern s32 func_00101EF8__func_0017B570(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_00170F10__func_0017B570(s32) __asm__("func_00170F10");
extern M2C_UNK D_003FDAA0__func_0017B570 __asm__("D_003FDAA0");

void func_0017B570(void) {
    func_00170F10__func_0017B570(func_00101EF8__func_0017B570(&D_003FDAA0__func_0017B570, 0x15));
}

extern s32 func_00101EE0__func_0017B5A0(M2C_UNK *, M2C_UNK) __asm__("func_00101EE0");
extern s32 func_00101EF8__func_0017B5A0(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_0011A2F8__func_0017B5A0(s32) __asm__("func_0011A2F8");
extern M2C_UNK func_0016F7E0__func_0017B5A0(s32) __asm__("func_0016F7E0");
extern M2C_UNK func_001D0A10__func_0017B5A0(s32) __asm__("func_001D0A10");
extern M2C_UNK D_003FDAA0__func_0017B5A0 __asm__("D_003FDAA0");

void func_0017B5A0(void) {
    s32 temp_v0;

    temp_v0 = func_00101EE0__func_0017B5A0(&D_003FDAA0__func_0017B5A0, 0x22);
    func_001D0A10__func_0017B5A0(temp_v0);
    if (temp_v0 != 0) {
        func_001D0A10__func_0017B5A0(temp_v0);
        func_0011A2F8__func_0017B5A0(temp_v0);
    }
    func_0016F7E0__func_0017B5A0(func_00101EF8__func_0017B5A0(&D_003FDAA0__func_0017B5A0, 0x15));
}

extern void *func_00101EF8__func_0017B610(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern s32 func_0011A238__func_0017B610(M2C_UNK, M2C_UNK *, M2C_UNK) __asm__("func_0011A238");
extern s32 func_001D72F8__func_0017B610(s32, M2C_UNK) __asm__("func_001D72F8");
extern M2C_UNK func_001D7508__func_0017B610(s32, s32, s32, s32) __asm__("func_001D7508");
extern M2C_UNK D_003C3848__func_0017B610 __asm__("D_003C3848");
extern M2C_UNK D_003FDAA0__func_0017B610 __asm__("D_003FDAA0");

void func_0017B610(void *arg0) {
    s32 temp_v0;
    void *temp_v1;

    M2C_FIELD(arg0, void **, 4) = func_00101EF8__func_0017B610(&D_003FDAA0__func_0017B610, 0x17);
    M2C_FIELD(arg0, void **, 0x10) = func_00101EF8__func_0017B610(&D_003FDAA0__func_0017B610, 4);
    M2C_FIELD(arg0, void **, 8) = func_00101EF8__func_0017B610(&D_003FDAA0__func_0017B610, 7);
    M2C_FIELD(arg0, void **, 0xC) = func_00101EF8__func_0017B610(&D_003FDAA0__func_0017B610, 0xD);
    M2C_FIELD(arg0, void **, 0x14) = func_00101EF8__func_0017B610(&D_003FDAA0__func_0017B610, 0x18);
    temp_v0 = func_001D72F8__func_0017B610(func_0011A238__func_0017B610(0xD0, &D_003C3848__func_0017B610, 0), 0);
    temp_v1 = M2C_FIELD(arg0, void **, 0x10);
    M2C_FIELD(arg0, s32 *, 0x18) = temp_v0;
    func_001D7508__func_0017B610(temp_v0, M2C_FIELD(temp_v1, s32 *, 0x30), M2C_FIELD(temp_v1, s32 *, 0x34), M2C_FIELD(temp_v1, s32 *, 0x40));
}

extern M2C_UNK func_0011A2F8__func_0017B6D0(s32) __asm__("func_0011A2F8");
extern M2C_UNK func_001D7480__func_0017B6D0(s32) __asm__("func_001D7480");

void func_0017B6D0(void *arg0) {
    s32 temp_a0;
    s32 temp_s0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x18);
    if (temp_a0 != 0) {
        func_001D7480__func_0017B6D0(temp_a0);
        temp_s0 = M2C_FIELD(arg0, s32 *, 0x18);
        if (temp_s0 != 0) {
            func_001D7480__func_0017B6D0(temp_s0);
            func_0011A2F8__func_0017B6D0(temp_s0);
        }
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017B730);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017B738);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017B778);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017B8A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017B940);

extern M2C_UNK func_001E1730__func_0017BAF8(s32) __asm__("func_001E1730");

void func_0017BAF8(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x18);
    if (temp_a0 != 0) {
        func_001E1730__func_0017BAF8(temp_a0);
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
    }
}

extern M2C_UNK func_001123C8__func_0017BB30(s32) __asm__("func_001123C8");
extern M2C_UNK func_001E1710__func_0017BB30(s32) __asm__("func_001E1710");
extern M2C_UNK func_001EA7D8__func_0017BB30(M2C_UNK) __asm__("func_001EA7D8");

void func_0017BB30(void *arg0) {
    s32 temp_a0;

    func_001123C8__func_0017BB30(M2C_FIELD(arg0, s32 *, 0x10));
    temp_a0 = M2C_FIELD(arg0, s32 *, 0x18);
    if (temp_a0 != 0) {
        func_001E1710__func_0017BB30(temp_a0);
        func_001EA7D8__func_0017BB30(1);
    }
}

extern M2C_UNK func_00168E28__func_0017BB78(s32) __asm__("func_00168E28");

void func_0017BB78(void *arg0) {
    func_00168E28__func_0017BB78(M2C_FIELD(arg0, s32 *, 0x1C));
}

extern M2C_UNK func_00101EF8__func_0017BB98(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_001124E0__func_0017BB98(s32) __asm__("func_001124E0");
extern M2C_UNK func_001254F8__func_0017BB98(M2C_UNK) __asm__("func_001254F8");
extern M2C_UNK func_00167C90__func_0017BB98(s32) __asm__("func_00167C90");
extern M2C_UNK func_00168E68__func_0017BB98(s32, M2C_UNK) __asm__("func_00168E68");
extern M2C_UNK func_0032B758__func_0017BB98(s32, M2C_UNK) __asm__("func_0032B758");
extern M2C_UNK D_003FDAA0__func_0017BB98 __asm__("D_003FDAA0");

void func_0017BB98(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_a0 != -1) {
        func_0032B758__func_0017BB98(temp_a0, 0x32);
        M2C_FIELD(arg0, s32 *, 0x14) = -1;
    }
    func_00101EF8__func_0017BB98(&D_003FDAA0__func_0017BB98, 3);
    func_001254F8__func_0017BB98(0);
    temp_a0_2 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_a0_2 != 0) {
        func_00168E68__func_0017BB98(temp_a0_2, 1);
        func_00167C90__func_0017BB98(M2C_FIELD(arg0, s32 *, 0x1C));
    }
    func_001124E0__func_0017BB98(M2C_FIELD(arg0, s32 *, 0x10));
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017BC18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017BD80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017BE98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017BF80);

void func_0017C0D8(void) {
}

extern void *func_00101EF8__func_0017C0E0(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_001123C8__func_0017C0E0(s32) __asm__("func_001123C8");
extern M2C_UNK D_003FDAA0__func_0017C0E0 __asm__("D_003FDAA0");

void func_0017C0E0(void *arg0) {
    func_001123C8__func_0017C0E0(M2C_FIELD(arg0, s32 *, 0xC));
    M2C_FIELD(func_00101EF8__func_0017C0E0(&D_003FDAA0__func_0017C0E0, 4), s32 *, 0xAC) = 1;
}

extern void *func_00101EF8__func_0017C118(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_001124E0__func_0017C118(s32) __asm__("func_001124E0");
extern M2C_UNK func_00167C90__func_0017C118(s32) __asm__("func_00167C90");
extern M2C_UNK D_003FDAA0__func_0017C118 __asm__("D_003FDAA0");

void func_0017C118(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_a0 != 0) {
        func_00167C90__func_0017C118(temp_a0);
    }
    M2C_FIELD(func_00101EF8__func_0017C118(&D_003FDAA0__func_0017C118, 4), s32 *, 0xAC) = 0;
    func_001124E0__func_0017C118(M2C_FIELD(arg0, s32 *, 0xC));
}

extern M2C_UNK func_00167E20__func_0017C168(s32) __asm__("func_00167E20");

void func_0017C168(void *arg0) {
    func_00167E20__func_0017C168(M2C_FIELD(arg0, s32 *, 8));
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017C188);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017C208);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017C400);

extern s32 func_00101EF8__func_0017C408(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_0010BB58__func_0017C408(s32, s32) __asm__("func_0010BB58");
extern M2C_UNK func_0011F040__func_0017C408(M2C_UNK *, M2C_UNK) __asm__("func_0011F040");
extern M2C_UNK D_003FDAA0__func_0017C408 __asm__("D_003FDAA0");
extern M2C_UNK D_0043D6A0__func_0017C408 __asm__("D_0043D6A0");

void func_0017C408(s32 arg0) {
    s32 temp_v0;

    func_0011F040__func_0017C408(&D_0043D6A0__func_0017C408, 0);
    temp_v0 = func_00101EF8__func_0017C408(&D_003FDAA0__func_0017C408, 1);
    func_0010BB58__func_0017C408(temp_v0, arg0 + 4);
    func_0010BB58__func_0017C408(temp_v0, arg0 + 0x420);
    func_0010BB58__func_0017C408(temp_v0, arg0 + 0x11C0);
    func_0010BB58__func_0017C408(temp_v0, arg0 + 0x1EEC);
    func_0011F040__func_0017C408(&D_0043D6A0__func_0017C408, 0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017C4A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017CC30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017D148);

extern M2C_UNK func_0017D148__func_0017D528(M2C_UNK, M2C_UNK) __asm__("func_0017D148");

void func_0017D528(void) {
    func_0017D148__func_0017D528(1, 0xFFFF);
}

extern M2C_UNK func_0017D148__func_0017D548(M2C_UNK, M2C_UNK) __asm__("func_0017D148");

void func_0017D548(void) {
    func_0017D148__func_0017D548(0, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017D568);

extern M2C_UNK func_001866C8__func_0017D628(void *) __asm__("func_001866C8");

void func_0017D628(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x14) = -1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    func_001866C8__func_0017D628(arg0 + 0xF0);
}

extern M2C_UNK func_00186710__func_0017D660(s32) __asm__("func_00186710");

void func_0017D660(s32 arg0) {
    func_00186710__func_0017D660(arg0 + 0xF0);
}

extern M2C_UNK func_001868E8__func_0017D680(s32) __asm__("func_001868E8");

void func_0017D680(s32 arg0) {
    func_001868E8__func_0017D680(arg0 + 0xF0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017D6A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017D830);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017D920);

extern M2C_UNK func_00186D48__func_0017D960(s32) __asm__("func_00186D48");

void func_0017D960(s32 arg0) {
    func_00186D48__func_0017D960(arg0 + 0xF0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017D980);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017D9C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017DBD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017DC80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017DD70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017DDF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017DEA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017DF18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017DF40);

s32 func_0017DF78(u32 *arg0) {
    return (u32) *arg0 < 4U;
}

void func_0017DF88(void) {
}

void func_0017DF90(void *arg0, s32 arg1) {
    s32 var_a1;

    var_a1 = arg1;
    if (var_a1 == -1) {
        var_a1 = M2C_FIELD(arg0, s32 *, 0xD0);
    }
    M2C_FIELD(arg0, s32 *, 0x11C) = var_a1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017DFA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017E3B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017E4D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017E5D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017EAA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017ED90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017F240);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017F320);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017F3C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017FD70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0017FEA0);

extern s32 func_00101EF8__func_001800D0(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_0010AB28__func_001800D0(s32) __asm__("func_0010AB28");
extern M2C_UNK func_0011A2F8__func_001800D0(s32) __asm__("func_0011A2F8");
extern M2C_UNK func_0017D680__func_001800D0(s32) __asm__("func_0017D680");
extern M2C_UNK D_003FDAA0__func_001800D0 __asm__("D_003FDAA0");
extern s32 D_00444C24__func_001800D0 __asm__("D_00444C24");

void func_001800D0(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;

    func_0010AB28__func_001800D0(func_00101EF8__func_001800D0(&D_003FDAA0__func_001800D0, 4));
    temp_a0 = M2C_FIELD(arg0, s32 *, 0xAA0);
    if (temp_a0 != 0) {
        func_0017D680__func_001800D0(temp_a0);
        temp_a0_2 = M2C_FIELD(arg0, s32 *, 0xAA0);
        if (temp_a0_2 != 0) {
            func_0011A2F8__func_001800D0(temp_a0_2);
            M2C_FIELD(arg0, s32 *, 0xAA0) = 0;
        }
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
        D_00444C24__func_001800D0 = 1;
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00180148);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001801F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001803A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00180408);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00180570);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001805E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001808D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00180998);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00180B68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00180CC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00180E80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001810D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001811F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00181570);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00181938);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00181BA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00181ED0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00181F38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00182010);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00182040);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00182088);

void func_001820C0(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001820C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001820E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00182130);

extern M2C_UNK func_00182130__func_00182158(M2C_UNK, M2C_UNK) __asm__("func_00182130");

void func_00182158(void) {
    func_00182130__func_00182158(1, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00182178);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001823B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00182498);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00182688);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001827C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001828E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00182908);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00182970);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00182AB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00182BB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00182D98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00182E40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001856E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001858C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00185B48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00185D60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00185DB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00185ED0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00185F20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00186060);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00186080);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001860E8);

extern s32 func_00187598__func_00186170(s32, s32) __asm__("func_00187598");
extern s32 func_00187E90__func_00186170(s32, M2C_UNK, M2C_UNK) __asm__("func_00187E90");

void func_00186170(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8) = func_00187598__func_00186170(M2C_FIELD(arg0, s32 *, 0x10), func_00187E90__func_00186170(M2C_FIELD(arg0, s32 *, 0x10), 0, 0x62));
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001861B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001862B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001862F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00186320);

extern s32 func_00187598__func_001864D8(s32, s32) __asm__("func_00187598");
extern s32 func_00187E90__func_001864D8(s32, M2C_UNK, M2C_UNK) __asm__("func_00187E90");

void func_001864D8(void *arg0, M2C_UNK arg1) {
    M2C_FIELD(arg0, s32 *, 0x70) = func_00187598__func_001864D8(M2C_FIELD(arg0, s32 *, 0x10), func_00187E90__func_001864D8(M2C_FIELD(arg0, s32 *, 0x10), 0, arg1));
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00186518);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001865C0);

extern M2C_UNK func_001828E0__func_001866C8(s32, void *) __asm__("func_001828E0");
extern M2C_UNK func_00186060__func_001866C8(s32, void *) __asm__("func_00186060");
extern M2C_UNK func_001865C0__func_001866C8(void *, s32) __asm__("func_001865C0");

void func_001866C8(void *arg0) {
    func_001828E0__func_001866C8(M2C_FIELD(arg0, s32 *, 4), arg0);
    func_001865C0__func_001866C8(arg0, M2C_FIELD(arg0, s32 *, 0xC));
    func_00186060__func_001866C8(M2C_FIELD(arg0, s32 *, 0x10) + 0x510, arg0);
}

extern s32 func_00101EF8__func_00186710(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_0010BED0__func_00186710(s32, s32) __asm__("func_0010BED0");
extern M2C_UNK func_00182908__func_00186710(s32, void *) __asm__("func_00182908");
extern M2C_UNK func_00186080__func_00186710(s32, void *) __asm__("func_00186080");
extern M2C_UNK D_003FDAA0__func_00186710 __asm__("D_003FDAA0");

void func_00186710(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0) < 2U) {
        func_0010BED0__func_00186710(func_00101EF8__func_00186710(&D_003FDAA0__func_00186710, 6), M2C_FIELD(arg0, s32 *, 0x74));
        return;
    }
    func_00182908__func_00186710(M2C_FIELD(arg0, s32 *, 4), arg0);
    func_00186080__func_00186710(M2C_FIELD(arg0, s32 *, 0x10) + 0x510, arg0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00186780);

extern s32 func_001860E8__func_001868B0() __asm__("func_001860E8");
extern M2C_UNK func_001868E8__func_001868B0(s32) __asm__("func_001868E8");

void func_001868B0(s32 arg0) {
    if (func_001860E8__func_001868B0() == 0) {
        func_001868E8__func_001868B0(arg0);
    }
}

extern M2C_UNK func_00186710__func_001868E8() __asm__("func_00186710");
extern M2C_UNK func_00186780__func_001868E8(s32) __asm__("func_00186780");

void func_001868E8(s32 arg0) {
    func_00186710__func_001868E8();
    func_00186780__func_001868E8(arg0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00186918);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001869C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00186AC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00186B70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00186C70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00186CC8);

void func_00186D38(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = (s32) (arg1 == 0);
}

void func_00186D48(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 0) = 2;
}

extern M2C_UNK func_00116740__func_00186D58(s32) __asm__("func_00116740");

void func_00186D58(void *arg0) {
    func_00116740__func_00186D58(M2C_FIELD(arg0, s32 *, 0xC));
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00186D78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00186EA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00186F08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00187088);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00187268);

INCLUDE_ASM("asm/nonmatchings/cod/000000", CCrowdData_GetCrowdAnimBank);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001874E0);

extern M2C_UNK func_00188300__func_00187510(s32) __asm__("func_00188300");

void func_00187510(void *arg0, s8 *arg1) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x30);
    if (temp_a0 == 0) {
        *arg1 = 0;
        return;
    }
    func_00188300__func_00187510(temp_a0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00187540);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00187598);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00187648);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00187698);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001876E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00187748);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001877E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00187828);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00187870);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00187900);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00187970);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001879E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00187A50);

void func_00187A88(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00187A90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00187C58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00187DA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00187E90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00187EB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", CCrowdAnimation_Init);

extern M2C_UNK func_00113380__func_00188170(s32) __asm__("func_00113380");
extern M2C_UNK func_00119EB8__func_00188170(s32) __asm__("func_00119EB8");
extern M2C_UNK func_0011A318__func_00188170(s32) __asm__("func_0011A318");

void func_00188170(void *arg0) {
    s32 temp_a0;

    func_00113380__func_00188170(arg0 + 4);
    temp_a0 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_a0 != 0) {
        func_0011A318__func_00188170(temp_a0);
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    }
    func_00119EB8__func_00188170(M2C_FIELD(arg0, s32 *, 0));
    M2C_FIELD(arg0, s32 *, 0) = 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001881C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001881C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001881F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00188258);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00188300);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001883B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00188418);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00188820);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00188E00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00189020);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00189040);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00189540);

extern M2C_UNK func_001C2828__func_00189588(s32) __asm__("func_001C2828");

void func_00189588(s32 arg0) {
    func_001C2828__func_00189588(arg0 + 0x2D374);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001895B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00189710);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00189A80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00189B20);

s32 func_00189BB8(void *arg0, void *arg1) {
    s32 temp_a0;
    s32 temp_v1;

    temp_a0 = M2C_FIELD(arg0, s32 *, 4);
    temp_v1 = M2C_FIELD(arg1, s32 *, 4);
    if (temp_a0 < temp_v1) {
        return -1;
    }
    return temp_v1 < temp_a0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00189BE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00189E20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0018A370);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0018A868);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0018AE00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0018AF00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0018AF08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0018B0B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0018B0C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", CLogic_Init);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0018B6C0);

void func_0018B808(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0018B810);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0018B908);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0018BA58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0018BEE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0018C918);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0018CA98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0018CB40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0018CBF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0018CD80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0018D210);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0018D358);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0018D3E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0018D7A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0018D8A0);

extern M2C_UNK func_001AF808__func_0018DBA8(s32) __asm__("func_001AF808");

void func_0018DBA8(s32 arg0) {
    func_001AF808__func_0018DBA8(arg0 + 0x2E4D4);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0018DBD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0018DC68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0018DDF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0018E418);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0018E718);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0018E938);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0018E978);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0018E9F8);

s32 func_0018EA50(void *arg0) {
    s32 temp_a1;

    temp_a1 = M2C_FIELD(arg0, s32 *, 0x2E1F4);
    if ((temp_a1 < 0) || (temp_a1 >= M2C_FIELD(arg0, s32 *, 0x2E1F8))) {
        return 0;
    }
    return M2C_FIELD(arg0, s32 *, 0x2E1C0) + (temp_a1 * 0x1B4);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0018EA90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0018EBC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0018EC70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0018ED28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0018ED88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0018EEF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0018EFD8);

extern s32 func_001323E0__func_0018F138() __asm__("func_001323E0");

f32 func_0018F138(void *arg0) {
    if (func_001323E0__func_0018F138() == 1) {
        return M2C_FIELD(arg0, f32 *, 8);
    }
    return M2C_FIELD(arg0, f32 *, 4);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0018F170);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0018F230);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0018F2A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0018F2F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0018F438);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0018F500);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0018F768);

extern M2C_UNK func_0018F768__func_001904A8(M2C_UNK, M2C_UNK) __asm__("func_0018F768");

void func_001904A8(void) {
    func_0018F768__func_001904A8(1, 0xFFFF);
}

extern M2C_UNK func_0018F768__func_001904C8(M2C_UNK, M2C_UNK) __asm__("func_0018F768");

void func_001904C8(void) {
    func_0018F768__func_001904C8(0, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001904E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00190820);

extern s32 func_00101EF8__func_00190828(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_0010BB58__func_00190828(s32, s32) __asm__("func_0010BB58");
extern M2C_UNK func_0011A318__func_00190828(s32) __asm__("func_0011A318");
extern M2C_UNK func_0011F040__func_00190828(M2C_UNK *, M2C_UNK) __asm__("func_0011F040");
extern M2C_UNK D_003FDAA0__func_00190828 __asm__("D_003FDAA0");
extern M2C_UNK D_0043D6A0__func_00190828 __asm__("D_0043D6A0");
extern s32 D_00476E00__func_00190828 __asm__("D_00476E00");

void func_00190828(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_00101EF8__func_00190828(&D_003FDAA0__func_00190828, 1);
    func_0010BB58__func_00190828(temp_v0, arg0);
    func_0010BB58__func_00190828(temp_v0, arg0 + 0x41C);
    func_0010BB58__func_00190828(temp_v0, arg0 + 0x560);
    func_0010BB58__func_00190828(temp_v0, arg0 + 0x128C);
    if (D_00476E00__func_00190828 != 0) {
        func_0011A318__func_00190828(D_00476E00__func_00190828);
        D_00476E00__func_00190828 = 0;
    }
    func_0011F040__func_00190828(&D_0043D6A0__func_00190828, 0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001908C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00190DA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00191278);

extern M2C_UNK func_00191278__func_00191578(M2C_UNK, M2C_UNK) __asm__("func_00191278");

void func_00191578(void) {
    func_00191278__func_00191578(1, 0xFFFF);
}

extern M2C_UNK func_00191278__func_00191598(M2C_UNK, M2C_UNK) __asm__("func_00191278");

void func_00191598(void) {
    func_00191278__func_00191598(0, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001915B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001917A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00191950);

void func_001919F8(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00191A00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00191BE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", CStageEnvironment_InitInferno);

INCLUDE_ASM("asm/nonmatchings/cod/000000", CStageEnvironment_InitSubway);

INCLUDE_ASM("asm/nonmatchings/cod/000000", CStageEnvironment_InitWindowMatch);

INCLUDE_ASM("asm/nonmatchings/cod/000000", CStageEnvironment_InitDemolition);

INCLUDE_ASM("asm/nonmatchings/cod/000000", CStageEnvironment_InitClubLight);

INCLUDE_ASM("asm/nonmatchings/cod/000000", CStageEnvironment_InitSandBag);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00191FC8);

extern s32 func_001332C0__func_00192030() __asm__("func_001332C0");
extern s32 func_00191FC8__func_00192030(s32) __asm__("func_00191FC8");

s32 func_00192030(void) {
    s32 temp_v0;

    temp_v0 = func_001332C0__func_00192030();
    if (temp_v0 == 0) {
        return 0;
    }
    return func_00191FC8__func_00192030(temp_v0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00192068);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001920B0);

extern M2C_UNK func_0011B9F8__func_001920D0(void *, s32, M2C_UNK) __asm__("func_0011B9F8");

void func_001920D0(void *arg0, s32 arg1, s32 arg2, M2C_UNK arg3) {
    M2C_FIELD(arg0, s32 *, 0) = -1;
    M2C_FIELD(arg0, s32 *, 0x88) = arg1;
    M2C_FIELD(arg0, s32 *, 0x14) = arg2;
    if (arg2 != 0) {
        func_0011B9F8__func_001920D0(arg0 + 0x18, arg2, arg3);
    }
}

extern M2C_UNK func_0011BA40__func_00192108(void *) __asm__("func_0011BA40");

void func_00192108(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x14) != 0) {
        func_0011BA40__func_00192108(arg0 + 0x18);
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00192140);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001921B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001922B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00192B28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00192BC8);

void func_00192E58(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00192E60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00192EA8);

extern f32 D_00476E48__func_00193060 __asm__("D_00476E48");

void func_00193060(f32 arg0) {
    D_00476E48__func_00193060 = arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00193070);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00193150);

extern void *func_001332C0__func_001931A0() __asm__("func_001332C0");
extern M2C_UNK func_0019A7F0__func_001931A0(s32, s32, s32) __asm__("func_0019A7F0");

void func_001931A0(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = func_001332C0__func_001931A0();
    if (temp_v0 != NULL) {
        func_0019A7F0__func_001931A0(M2C_FIELD(temp_v0, s32 *, 0x10), arg0, arg1 + 1);
    }
}

extern s32 func_00189020__func_001931E8(M2C_UNK *, s32) __asm__("func_00189020");
extern M2C_UNK func_001A2C90__func_001931E8(s32, M2C_UNK) __asm__("func_001A2C90");
extern M2C_UNK D_00444DD0__func_001931E8 __asm__("D_00444DD0");

void func_001931E8(s32 arg0, M2C_UNK arg1) {
    func_001A2C90__func_001931E8(func_00189020__func_001931E8(&D_00444DD0__func_001931E8, arg0), arg1);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00193228);

void func_00193540(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00193548);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00193580);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00193668);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001936A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00193868);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00193960);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00193B40);

extern void *func_001332C0__func_00193C40() __asm__("func_001332C0");
extern void *func_00192030__func_00193C40() __asm__("func_00192030");

void func_00193C40(void) {
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = func_001332C0__func_00193C40();
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0xC) = (s32) (M2C_FIELD(temp_v0, s32 *, 0xC) | 0x400);
        temp_v0_2 = func_00192030__func_00193C40();
        M2C_FIELD(temp_v0_2, s32 *, 0x1F0) = (s32) (M2C_FIELD(temp_v0_2, s32 *, 0x1F0) & ~4);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00193C88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00193C90);

extern M2C_UNK func_00101EF8__func_00193DA0(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_00131B30__func_00193DA0(f32) __asm__("func_00131B30");
extern M2C_UNK D_003FDAA0__func_00193DA0 __asm__("D_003FDAA0");
extern f32 D_00476E48__func_00193DA0 __asm__("D_00476E48");

void func_00193DA0(f32 arg0) {
    D_00476E48__func_00193DA0 = arg0;
    func_00101EF8__func_00193DA0(&D_003FDAA0__func_00193DA0, 3);
    func_00131B30__func_00193DA0(arg0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00193DE0);

extern void *func_001332C0__func_00193DE8() __asm__("func_001332C0");

s32 func_00193DE8(s32 arg0) {
    void *temp_a1;
    void *temp_v0;

    temp_v0 = func_001332C0__func_00193DE8();
    if (temp_v0 != NULL) {
        if (M2C_FIELD(temp_v0, s32 *, 0xC) & 2) {
            temp_a1 = M2C_FIELD(temp_v0, void **, 0x130);
            M2C_FIELD(temp_a1, s32 *, 0x14) = (s32) (M2C_FIELD(temp_a1, s32 *, 0x14) | (1 << arg0));
            return 1;
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00193E48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00193F30);

void func_00193F98(void) {
}

void func_00193FA0(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", CDemolitionCar_Init);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00194178);

extern M2C_UNK func_001144B8__func_00194208(s32) __asm__("func_001144B8");
extern M2C_UNK func_00115858__func_00194208(s32) __asm__("func_00115858");
extern M2C_UNK func_00116E60__func_00194208(s32) __asm__("func_00116E60");
extern M2C_UNK func_00117968__func_00194208(s32) __asm__("func_00117968");
extern M2C_UNK func_00118498__func_00194208(void *) __asm__("func_00118498");

void func_00194208(void *arg0) {
    s32 temp_s0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 0x120);
    func_00116E60__func_00194208(temp_s0);
    func_001144B8__func_00194208(temp_s0 + 0x140);
    func_00115858__func_00194208(temp_s0);
    func_00117968__func_00194208(temp_s0);
    func_00118498__func_00194208(arg0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00194260);

void func_00194378(void) {
}

void func_00194380(void) {
}

void func_00194388(void) {
}

extern void *func_001332C0__func_00194390() __asm__("func_001332C0");

void func_00194390(void) {
    void *temp_a0;
    void *temp_v0;

    temp_v0 = func_001332C0__func_00194390();
    if (temp_v0 != NULL) {
        temp_a0 = M2C_FIELD(M2C_FIELD(temp_v0, void **, 0x134), void **, 8);
        M2C_FIELD(temp_a0, s32 *, 0x138) = (s32) (M2C_FIELD(temp_a0, s32 *, 0x138) | 0x800);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001943C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00194500);

void func_001945A8(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001945B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00194620);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001948F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00194A60);

extern M2C_UNK func_00119EB8__func_00194BB8(s32) __asm__("func_00119EB8");
extern M2C_UNK func_0011A2F8__func_00194BB8(s32) __asm__("func_0011A2F8");
extern M2C_UNK func_001A9C40__func_00194BB8(s32) __asm__("func_001A9C40");

void func_00194BB8(void *arg0) {
    s32 temp_a0;

    func_001A9C40__func_00194BB8(M2C_FIELD(arg0, s32 *, 0x24));
    temp_a0 = M2C_FIELD(arg0, s32 *, 0x24);
    if (temp_a0 != 0) {
        func_0011A2F8__func_00194BB8(temp_a0);
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
    }
    func_00119EB8__func_00194BB8(M2C_FIELD(arg0, s32 *, 0xC));
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00194C00);

void func_00194DB0(void) {
}

void func_00194DB8(void) {
}

void func_00194DC0(void) {
}

void func_00194DC8(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00194DD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00194E40);

void func_00195118(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00195120);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001951A8);

extern M2C_UNK func_001958A0__func_00195258() __asm__("func_001958A0");

void func_00195258(void) {
    func_001958A0__func_00195258();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00195278);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001953E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00195478);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00195508);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00195570);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00195670);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001956F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00195740);

extern s32 func_00133218__func_001957A0() __asm__("func_00133218");
extern M2C_UNK func_00195508__func_001957A0(s32, s32) __asm__("func_00195508");

void func_001957A0(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_00133218__func_001957A0();
    if (temp_v0 != 0) {
        func_00195508__func_001957A0(temp_v0, arg0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001957D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001958A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00195A80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00195CB8);

extern M2C_UNK func_00195CB8__func_00195D28(M2C_UNK, M2C_UNK) __asm__("func_00195CB8");

void func_00195D28(void) {
    func_00195CB8__func_00195D28(1, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00195D48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00195F10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00195F48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00196000);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00196168);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001961C0);

extern M2C_UNK func_001961C0__func_001965D8(M2C_UNK, M2C_UNK) __asm__("func_001961C0");

void func_001965D8(void) {
    func_001961C0__func_001965D8(1, 0xFFFF);
}

extern M2C_UNK func_001961C0__func_001965F8(M2C_UNK, M2C_UNK) __asm__("func_001961C0");

void func_001965F8(void) {
    func_001961C0__func_001965F8(0, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", CCreatePlayerLogic_Init);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00196878);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00196880);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00196970);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00196B78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00196C78);

extern M2C_UNK func_00196C78__func_001973A0(M2C_UNK, M2C_UNK) __asm__("func_00196C78");

void func_001973A0(void) {
    func_00196C78__func_001973A0(1, 0xFFFF);
}

extern M2C_UNK func_00196C78__func_001973C0(M2C_UNK, M2C_UNK) __asm__("func_00196C78");

void func_001973C0(void) {
    func_00196C78__func_001973C0(0, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001973E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00197450);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001974A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00197518);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00197520);

INCLUDE_ASM("asm/nonmatchings/cod/000000", CArena_Init);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00197E08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00198888);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00198B28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00198F80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00199138);

extern s32 func_00101EF8__func_001992B0(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_001D0A00__func_001992B0(s32) __asm__("func_001D0A00");
extern M2C_UNK func_001D56F0__func_001992B0(s32) __asm__("func_001D56F0");
extern M2C_UNK D_003FDAA0__func_001992B0 __asm__("D_003FDAA0");

void func_001992B0(void *arg0) {
    s32 temp_a0;
    s32 temp_v0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xA0);
    if (temp_a0 != 0) {
        func_001D56F0__func_001992B0(temp_a0);
    }
    temp_v0 = func_00101EF8__func_001992B0(&D_003FDAA0__func_001992B0, 0x22);
    if (temp_v0 != 0) {
        func_001D0A00__func_001992B0(temp_v0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001992F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00199688);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00199698);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00199750);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00199848);

s32 func_00199B68(void *arg0, s32 arg1) {
    if ((arg1 < 0) || (arg1 >= M2C_FIELD(arg0, s32 *, 0x28))) {
        return 0;
    }
    return M2C_FIELD(((arg1 * 0x4C0) + M2C_FIELD(arg0, s32 *, 0x2C)), s32 *, 0x454);
}

extern M2C_UNK func_0019BB78__func_00199BA0(s32, M2C_UNK) __asm__("func_0019BB78");

void func_00199BA0(void *arg0, s32 arg1, M2C_UNK arg2) {
    if (arg1 >= 0) {
        if (arg1 < M2C_FIELD(arg0, s32 *, 0x28)) {
            func_0019BB78__func_00199BA0(M2C_FIELD(arg0, s32 *, 0x2C) + (arg1 * 0x4C0), arg2);
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00199BE8);

s32 func_00199C20(void *arg0, s32 arg1) {
    if ((arg1 < 0) || (arg1 >= M2C_FIELD(arg0, s32 *, 0x28))) {
        return 0;
    }
    return M2C_FIELD(arg0, s32 *, 0x2C) + (arg1 * 0x4C0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00199C50);

extern M2C_UNK func_00199C50__func_00199CE0() __asm__("func_00199C50");

void func_00199CE0(void) {
    func_00199C50__func_00199CE0();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00199D00);

/* Retorna um elemento (0x4C0 bytes cada) de uma lista, ou um padrão se o índice for inválido. */
typedef struct {
    /* 0x00 */ char unk0[0x28];
    /* 0x28 */ s32 count;
    /* 0x2C */ s32 items;
} UnkList199D48;

extern char D_003CA618[];

void *func_00199D48(UnkList199D48 *list, s32 index) {
    if (index < 0 || index >= list->count) {
        return D_003CA618;
    }
    return (void *)(index * 0x4C0 + list->items + 0x434);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00199D80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00199E10);

extern M2C_UNK func_001A97F0__func_00199E50(s32) __asm__("func_001A97F0");

void func_00199E50(s32 arg0) {
    func_001A97F0__func_00199E50(arg0 + 0x58);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00199E70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00199EB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", CArena_SetLightingParticle);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00199F70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019A0B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019A138);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019A150);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019A2B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019A668);

s32 func_0019A6E8(void *arg0, s32 arg1) {
    if ((arg1 < 0) || (arg1 >= M2C_FIELD(arg0, s32 *, 0x3B0))) {
        return 0;
    }
    return M2C_FIELD(arg0, s32 *, 0x3B4) + (arg1 * 0x30);
}

s32 func_0019A718(void *arg0, s32 arg1) {
    if ((arg1 < 0) || (arg1 >= M2C_FIELD(arg0, s32 *, 0x3B0))) {
        return 0;
    }
    return M2C_FIELD(arg0, s32 *, 0x3B4) + (arg1 * 0x30) + 0x10;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019A750);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019A758);

extern M2C_UNK func_001AB698__func_0019A7C8(s32) __asm__("func_001AB698");

void func_0019A7C8(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x3B8);
    if (temp_a0 != 0) {
        func_001AB698__func_0019A7C8(temp_a0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019A7F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019A8D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019A960);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019A9F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019AA80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019AA90);

void func_0019AB18(void) {
}

extern M2C_UNK func_0019AB18__func_0019AB20(M2C_UNK, M2C_UNK) __asm__("func_0019AB18");

void func_0019AB20(void) {
    func_0019AB18__func_0019AB20(1, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019AB40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019ABD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", CArenaObject_LoadXML);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019B170);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019B1B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019B290);

extern s32 func_00101EF8__func_0019B328(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_0010BED0__func_0019B328(s32, void *) __asm__("func_0010BED0");
extern M2C_UNK D_003FDAA0__func_0019B328 __asm__("D_003FDAA0");

void func_0019B328(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x430) & 0x20)) {
        func_0010BED0__func_0019B328(func_00101EF8__func_0019B328(&D_003FDAA0__func_0019B328, 6), arg0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019B378);

extern M2C_UNK func_0019B328__func_0019B420() __asm__("func_0019B328");

void func_0019B420(void) {
    func_0019B328__func_0019B420();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019B440);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019B660);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019B750);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019BA80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019BB78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019BBD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019BC68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019BC70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019BCD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019BD20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019BDA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019BE28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019BEE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019BF28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019BF68);

extern s32 D_0037A6C4__func_0019BFB0 __asm__("D_0037A6C4");

void func_0019BFB0(void) {
    D_0037A6C4__func_0019BFB0 = (D_0037A6C4__func_0019BFB0 + 1) & 1;
}

extern s32 D_0037A6C4__func_0019BFC8 __asm__("D_0037A6C4");

void func_0019BFC8(void) {
    D_0037A6C4__func_0019BFC8 = 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019BFD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019C028);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019C0D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019C118);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019C188);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019C1D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019C1E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", CIPCharacter_Init);

extern M2C_UNK CIPCharacter_Init__func_0019C480(s32) __asm__("CIPCharacter_Init");
extern M2C_UNK func_0019C1E8__func_0019C480() __asm__("func_0019C1E8");

s32 func_0019C480(s32 arg0) {
    func_0019C1E8__func_0019C480();
    CIPCharacter_Init__func_0019C480(arg0);
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019C4B0);

extern M2C_UNK func_00112CE8__func_0019C4E0(s32) __asm__("func_00112CE8");
extern M2C_UNK func_001130A8__func_0019C4E0(s32) __asm__("func_001130A8");
extern M2C_UNK func_001153D8__func_0019C4E0(s32) __asm__("func_001153D8");
extern M2C_UNK func_0019C530__func_0019C4E0(void *) __asm__("func_0019C530");
extern M2C_UNK func_0019C6F0__func_0019C4E0() __asm__("func_0019C6F0");
extern M2C_UNK func_001A3658__func_0019C4E0(s32) __asm__("func_001A3658");

void func_0019C4E0(void *arg0) {
    func_0019C6F0__func_0019C4E0();
    func_001130A8__func_0019C4E0(arg0 + 0x440);
    func_00112CE8__func_0019C4E0(arg0 + 0x890);
    func_001153D8__func_0019C4E0(arg0 + 0x10);
    func_001A3658__func_0019C4E0(arg0 + 0x450);
    func_0019C530__func_0019C4E0(arg0);
    M2C_FIELD(arg0, s32 *, 0x8A8) = 0;
}

extern s32 func_00101EF8__func_0019C530(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_00119EB8__func_0019C530(s32) __asm__("func_00119EB8");
extern M2C_UNK func_0016EAE0__func_0019C530(s32, s32, M2C_UNK) __asm__("func_0016EAE0");
extern M2C_UNK D_003FDAA0__func_0019C530 __asm__("D_003FDAA0");

void func_0019C530(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_a0 != 0) {
        func_00119EB8__func_0019C530(temp_a0);
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        func_0016EAE0__func_0019C530(func_00101EF8__func_0019C530(&D_003FDAA0__func_0019C530, 0x12), M2C_FIELD(arg0, s32 *, 0), 1);
        M2C_FIELD(arg0, s32 *, 0) = 0;
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019C598);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019C5D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019C620);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019C668);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019C678);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019C6F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019C748);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019C778);

extern M2C_UNK func_00116778__func_0019C848(void *, M2C_UNK) __asm__("func_00116778");
extern M2C_UNK func_00116880__func_0019C848(void *, M2C_UNK *) __asm__("func_00116880");
extern s32 func_00347288__func_0019C848(M2C_UNK *, s32, M2C_UNK) __asm__("func_00347288");
extern M2C_UNK D_003CB420__func_0019C848 __asm__("D_003CB420");
extern M2C_UNK D_003CB440__func_0019C848 __asm__("D_003CB440");

void func_0019C848(void *arg0, M2C_UNK arg1) {
    void *temp_s0;

    if (func_00347288__func_0019C848(&D_003CB440__func_0019C848, M2C_FIELD(arg0, s32 *, 8), 6) == 0) {
        temp_s0 = arg0 + 0x10;
        func_00116778__func_0019C848(temp_s0, arg1);
        func_00116880__func_0019C848(temp_s0, &D_003CB420__func_0019C848);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019C8B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019C8F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019C930);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019CA78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019CB80);

void func_0019CE48(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xA500) = 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019CE58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019CF30);

extern s32 func_00101EF8__func_0019CFB0(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_0010BED0__func_0019CFB0(s32, void *) __asm__("func_0010BED0");
extern M2C_UNK D_003FDAA0__func_0019CFB0 __asm__("D_003FDAA0");

void func_0019CFB0(void *arg0) {
    s32 temp_s1;
    void *temp_a1;

    if (M2C_FIELD(arg0, s32 *, 0x134) != 0) {
        temp_s1 = func_00101EF8__func_0019CFB0(&D_003FDAA0__func_0019CFB0, 6);
        temp_a1 = arg0 + 0xA080;
        if (M2C_FIELD(temp_a1, s32 *, 0x12C) != 0) {
            func_0010BED0__func_0019CFB0(temp_s1, temp_a1);
        }
        func_0010BED0__func_0019CFB0(temp_s1, arg0);
        M2C_FIELD(arg0, s32 *, 0x134) = 0;
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019D020);

extern M2C_UNK func_001144B8__func_0019D198(void *) __asm__("func_001144B8");
extern M2C_UNK func_00115858__func_0019D198(void *) __asm__("func_00115858");
extern M2C_UNK func_00116090__func_0019D198(void *) __asm__("func_00116090");
extern M2C_UNK func_00117968__func_0019D198(void *) __asm__("func_00117968");
extern M2C_UNK func_00118498__func_0019D198(void *) __asm__("func_00118498");

void func_0019D198(void *arg0) {
    s32 temp_v1;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x120);
    temp_v1 = M2C_FIELD(temp_s0, s32 *, 0x138);
    if (!(temp_v1 & 0x800)) {
        if (!(M2C_FIELD(arg0, s32 *, 0x130) & 8)) {
            if (temp_v1 & 0x8000) {
                func_00116090__func_0019D198(temp_s0);
            } else {
                func_001144B8__func_0019D198(temp_s0 + 0x140);
            }
            func_00115858__func_0019D198(temp_s0);
            func_00117968__func_0019D198(temp_s0);
        }
        func_00118498__func_0019D198(arg0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019D220);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019D228);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019D400);

extern M2C_UNK func_0019E6E0__func_0019D478() __asm__("func_0019E6E0");
extern M2C_UNK func_0019E730__func_0019D478(s32) __asm__("func_0019E730");

void func_0019D478(s32 arg0) {
    func_0019E6E0__func_0019D478();
    func_0019E730__func_0019D478(arg0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019D4A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019D518);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019DC38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019DC90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019DD10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019DEF0);

extern M2C_UNK func_0019DD10__func_0019DF48(s32, M2C_UNK, M2C_UNK *) __asm__("func_0019DD10");
extern M2C_UNK func_0019DEF0__func_0019DF48(s32, M2C_UNK, M2C_UNK *) __asm__("func_0019DEF0");
extern M2C_UNK D_003CB6A8__func_0019DF48 __asm__("D_003CB6A8");
extern M2C_UNK D_003CB6B0__func_0019DF48 __asm__("D_003CB6B0");

void func_0019DF48(s32 arg0, M2C_UNK arg1, M2C_UNK *arg2, M2C_UNK *arg3) {
    M2C_UNK *var_a2;
    M2C_UNK *var_a2_2;

    var_a2 = arg2;
    if (var_a2 == NULL) {
        var_a2 = &D_003CB6A8__func_0019DF48;
    }
    func_0019DD10__func_0019DF48(arg0, arg1, var_a2);
    var_a2_2 = arg3;
    if (var_a2_2 == NULL) {
        var_a2_2 = &D_003CB6B0__func_0019DF48;
    }
    func_0019DEF0__func_0019DF48(arg0, arg1, var_a2_2);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019DFB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019E178);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019E358);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019E4C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019E5F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019E6E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019E730);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019E7D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019E8B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019E980);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019EAE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019EC30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019ECD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019EE38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019EF30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019F7B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019F808);

extern s32 func_00347288__func_0019F810(M2C_UNK *, s32, M2C_UNK) __asm__("func_00347288");
extern M2C_UNK D_003CBBC8__func_0019F810 __asm__("D_003CBBC8");

void func_0019F810(void *arg0, s32 arg1) {
    s32 temp_s1;

    temp_s1 = arg1 * 0xF0;
    if (func_00347288__func_0019F810(&D_003CBBC8__func_0019F810, M2C_FIELD(arg0, s32 *, 0xA508) + temp_s1 + 0x4D, 4) == 0) {
        M2C_FIELD((temp_s1 + M2C_FIELD(arg0, s32 *, 0xA508)), s32 *, 0x9C) = -1;
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019F878);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019F970);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019FBD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019FC68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019FCA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0019FCF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A0008);

extern M2C_UNK func_00346C0C__func_001A01D8(s32, M2C_UNK *) __asm__("func_00346C0C");
extern s32 func_00346EDC__func_001A01D8(s32, M2C_UNK *) __asm__("func_00346EDC");
extern M2C_UNK D_003CB6A8__func_001A01D8 __asm__("D_003CB6A8");
extern M2C_UNK D_003CB718__func_001A01D8 __asm__("D_003CB718");
extern M2C_UNK D_003CBD48__func_001A01D8 __asm__("D_003CBD48");

void func_001A01D8(void *arg0) {
    if ((func_00346EDC__func_001A01D8(M2C_FIELD(arg0, s32 *, 0xA508) + 0xE30, &D_003CB718__func_001A01D8) != 0) && (func_00346EDC__func_001A01D8(M2C_FIELD(arg0, s32 *, 0xA508) + 0xE30, &D_003CB6A8__func_001A01D8) != 0) && (M2C_FIELD(arg0, s32 *, 0xA4FC) >= 4)) {
        func_00346C0C__func_001A01D8(M2C_FIELD(arg0, s32 *, 0xA508) + 0xE30, &D_003CBD48__func_001A01D8);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A0258);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A0318);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A03E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A0578);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A0660);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A0798);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A0818);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A0868);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A0970);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A0978);

void func_001A0A08(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(((arg1 * 0xF0) + M2C_FIELD(arg0, s32 *, 0xA508)), s32 *, 0xA0) = arg2;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A0A28);

extern M2C_UNK func_0019E6E0__func_001A0AC0() __asm__("func_0019E6E0");
extern M2C_UNK func_0019E730__func_001A0AC0(s32) __asm__("func_0019E730");
extern M2C_UNK func_0019FCA8__func_001A0AC0(s32) __asm__("func_0019FCA8");

void func_001A0AC0(s32 arg0) {
    func_0019E6E0__func_001A0AC0();
    func_0019FCA8__func_001A0AC0(arg0);
    func_0019E730__func_001A0AC0(arg0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A0AF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A0D10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A0D48);

void func_001A0DE8(void) {
}

void func_001A0DF0(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A0DF8);

void func_001A0E00(void *arg0, s32 arg1, s32 arg2) {
    if (arg1 >= 0) {
        if (arg1 >= 5) {
            if (arg1 == 5) {
                M2C_FIELD(arg0, s32 *, 0xA4FC) = arg2;
                M2C_FIELD(M2C_FIELD(arg0, void **, 0xA508), s32 *, 0x590) = 0;
                return;
            }
            goto block_5;
        }
    } else {
block_5:
        M2C_FIELD(((arg1 * 0xF0) + M2C_FIELD(arg0, void **, 0xA508)), s32 *, 0xE0) = arg2;
    }
}

s32 func_001A0E58(void *arg0, s32 arg1) {
    return M2C_FIELD(((arg1 * 0xF0) + M2C_FIELD(arg0, s32 *, 0xA508)), s32 *, 0xE0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A0E78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A0EB8);

void func_001A0EF0(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(((arg1 * 0xF0) + M2C_FIELD(arg0, s32 *, 0xA508)), s32 *, 0xDC) = arg2;
}

s32 func_001A0F10(void *arg0, s32 arg1) {
    return M2C_FIELD(((arg1 * 0xF0) + M2C_FIELD(arg0, s32 *, 0xA508)), s32 *, 0xDC);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A0F30);

s32 func_001A0F50(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 0xA508) + (arg1 * 0xF0) + 0xBC;
}

s32 func_001A0F70(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 0xA508) + (arg1 * 0xF0) + 0x20;
}

void func_001A0F90(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(((arg1 * 0xF0) + M2C_FIELD(arg0, s32 *, 0xA508)), s32 *, 0x9C) = arg2;
}

s32 func_001A0FB0(void *arg0, s32 arg1) {
    return M2C_FIELD(((arg1 * 0xF0) + M2C_FIELD(arg0, s32 *, 0xA508)), s32 *, 0x9C);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A0FD0);

s32 func_001A1008(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 0xA508) + (arg1 * 0xF0) + 0x44;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A1028);

extern s32 func_00101EF8__func_001A10D0(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_0011BA40__func_001A10D0(void *) __asm__("func_0011BA40");
extern M2C_UNK func_0016CEA8__func_001A10D0(s32, s32) __asm__("func_0016CEA8");
extern M2C_UNK D_003FDAA0__func_001A10D0 __asm__("D_003FDAA0");

void func_001A10D0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xA50C) != -1) {
        func_0011BA40__func_001A10D0(arg0 + 0xA510);
        func_0016CEA8__func_001A10D0(func_00101EF8__func_001A10D0(&D_003FDAA0__func_001A10D0, 0x11), M2C_FIELD(arg0, s32 *, 0xA50C));
        M2C_FIELD(arg0, s32 *, 0xA50C) = -1;
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A1140);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A1698);

INCLUDE_ASM("asm/nonmatchings/cod/000000", CWPCreatePlayer_DebugDefaultInGame);

INCLUDE_ASM("asm/nonmatchings/cod/000000", CWPCreatePlayer_DebugDefaultViewer);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A1958);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A1C58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A1CA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A1CF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A2038);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A2098);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A2208);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A2268);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A2330);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A2500);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A2550);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A25B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A2640);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A2768);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A27E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A2908);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A2980);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A29D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A2AE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A2BE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A2C90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A2CE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A2D78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A2DC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A2E18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A2E80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A2EE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A2F38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A2FE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A3048);

extern f32 func_001A2980__func_001A3208() __asm__("func_001A2980");

f32 func_001A3208(void) {
    return (func_001A2980__func_001A3208() * 180.0f) / 3.1415927f;
}

extern M2C_UNK func_001A29D0__func_001A3240() __asm__("func_001A29D0");

void func_001A3240(void) {
    func_001A29D0__func_001A3240();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A3260);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A3268);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A3288);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A3358);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A33B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A34D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A34D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A3558);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A3560);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A3658);

extern s32 func_00101EF8__func_001A36D0(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_0010BE78__func_001A36D0(s32, s32, M2C_UNK) __asm__("func_0010BE78");
extern M2C_UNK D_003FDAA0__func_001A36D0 __asm__("D_003FDAA0");

void func_001A36D0(s32 arg0) {
    func_0010BE78__func_001A36D0(func_00101EF8__func_001A36D0(&D_003FDAA0__func_001A36D0, 6), arg0 + 0x10, 3);
}

extern s32 func_00101EF8__func_001A3710(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_0010BED0__func_001A3710(s32, s32) __asm__("func_0010BED0");
extern M2C_UNK D_003FDAA0__func_001A3710 __asm__("D_003FDAA0");

void func_001A3710(s32 arg0) {
    func_0010BED0__func_001A3710(func_00101EF8__func_001A3710(&D_003FDAA0__func_001A3710, 6), arg0 + 0x10);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", CBaseAnimationData_Init);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A3B90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A3CA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A3D88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A3D90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A3E18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A3E80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A3EB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A3EF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A3F40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A3F48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A3FB0);

extern s32 func_001A3D90__func_001A3FC0(s32, M2C_UNK) __asm__("func_001A3D90");

s32 func_001A3FC0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x10) = func_001A3D90__func_001A3FC0(M2C_FIELD(arg0, s32 *, 0xC), 0);
    M2C_FIELD(arg0, s32 *, 0x14) = func_001A3D90__func_001A3FC0(M2C_FIELD(arg0, s32 *, 0xC), 1);
    M2C_FIELD(arg0, s32 *, 0x18) = func_001A3D90__func_001A3FC0(M2C_FIELD(arg0, s32 *, 0xC), 2);
    M2C_FIELD(arg0, s32 *, 0x1C) = func_001A3D90__func_001A3FC0(M2C_FIELD(arg0, s32 *, 0xC), 3);
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = -1;
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A4030);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A4078);

extern s32 CBlazinAnimationData_GetAnimationBank__func_001A4400(s32, M2C_UNK, s32) __asm__("CBlazinAnimationData_GetAnimationBank");
extern M2C_UNK func_00116688__func_001A4400(M2C_UNK, s32, s32) __asm__("func_00116688");
extern s32 func_001A3D90__func_001A4400(s32, M2C_UNK) __asm__("func_001A3D90");
extern s32 func_001A3E18__func_001A4400(s32, s32, M2C_UNK) __asm__("func_001A3E18");
extern s32 func_001A5F50__func_001A4400(s32, s32, M2C_UNK) __asm__("func_001A5F50");

void func_001A4400(void *arg0, M2C_UNK arg1, s32 arg2) {
    s32 var_s0;
    s32 var_v0;

    if (arg2 < M2C_FIELD(arg0, s32 *, 0x6C)) {
        var_s0 = func_001A3D90__func_001A4400(M2C_FIELD(arg0, s32 *, 0xC), 0);
        var_v0 = func_001A3E18__func_001A4400(M2C_FIELD(arg0, s32 *, 0xC), arg2, 0x73);
    } else {
        var_s0 = CBlazinAnimationData_GetAnimationBank__func_001A4400(M2C_FIELD(arg0, s32 *, 0x74), 0, arg2);
        var_v0 = func_001A5F50__func_001A4400(M2C_FIELD(arg0, s32 *, 0x74), arg2, 0x73);
    }
    func_00116688__func_001A4400(arg1, var_v0, var_s0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A44A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A44C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A45C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A4618);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A4628);

INCLUDE_ASM("asm/nonmatchings/cod/000000", CSkilAnimationData_Init);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A4BA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A4D28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A4E48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A4E50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A4EF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A4F80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A4FD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A5040);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A50B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A5140);

extern s32 func_001A4E50__func_001A5150(s32, M2C_UNK, M2C_UNK) __asm__("func_001A4E50");

s32 func_001A5150(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x10) = func_001A4E50__func_001A5150(M2C_FIELD(arg0, s32 *, 0xC), 0, 0);
    M2C_FIELD(arg0, s32 *, 0x14) = func_001A4E50__func_001A5150(M2C_FIELD(arg0, s32 *, 0xC), 0, 1);
    M2C_FIELD(arg0, s32 *, 0x18) = func_001A4E50__func_001A5150(M2C_FIELD(arg0, s32 *, 0xC), 0, 2);
    M2C_FIELD(arg0, s32 *, 0x1C) = func_001A4E50__func_001A5150(M2C_FIELD(arg0, s32 *, 0xC), 0, 3);
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = -1;
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A51D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A5218);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A5458);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A54F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A5510);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A55D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A5630);

INCLUDE_ASM("asm/nonmatchings/cod/000000", CBlazinAnimationData_Init);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A5810);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A5C00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A5DE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", CBlazinAnimationData_GetAnimationBank);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A5F50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A5FE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A6040);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A60B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A6120);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A6188);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A61C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A6210);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A6268);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A6270);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A6388);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A6408);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A68A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A6968);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A6970);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A6A08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A6A68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A6A90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A6AD0);

extern M2C_UNK func_00347028__func_001A6B10(M2C_UNK, s32) __asm__("func_00347028");

void func_001A6B10(void *arg0, M2C_UNK arg1) {
    func_00347028__func_001A6B10(arg1, M2C_FIELD(arg0, s32 *, 4));
}

extern s32 func_001A6970__func_001A6B38(s32, M2C_UNK, M2C_UNK) __asm__("func_001A6970");

s32 func_001A6B38(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x10) = func_001A6970__func_001A6B38(M2C_FIELD(arg0, s32 *, 0xC), 0, 0);
    M2C_FIELD(arg0, s32 *, 0x14) = func_001A6970__func_001A6B38(M2C_FIELD(arg0, s32 *, 0xC), 1, 0);
    M2C_FIELD(arg0, s32 *, 0x18) = func_001A6970__func_001A6B38(M2C_FIELD(arg0, s32 *, 0xC), 2, 0);
    M2C_FIELD(arg0, s32 *, 0x1C) = func_001A6970__func_001A6B38(M2C_FIELD(arg0, s32 *, 0xC), 3, 0);
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = -1;
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A6BB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A6C00);

extern M2C_UNK func_00116688__func_001A6E00(M2C_UNK, s32, s32) __asm__("func_00116688");
extern s32 func_001A6A08__func_001A6E00(s32, M2C_UNK, M2C_UNK) __asm__("func_001A6A08");

void func_001A6E00(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_00116688__func_001A6E00(arg1, func_001A6A08__func_001A6E00(M2C_FIELD(arg0, s32 *, 0xC), arg2, 0x73), M2C_FIELD(arg0, s32 *, 0x10));
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A6E50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A6E70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A6F00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A6F58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A6FF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", CIntroExtroSubsystem_Init);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A7178);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A72D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A7550);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A7590);

void func_001A7868(void) {
}

void func_001A7870(void *arg0, void *arg1) {
    M2C_FIELD(arg0, f32 *, 0x174) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0x178) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x17C) = (f32) M2C_FIELD(arg1, f32 *, 8);
}

void func_001A7890(void *arg0, void *arg1) {
    M2C_FIELD(arg0, f32 *, 0x180) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0x184) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x188) = (f32) M2C_FIELD(arg1, f32 *, 8);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A78B0);

void func_001A78C8(void *arg0, s32 arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA0), s32 *, 0x2C) = arg1;
}

void func_001A78D8(void *arg0, void *arg1, s32 arg2) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x94) + (arg2 * 0x68);
    M2C_FIELD(temp_v0, f32 *, 0x48) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(temp_v0, f32 *, 0x4C) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(temp_v0, f32 *, 0x50) = (f32) M2C_FIELD(arg1, f32 *, 8);
}

void func_001A7908(void *arg0, void *arg1, s32 arg2) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x94) + (arg2 * 0x68);
    M2C_FIELD(temp_v0, f32 *, 0x58) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(temp_v0, f32 *, 0x5C) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(temp_v0, f32 *, 0x60) = (f32) M2C_FIELD(arg1, f32 *, 8);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A7938);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A7978);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A7A40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A7A90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A7C68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A7DC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A7F98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A80E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A8188);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A83A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A85A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A8650);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A88D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A8C40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A8D58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A9040);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A92C8);

extern s32 D_00498BB0__func_001A92D0 __asm__("D_00498BB0");

void func_001A92D0(s32 arg0, s32 arg1) {
    if ((arg1 == 0xFFFF) && (arg0 != 0)) {
        D_00498BB0__func_001A92D0 = 0;
    }
}

extern M2C_UNK func_001A92D0__func_001A92F0(M2C_UNK, M2C_UNK) __asm__("func_001A92D0");

void func_001A92F0(void) {
    func_001A92D0__func_001A92F0(1, 0xFFFF);
}

extern M2C_UNK func_001A92D0__func_001A9310(M2C_UNK, M2C_UNK) __asm__("func_001A92D0");

void func_001A9310(void) {
    func_001A92D0__func_001A9310(0, 0xFFFF);
}

extern M2C_UNK func_00347680__func_001A9330(M2C_UNK, M2C_UNK *, s32, M2C_UNK) __asm__("func_00347680");
extern M2C_UNK D_003CE950__func_001A9330 __asm__("D_003CE950");

void func_001A9330(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_00347680__func_001A9330(arg2, &D_003CE950__func_001A9330, arg0, arg1);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A9360);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A94B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A9568);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A9638);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A96E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A97E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A97F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A9860);

INCLUDE_ASM("asm/nonmatchings/cod/000000", CWP_Morph_Init);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A9938);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A99F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A9A80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A9AB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A9B10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A9B68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A9B70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", CWP_Texture_Init);

extern M2C_UNK func_0011A318__func_001A9C40(s32) __asm__("func_0011A318");
extern M2C_UNK func_0031E8C0__func_001A9C40(s32) __asm__("func_0031E8C0");

void func_001A9C40(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;

    temp_a0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_a0 != 0) {
        func_0031E8C0__func_001A9C40(temp_a0);
    }
    temp_a0_2 = M2C_FIELD(arg0, s32 *, 0x50);
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    if (temp_a0_2 != 0) {
        func_0011A318__func_001A9C40(temp_a0_2);
        M2C_FIELD(arg0, s32 *, 0x50) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A9CB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A9CF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A9DD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A9E38);

extern s32 func_00112E20__func_001A9F18(s32) __asm__("func_00112E20");
extern s8 *func_0031E848__func_001A9F18(s32) __asm__("func_0031E848");

s32 func_001A9F18(void *arg0) {
    s8 *temp_v0;

    temp_v0 = func_0031E848__func_001A9F18(func_00112E20__func_001A9F18(M2C_FIELD(arg0, s32 *, 4)));
    if (temp_v0 == NULL) {
        return 0;
    }
    return *temp_v0 - 0x30;
}

extern s32 func_00112E20__func_001A9F50(s32, M2C_UNK) __asm__("func_00112E20");
extern void *func_0031E848__func_001A9F50(s32) __asm__("func_0031E848");

s32 func_001A9F50(void *arg0) {
    void *temp_v0;

    temp_v0 = func_0031E848__func_001A9F50(func_00112E20__func_001A9F50(M2C_FIELD(arg0, s32 *, 4), 0));
    if (temp_v0 == NULL) {
        return 0;
    }
    return M2C_FIELD(temp_v0, s8 *, 2) - 0x30;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001A9F88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AA0C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AA1C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AA1F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AA258);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AA260);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AA2A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AA7F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AA820);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AA828);

extern M2C_UNK func_001161F0__func_001AA9C8(M2C_UNK, void *, void *, s32) __asm__("func_001161F0");
extern M2C_UNK func_00116368__func_001AA9C8(M2C_UNK, void *, void *, s32) __asm__("func_00116368");
extern M2C_UNK func_001164F8__func_001AA9C8(M2C_UNK, void *, void *, s32) __asm__("func_001164F8");

void func_001AA9C8(void *arg0, M2C_UNK arg1, s32 *arg2, s32 arg3) {
    s32 temp_a3;
    void *temp_s0;

    temp_a3 = arg3 * 0x50;
    temp_s0 = *arg2 + temp_a3;
    if (M2C_FIELD(temp_s0, s32 *, 0x2C) != -1) {
        func_001161F0__func_001AA9C8(arg1, temp_s0, temp_s0 + 0x20, temp_a3);
    }
    if (M2C_FIELD(temp_s0, s32 *, 0x3C) != -1) {
        func_00116368__func_001AA9C8(arg1, temp_s0, temp_s0 + 0x30, M2C_FIELD(arg0, s32 *, 0xC));
    }
    if (M2C_FIELD(temp_s0, s32 *, 0x4C) != -1) {
        func_001164F8__func_001AA9C8(arg1, temp_s0, temp_s0 + 0x40, M2C_FIELD(arg0, s32 *, 0x10));
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AAA68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AABC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", CWP_Rope_Init);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AAF30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AB058);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AB0E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AB160);

extern M2C_UNK func_001AB420__func_001AB3A8(void *, s32, void *) __asm__("func_001AB420");

void func_001AB3A8(void *arg0) {
    s32 var_s2;
    s32 var_s3;
    void *temp_a2;
    void *var_s1;

    var_s3 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x2C) != 0) {
        var_s1 = arg0 + 0xF8;
        var_s2 = 0;
        do {
            temp_a2 = var_s1;
            var_s1 += 0x10;
            var_s3 += 1;
            func_001AB420__func_001AB3A8(arg0, M2C_FIELD(arg0, s32 *, 0x28) + var_s2, temp_a2);
            var_s2 += 0x450;
        } while (var_s3 != M2C_FIELD(arg0, s32 *, 0x2C));
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AB420);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AB5A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AB698);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AB7F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AB850);

extern M2C_UNK func_0019C4B0__func_001ABA50(void *, s32) __asm__("func_0019C4B0");
extern M2C_UNK func_0019C5D8__func_001ABA50(void *) __asm__("func_0019C5D8");

void func_001ABA50(void *arg0) {
    void *temp_s0;

    temp_s0 = arg0 + 0x20;
    func_0019C4B0__func_001ABA50(temp_s0, M2C_FIELD(arg0, s32 *, 0x10));
    func_0019C5D8__func_001ABA50(temp_s0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001ABA88);

extern M2C_UNK func_0019C5D8__func_001ABB08(s32) __asm__("func_0019C5D8");

void func_001ABB08(s32 arg0) {
    func_0019C5D8__func_001ABB08(arg0 + 0x20);
}

extern M2C_UNK func_0019C620__func_001ABB28(s32) __asm__("func_0019C620");

void func_001ABB28(s32 arg0) {
    func_0019C620__func_001ABB28(arg0 + 0x20);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001ABB48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001ABC58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", CWP_Test_Init);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001ABD08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001ABD10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001ABD60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AC090);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AC0A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AC410);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AC4C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AC648);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AC6D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AC7A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AC7B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001ACA18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001ACF98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AD008);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AD198);

extern M2C_UNK func_001A2330__func_001AD1A8(s32) __asm__("func_001A2330");

void func_001AD1A8(s32 arg0) {
    func_001A2330__func_001AD1A8(arg0 + 0x60);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AD1C8);

extern M2C_UNK func_0019D228__func_001AD268(void *) __asm__("func_0019D228");
extern M2C_UNK func_001A0AC0__func_001AD268(void *) __asm__("func_001A0AC0");
extern M2C_UNK func_001A0E00__func_001AD268(void *, M2C_UNK, M2C_UNK) __asm__("func_001A0E00");
extern M2C_UNK func_001A0EF0__func_001AD268(void *, M2C_UNK, M2C_UNK) __asm__("func_001A0EF0");
extern M2C_UNK func_001A1140__func_001AD268(void *) __asm__("func_001A1140");

void func_001AD268(s32 arg0) {
    s32 temp_s0;
    s32 temp_s0_2;
    void *temp_s2;

    temp_s2 = arg0 + 0x930;
    temp_s0 = M2C_FIELD(temp_s2, s32 *, 0xA4F4) + 1;
    temp_s0_2 = (temp_s0 > 5) ? 0 : temp_s0;
    func_001A0AC0__func_001AD268(temp_s2);
    M2C_FIELD(temp_s2, s32 *, 0xA4F4) = temp_s0_2;
    func_001A0E00__func_001AD268(temp_s2, 5, 1);
    func_001A0EF0__func_001AD268(temp_s2, 5, 1);
    func_001A1140__func_001AD268(temp_s2);
    func_0019D228__func_001AD268(temp_s2);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AD2F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AD340);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AD4E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AD540);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AD5C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AD650);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AD6A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AD700);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AD768);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AD800);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AD858);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AD880);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AD8A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AD8E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AD908);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001ADA08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001ADAB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001ADB68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001ADC90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001ADD40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001ADD78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001ADDB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001ADDE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001ADE58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001ADEA8);

void func_001AE008(void) {
}

extern M2C_UNK func_001AE008__func_001AE010(M2C_UNK, M2C_UNK) __asm__("func_001AE008");

void func_001AE010(void) {
    func_001AE008__func_001AE010(1, 0xFFFF);
}

extern M2C_UNK func_001AE008__func_001AE030(M2C_UNK, M2C_UNK) __asm__("func_001AE008");

void func_001AE030(void) {
    func_001AE008__func_001AE030(0, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AE050);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AE0E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AE168);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AE1D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AE240);

s32 func_001AE358(s8 arg0) {
    s32 temp_v1;

    temp_v1 = arg0 - 0x31;
    if ((u32) (temp_v1 & 0xFF) < 8U) {
        return temp_v1;
    }
    if ((u32) (arg0 - 0x41) < 8U) {
        return arg0 - 0x39;
    }
    return -1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AE398);

extern M2C_UNK func_0011A318__func_001AE760(s32) __asm__("func_0011A318");

void func_001AE760(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xD4);
    if (temp_a0 != 0) {
        func_0011A318__func_001AE760(temp_a0);
        M2C_FIELD(arg0, s32 *, 0xD4) = 0;
    }
    temp_a0_2 = M2C_FIELD(arg0, s32 *, 0xD8);
    if (temp_a0_2 != 0) {
        func_0011A318__func_001AE760(temp_a0_2);
        M2C_FIELD(arg0, s32 *, 0xD8) = 0;
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AE7B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AE8B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AEA20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AF298);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AF808);

extern M2C_UNK func_002DDAB8__func_001AF908() __asm__("func_002DDAB8");

void func_001AF908(s32 *arg0) {
    s32 temp_v1;

    temp_v1 = *arg0;
    if (!(temp_v1 & 0x10)) {
        *arg0 = temp_v1 & ~0xF;
        return;
    }
    func_002DDAB8__func_001AF908();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AF940);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001AFE10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B04D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B0518);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B0548);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B0590);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B05C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B06B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B0880);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B0AB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B0B50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B0BB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B0D00);

extern M2C_UNK func_0011A2F8__func_001B0DB0(s32) __asm__("func_0011A2F8");
extern M2C_UNK func_001A6388__func_001B0DB0(void *) __asm__("func_001A6388");
extern M2C_UNK func_001A68A0__func_001B0DB0(void *) __asm__("func_001A68A0");

void func_001B0DB0(void *arg0) {
    s32 temp_a0;
    void *temp_s0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x34);
    if (temp_a0 != 0) {
        func_0011A2F8__func_001B0DB0(temp_a0);
        M2C_FIELD(arg0, s32 *, 0x34) = 0;
    }
    temp_s0 = arg0 + 8;
    func_001A68A0__func_001B0DB0(temp_s0);
    func_001A6388__func_001B0DB0(temp_s0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B0E00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B10D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B1160);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B1210);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B13B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B1738);

extern M2C_UNK func_0011A318__func_001B18B0(s32) __asm__("func_0011A318");

void func_001B18B0(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x20);
    if (temp_a0 != 0) {
        func_0011A318__func_001B18B0(temp_a0);
    }
    temp_a0_2 = M2C_FIELD(arg0, s32 *, 0x24);
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    if (temp_a0_2 != 0) {
        func_0011A318__func_001B18B0(temp_a0_2);
    }
    temp_a0_3 = M2C_FIELD(arg0, s32 *, 0x28);
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    if (temp_a0_3 != 0) {
        func_0011A318__func_001B18B0(temp_a0_3);
    }
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B1910);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B2550);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B2878);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B2BC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B2D38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B2E90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B3118);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B3420);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B3678);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B37D8);

extern M2C_UNK func_001B37D8__func_001B3840(M2C_UNK, M2C_UNK) __asm__("func_001B37D8");

void func_001B3840(void) {
    func_001B37D8__func_001B3840(1, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B3860);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B3888);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B3A28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B3A30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B3A70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B3AC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B3B10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B3B58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B3BB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B3C08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B3C60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B3CC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B3D40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B3D98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B3E10);

void func_001B3E18(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B3E20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B3E98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B3EA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B4088);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B4140);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B4178);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B4180);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B41B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B41F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B4210);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B4260);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B42D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B4370);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B4490);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B4540);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B45A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B45E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B4620);

extern M2C_UNK func_0015CBD0__func_001B46B8(void *) __asm__("func_0015CBD0");

void func_001B46B8(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        func_0015CBD0__func_001B46B8(arg0 + 0xC);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B46E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B4730);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B4738);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B48A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B4968);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B4C88);

extern M2C_UNK func_0015CA40__func_001B4CF0() __asm__("func_0015CA40");

void func_001B4CF0(void) {
    func_0015CA40__func_001B4CF0();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B4D10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B4DA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B5188);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B51F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B5240);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B5308);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B54A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B55B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B5650);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B56F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B5718);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B5868);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B5980);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B5B58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B5C30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B5E78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B5F28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B6218);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B6280);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B69D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B6A20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B6A70);

extern M2C_UNK func_001B6A70__func_001B7010(M2C_UNK, M2C_UNK) __asm__("func_001B6A70");

void func_001B7010(void) {
    func_001B6A70__func_001B7010(1, 0xFFFF);
}

void *func_001B7030(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B7040);

void func_001B7068(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    M2C_FIELD(arg0, s32 *, 0x28) = arg3;
    M2C_FIELD(arg0, s32 *, 0) = 3;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B7088);

extern f32 D_0037AA08__func_001B70A8 __asm__("D_0037AA08");

void func_001B70A8(void *arg0) {
    f32 temp_f0;

    temp_f0 = M2C_FIELD(arg0, f32 *, 0x20) + D_0037AA08__func_001B70A8;
    M2C_FIELD(arg0, f32 *, 0x20) = temp_f0;
    if (temp_f0 >= 1.0f) {
        M2C_FIELD(arg0, f32 *, 0x20) = 1.0f;
        M2C_FIELD(arg0, s32 *, 0) = 1;
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), f32 *, 0x68) = (f32) M2C_FIELD(arg0, f32 *, 0x20);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B70F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B7228);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B7438);

extern M2C_UNK func_001B4738__func_001B74F8(M2C_UNK, M2C_UNK) __asm__("func_001B4738");

void func_001B74F8(void *arg0, M2C_UNK arg1) {
    if (!(M2C_FIELD(arg0, s32 *, 0x28) & 1)) {
        func_001B4738__func_001B74F8(arg1, 1);
        return;
    }
    func_001B4738__func_001B74F8(arg1, 0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B7538);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B75B8);

extern M2C_UNK func_001B75B8__func_001B7608(M2C_UNK, M2C_UNK) __asm__("func_001B75B8");

void func_001B7608(void) {
    func_001B75B8__func_001B7608(1, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B7628);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B7748);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B7A10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B7A30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B7A48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B7E80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B7F18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B7F38);

extern M2C_UNK func_001B7F38__func_001B8030(M2C_UNK, M2C_UNK) __asm__("func_001B7F38");

void func_001B8030(void) {
    func_001B7F38__func_001B8030(1, 0xFFFF);
}

extern M2C_UNK func_0015C908__func_001B8050(s32) __asm__("func_0015C908");
extern M2C_UNK func_001B4088__func_001B8050(s32) __asm__("func_001B4088");

s32 func_001B8050(s32 arg0) {
    s32 var_s0;
    s32 var_s1;

    var_s0 = arg0 + 0x120;
    var_s1 = 1;
    do {
        var_s1 -= 1;
        func_001B4088__func_001B8050(var_s0 + 0xC);
        func_0015C908__func_001B8050(var_s0 + 0x28);
        var_s0 += 0x4C;
    } while (var_s1 != -1);
    func_001B4088__func_001B8050(arg0 + 0x1C4);
    func_0015C908__func_001B8050(arg0 + 0x1E0);
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B80C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B8160);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B82F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B8408);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B84A8);

s32 func_001B8B58(void *arg0) {
    s32 var_v0;

    var_v0 = 1;
    if (!(M2C_FIELD(arg0, f32 *, 0x128) <= (f32) M2C_FIELD(arg0, s32 *, 0x224))) {
        var_v0 = 0;
    }
    return var_v0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B8B80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B8BA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B8F58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B8F68);

extern M2C_UNK func_0015CBD0__func_001B9BC8(void *) __asm__("func_0015CBD0");

void func_001B9BC8(void *arg0, s32 arg1) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x11C);
    if ((temp_a0 != 6) && (M2C_FIELD(arg0, s32 *, 0x118) != 0xB) && (temp_a0 != 5)) {
        if ((temp_a0 != 0) && (temp_a0 != 4) && ((arg1 == 0) || (M2C_FIELD(arg0, s32 *, 0x24C) == 0))) {
            func_0015CBD0__func_001B9BC8(arg0 + 0x148);
            func_0015CBD0__func_001B9BC8(arg0 + 0x194);
        }
        if (M2C_FIELD(arg0, s32 *, 0x240) != 0) {
            func_0015CBD0__func_001B9BC8(arg0 + 0x1E0);
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B9C58);

extern M2C_UNK func_001B9C58__func_001B9CE8() __asm__("func_001B9C58");

void func_001B9CE8(void) {
    func_001B9C58__func_001B9CE8();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B9D08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B9D70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B9DE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B9E98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B9F30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B9F98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B9FB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B9FD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001B9FF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BA1E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BA6B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BA6F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BA758);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BA7A0);

extern M2C_UNK func_001BA7A0__func_001BA878(M2C_UNK, M2C_UNK) __asm__("func_001BA7A0");

void func_001BA878(void) {
    func_001BA7A0__func_001BA878(1, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BA898);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BA980);

extern s32 D_0037AC40__func_001BA9C0 __asm__("D_0037AC40");

void func_001BA9C0(s32 arg0) {
    D_0037AC40__func_001BA9C0 = arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BA9D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BAA38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BAA78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BAA90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BAAC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BAAF0);

extern M2C_UNK func_001B9FD0__func_001BAB60(M2C_UNK *) __asm__("func_001B9FD0");
extern s32 D_0037AC3C__func_001BAB60 __asm__("D_0037AC3C");
extern M2C_UNK D_00498EC8__func_001BAB60 __asm__("D_00498EC8");

void func_001BAB60(void) {
    func_001B9FD0__func_001BAB60(&D_00498EC8__func_001BAB60);
    D_0037AC3C__func_001BAB60 = 1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BAB90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BABE0);

extern s32 D_0037AC38__func_001BAD38 __asm__("D_0037AC38");

void func_001BAD38(void) {
    D_0037AC38__func_001BAD38 = 0;
}

extern s32 D_0037AC3C__func_001BAD48 __asm__("D_0037AC3C");

void func_001BAD48(void) {
    D_0037AC3C__func_001BAD48 = 0;
}

extern s32 D_0037AC3C__func_001BAD58 __asm__("D_0037AC3C");

void func_001BAD58(void) {
    D_0037AC3C__func_001BAD58 = 1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BAD68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BB498);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BB640);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BBB10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BBB78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BBE08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BC120);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BC220);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BC560);

extern M2C_UNK func_001BC560__func_001BC800(M2C_UNK, M2C_UNK) __asm__("func_001BC560");

void func_001BC800(void) {
    func_001BC560__func_001BC800(1, 0xFFFF);
}

extern M2C_UNK func_001BC560__func_001BC820(M2C_UNK, M2C_UNK) __asm__("func_001BC560");

void func_001BC820(void) {
    func_001BC560__func_001BC820(0, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BC840);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BC8F0);

extern M2C_UNK func_001189E0__func_001BC8F8() __asm__("func_001189E0");

void func_001BC8F8(void) {
    func_001189E0__func_001BC8F8();
}

extern M2C_UNK func_00119630__func_001BC918() __asm__("func_00119630");

void func_001BC918(void) {
    func_00119630__func_001BC918();
}

extern M2C_UNK func_00119580__func_001BC938() __asm__("func_00119580");

void func_001BC938(void) {
    func_00119580__func_001BC938();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BC958);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BCA58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BCAF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BD0D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BD3F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BD5B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BD698);

extern M2C_UNK func_001BD720__func_001BD6E0() __asm__("func_001BD720");
extern M2C_UNK func_001BDAC0__func_001BD6E0(void *) __asm__("func_001BDAC0");

void func_001BD6E0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        func_001BD720__func_001BD6E0();
        func_001BDAC0__func_001BD6E0(arg0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BD720);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BDAC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BDC60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BDF40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BDF68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BDF90);

void func_001BE028(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x12D8) = arg1;
    M2C_FIELD(arg0, s32 *, 0x12D0) = 0xC8;
}

extern void *D_003FD708__func_001BE038 __asm__("D_003FD708");

void func_001BE038(void) {
    M2C_FIELD(D_003FD708__func_001BE038, s32 *, 4) = 0;
}

extern void *D_003FD708__func_001BE048 __asm__("D_003FD708");

void func_001BE048(void) {
    M2C_FIELD(D_003FD708__func_001BE048, s32 *, 4) = 1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BE060);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BE270);

extern M2C_UNK func_00119EB8__func_001BE2B0() __asm__("func_00119EB8");

void func_001BE2B0(void) {
    func_00119EB8__func_001BE2B0();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BE2D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BE2D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BEB68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BEC20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BEE68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BEE88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BEF08);

s32 func_001BEFC8(void *arg0) {
    s32 var_a1;
    void *temp_a0;

    var_a1 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x38) == -1) {
        temp_a0 = M2C_FIELD(arg0, void **, 4);
        var_a1 = 1;
        if (temp_a0 != NULL) {
            var_a1 = M2C_FIELD(temp_a0, s32 *, 0x1C4) < 1;
        }
    }
    return var_a1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BEFF8);

extern M2C_UNK func_0011A2F8__func_001BF138(s32) __asm__("func_0011A2F8");
extern M2C_UNK func_001F14A0__func_001BF138(s32, M2C_UNK) __asm__("func_001F14A0");

void func_001BF138(s32 arg0, s32 arg1) {
    func_001F14A0__func_001BF138(arg0 + 0x760, 2);
    if (arg1 & 1) {
        func_0011A2F8__func_001BF138(arg0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BF188);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BF1B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BF1E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BF1F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BF250);

extern s32 func_001BF1B0__func_001BF3A8() __asm__("func_001BF1B0");

s32 func_001BF3A8(s32 arg0) {
    s32 temp_v0;
    void **temp_v0_2;

    temp_v0 = func_001BF1B0__func_001BF3A8();
    if (temp_v0 != -1) {
        temp_v0_2 = arg0 + (temp_v0 * 4);
        M2C_FIELD(*temp_v0_2, s32 *, 0xC) = 0;
        M2C_FIELD(*temp_v0_2, s32 *, 0x38) = 1;
    }
    return temp_v0;
}

extern s32 func_001BF448__func_001BF3F8() __asm__("func_001BF448");

s32 func_001BF3F8(s32 arg0) {
    s32 temp_v0;
    void **temp_v0_2;

    temp_v0 = func_001BF448__func_001BF3F8();
    if (temp_v0 != -1) {
        temp_v0_2 = arg0 + (temp_v0 * 4);
        M2C_FIELD(*temp_v0_2, s32 *, 0xC) = 0;
        M2C_FIELD(*temp_v0_2, s32 *, 0x38) = 1;
    }
    return temp_v0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BF448);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BF500);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BF538);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BF570);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BF640);

extern M2C_UNK func_002121E0__func_001BF908(M2C_UNK *, M2C_UNK) __asm__("func_002121E0");
extern M2C_UNK D_0049A640__func_001BF908 __asm__("D_0049A640");

void func_001BF908(void) {
    func_002121E0__func_001BF908(&D_0049A640__func_001BF908, 2);
}

extern M2C_UNK func_002121E0__func_001BF930(M2C_UNK *, M2C_UNK) __asm__("func_002121E0");
extern M2C_UNK D_0049A6D0__func_001BF930 __asm__("D_0049A6D0");

void func_001BF930(void) {
    func_002121E0__func_001BF930(&D_0049A6D0__func_001BF930, 2);
}

extern M2C_UNK func_002121E0__func_001BF958(M2C_UNK *, M2C_UNK) __asm__("func_002121E0");
extern M2C_UNK D_0049A760__func_001BF958 __asm__("D_0049A760");

void func_001BF958(void) {
    func_002121E0__func_001BF958(&D_0049A760__func_001BF958, 2);
}

extern M2C_UNK func_002121E0__func_001BF980(M2C_UNK *, M2C_UNK) __asm__("func_002121E0");
extern M2C_UNK D_0049A7F0__func_001BF980 __asm__("D_0049A7F0");

void func_001BF980(void) {
    func_002121E0__func_001BF980(&D_0049A7F0__func_001BF980, 2);
}

extern M2C_UNK func_002121E0__func_001BF9A8(M2C_UNK *, M2C_UNK) __asm__("func_002121E0");
extern M2C_UNK D_0049A880__func_001BF9A8 __asm__("D_0049A880");

void func_001BF9A8(void) {
    func_002121E0__func_001BF9A8(&D_0049A880__func_001BF9A8, 2);
}

extern M2C_UNK func_002121E0__func_001BF9D0(M2C_UNK *, M2C_UNK) __asm__("func_002121E0");
extern M2C_UNK D_0049A910__func_001BF9D0 __asm__("D_0049A910");

void func_001BF9D0(void) {
    func_002121E0__func_001BF9D0(&D_0049A910__func_001BF9D0, 2);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001BF9F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C02A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C0488);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C04D0);

extern M2C_UNK func_001F14E8__func_001C0510(s32) __asm__("func_001F14E8");

void func_001C0510(s32 arg0) {
    func_001F14E8__func_001C0510(arg0 + 0x760);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C0530);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C0540);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C0680);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C0810);

extern M2C_UNK func_001F0DF0__func_001C0838() __asm__("func_001F0DF0");

void func_001C0838(void) {
    func_001F0DF0__func_001C0838();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C0858);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C09A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C09D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C0A18);

s32 func_001C0A28(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if ((M2C_FIELD(arg0, s32 *, 0x750) != 0) && (arg1 == M2C_FIELD(arg0, s32 *, 0x738))) {
        var_v1 = M2C_FIELD(arg0, s32 *, 0x74C) >= 0x3C;
    }
    return var_v1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C0A58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C0AF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C0B40);

extern M2C_UNK func_001EF720__func_001C0D10(s32) __asm__("func_001EF720");

void func_001C0D10(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x758) != 0) {
        func_001EF720__func_001C0D10(M2C_FIELD(arg0, s32 *, 0x728));
        func_001EF720__func_001C0D10(M2C_FIELD(arg0, s32 *, 0x72C));
        func_001EF720__func_001C0D10(M2C_FIELD(arg0, s32 *, 0x744));
    }
}

extern M2C_UNK func_001EF720__func_001C0D58(s32) __asm__("func_001EF720");

void func_001C0D58(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x758) != 0) {
        func_001EF720__func_001C0D58(M2C_FIELD(arg0, s32 *, 0x730));
        func_001EF720__func_001C0D58(M2C_FIELD(arg0, s32 *, 0x740));
        func_001EF720__func_001C0D58(M2C_FIELD(arg0, s32 *, 0x734));
        func_001EF720__func_001C0D58(M2C_FIELD(arg0, s32 *, 0x738));
    }
}

extern M2C_UNK func_001EF720__func_001C0DA8(s32) __asm__("func_001EF720");

void func_001C0DA8(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x758) != 0) {
        func_001EF720__func_001C0DA8(M2C_FIELD(arg0, s32 *, 0x73C));
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C0DD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C0EA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C0ED0);

extern M2C_UNK func_001F0D98__func_001C0F78(s32) __asm__("func_001F0D98");

void func_001C0F78(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x758) != 0) {
        func_001F0D98__func_001C0F78(M2C_FIELD(arg0, s32 *, 0x730));
        func_001F0D98__func_001C0F78(M2C_FIELD(arg0, s32 *, 0x728));
        func_001F0D98__func_001C0F78(M2C_FIELD(arg0, s32 *, 0x72C));
        func_001F0D98__func_001C0F78(M2C_FIELD(arg0, s32 *, 0x740));
        func_001F0D98__func_001C0F78(M2C_FIELD(arg0, s32 *, 0x744));
        func_001F0D98__func_001C0F78(M2C_FIELD(arg0, s32 *, 0x73C));
        func_001F0D98__func_001C0F78(M2C_FIELD(arg0, s32 *, 0x734));
        func_001F0D98__func_001C0F78(M2C_FIELD(arg0, s32 *, 0x738));
    }
}

extern s32 func_00101EF8__func_001C0FE8(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_0010A288__func_001C0FE8(s32, M2C_UNK) __asm__("func_0010A288");
extern M2C_UNK func_0010A2F8__func_001C0FE8(s32) __asm__("func_0010A2F8");
extern M2C_UNK func_001C0D10__func_001C0FE8(s32) __asm__("func_001C0D10");
extern M2C_UNK D_003FDAA0__func_001C0FE8 __asm__("D_003FDAA0");

void func_001C0FE8(void *arg0) {
    s32 temp_v0;

    temp_v0 = func_00101EF8__func_001C0FE8(&D_003FDAA0__func_001C0FE8, 4);
    func_0010A2F8__func_001C0FE8(temp_v0);
    func_0010A288__func_001C0FE8(temp_v0, 1);
    func_001C0D10__func_001C0FE8(M2C_FIELD(arg0, s32 *, 0x110));
    func_0010A2F8__func_001C0FE8(temp_v0);
    func_0010A288__func_001C0FE8(temp_v0, 0);
}

extern s32 func_00101EF8__func_001C1058(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_0010A288__func_001C1058(s32, M2C_UNK) __asm__("func_0010A288");
extern M2C_UNK func_0010A2F8__func_001C1058(s32) __asm__("func_0010A2F8");
extern M2C_UNK func_001C0D58__func_001C1058(s32) __asm__("func_001C0D58");
extern M2C_UNK D_003FDAA0__func_001C1058 __asm__("D_003FDAA0");

void func_001C1058(void *arg0) {
    s32 temp_v0;

    temp_v0 = func_00101EF8__func_001C1058(&D_003FDAA0__func_001C1058, 4);
    func_0010A2F8__func_001C1058(temp_v0);
    func_0010A288__func_001C1058(temp_v0, 1);
    func_001C0D58__func_001C1058(M2C_FIELD(arg0, s32 *, 0x110));
    func_0010A2F8__func_001C1058(temp_v0);
    func_0010A288__func_001C1058(temp_v0, 0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C10C8);

extern M2C_UNK func_001C19C8__func_001C1100() __asm__("func_001C19C8");

void func_001C1100(void) {
    func_001C19C8__func_001C1100();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C1120);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C1188);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C11E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C17A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C17C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C19C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C1A90);

extern M2C_UNK func_001C1A90__func_001C1BA0(s32, M2C_UNK *, M2C_UNK) __asm__("func_001C1A90");
extern s32 func_001C1C28__func_001C1BA0() __asm__("func_001C1C28");
extern M2C_UNK func_001C1DD0__func_001C1BA0(void *) __asm__("func_001C1DD0");
extern M2C_UNK D_0037AD08__func_001C1BA0 __asm__("D_0037AD08");

void func_001C1BA0(void *arg0) {
    s32 temp_a0;

    if ((~M2C_FIELD(arg0, s32 *, 4) != 0) && (func_001C1C28__func_001C1BA0() == 0)) {
        M2C_FIELD(arg0, s32 *, 0x94) = 3;
        func_001C1A90__func_001C1BA0(M2C_FIELD(arg0, s32 *, 0x6C), &D_0037AD08__func_001C1BA0, 2);
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x78);
        if (temp_a0 != 0) {
            func_001C1A90__func_001C1BA0(temp_a0, &D_0037AD08__func_001C1BA0, 2);
        }
        func_001C1DD0__func_001C1BA0(arg0);
    }
}

s32 func_001C1C28(void *arg0) {
    return (u32) (M2C_FIELD(arg0, s32 *, 0x94) - 3) < 3U;
}

extern M2C_UNK func_001C1A90__func_001C1C38(s32, M2C_UNK *, M2C_UNK) __asm__("func_001C1A90");
extern M2C_UNK func_001C1DD0__func_001C1C38(void *) __asm__("func_001C1DD0");
extern M2C_UNK D_0037AD00__func_001C1C38 __asm__("D_0037AD00");

void func_001C1C38(void *arg0) {
    s32 temp_a0;

    if (~M2C_FIELD(arg0, s32 *, 4) != 0) {
        M2C_FIELD(arg0, s32 *, 0x94) = 2;
        func_001C1A90__func_001C1C38(M2C_FIELD(arg0, s32 *, 0x6C), &D_0037AD00__func_001C1C38, 2);
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x78);
        if (temp_a0 != 0) {
            func_001C1A90__func_001C1C38(temp_a0, &D_0037AD00__func_001C1C38, 2);
        }
        func_001C1DD0__func_001C1C38(arg0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C1CA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C1D48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C1D70);

extern M2C_UNK func_001C1DD0__func_001C1D98() __asm__("func_001C1DD0");

void func_001C1D98(void *arg0, s32 arg1) {
    if ((~M2C_FIELD(arg0, s32 *, 4) != 0) && (arg1 >= 0)) {
        M2C_FIELD(arg0, s32 *, 8) = arg1;
        func_001C1DD0__func_001C1D98();
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C1DD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C1E88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C1F88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C1FA0);

void func_001C2098(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x90) = (s32) (M2C_FIELD(arg0, s32 *, 0x90) | 4);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C20A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C20E0);

extern M2C_UNK func_001AA9C8__func_001C2140(s32, void *, s32, s32) __asm__("func_001AA9C8");

void func_001C2140(void *arg0, s32 arg1) {
    void *temp_a0;

    M2C_FIELD(arg0, s32 *, 0xB8) = 0;
    M2C_FIELD(arg0, s32 *, 0xB4) = arg1;
    func_001AA9C8__func_001C2140(M2C_FIELD(arg0, s32 *, 0xBC), M2C_FIELD(arg0, void **, 0x6C), M2C_FIELD(arg0, s32 *, 0xC0), arg1);
    temp_a0 = M2C_FIELD(arg0, void **, 0x6C);
    M2C_FIELD(temp_a0, s32 *, 0x1F0) = (s32) (M2C_FIELD(temp_a0, s32 *, 0x1F0) & ~4);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C2198);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C2230);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C2280);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C2478);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C2510);

INCLUDE_ASM("asm/nonmatchings/cod/000000", CWeaponControll_Init);

extern s32 func_001C3FC8__func_001C2730(s32) __asm__("func_001C3FC8");
extern s32 func_001C4398__func_001C2730(s32, void *, void *) __asm__("func_001C4398");
extern s32 func_00346D3C__func_001C2730(void *, M2C_UNK) __asm__("func_00346D3C");

void func_001C2730(void *arg0) {
    s32 temp_s3;
    s32 temp_v0_2;
    s32 var_s1;
    void *temp_s0;
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0xD0C);
    if (temp_v0 != NULL) {
        temp_s3 = M2C_FIELD(temp_v0, s32 *, 0x3CC);
        var_s1 = 0;
        if (temp_s3 > 0) {
            do {
                temp_s0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xD0C), s32 *, 0x3D0) + (var_s1 << 6);
                if (M2C_FIELD(temp_s0, s8 *, 0) != 0) {
                    temp_v0_2 = func_001C4398__func_001C2730(func_001C3FC8__func_001C2730(func_00346D3C__func_001C2730(temp_s0, 0x5F) + 2), temp_s0 + 0x20, temp_s0 + 0x2C);
                    M2C_FIELD(temp_s0, s32 *, 0x38) = temp_v0_2;
                    M2C_FIELD(((temp_v0_2 * 0xD0) + arg0), s32 *, 0xC) = 1;
                }
                var_s1 += 1;
            } while (var_s1 < temp_s3);
        }
    }
}

extern M2C_UNK func_001C2730__func_001C27F8(s32) __asm__("func_001C2730");
extern M2C_UNK func_001C32E8__func_001C27F8() __asm__("func_001C32E8");

void func_001C27F8(s32 arg0) {
    func_001C32E8__func_001C27F8();
    func_001C2730__func_001C27F8(arg0);
}

extern M2C_UNK func_001C3348__func_001C2828() __asm__("func_001C3348");

void func_001C2828(void) {
    func_001C3348__func_001C2828();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C2848);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C2CA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C3138);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C3220);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C32E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C3348);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C33A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C3738);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C3790);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C3798);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C38A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C38E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C3950);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C39D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C39F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C3A00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C3AC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C3BD0);

extern s32 func_00133180__func_001C3C20() __asm__("func_00133180");
extern s32 func_001C3798__func_001C3C20(s32, s32, M2C_UNK) __asm__("func_001C3798");
extern M2C_UNK func_001C3DC0__func_001C3C20(s32, M2C_UNK) __asm__("func_001C3DC0");

s32 func_001C3C20(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0_2 = func_00133180__func_001C3C20();
    if (temp_v0_2 != 0) {
        temp_v0 = func_001C3798__func_001C3C20(temp_v0_2, arg0, arg2);
        if (temp_v0 != -1) {
            func_001C3DC0__func_001C3C20(temp_v0, arg1);
            return temp_v0;
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return -1;
    }
    return -1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C3C98);

extern s32 func_00133180__func_001C3CB8() __asm__("func_00133180");
extern s32 func_001C3798__func_001C3CB8(s32, s32, M2C_UNK) __asm__("func_001C3798");
extern M2C_UNK func_001C3E38__func_001C3CB8(s32, M2C_UNK) __asm__("func_001C3E38");

s32 func_001C3CB8(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0_2 = func_00133180__func_001C3CB8();
    if (temp_v0_2 != 0) {
        temp_v0 = func_001C3798__func_001C3CB8(temp_v0_2, arg0, arg2);
        if (temp_v0 != -1) {
            func_001C3E38__func_001C3CB8(temp_v0, arg1);
            return temp_v0;
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return -1;
    }
    return -1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C3D30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C3D38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C3DA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C3DC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C3E38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C3E70);

extern M2C_UNK func_001C1C38__func_001C3EA8(s32) __asm__("func_001C1C38");
extern s32 func_001C3BD0__func_001C3EA8() __asm__("func_001C3BD0");

void func_001C3EA8(void) {
    s32 temp_v0;

    temp_v0 = func_001C3BD0__func_001C3EA8();
    if (temp_v0 != 0) {
        func_001C1C38__func_001C3EA8(temp_v0);
    }
}

extern M2C_UNK func_001C1BA0__func_001C3ED8(s32) __asm__("func_001C1BA0");
extern s32 func_001C3BD0__func_001C3ED8() __asm__("func_001C3BD0");

void func_001C3ED8(void) {
    s32 temp_v0;

    temp_v0 = func_001C3BD0__func_001C3ED8();
    if (temp_v0 != 0) {
        func_001C1BA0__func_001C3ED8(temp_v0);
    }
}

extern M2C_UNK func_001C19C8__func_001C3F08(s32) __asm__("func_001C19C8");
extern s32 func_001C3BD0__func_001C3F08() __asm__("func_001C3BD0");

void func_001C3F08(void) {
    s32 temp_v0;

    temp_v0 = func_001C3BD0__func_001C3F08();
    if (temp_v0 != 0) {
        func_001C19C8__func_001C3F08(temp_v0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C3F38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C3F80);

extern void *func_001C3BD0__func_001C3FA0() __asm__("func_001C3BD0");

s32 func_001C3FA0(void) {
    void *temp_v0;

    temp_v0 = func_001C3BD0__func_001C3FA0();
    if (temp_v0 != NULL) {
        return M2C_FIELD(temp_v0, s32 *, 4);
    }
    return -1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C3FC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C4038);

extern s32 func_00133180__func_001C4150() __asm__("func_00133180");
extern M2C_UNK func_001C3738__func_001C4150(s32, s32) __asm__("func_001C3738");

void func_001C4150(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_00133180__func_001C4150();
    if (temp_v0 != 0) {
        func_001C3738__func_001C4150(temp_v0, arg0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C4188);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C41B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C41E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C4218);

extern void *func_001C3BD0__func_001C4268() __asm__("func_001C3BD0");

void func_001C4268(void) {
    void *temp_v0;

    temp_v0 = func_001C3BD0__func_001C4268();
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0x98) = 1;
    }
}

extern void *func_001C3BD0__func_001C4298() __asm__("func_001C3BD0");

void func_001C4298(void) {
    void *temp_v0;

    temp_v0 = func_001C3BD0__func_001C4298();
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0x98) = 0;
    }
}

extern s32 func_00133180__func_001C42C0() __asm__("func_00133180");
extern s32 func_001C38A8__func_001C42C0(s32) __asm__("func_001C38A8");

s32 func_001C42C0(void) {
    s32 temp_v0;

    temp_v0 = func_00133180__func_001C42C0();
    if (temp_v0 == 0) {
        return 0;
    }
    return func_001C38A8__func_001C42C0(temp_v0);
}

extern s32 func_00133180__func_001C42F8() __asm__("func_00133180");
extern s32 func_001C38E0__func_001C42F8(s32) __asm__("func_001C38E0");

s32 func_001C42F8(void) {
    s32 temp_v0;

    temp_v0 = func_00133180__func_001C42F8();
    if (temp_v0 == 0) {
        return 0;
    }
    return func_001C38E0__func_001C42F8(temp_v0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C4330);

extern M2C_UNK func_001C2098__func_001C4368(s32) __asm__("func_001C2098");
extern s32 func_001C3BD0__func_001C4368() __asm__("func_001C3BD0");

void func_001C4368(void) {
    s32 temp_v0;

    temp_v0 = func_001C3BD0__func_001C4368();
    if (temp_v0 != 0) {
        func_001C2098__func_001C4368(temp_v0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C4398);

extern s32 func_00133180__func_001C4470() __asm__("func_00133180");
extern M2C_UNK func_001C3AC0__func_001C4470(s32, s32, M2C_UNK, M2C_UNK) __asm__("func_001C3AC0");

void func_001C4470(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_001C3AC0__func_001C4470(func_00133180__func_001C4470(), arg0, arg1, arg2);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C44C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C44C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C4508);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C4640);

extern M2C_UNK func_001C4640__func_001C4718(M2C_UNK, M2C_UNK) __asm__("func_001C4640");

void func_001C4718(void) {
    func_001C4640__func_001C4718(1, 0xFFFF);
}

extern M2C_UNK func_001C4640__func_001C4738(M2C_UNK, M2C_UNK) __asm__("func_001C4640");

void func_001C4738(void) {
    func_001C4640__func_001C4738(0, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C4758);

void func_001C47C8(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 4) = arg2;
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) | 1);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C47E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C4838);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C4890);

extern M2C_UNK func_00329050__func_001C48D8(s32) __asm__("func_00329050");

void func_001C48D8(s32 *arg0) {
    func_00329050__func_001C48D8(*arg0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C48F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C4958);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C49A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C4A20);

extern s32 D_003FD70C__func_001C4A28 __asm__("D_003FD70C");
extern s32 D_003FD710__func_001C4A28 __asm__("D_003FD710");
extern s32 D_003FD714__func_001C4A28 __asm__("D_003FD714");

s32 func_001C4A28(s32 arg0) {
    D_003FD70C__func_001C4A28 = 0;
    D_003FD710__func_001C4A28 = 0;
    D_003FD714__func_001C4A28 = 0;
    return arg0;
}

extern M2C_UNK func_0011A2F8__func_001C4A48(s32) __asm__("func_0011A2F8");
extern M2C_UNK func_001C4B58__func_001C4A48() __asm__("func_001C4B58");

void func_001C4A48(s32 arg0, s32 arg1) {
    func_001C4B58__func_001C4A48();
    if (arg1 & 1) {
        func_0011A2F8__func_001C4A48(arg0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C4A90);

extern M2C_UNK func_0011A318__func_001C4B58(s32) __asm__("func_0011A318");
extern s32 D_003FD70C__func_001C4B58 __asm__("D_003FD70C");
extern s32 D_003FD714__func_001C4B58 __asm__("D_003FD714");

void func_001C4B58(void) {
    D_003FD70C__func_001C4B58 = 0;
    if (D_003FD714__func_001C4B58 != 0) {
        func_0011A318__func_001C4B58(D_003FD714__func_001C4B58);
        D_003FD714__func_001C4B58 = 0;
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C4B98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C4C48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C4D38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C4DE0);

void func_001C4EC0(void) {
}

s32 *func_001C4EC8(s32 *arg0) {
    *arg0 = 0;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C4ED8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C4F20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C4FB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C5028);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C50A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C5938);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C59A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C59B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C5BB8);

void func_001C5C30(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = arg3;
    M2C_FIELD(arg0, s32 *, 0xC) = arg2;
    if (arg3 == 0) {
        M2C_FIELD(arg0, s32 *, 0x10) = arg2;
        M2C_FIELD(arg0, s32 *, 4) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) (arg2 + (arg1 * 4));
    }
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 8) - 1);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C5C78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C5CD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C5E00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C5E40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C5F30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C6230);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C63C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C6548);

extern M2C_UNK func_00119EB8__func_001C6620(s32) __asm__("func_00119EB8");
extern M2C_UNK func_0011A2F8__func_001C6620(void *) __asm__("func_0011A2F8");

void func_001C6620(void *arg0, s32 arg1) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x6C);
    if (temp_a0 != 0) {
        func_00119EB8__func_001C6620(temp_a0);
    }
    if (arg1 & 1) {
        func_0011A2F8__func_001C6620(arg0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C6670);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C66D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C6800);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C68F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C6970);

s32 func_001C6AF8(void *arg0, void *arg1) {
    return M2C_FIELD(arg0, s32 *, 4) - M2C_FIELD(arg1, s32 *, 4);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C6B08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C6C48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C6D60);

s32 func_001C6E88(void *arg0, void *arg1) {
    s32 *temp_v1;
    s32 temp_a0;
    s32 temp_a0_2;

    if (M2C_FIELD(arg0, s32 *, 0x24) >= M2C_FIELD(arg0, s32 *, 0x10)) {
        return 0;
    }
    temp_a0 = M2C_FIELD(arg0, s32 *, 0x18) & 0xFEFFFFFF;
    M2C_FIELD(arg1, s32 *, 0) = temp_a0;
    M2C_FIELD(arg1, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x14) + (M2C_FIELD(arg0, s32 *, 0x24) * 4);
    M2C_FIELD(arg1, s32 **, 8) = temp_v1;
    if (temp_a0 & 0x03000000) {
        temp_a0_2 = *temp_v1;
        if (temp_a0_2 != 0xFFFFFFFF) {
            M2C_FIELD(arg1, s32 **, 8) = (s32 *) (*M2C_FIELD(arg1, s32 **, 0xC) + temp_a0_2);
        }
    }
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C6F10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C6FD8);

/* XOR de todas as palavras de um bloco (checksum simples). */
typedef struct {
    /* 0x00 */ s32 data[4];
    /* 0x10 */ u32 count;
} UnkChecksum1C7018;

s32 func_001C7018(UnkChecksum1C7018 *s, s32 x) {
    u32 i;
    s32 *p = (s32 *)s;

    for (i = 0; i < s->count; i++) {
        x ^= p[i];
    }
    return x;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C7058);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C70A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C7118);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C72A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C7330);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C73B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C7458);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C74F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C7558);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C7660);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C7790);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C7920);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C7A58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C7AF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C7E40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C7F70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C8028);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C85E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C86B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C87C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C8880);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C8900);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C8FA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C9620);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C9710);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C9790);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C9850);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C98D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C9950);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C9A70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C9B80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C9CC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001C9F48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001CA080);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001CA168);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001CA190);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001CA268);

extern void *func_00101EF8__func_001CA5F8(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern s32 func_001CA800__func_001CA5F8(void *) __asm__("func_001CA800");
extern M2C_UNK func_001CAA38__func_001CA5F8(void *) __asm__("func_001CAA38");
extern s32 func_001CDB68__func_001CA5F8(s32, void *) __asm__("func_001CDB68");
extern M2C_UNK D_003FDAA0__func_001CA5F8 __asm__("D_003FDAA0");

s32 func_001CA5F8(void *arg0) {
    void *temp_v0;

    temp_v0 = func_00101EF8__func_001CA5F8(&D_003FDAA0__func_001CA5F8, 0x18);
    if (M2C_FIELD(temp_v0, s32 *, 0x1AB0) != 0) {
        M2C_FIELD(temp_v0, s32 *, 0x1AB0) = 0;
        func_001CAA38__func_001CA5F8(arg0);
    } else if (func_001CA800__func_001CA5F8(arg0) != 0) {
        if (func_001CDB68__func_001CA5F8(M2C_FIELD(arg0, s32 *, 4), arg0 + 0xC) != 0) {
            if (M2C_FIELD(arg0, s32 *, 0x4C) == 3) {
                if (M2C_FIELD(arg0, s32 *, 0xC) == 1) {
                    M2C_FIELD(arg0, s32 *, 0x4C) = 2;
                }
            }
        }
        if (M2C_FIELD(arg0, s32 *, 0x4C) == 5) {
            func_001CAA38__func_001CA5F8(arg0);
        }
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001CA6B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001CA800);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001CAA38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001CB880);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001CB9C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001CB9E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001CBA10);

extern void *func_00101EF8__func_001CBAB0(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern s32 func_00160390__func_001CBAB0(void *) __asm__("func_00160390");
extern M2C_UNK D_003FDAA0__func_001CBAB0 __asm__("D_003FDAA0");

s32 func_001CBAB0(void *arg0) {
    void *temp_v0;

    temp_v0 = func_00101EF8__func_001CBAB0(&D_003FDAA0__func_001CBAB0, 0x18);
    if (M2C_FIELD(temp_v0, s32 *, 0x344) != 0) {
        return 0;
    }
    return func_00160390__func_001CBAB0(temp_v0 + 0x3C8) == M2C_FIELD(arg0, s32 *, 0x14);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001CBB08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001CBB38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001CBB60);

s32 func_001CBCD0(void *arg0, s32 arg1) {
    if (*M2C_FIELD(arg0, s32 **, 0xC) != 1) {
        return 0;
    }
    return arg1 != 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001CBCF8);

extern void *func_00101EF8__func_001CC3E8(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK D_003A7A80__func_001CC3E8 __asm__("D_003A7A80");
extern M2C_UNK D_003FDAA0__func_001CC3E8 __asm__("D_003FDAA0");

M2C_UNK **func_001CC3E8(M2C_UNK **arg0) {
    *arg0 = &D_003A7A80__func_001CC3E8;
    M2C_FIELD(func_00101EF8__func_001CC3E8(&D_003FDAA0__func_001CC3E8, 0x18), s32 *, 0x350) = 1;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001CC430);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001CC460);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001CC468);

void *func_001CC5A8(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 0xD70) = arg2;
    M2C_FIELD(arg0, s32 *, 0xD6C) = 0;
    M2C_FIELD(arg0, s32 *, 0xD74) = 0;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001CC5C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001CC5C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001CCF90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001CCF98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001CCFF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001CD0E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001CD1A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001CD300);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001CDB68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001CDE68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001CE0A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001CE620);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001CE7B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001CEBB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001CEF28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001CF538);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001CF5B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001CF618);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001CFA00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001CFAE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001CFAF0);

extern M2C_UNK func_0011A2F8__func_001CFC48(void *) __asm__("func_0011A2F8");
extern M2C_UNK func_0011A318__func_001CFC48(s32) __asm__("func_0011A318");

void func_001CFC48(void *arg0, s32 arg1) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_a0 != 0) {
        func_0011A318__func_001CFC48(temp_a0);
    }
    if (arg1 & 1) {
        func_0011A2F8__func_001CFC48(arg0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001CFC98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001CFD00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001CFD98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001CFE28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001CFFE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D0110);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D0160);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D0290);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D02D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D0358);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D03B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D0430);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D0568);

void func_001D0648(void) {
}

extern M2C_UNK func_001CFFE8__func_001D0650(void *, M2C_UNK) __asm__("func_001CFFE8");

void func_001D0650(void **arg0) {
    void *temp_s0;
    void *var_a0;

    var_a0 = *arg0;
    if (var_a0 != NULL) {
        do {
            temp_s0 = M2C_FIELD(var_a0, void **, 4);
            if (var_a0 != NULL) {
                func_001CFFE8__func_001D0650(var_a0, 3);
            }
            var_a0 = temp_s0;
        } while (var_a0 != NULL);
    }
    *arg0 = NULL;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D06A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D0738);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D0788);

extern s32 func_0011A238__func_001D07F0(M2C_UNK, M2C_UNK *, M2C_UNK) __asm__("func_0011A238");
extern M2C_UNK *func_001CFE28__func_001D07F0(s32, M2C_UNK, M2C_UNK, M2C_UNK **) __asm__("func_001CFE28");
extern s32 func_001D02D8__func_001D07F0(M2C_UNK) __asm__("func_001D02D8");
extern M2C_UNK D_003D5BC0__func_001D07F0 __asm__("D_003D5BC0");

s32 func_001D07F0(M2C_UNK **arg0, M2C_UNK arg1, M2C_UNK arg2) {
    M2C_UNK *temp_v0;
    M2C_UNK *temp_v1;

    if (func_001D02D8__func_001D07F0(arg1) == 0) {
        return 0;
    }
    temp_v1 = func_001CFE28__func_001D07F0(func_0011A238__func_001D07F0(0x10, &D_003D5BC0__func_001D07F0, arg2), arg1, arg2, arg0);
    temp_v0 = *arg0;
    if (temp_v0 != NULL) {
        *temp_v0 = temp_v1;
    }
    M2C_FIELD(temp_v1, M2C_UNK **, 4) = temp_v0;
    *arg0 = temp_v1;
    return 1;
}

extern M2C_UNK func_001CFFE8__func_001D0880(void *, M2C_UNK) __asm__("func_001CFFE8");
extern void *func_003651B8__func_001D0880() __asm__("func_003651B8");

void func_001D0880(void ***arg0) {
    void **temp_a0_2;
    void *temp_a0;
    void *temp_v0;

    temp_v0 = func_003651B8__func_001D0880();
    if (temp_v0 != NULL) {
        if (*arg0 == temp_v0) {
            *arg0 = M2C_FIELD(temp_v0, void ***, 4);
        }
        temp_a0 = M2C_FIELD(temp_v0, void **, 0);
        if (temp_a0 != NULL) {
            M2C_FIELD(temp_a0, void ***, 4) = (void **) M2C_FIELD(temp_v0, void ***, 4);
        }
        temp_a0_2 = M2C_FIELD(temp_v0, void ***, 4);
        if (temp_a0_2 != NULL) {
            *temp_a0_2 = M2C_FIELD(temp_v0, void **, 0);
        }
        M2C_FIELD(temp_v0, void **, 0) = NULL;
        M2C_FIELD(temp_v0, void ***, 4) = NULL;
        func_001CFFE8__func_001D0880(temp_v0, 3);
    }
}

extern M2C_UNK func_001D0290__func_001D0900(s32) __asm__("func_001D0290");
extern s32 func_003651B8__func_001D0900() __asm__("func_003651B8");

void func_001D0900(void) {
    s32 temp_v0;

    temp_v0 = func_003651B8__func_001D0900();
    if (temp_v0 != 0) {
        func_001D0290__func_001D0900(temp_v0);
    }
}

s32 func_001D0930(void *arg0, s32 arg1) {
    s32 var_a1;

    var_a1 = arg1;
    if (var_a1 == 4) {
        var_a1 = M2C_FIELD(arg0, s32 *, 0x28);
    }
    return M2C_FIELD(arg0, s32 *, 4) + (var_a1 * 0x24);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D0950);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D0990);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D09E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D0A00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D0A10);

extern s32 func_0011A238__func_001D0A70(M2C_UNK, M2C_UNK *, M2C_UNK) __asm__("func_0011A238");
extern s32 func_001D0C30__func_001D0A70(s32, M2C_UNK) __asm__("func_001D0C30");
extern M2C_UNK func_001D0EC0__func_001D0A70(f32, s32) __asm__("func_001D0EC0");
extern M2C_UNK func_00365208__func_001D0A70(void *, s32) __asm__("func_00365208");
extern M2C_UNK D_003D5C50__func_001D0A70 __asm__("D_003D5C50");

void func_001D0A70(void *arg0, M2C_UNK arg1) {
    s32 temp_v0;

    temp_v0 = func_001D0C30__func_001D0A70(func_0011A238__func_001D0A70(0x28, &D_003D5C50__func_001D0A70, 0), arg1);
    func_001D0EC0__func_001D0A70(M2C_FIELD(arg0, f32 *, 4), temp_v0);
    func_00365208__func_001D0A70(arg0, temp_v0);
}

extern M2C_UNK func_001D0D78__func_001D0AD8(s32, M2C_UNK) __asm__("func_001D0D78");
extern s32 func_00365220__func_001D0AD8() __asm__("func_00365220");

void func_001D0AD8(void) {
    s32 temp_v0;

    temp_v0 = func_00365220__func_001D0AD8();
    if (temp_v0 != 0) {
        func_001D0D78__func_001D0AD8(temp_v0, 3);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D0B08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D0B70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D0BD0);

extern s32 func_001D0FF8__func_001D0BD8(void *, M2C_UNK) __asm__("func_001D0FF8");

s32 func_001D0BD8(void **arg0, M2C_UNK arg1) {
    s32 var_v0;
    void *var_a0;
    void *var_s0;

    var_s0 = *arg0;
    if (var_s0 != NULL) {
        var_a0 = var_s0;
loop_2:
        var_v0 = func_001D0FF8__func_001D0BD8(var_a0, arg1);
        if (var_v0 == 0) {
            var_s0 = M2C_FIELD(var_s0, void **, 4);
            var_a0 = var_s0;
            if (var_s0 == NULL) {
                goto block_4;
            }
            goto loop_2;
        }
    } else {
block_4:
        var_v0 = 0;
    }
    return var_v0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D0C30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D0D78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D0E30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D0EC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D0F40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D0FF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D1070);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D1200);

extern M2C_UNK func_00114C78__func_001D1310(void *, M2C_UNK) __asm__("func_00114C78");
extern M2C_UNK func_001D1368__func_001D1310() __asm__("func_001D1368");
extern M2C_UNK func_0020EA98__func_001D1310(void *, M2C_UNK) __asm__("func_0020EA98");
extern M2C_UNK D_003A7AB0__func_001D1310 __asm__("D_003A7AB0");

void func_001D1310(void *arg0, M2C_UNK arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x10C) = &D_003A7AB0__func_001D1310;
    func_001D1368__func_001D1310();
    func_0020EA98__func_001D1310(arg0 + 0x430, 2);
    func_00114C78__func_001D1310(arg0, arg1);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D1368);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D13B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D13F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D1438);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D1478);

extern s32 func_00101EF8__func_001D14C8(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_0010BE78__func_001D14C8(s32, void *, s32) __asm__("func_0010BE78");
extern M2C_UNK D_003FDAA0__func_001D14C8 __asm__("D_003FDAA0");

void func_001D14C8(void *arg0) {
    func_0010BE78__func_001D14C8(func_00101EF8__func_001D14C8(&D_003FDAA0__func_001D14C8, 6), arg0, M2C_FIELD(arg0, s32 *, 0x4D4));
}

extern s32 func_00101EF8__func_001D1508(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_0010BED0__func_001D1508(s32, s32) __asm__("func_0010BED0");
extern M2C_UNK D_003FDAA0__func_001D1508 __asm__("D_003FDAA0");

void func_001D1508(s32 arg0) {
    func_0010BED0__func_001D1508(func_00101EF8__func_001D1508(&D_003FDAA0__func_001D1508, 6), arg0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D1548);

extern s32 func_001D19A0__func_001D15C8(s32, s32) __asm__("func_001D19A0");
extern s32 func_00347288__func_001D15C8(s32, M2C_UNK *, M2C_UNK) __asm__("func_00347288");
extern M2C_UNK D_003D5FE8__func_001D15C8 __asm__("D_003D5FE8");

s32 func_001D15C8(void *arg0, s32 arg1, void **arg2) {
    if (func_00347288__func_001D15C8(arg1, &D_003D5FE8__func_001D15C8, 7) != 0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x4B0) = func_001D19A0__func_001D15C8(M2C_FIELD(arg0, s32 *, 0x490), arg1 + 7);
    *arg2 = arg0 + 0x430;
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D1638);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D1838);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D1898);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D1928);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D19A0);

extern M2C_UNK func_00119EB8__func_001D1A08() __asm__("func_00119EB8");

s32 func_001D1A08(s32 arg0) {
    if (arg0 != 0) {
        func_00119EB8__func_001D1A08();
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D1A30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D1B00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D1B30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D1BD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D1C98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D1CF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D1D38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D1F58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D2060);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D2068);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D2100);

extern void *func_001D2068__func_001D2198() __asm__("func_001D2068");
extern M2C_UNK D_003D62D0__func_001D2198 __asm__("D_003D62D0");

M2C_UNK *func_001D2198(void) {
    void *temp_v0;

    temp_v0 = func_001D2068__func_001D2198();
    if (temp_v0 == NULL) {
        return &D_003D62D0__func_001D2198;
    }
    return M2C_FIELD(temp_v0, M2C_UNK **, 4);
}

extern void *func_001D2068__func_001D21C8() __asm__("func_001D2068");
extern M2C_UNK D_003D62D0__func_001D21C8 __asm__("D_003D62D0");

M2C_UNK *func_001D21C8(void) {
    void *temp_v0;

    temp_v0 = func_001D2068__func_001D21C8();
    if (temp_v0 == NULL) {
        return &D_003D62D0__func_001D21C8;
    }
    return M2C_FIELD(temp_v0, M2C_UNK **, 8);
}

extern void *func_001D2068__func_001D21F8() __asm__("func_001D2068");

s32 func_001D21F8(void) {
    void *temp_v0;

    temp_v0 = func_001D2068__func_001D21F8();
    if (temp_v0 == NULL) {
        return 0;
    }
    return M2C_FIELD(temp_v0, s32 *, 0x28);
}

extern void *func_001D2068__func_001D2220() __asm__("func_001D2068");

s32 func_001D2220(void) {
    void *temp_v0;

    temp_v0 = func_001D2068__func_001D2220();
    if (temp_v0 == NULL) {
        return 0;
    }
    return M2C_FIELD(temp_v0, s32 *, 0x34);
}

extern void *func_001D2068__func_001D2248() __asm__("func_001D2068");
extern M2C_UNK D_003D62D0__func_001D2248 __asm__("D_003D62D0");

M2C_UNK *func_001D2248(void) {
    void *temp_v0;

    temp_v0 = func_001D2068__func_001D2248();
    if (temp_v0 == NULL) {
        return &D_003D62D0__func_001D2248;
    }
    return M2C_FIELD(temp_v0, M2C_UNK **, 0xC);
}

extern void *func_001D2068__func_001D2278() __asm__("func_001D2068");
extern M2C_UNK D_003D62D0__func_001D2278 __asm__("D_003D62D0");

M2C_UNK *func_001D2278(void) {
    void *temp_v0;

    temp_v0 = func_001D2068__func_001D2278();
    if (temp_v0 == NULL) {
        return &D_003D62D0__func_001D2278;
    }
    return M2C_FIELD(temp_v0, M2C_UNK **, 0x10);
}

extern void *func_001D2068__func_001D22A8() __asm__("func_001D2068");
extern M2C_UNK D_003D62D0__func_001D22A8 __asm__("D_003D62D0");

M2C_UNK *func_001D22A8(void) {
    void *temp_v0;

    temp_v0 = func_001D2068__func_001D22A8();
    if (temp_v0 == NULL) {
        return &D_003D62D0__func_001D22A8;
    }
    return M2C_FIELD(temp_v0, M2C_UNK **, 0x14);
}

extern void *func_001D2068__func_001D22D8() __asm__("func_001D2068");
extern M2C_UNK D_003D62D0__func_001D22D8 __asm__("D_003D62D0");

M2C_UNK *func_001D22D8(void) {
    void *temp_v0;

    temp_v0 = func_001D2068__func_001D22D8();
    if (temp_v0 == NULL) {
        return &D_003D62D0__func_001D22D8;
    }
    return M2C_FIELD(temp_v0, M2C_UNK **, 0x18);
}

extern void *func_001D2068__func_001D2308() __asm__("func_001D2068");
extern M2C_UNK D_003D62D0__func_001D2308 __asm__("D_003D62D0");

M2C_UNK *func_001D2308(void) {
    void *temp_v0;

    temp_v0 = func_001D2068__func_001D2308();
    if (temp_v0 == NULL) {
        return &D_003D62D0__func_001D2308;
    }
    return M2C_FIELD(temp_v0, M2C_UNK **, 0x1C);
}

extern void *func_001D2068__func_001D2338() __asm__("func_001D2068");
extern M2C_UNK D_003D62D0__func_001D2338 __asm__("D_003D62D0");

M2C_UNK *func_001D2338(void) {
    void *temp_v0;

    temp_v0 = func_001D2068__func_001D2338();
    if (temp_v0 == NULL) {
        return &D_003D62D0__func_001D2338;
    }
    return M2C_FIELD(temp_v0, M2C_UNK **, 0x20);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D2368);

s32 func_001D2388(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 0x30) == arg1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D2398);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D2530);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D2588);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D25D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D27E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D28C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D28C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D2960);

extern void *func_001D28C8__func_001D29F8() __asm__("func_001D28C8");
extern M2C_UNK D_003D6568__func_001D29F8 __asm__("D_003D6568");

M2C_UNK *func_001D29F8(void) {
    void *temp_v0;

    temp_v0 = func_001D28C8__func_001D29F8();
    if (temp_v0 == NULL) {
        return &D_003D6568__func_001D29F8;
    }
    return M2C_FIELD(temp_v0, M2C_UNK **, 0xC);
}

extern void *func_001D28C8__func_001D2A28() __asm__("func_001D28C8");

s32 func_001D2A28(void) {
    void *temp_v0;

    temp_v0 = func_001D28C8__func_001D2A28();
    if (temp_v0 == NULL) {
        return 0;
    }
    return M2C_FIELD(temp_v0, s32 *, 0x14);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D2A50);

s32 func_001D2A70(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 0x1C) == arg1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D2A80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D2BE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D2BF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D2C10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D2D40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D2D88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D33F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D3470);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D3538);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D3678);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D3698);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D38A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D3D30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D40A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D4128);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D4220);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D4280);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D42A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D42E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D4350);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D43A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D4520);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D4650);

extern M2C_UNK func_001D4650__func_001D46E0(M2C_UNK *) __asm__("func_001D4650");
extern M2C_UNK D_0049B7A0__func_001D46E0 __asm__("D_0049B7A0");

void func_001D46E0(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            func_001D4650__func_001D46E0(&D_0049B7A0__func_001D46E0);
        }
    }
}

extern M2C_UNK func_001D46E0__func_001D4710(M2C_UNK, M2C_UNK) __asm__("func_001D46E0");

void func_001D4710(void) {
    func_001D46E0__func_001D4710(1, 0xFFFF);
}

extern s32 func_0011A238__func_001D4730(M2C_UNK, M2C_UNK *, M2C_UNK) __asm__("func_0011A238");
extern s32 func_001D4A78__func_001D4730(s32, s32, M2C_UNK, M2C_UNK) __asm__("func_001D4A78");
extern M2C_UNK func_00331508__func_001D4730(M2C_UNK *) __asm__("func_00331508");
extern M2C_UNK func_003315F0__func_001D4730(M2C_UNK *) __asm__("func_003315F0");
extern M2C_UNK D_003D7610__func_001D4730 __asm__("D_003D7610");
extern M2C_UNK D_003FDA90__func_001D4730 __asm__("D_003FDA90");

s32 func_001D4730(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_s0;

    func_00331508__func_001D4730(&D_003FDA90__func_001D4730);
    temp_s0 = func_001D4A78__func_001D4730(func_0011A238__func_001D4730(0x300, &D_003D7610__func_001D4730, arg2), arg0, arg1, arg2);
    func_003315F0__func_001D4730(&D_003FDA90__func_001D4730);
    return temp_s0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D47B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D47C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D4830);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D4948);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D4A30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D4A78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D4FA8);

extern M2C_UNK func_002232D8__func_001D5070(void *, s32) __asm__("func_002232D8");

void func_001D5070(void *arg0) {
    s32 temp_a1;

    temp_a1 = M2C_FIELD(arg0, s32 *, 0x2FC);
    if (temp_a1 != 0) {
        func_002232D8__func_001D5070(arg0 + 0x140, temp_a1);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D5098);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D5518);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D5648);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D56F0);

extern s32 func_0011A238__func_001D5768(M2C_UNK, M2C_UNK *, M2C_UNK) __asm__("func_0011A238");
extern s32 func_001D5AF0__func_001D5768(s32) __asm__("func_001D5AF0");
extern M2C_UNK D_003D7840__func_001D5768 __asm__("D_003D7840");

void func_001D5768(s32 *arg0) {
    *arg0 = func_001D5AF0__func_001D5768(func_0011A238__func_001D5768(0x20, &D_003D7840__func_001D5768, 0));
}

extern M2C_UNK func_001D5B50__func_001D57A8(s32) __asm__("func_001D5B50");

void func_001D57A8(s32 *arg0) {
    func_001D5B50__func_001D57A8(*arg0);
}

extern M2C_UNK func_001D5B78__func_001D57C8(s32 *) __asm__("func_001D5B78");

void func_001D57C8(s32 **arg0) {
    s32 *temp_a0;

    temp_a0 = *arg0;
    if (*temp_a0 != 0) {
        func_001D5B78__func_001D57C8(temp_a0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D57F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D5800);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D5848);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D5850);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D5920);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D5AF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D5B40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D5B50);

void func_001D5B78(void) {
}

s32 func_001D5B80(s8 *arg0) {
    s32 var_a1;
    s8 *var_a0;
    s8 temp_v1;

    var_a0 = arg0;
    var_a1 = 0x1505;
    do {
        temp_v1 = *var_a0;
        var_a0 += 1;
        var_a1 = (var_a1 * 0x21) + temp_v1;
    } while (temp_v1 != 0);
    return var_a1;
}

void *func_001D5BB0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, f32 *, 0x70) = 1.0f;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(arg0, s32 *, 0x6C) = 0;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D5BF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D5C38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D5CE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D5F38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D6020);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D60B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D62A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D6318);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D6370);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D63E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D6450);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D6580);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D65C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D6610);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D6660);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D68A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D6908);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D6930);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D6E88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D70D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D7158);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D7270);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D72D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D72F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D7480);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D7508);

void func_001D7518(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D7520);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D7778);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D7808);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D78C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D7958);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D7A60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D7AE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D7B38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D7B68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D7B98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D7C90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D7D80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D7DC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D7E00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D7E40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D7E88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D7E98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D7EA0);

void *func_001D7EA8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D7EB8);

void func_001D7EC8(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D7ED0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D7ED8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D7FD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D8020);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D8158);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D8198);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D8280);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D8700);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D8BD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D9720);

extern s32 func_00328B48__func_001D97F8(M2C_UNK *, M2C_UNK) __asm__("func_00328B48");
extern M2C_UNK func_00346B54__func_001D97F8(s32, M2C_UNK, M2C_UNK) __asm__("func_00346B54");
extern M2C_UNK D_003D8290__func_001D97F8 __asm__("D_003D8290");

void func_001D97F8(void *arg0) {
    func_00346B54__func_001D97F8(arg0 + 0x5C, 0, 0x4C);
    M2C_FIELD(arg0, s32 *, 0x50) = func_00328B48__func_001D97F8(&D_003D8290__func_001D97F8, 0x500);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D9840);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D9930);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D9D08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001D9E58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DB550);

void func_001DB578(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DB580);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DB590);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DB818);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DB8B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DB910);

extern M2C_UNK func_001DF998__func_001DB9B0() __asm__("func_001DF998");

void func_001DB9B0(void) {
    func_001DF998__func_001DB9B0();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DB9D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DBA10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DBA48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DBA80);

extern M2C_UNK func_001DF5F8__func_001DBAB8() __asm__("func_001DF5F8");

void func_001DBAB8(void) {
    func_001DF5F8__func_001DBAB8();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DBAD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DBB00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DBB68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DBB98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DBBE8);

extern M2C_UNK func_001DF9E0__func_001DBC38() __asm__("func_001DF9E0");
extern s32 D_0037B30C__func_001DBC38 __asm__("D_0037B30C");

void func_001DBC38(void) {
    D_0037B30C__func_001DBC38 = 0;
    func_001DF9E0__func_001DBC38();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DBC58);

s32 *func_001DBCA0(s32 *arg0) {
    *arg0 = 0;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DBCB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DBCD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DBDB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DC050);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DC118);

extern M2C_UNK func_001DCDB0__func_001DC1B0() __asm__("func_001DCDB0");
extern M2C_UNK func_002C4318__func_001DC1B0(s32, M2C_UNK *, M2C_UNK *) __asm__("func_002C4318");
extern M2C_UNK func_002C44A8__func_001DC1B0(M2C_UNK *, M2C_UNK) __asm__("func_002C44A8");
extern M2C_UNK func_00347680__func_001DC1B0(M2C_UNK *, M2C_UNK *, M2C_UNK) __asm__("func_00347680");
extern s32 D_0037B300__func_001DC1B0 __asm__("D_0037B300");
extern M2C_UNK D_003D85E0__func_001DC1B0 __asm__("D_003D85E0");
extern M2C_UNK D_0049C400__func_001DC1B0 __asm__("D_0049C400");
extern M2C_UNK D_0049C440__func_001DC1B0 __asm__("D_0049C440");

void func_001DC1B0(s32 *arg0, M2C_UNK arg1) {
    *arg0 = 2;
    func_001DCDB0__func_001DC1B0();
    func_002C44A8__func_001DC1B0(&D_0049C400__func_001DC1B0, arg1);
    func_00347680__func_001DC1B0(&D_0049C440__func_001DC1B0, &D_003D85E0__func_001DC1B0, arg1);
    func_002C4318__func_001DC1B0(D_0037B300__func_001DC1B0, &D_0049C440__func_001DC1B0, &D_0049C400__func_001DC1B0);
}

extern s32 func_001DB580__func_001DC230(M2C_UNK) __asm__("func_001DB580");
extern M2C_UNK func_001DCDB0__func_001DC230() __asm__("func_001DCDB0");
extern M2C_UNK func_002C4398__func_001DC230(s32, s32) __asm__("func_002C4398");
extern s32 D_0037B300__func_001DC230 __asm__("D_0037B300");

void func_001DC230(s32 *arg0, M2C_UNK arg1) {
    *arg0 = 7;
    func_001DCDB0__func_001DC230();
    func_002C4398__func_001DC230(D_0037B300__func_001DC230, func_001DB580__func_001DC230(arg1));
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DC280);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DC2D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DC3F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DC598);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DC5D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DC660);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DC690);

extern s32 func_0011A238__func_001DC720(M2C_UNK, M2C_UNK *, M2C_UNK) __asm__("func_0011A238");
extern s32 func_001DBCA0__func_001DC720(s32) __asm__("func_001DBCA0");
extern s32 D_0037B400__func_001DC720 __asm__("D_0037B400");
extern M2C_UNK D_003D85F8__func_001DC720 __asm__("D_003D85F8");

void func_001DC720(void) {
    if (D_0037B400__func_001DC720 == 0) {
        D_0037B400__func_001DC720 = func_001DBCA0__func_001DC720(func_0011A238__func_001DC720(4, &D_003D85F8__func_001DC720, 0));
    }
}

extern M2C_UNK func_001DBCB0__func_001DC770(s32, M2C_UNK) __asm__("func_001DBCB0");
extern M2C_UNK func_001DC118__func_001DC770(s32) __asm__("func_001DC118");
extern s32 D_0037B400__func_001DC770 __asm__("D_0037B400");

void func_001DC770(void) {
    if (D_0037B400__func_001DC770 != 0) {
        func_001DC118__func_001DC770(D_0037B400__func_001DC770);
        if (D_0037B400__func_001DC770 != 0) {
            func_001DBCB0__func_001DC770(D_0037B400__func_001DC770, 3);
        }
        D_0037B400__func_001DC770 = 0;
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DC7C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DC7F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DC930);

void *func_001DCB78(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DCB88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DCBD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DCC20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DCC60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DCC78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DCCB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DCCC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DCCD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DCCD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DCCE8);

extern M2C_UNK func_001DCCE8__func_001DCD70(M2C_UNK, M2C_UNK) __asm__("func_001DCCE8");

void func_001DCD70(void) {
    func_001DCCE8__func_001DCD70(1, 0xFFFF);
}

extern M2C_UNK func_001DCCE8__func_001DCD90(M2C_UNK, M2C_UNK) __asm__("func_001DCCE8");

void func_001DCD90(void) {
    func_001DCCE8__func_001DCD90(0, 0xFFFF);
}

extern M2C_UNK func_001EA7C8__func_001DCDB0(M2C_UNK) __asm__("func_001EA7C8");

void func_001DCDB0(void) {
    func_001EA7C8__func_001DCDB0(0);
}

extern M2C_UNK func_001EA7C8__func_001DCDD0(M2C_UNK) __asm__("func_001EA7C8");

void func_001DCDD0(void) {
    func_001EA7C8__func_001DCDD0(1);
}

extern s32 func_00101EF8__func_001DCDF0(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_00261838__func_001DCDF0(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK) __asm__("func_00261838");
extern s32 D_0037B454__func_001DCDF0 __asm__("D_0037B454");
extern M2C_UNK D_003D87A8__func_001DCDF0 __asm__("D_003D87A8");
extern M2C_UNK D_003FDAA0__func_001DCDF0 __asm__("D_003FDAA0");

void func_001DCDF0(void) {
    if ((func_00101EF8__func_001DCDF0(&D_003FDAA0__func_001DCDF0, 0x10) != 0) && (D_0037B454__func_001DCDF0 != 0)) {
        func_00261838__func_001DCDF0(&D_003D87A8__func_001DCDF0, 0, 0, 0);
        D_0037B454__func_001DCDF0 = 0;
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DCE48);

extern M2C_UNK func_001DCE48__func_001DCF38(s32) __asm__("func_001DCE48");
extern s32 D_0037B410__func_001DCF38 __asm__("D_0037B410");
extern s32 D_0037B42C__func_001DCF38 __asm__("D_0037B42C");

void func_001DCF38(void) {
    if (D_0037B410__func_001DCF38 != 0) {
        func_001DCE48__func_001DCF38(D_0037B42C__func_001DCF38);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DCF68);

extern M2C_UNK func_001DC598__func_001DCFF0(s32, s32) __asm__("func_001DC598");
extern s32 func_001DC7C0__func_001DCFF0() __asm__("func_001DC7C0");
extern s32 D_0037B410__func_001DCFF0 __asm__("D_0037B410");
extern s32 D_0037B420__func_001DCFF0 __asm__("D_0037B420");
extern s32 D_0037B424__func_001DCFF0 __asm__("D_0037B424");
extern s32 D_0037B42C__func_001DCFF0 __asm__("D_0037B42C");

void func_001DCFF0(s32 arg0) {
    if ((D_0037B410__func_001DCFF0 != 0) && (D_0037B420__func_001DCFF0 != arg0)) {
        D_0037B424__func_001DCFF0 = 1;
    }
    D_0037B42C__func_001DCFF0 = arg0;
    func_001DC598__func_001DCFF0(func_001DC7C0__func_001DCFF0(), arg0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DD050);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DD070);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DD078);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DD2D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DD440);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DD550);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DD660);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DD770);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DD880);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DD9B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DDB30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DDC40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DDCA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DDD38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DDDB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DDE50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DE270);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DE3E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DE4C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DE548);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DE580);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DE688);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DE790);

extern M2C_UNK func_001DEC28__func_001DE840() __asm__("func_001DEC28");
extern u8 D_0037B428__func_001DE840 __asm__("D_0037B428");

void func_001DE840(void) {
    D_0037B428__func_001DE840 += 1;
    func_001DEC28__func_001DE840();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DE868);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DEA08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DEB38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DEBC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DEC28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DEEA8);

extern M2C_UNK func_001DC050__func_001DEEB0(s32, s32) __asm__("func_001DC050");
extern s32 func_001DC7C0__func_001DEEB0() __asm__("func_001DC7C0");
extern s32 D_0037B410__func_001DEEB0 __asm__("D_0037B410");
extern s32 D_0037B414__func_001DEEB0 __asm__("D_0037B414");
extern s32 D_0037B41C__func_001DEEB0 __asm__("D_0037B41C");

void func_001DEEB0(s32 arg0) {
    if (arg0 == 0) {
        D_0037B41C__func_001DEEB0 = 0;
        D_0037B410__func_001DEEB0 = 0;
    } else {
        D_0037B41C__func_001DEEB0 = 1;
    }
    D_0037B414__func_001DEEB0 = 0;
    func_001DC050__func_001DEEB0(func_001DC7C0__func_001DEEB0(), arg0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DEF10);

extern M2C_UNK func_001DCFF0__func_001DEF18() __asm__("func_001DCFF0");
extern s32 D_0037B42C__func_001DEF18 __asm__("D_0037B42C");

void func_001DEF18(s32 arg0) {
    D_0037B42C__func_001DEF18 = arg0;
    func_001DCFF0__func_001DEF18();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DEF38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DF000);

extern M2C_UNK func_001DD9B8__func_001DF0A0() __asm__("func_001DD9B8");

void func_001DF0A0(void) {
    func_001DD9B8__func_001DF0A0();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DF0C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DF4A8);

extern s8 D_0037B428__func_001DF5F8 __asm__("D_0037B428");
extern s8 D_0037B429__func_001DF5F8 __asm__("D_0037B429");

void func_001DF5F8(void) {
    D_0037B429__func_001DF5F8 = 0;
    D_0037B428__func_001DF5F8 = 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DF610);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DF738);

extern M2C_UNK func_00261838__func_001DF998(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK) __asm__("func_00261838");
extern s32 D_0037B45C__func_001DF998 __asm__("D_0037B45C");
extern M2C_UNK D_003D8CD0__func_001DF998 __asm__("D_003D8CD0");

void func_001DF998(void) {
    if (D_0037B45C__func_001DF998 != 0) {
        func_00261838__func_001DF998(&D_003D8CD0__func_001DF998, 0, 0, 0);
    }
    D_0037B45C__func_001DF998 = 0;
}

extern void *func_00101EF8__func_001DF9E0(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern s32 D_0037B410__func_001DF9E0 __asm__("D_0037B410");
extern s32 D_0037B414__func_001DF9E0 __asm__("D_0037B414");
extern s32 D_0037B424__func_001DF9E0 __asm__("D_0037B424");
extern M2C_UNK D_003FDAA0__func_001DF9E0 __asm__("D_003FDAA0");

void func_001DF9E0(void) {
    void *temp_a0;

    if (D_0037B424__func_001DF9E0 == 0) {
        D_0037B414__func_001DF9E0 = 1;
    }
    D_0037B410__func_001DF9E0 = 0;
    temp_a0 = M2C_FIELD(func_00101EF8__func_001DF9E0(&D_003FDAA0__func_001DF9E0, 0x18), s32 *, 4) + 4;
    M2C_FIELD(temp_a0, s32 *, 0x5C) = (s32) (M2C_FIELD(temp_a0, s32 *, 0x5C) & 0xFEFFFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DFA40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DFCA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DFCF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DFD48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001DFDE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E0178);

extern M2C_UNK func_001E0178__func_001E0220(M2C_UNK, M2C_UNK) __asm__("func_001E0178");

void func_001E0220(void) {
    func_001E0178__func_001E0220(1, 0xFFFF);
}

extern M2C_UNK func_001E0178__func_001E0240(M2C_UNK, M2C_UNK) __asm__("func_001E0178");

void func_001E0240(void) {
    func_001E0178__func_001E0240(0, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E0260);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E02C0);

extern M2C_UNK func_001E0260__func_001E0338(s32) __asm__("func_001E0260");
extern M2C_UNK func_001E1BE8__func_001E0338(s32) __asm__("func_001E1BE8");

void *func_001E0338(void *arg0) {
    func_001E1BE8__func_001E0338(arg0 + 0x220);
    func_001E0260__func_001E0338(arg0 + 0x3B0);
    func_001E0260__func_001E0338(arg0 + 0x4F0);
    func_001E0260__func_001E0338(arg0 + 0x630);
    func_001E0260__func_001E0338(arg0 + 0x770);
    func_001E0260__func_001E0338(arg0 + 0x8B0);
    M2C_FIELD(arg0, s32 *, 0x218) = -1;
    M2C_FIELD(arg0, s32 *, 0x208) = 0;
    M2C_FIELD(arg0, s32 *, 0x21C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20C) = 0;
    M2C_FIELD(arg0, s32 *, 0x210) = 0;
    M2C_FIELD(arg0, s32 *, 0x214) = 0;
    M2C_FIELD(arg0, s32 *, 0x374) = 0;
    M2C_FIELD(arg0, s32 *, 0x304) = 0;
    M2C_FIELD(arg0, s32 *, 0x204) = 0;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E03B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E0448);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E07F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E0998);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E0A10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E0AB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E0DD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E1450);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E16A8);

extern M2C_UNK func_001E1840__func_001E1710() __asm__("func_001E1840");

void func_001E1710(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x204) = 1;
    func_001E1840__func_001E1710();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E1730);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E1768);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E17F0);

extern M2C_UNK func_001E1980__func_001E1840(s32, s32, s32) __asm__("func_001E1980");
extern s32 func_001E1CA0__func_001E1840(void *) __asm__("func_001E1CA0");
extern s32 func_001E1CB0__func_001E1840(void *) __asm__("func_001E1CB0");

void func_001E1840(s32 arg0) {
    s32 temp_s0;
    void *temp_s1;

    temp_s1 = arg0 + 0x220;
    if (M2C_FIELD(temp_s1, s32 *, 0xE0) > 0) {
        temp_s0 = func_001E1CB0__func_001E1840(temp_s1);
        func_001E1980__func_001E1840(arg0, temp_s0, func_001E1CA0__func_001E1840(temp_s1));
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E18A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E1980);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E1AD8);

extern M2C_UNK func_001E1C60__func_001E1BE8() __asm__("func_001E1C60");

s32 func_001E1BE8(s32 arg0) {
    func_001E1C60__func_001E1BE8();
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E1C10);

void func_001E1C58(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E1C60);

void *func_001E1CA0(void *arg0) {
    return arg0 + (M2C_FIELD(arg0, s32 *, 0xD8) << 5);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E1CB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E1CC8);

void func_001E1DD8(void *arg0) {
    s32 temp_v0;

    M2C_FIELD(arg0, s32 *, 0xE0) = (s32) (M2C_FIELD(arg0, s32 *, 0xE0) - 1);
    M2C_FIELD((arg0 + (M2C_FIELD(arg0, s32 *, 0xD8) << 5)), s32 *, 4) = -1;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0xD8) + 1;
    M2C_FIELD(arg0, s32 *, 0xD8) = temp_v0;
    if (temp_v0 >= 6) {
        M2C_FIELD(arg0, s32 *, 0xD8) = 0;
    }
}

extern f32 D_0037B488__func_001E1E20 __asm__("D_0037B488");
extern f32 D_0037B48C__func_001E1E20 __asm__("D_0037B48C");
extern f32 D_0049CF18__func_001E1E20 __asm__("D_0049CF18");

void func_001E1E20(s32 arg0, s32 arg1) {
    if ((arg1 == 0xFFFF) && (arg0 != 0)) {
        D_0049CF18__func_001E1E20 = (D_0037B488__func_001E1E20 - D_0037B48C__func_001E1E20) * 0.5f;
    }
}

extern M2C_UNK func_001E1E20__func_001E1E60(M2C_UNK, M2C_UNK) __asm__("func_001E1E20");

void func_001E1E60(void) {
    func_001E1E20__func_001E1E60(1, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E1E80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E1E88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E1EE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E1F60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E1FE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E2060);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E23E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E2550);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E25C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E2668);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E2A48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E30D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E33A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E3460);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E3738);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E37A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E37C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E3808);

extern f32 D_0037B4CC__func_001E3918 __asm__("D_0037B4CC");
extern f32 D_0037B4D0__func_001E3918 __asm__("D_0037B4D0");
extern f32 D_0049CF1C__func_001E3918 __asm__("D_0049CF1C");

void func_001E3918(s32 arg0, s32 arg1) {
    if ((arg1 == 0xFFFF) && (arg0 != 0)) {
        D_0049CF1C__func_001E3918 = (D_0037B4CC__func_001E3918 - D_0037B4D0__func_001E3918) * 0.5f;
    }
}

extern M2C_UNK func_001E3918__func_001E3958(M2C_UNK, M2C_UNK) __asm__("func_001E3918");

void func_001E3958(void) {
    func_001E3918__func_001E3958(1, 0xFFFF);
}

void *func_001E3978(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    return arg0;
}

extern M2C_UNK func_00119580__func_001E3990(void *) __asm__("func_00119580");
extern M2C_UNK func_0011A2F8__func_001E3990(void *) __asm__("func_0011A2F8");
extern M2C_UNK func_0011EC38__func_001E3990(void *) __asm__("func_0011EC38");
extern M2C_UNK func_0020EA98__func_001E3990(s32, M2C_UNK) __asm__("func_0020EA98");
extern M2C_UNK func_0032CF68__func_001E3990(s32) __asm__("func_0032CF68");

void func_001E3990(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 8);
    if (temp_s0 != NULL) {
        if (M2C_FIELD(temp_s0, s32 *, 0x4C) != 0) {
            func_00119580__func_001E3990(temp_s0);
        }
        func_0011EC38__func_001E3990(temp_s0);
        func_0011A2F8__func_001E3990(temp_s0);
        M2C_FIELD(arg0, void **, 8) = NULL;
    }
    temp_a0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_a0 != 0) {
        func_0032CF68__func_001E3990(temp_a0);
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
    temp_a0_2 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_a0_2 != 0) {
        func_0020EA98__func_001E3990(temp_a0_2, 3);
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
}

void func_001E3A20(s32 *arg0) {
    *arg0 = 1;
}

extern void *func_00101EF8__func_001E3A30(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_00119630__func_001E3A30(s32) __asm__("func_00119630");
extern M2C_UNK func_0021B840__func_001E3A30(s32, M2C_UNK) __asm__("func_0021B840");
extern M2C_UNK D_003FDAA0__func_001E3A30 __asm__("D_003FDAA0");

void func_001E3A30(void *arg0) {
    s32 temp_a0;
    void *temp_v0;

    temp_v0 = func_00101EF8__func_001E3A30(&D_003FDAA0__func_001E3A30, 4);
    if (temp_v0 != NULL) {
        func_0021B840__func_001E3A30(M2C_FIELD(temp_v0, s32 *, 0x34), 0);
        temp_a0 = M2C_FIELD(arg0, s32 *, 8);
        if (temp_a0 != 0) {
            func_00119630__func_001E3A30(temp_a0);
        }
        func_0021B840__func_001E3A30(M2C_FIELD(temp_v0, s32 *, 0x34), 1);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E3AA0);

extern M2C_UNK func_001E3978__func_001E3D10(M2C_UNK *) __asm__("func_001E3978");
extern M2C_UNK func_001E3990__func_001E3D10(M2C_UNK *) __asm__("func_001E3990");
extern M2C_UNK D_0049CF20__func_001E3D10 __asm__("D_0049CF20");

void func_001E3D10(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            func_001E3978__func_001E3D10(&D_0049CF20__func_001E3D10);
            return;
        }
        func_001E3990__func_001E3D10(&D_0049CF20__func_001E3D10);
    }
}

extern M2C_UNK func_001E3D10__func_001E3D50(M2C_UNK, M2C_UNK) __asm__("func_001E3D10");

void func_001E3D50(void) {
    func_001E3D10__func_001E3D50(1, 0xFFFF);
}

extern M2C_UNK func_001E3D10__func_001E3D70(M2C_UNK, M2C_UNK) __asm__("func_001E3D10");

void func_001E3D70(void) {
    func_001E3D10__func_001E3D70(0, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E3D90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E3D98);

extern M2C_UNK func_0032F5B0__func_001E3DE0(s32) __asm__("func_0032F5B0");

void func_001E3DE0(void *arg0) {
    func_0032F5B0__func_001E3DE0(M2C_FIELD(arg0, s32 *, 4));
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E3E00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E3E90);

extern M2C_UNK func_00119EB8__func_001E3F70(s32) __asm__("func_00119EB8");

void func_001E3F70(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_a0 != 0) {
        func_00119EB8__func_001E3F70(temp_a0);
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E3FA8);

s32 func_001E41A8(s32 arg0) {
    if ((arg0 == 0x2B30) || (arg0 == 0x2F17) || (arg0 == 0x3312)) {
        return 1;
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E41D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E4230);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E4238);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E4460);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E44D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E44F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E4508);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E4570);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E45C8);

extern void *func_0011A238__func_001E4690(M2C_UNK, M2C_UNK *, s32) __asm__("func_0011A238");
extern M2C_UNK func_001E4A58__func_001E4690(void *) __asm__("func_001E4A58");
extern M2C_UNK D_003A7E18__func_001E4690 __asm__("D_003A7E18");
extern M2C_UNK D_003DA3C8__func_001E4690 __asm__("D_003DA3C8");

void *func_001E4690(s32 arg0) {
    void *temp_v0;

    temp_v0 = func_0011A238__func_001E4690(0x180C, &D_003DA3C8__func_001E4690, arg0);
    func_001E4A58__func_001E4690(temp_v0);
    M2C_FIELD(temp_v0, M2C_UNK **, 0x1804) = &D_003A7E18__func_001E4690;
    return temp_v0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E46E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E4790);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E4820);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E4858);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E4888);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E48D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E4A58);

extern M2C_UNK func_001E4BC8__func_001E4BA8() __asm__("func_001E4BC8");

void func_001E4BA8(void) {
    func_001E4BC8__func_001E4BA8();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E4BC8);

extern M2C_UNK func_00330968__func_001E4EA0(s32) __asm__("func_00330968");
extern s32 D_0037B58C__func_001E4EA0 __asm__("D_0037B58C");

void func_001E4EA0(void) {
    func_00330968__func_001E4EA0(D_0037B58C__func_001E4EA0 + 0x17EC);
}

extern M2C_UNK func_00366420__func_001E4EC8(M2C_UNK *, M2C_UNK) __asm__("func_00366420");
extern M2C_UNK D_0049CF30__func_001E4EC8 __asm__("D_0049CF30");

void func_001E4EC8(void) {
    func_00366420__func_001E4EC8(&D_0049CF30__func_001E4EC8, 2);
}

extern M2C_UNK atexit__func_001E4EF0(M2C_UNK *) __asm__("atexit");
extern M2C_UNK func_003664C8__func_001E4EF0(M2C_UNK *) __asm__("func_003664C8");
extern M2C_UNK D_0049CF30__func_001E4EF0 __asm__("D_0049CF30");
extern s32 D_0049D54C__func_001E4EF0 __asm__("D_0049D54C");
extern M2C_UNK func_001E4EC8__func_001E4EF0 __asm__("func_001E4EC8");

M2C_UNK *func_001E4EF0(void) {
    if (D_0049D54C__func_001E4EF0 == 0) {
        func_003664C8__func_001E4EF0(&D_0049CF30__func_001E4EF0);
        D_0049D54C__func_001E4EF0 = 1;
        atexit__func_001E4EF0(&func_001E4EC8__func_001E4EF0);
    }
    return &D_0049CF30__func_001E4EF0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E4F48);

extern M2C_UNK func_00119EB8__func_001E4FD0() __asm__("func_00119EB8");

void func_001E4FD0(void) {
    func_00119EB8__func_001E4FD0();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E4FF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E5038);

extern s32 func_00101EF8__func_001E5218(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern M2C_UNK func_001C4C48__func_001E5218(M2C_UNK, M2C_UNK *) __asm__("func_001C4C48");
extern M2C_UNK D_003FDAA0__func_001E5218 __asm__("D_003FDAA0");
extern M2C_UNK func_001E5038__func_001E5218 __asm__("func_001E5038");

void func_001E5218(void) {
    if (func_00101EF8__func_001E5218(&D_003FDAA0__func_001E5218, 0x1D) != 0) {
        func_001C4C48__func_001E5218(0xF1000000, &func_001E5038__func_001E5218);
        func_001C4C48__func_001E5218(0xF0000013, &func_001E5038__func_001E5218);
        func_001C4C48__func_001E5218(0xF1000001, &func_001E5038__func_001E5218);
        func_001C4C48__func_001E5218(0xF000002A, &func_001E5038__func_001E5218);
        func_001C4C48__func_001E5218(0xF000002B, &func_001E5038__func_001E5218);
        func_001C4C48__func_001E5218(0xF000000C, &func_001E5038__func_001E5218);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E52B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E52B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E57E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E58F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E5DB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E5E38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E5F80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E60D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E66B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E6980);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E6A90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E6D80);

extern M2C_UNK func_00119630__func_001E6E70(s32) __asm__("func_00119630");

void func_001E6E70(s32 arg0) {
    func_00119630__func_001E6E70(arg0 + 0x48);
    func_00119630__func_001E6E70(arg0 + 0x98);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E6EA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E6FA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E7008);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E7098);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E72B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E7558);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E76A8);

extern M2C_UNK func_00112CE8__func_001E7700(void *) __asm__("func_00112CE8");
extern M2C_UNK func_00119580__func_001E7700(void *) __asm__("func_00119580");
extern M2C_UNK func_0011A2F8__func_001E7700(void *) __asm__("func_0011A2F8");
extern M2C_UNK func_0011EC38__func_001E7700(void *) __asm__("func_0011EC38");
extern M2C_UNK func_001E7928__func_001E7700(void *) __asm__("func_001E7928");
extern M2C_UNK func_0020EA98__func_001E7700(s32, M2C_UNK) __asm__("func_0020EA98");
extern void *D_0037B59C__func_001E7700 __asm__("D_0037B59C");
extern s32 D_0037B5A4__func_001E7700 __asm__("D_0037B5A4");
extern void *D_0037B5A8__func_001E7700 __asm__("D_0037B5A8");

void func_001E7700(void *arg0) {
    void *temp_a0;
    void *temp_s0;

    temp_a0 = M2C_FIELD(arg0, void **, 4);
    if (temp_a0 != NULL) {
        func_0011A2F8__func_001E7700(temp_a0);
        M2C_FIELD(arg0, void **, 4) = NULL;
    }
    if (D_0037B5A4__func_001E7700 != 0) {
        func_0020EA98__func_001E7700(D_0037B5A4__func_001E7700, 3);
        D_0037B5A4__func_001E7700 = 0;
    }
    temp_s0 = D_0037B5A8__func_001E7700;
    if (temp_s0 != NULL) {
        if (M2C_FIELD(temp_s0, s32 *, 0x4C) != 0) {
            func_00119580__func_001E7700(temp_s0);
        }
        func_0011EC38__func_001E7700(temp_s0);
        func_0011A2F8__func_001E7700(temp_s0);
        D_0037B5A8__func_001E7700 = NULL;
    }
    if (D_0037B59C__func_001E7700 != NULL) {
        func_00112CE8__func_001E7700(D_0037B59C__func_001E7700);
        if (D_0037B59C__func_001E7700 != NULL) {
            func_0011A2F8__func_001E7700(D_0037B59C__func_001E7700);
        }
        D_0037B59C__func_001E7700 = NULL;
    }
    func_001E7928__func_001E7700(arg0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E77D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E7928);

extern M2C_UNK func_001E7998__func_001E7970() __asm__("func_001E7998");

s32 func_001E7970(s32 arg0) {
    func_001E7998__func_001E7970();
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E7998);

extern M2C_UNK func_00112CE8__func_001E79E0(void *) __asm__("func_00112CE8");
extern M2C_UNK func_00119580__func_001E79E0(void *) __asm__("func_00119580");
extern M2C_UNK func_0011A2F8__func_001E79E0(void *) __asm__("func_0011A2F8");
extern M2C_UNK func_0011EC38__func_001E79E0(void *) __asm__("func_0011EC38");
extern M2C_UNK func_001E7998__func_001E79E0(void *) __asm__("func_001E7998");
extern M2C_UNK func_0020EA98__func_001E79E0(s32, M2C_UNK) __asm__("func_0020EA98");

void func_001E79E0(void *arg0) {
    s32 temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_s0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x38);
    if (temp_a0 != 0) {
        func_0020EA98__func_001E79E0(temp_a0, 3);
        M2C_FIELD(arg0, s32 *, 0x38) = 0;
    }
    temp_s0 = M2C_FIELD(arg0, void **, 0x3C);
    if (temp_s0 != NULL) {
        if (M2C_FIELD(temp_s0, s32 *, 0x4C) != 0) {
            func_00119580__func_001E79E0(temp_s0);
        }
        func_0011EC38__func_001E79E0(temp_s0);
        func_0011A2F8__func_001E79E0(temp_s0);
        M2C_FIELD(arg0, void **, 0x3C) = NULL;
    }
    temp_a0_2 = M2C_FIELD(arg0, void **, 0x30);
    if (temp_a0_2 != NULL) {
        func_00112CE8__func_001E79E0(temp_a0_2);
        temp_a0_3 = M2C_FIELD(arg0, void **, 0x30);
        if (temp_a0_3 != NULL) {
            func_0011A2F8__func_001E79E0(temp_a0_3);
        }
        M2C_FIELD(arg0, void **, 0x30) = NULL;
    }
    func_001E7998__func_001E79E0(arg0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E7A88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E7AD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E7AD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E7AE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E7B10);

void func_001E7B30(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    M2C_FIELD(arg0, s32 *, 0) = 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E7B40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E7B48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E7B50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E7B58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E7B60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E7B68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E7B70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E7B78);

extern s32 func_001E7B78__func_001E7BC8(s32, M2C_UNK) __asm__("func_001E7B78");
extern M2C_UNK func_0032F768__func_001E7BC8(s32, s32) __asm__("func_0032F768");
extern M2C_UNK func_0032F788__func_001E7BC8(s32, s32, s32) __asm__("func_0032F788");

s32 func_001E7BC8(s32 arg0, s32 arg1) {
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;

    var_s1 = arg0;
    var_s3 = 0;
    if (var_s1 == 0) {
        return 0;
    }
    var_s0 = func_001E7B78__func_001E7BC8(var_s1, 0x23);
    var_s2 = arg1;
    if (var_s0 != 0) {
        do {
            func_0032F788__func_001E7BC8(var_s2, var_s1, (s32) (var_s0 - var_s1) >> 1);
            var_s1 = var_s0 + 2;
            var_s2 += 0x800;
            var_s0 = func_001E7B78__func_001E7BC8(var_s1, 0x23);
            var_s3 += 1;
        } while (var_s0 != 0);
    }
    func_0032F768__func_001E7BC8(arg1 + (var_s3 << 0xB), var_s1);
    return var_s3;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E7C80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E84E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E84E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E8548);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E85A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E85F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E8648);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E8710);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E87A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E8820);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E8998);

extern M2C_UNK func_002232D8__func_001E8B90(s32, M2C_UNK) __asm__("func_002232D8");

void func_001E8B90(void *arg0) {
    func_002232D8__func_001E8B90(M2C_FIELD(arg0, s32 *, 0x188), 3);
}

extern M2C_UNK func_0020EA98__func_001E8BB0(s32, M2C_UNK) __asm__("func_0020EA98");
extern M2C_UNK func_002121E0__func_001E8BB0(s32, M2C_UNK) __asm__("func_002121E0");
extern M2C_UNK func_00222F40__func_001E8BB0(s32, M2C_UNK) __asm__("func_00222F40");

void func_001E8BB0(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x184);
    if (temp_a0 != 0) {
        func_002121E0__func_001E8BB0(temp_a0, 3);
    }
    temp_a0_2 = M2C_FIELD(arg0, s32 *, 0x180);
    M2C_FIELD(arg0, s32 *, 0x184) = 0;
    if (temp_a0_2 != 0) {
        func_0020EA98__func_001E8BB0(temp_a0_2, 3);
    }
    temp_a0_3 = M2C_FIELD(arg0, s32 *, 0x188);
    M2C_FIELD(arg0, s32 *, 0x180) = 0;
    if (temp_a0_3 != 0) {
        func_00222F40__func_001E8BB0(temp_a0_3, 3);
    }
    M2C_FIELD(arg0, s32 *, 0x188) = 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E8C10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E8CD0);

void func_001E8D28(void *arg0, u8 *arg1, s32 *arg2) {
    *arg1 = M2C_FIELD(arg0, u8 *, 7);
    *arg2 = M2C_FIELD(arg0, s8 *, 9) - 0x30;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E8D40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", CInstanceCrowd_Init);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E9370);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E9440);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E9560);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E9658);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E9668);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E9670);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E97C0);

extern M2C_UNK func_001E8B90__func_001E99B8(void *) __asm__("func_001E8B90");
extern M2C_UNK func_001E97C0__func_001E99B8() __asm__("func_001E97C0");
extern M2C_UNK func_002154D0__func_001E99B8(s32) __asm__("func_002154D0");
extern s32 D_0037B5B0__func_001E99B8 __asm__("D_0037B5B0");

void func_001E99B8(void *arg0) {
    if (D_0037B5B0__func_001E99B8 != 0) {
        func_001E97C0__func_001E99B8();
        func_001E8B90__func_001E99B8(arg0);
        func_002154D0__func_001E99B8(M2C_FIELD(arg0, s32 *, 0x120));
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E9A00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E9A20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E9A28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E9C18);

extern M2C_UNK func_001E9C18__func_001E9C50(M2C_UNK, M2C_UNK) __asm__("func_001E9C18");

void func_001E9C50(void) {
    func_001E9C18__func_001E9C50(1, 0xFFFF);
}

void func_001E9C70(void) {
}

void func_001E9C78(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E9C80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E9D10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E9D38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E9D40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E9D48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E9D98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E9DE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E9E40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001E9FB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EA038);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EA228);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EA2E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EA3A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EA430);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EA4B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EA6D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EA718);

extern s32 D_0037B630__func_001EA7C8 __asm__("D_0037B630");

void func_001EA7C8(s32 arg0) {
    D_0037B630__func_001EA7C8 = arg0;
}

extern s32 D_0037B634__func_001EA7D8 __asm__("D_0037B634");

void func_001EA7D8(s32 arg0) {
    D_0037B634__func_001EA7D8 = arg0;
}

extern M2C_UNK func_001EA898__func_001EA7E8() __asm__("func_001EA898");

s32 func_001EA7E8(s32 arg0) {
    func_001EA898__func_001EA7E8();
    return arg0;
}

extern M2C_UNK func_001EA838__func_001EA810() __asm__("func_001EA838");

s32 func_001EA810(s32 arg0) {
    func_001EA838__func_001EA810();
    return arg0;
}

void *func_001EA838(void *arg0, void *arg1) {
    if (arg1 != arg0) {
        M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
        M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
        M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
        M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
        M2C_FIELD(arg0, f32 *, 0x20) = (f32) M2C_FIELD(arg1, f32 *, 0x20);
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg1, s32 *, 0x24);
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
        M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg1, s32 *, 0x14);
        M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg1, s32 *, 0x18);
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(arg1, s32 *, 0x1C);
    }
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EA898);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EA8E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EA940);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EA960);

extern M2C_UNK func_001EA8E8__func_001EA968() __asm__("func_001EA8E8");
extern M2C_UNK D_003A7F10__func_001EA968 __asm__("D_003A7F10");

void *func_001EA968(void *arg0) {
    func_001EA8E8__func_001EA968();
    M2C_FIELD(arg0, M2C_UNK **, 0x4C) = &D_003A7F10__func_001EA968;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EA9A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EA9D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EAA58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EAAF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EAC80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", CREALSubsystem_Init);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EAE88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EAEC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EAEC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EAEF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EAF40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EAF78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EB3D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EB3E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EB460);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EB480);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EB538);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EB5C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EB610);

s32 func_001EB6A8(s32 arg0, s32 arg1) {
    return arg1 == (arg0 + 0x878);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EB6B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EB6E0);

s32 func_001EB720(void *arg0, s32 *arg1) {
    if (arg1 != NULL) {
        *arg1 = arg0 + 0xBF0;
    }
    return M2C_FIELD(arg0, s32 *, 0xBE4);
}

s32 func_001EB738(void *arg0, s32 *arg1) {
    if (arg1 != NULL) {
        *arg1 = arg0 + 0xC10;
    }
    return M2C_FIELD(arg0, s32 *, 0xBE8);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EB750);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EB790);

extern M2C_UNK func_001EA7E8__func_001EB7D0(s32) __asm__("func_001EA7E8");
extern M2C_UNK func_001EB878__func_001EB7D0(void *, M2C_UNK) __asm__("func_001EB878");
extern M2C_UNK func_003312D8__func_001EB7D0(void *, M2C_UNK) __asm__("func_003312D8");

void *func_001EB7D0(void *arg0) {
    s32 var_v1;
    void *var_v0;

    var_v1 = 1;
    var_v0 = arg0 + 0xA8;
    do {
        M2C_FIELD(var_v0, s32 *, 0) = 0;
        var_v1 -= 1;
        M2C_FIELD(var_v0, s32 *, 4) = 0;
        var_v0 += 8;
    } while (var_v1 != -1);
    func_001EA7E8__func_001EB7D0(arg0 + 0xB8);
    func_001EB878__func_001EB7D0(arg0, 1);
    func_003312D8__func_001EB7D0(arg0 + 0x9C, 8);
    M2C_FIELD(arg0, s32 *, 0xA4) = 0;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EB848);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EB870);

extern M2C_UNK func_003312D8__func_001EB878(void *, M2C_UNK) __asm__("func_003312D8");
extern M2C_UNK func_003312F8__func_001EB878(void *, M2C_UNK, M2C_UNK) __asm__("func_003312F8");

void func_001EB878(void *arg0, s32 arg1) {
    func_003312D8__func_001EB878(arg0 + 4, 0x40);
    func_003312D8__func_001EB878(arg0 + 0xA8, 0x10);
    M2C_FIELD(arg0, s32 *, 0x84) = 0;
    M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    if (arg1 != 0) {
        func_003312F8__func_001EB878(arg0 + 0x44, 0, 0x40);
        M2C_FIELD(arg0, s32 *, 0x88) = 0;
        M2C_FIELD(arg0, s32 *, 0x98) = 0;
        func_003312D8__func_001EB878(arg0 + 0x90, 8);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EB8F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EB908);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EBAC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EBCD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EBE10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EBE80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EBEC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EBED8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EBF00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EBF28);

extern M2C_UNK func_003312D8__func_001EBF48(s32, M2C_UNK) __asm__("func_003312D8");

void func_001EBF48(s32 arg0) {
    func_003312D8__func_001EBF48(arg0 + 0xA8, 0x10);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EBF68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EBFB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EC078);

s32 *func_001EC120(s32 *arg0) {
    *arg0 = 0;
    return arg0;
}

extern M2C_UNK func_00119EB8__func_001EC130(s32) __asm__("func_00119EB8");
extern M2C_UNK func_0011A2F8__func_001EC130(void *) __asm__("func_0011A2F8");

void func_001EC130(void *arg0, s32 arg1) {
    func_00119EB8__func_001EC130(M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    if (arg1 & 1) {
        func_0011A2F8__func_001EC130(arg0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EC180);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EC190);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EC268);

extern M2C_UNK func_001ED428__func_001EC410(void *, void *) __asm__("func_001ED428");

void *func_001EC410(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_001ED428__func_001EC410(arg0 + 8, arg0);
    M2C_FIELD(arg0, s32 *, 0x8B4) = arg1;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EC458);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EC4B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001ECA70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001ECE68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001ED428);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001ED538);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001ED878);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001ED9C0);

extern M2C_UNK func_001EE158__func_001EE138(s32) __asm__("func_001EE158");

void func_001EE138(s32 arg0) {
    func_001EE158__func_001EE138(arg0 + 8);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EE158);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EE6D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EEDC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EF100);

extern M2C_UNK func_0032CF68__func_001EF128() __asm__("func_0032CF68");

void func_001EF128(void) {
    func_0032CF68__func_001EF128();
}

extern M2C_UNK *D_0037C820__func_001EF148 __asm__("D_0037C820");
extern M2C_UNK *D_0037C824__func_001EF148 __asm__("D_0037C824");
extern M2C_UNK func_001EF100__func_001EF148 __asm__("func_001EF100");
extern M2C_UNK func_001EF128__func_001EF148 __asm__("func_001EF128");

void func_001EF148(M2C_UNK *arg0, M2C_UNK *arg1) {
    M2C_UNK *var_a0;
    M2C_UNK *var_a1;

    var_a0 = arg0;
    var_a1 = arg1;
    if (var_a0 == NULL) {
        var_a0 = &func_001EF100__func_001EF148;
    }
    if (var_a1 == NULL) {
        var_a1 = &func_001EF128__func_001EF148;
    }
    D_0037C820__func_001EF148 = var_a0;
    D_0037C824__func_001EF148 = var_a1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EF178);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EF3D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EF720);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EF8D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EFA48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001EFAC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F0820);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F09B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F0A90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F0BF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F0C40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F0CB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F0D00);

extern M2C_UNK func_001EE138__func_001F0D58(void *, s32) __asm__("func_001EE138");

void func_001F0D58(void *arg0) {
    void *temp_a0;

    temp_a0 = M2C_FIELD(arg0, void **, 4);
    if (M2C_FIELD(temp_a0, s32 *, 8) > 0) {
        func_001EE138__func_001F0D58(temp_a0, M2C_FIELD(arg0, s32 *, 8));
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
}

void func_001F0D98(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8) = 1;
}

extern s32 D_0037C83C__func_001F0DA8 __asm__("D_0037C83C");

void func_001F0DA8(void) {
    D_0037C83C__func_001F0DA8 = 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F0DB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F0DC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F0DF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F0E70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F0F00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F1050);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F1080);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F1110);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F1168);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F12E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F1470);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F1488);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F14A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F14E8);

extern s32 D_0049F598__func_001F1538 __asm__("D_0049F598");

void func_001F1538(s32 *arg0) {
    D_0049F598__func_001F1538 = 0;
    *arg0 = 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F1548);

extern M2C_UNK func_001F0BF8__func_001F1608(M2C_UNK, M2C_UNK) __asm__("func_001F0BF8");

void func_001F1608(void) {
    func_001F0BF8__func_001F1608(1, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F1628);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F1630);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F1720);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F1740);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F1840);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F1848);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F1940);

extern M2C_UNK func_001F1848__func_001F1990() __asm__("func_001F1848");

s32 func_001F1990(s32 arg0, s32 arg1) {
    if (arg1 != 0) {
        func_001F1848__func_001F1990();
    }
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F19C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F1A40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F1A68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F1A98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F1B20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F1B68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F1CE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F1D28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F1D68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F1D78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F1E38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F1FB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F25E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F2A40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F2D30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F3000);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F3220);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F32C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F32E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F33E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F3940);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F3988);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F39C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F3B00);

extern M2C_UNK func_001F3940__func_001F3C20(M2C_UNK, M2C_UNK) __asm__("func_001F3940");

void func_001F3C20(void) {
    func_001F3940__func_001F3C20(1, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F3C40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F3FB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F41B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F4240);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F4268);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F42C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F4700);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F4710);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F49D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F4C80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F4F40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F4F58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F50B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F52A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F59A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F5DE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F5DF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F5EF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F5F08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F62B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F6378);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F6380);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F6448);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F6470);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F6538);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F65C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F6610);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F6618);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F6668);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F6680);

extern M2C_UNK func_001F65C8__func_001F66E0(M2C_UNK, M2C_UNK) __asm__("func_001F65C8");

void func_001F66E0(void) {
    func_001F65C8__func_001F66E0(1, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F6700);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F6A18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F6AD0);

extern s32 D_0037C974__func_001F6B60 __asm__("D_0037C974");
extern s32 D_0037C978__func_001F6B60 __asm__("D_0037C978");

s32 func_001F6B60(void) {
    return D_0037C978__func_001F6B60 - D_0037C974__func_001F6B60;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F6B78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F6BB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F6C30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F6C90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F6D08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F6D70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F6DA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F6DD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F6DF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F6E70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F6FF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F71D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F72D8);

void func_001F7310(s32 arg0, s32 arg1, s32 arg2) {
    s32 *temp_a0;
    s32 *temp_a0_2;

    if (arg2 != 0) {
        temp_a0 = arg0 + ((arg1 >> 5) * 4);
        *temp_a0 |= 1 << (arg1 & 0x1F);
        return;
    }
    temp_a0_2 = arg0 + ((arg1 >> 5) * 4);
    *temp_a0_2 &= ~(1 << (arg1 & 0x1F));
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F7370);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F7390);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F7498);

void func_001F7510(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F7518);

extern M2C_UNK func_001F7390__func_001F75B8(s32, s32 *) __asm__("func_001F7390");

void func_001F75B8(void *arg0, s32 arg1) {
    s32 *temp_a1;

    temp_a1 = (arg1 * 4) + M2C_FIELD(arg0, s32 *, 0x10);
    func_001F7390__func_001F75B8(*temp_a1, temp_a1);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F75E0);

extern M2C_UNK D_003A8580__func_001F75E8 __asm__("D_003A8580");

void *func_001F75E8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_003A8580__func_001F75E8;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F7608);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F7638);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F7640);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F7648);

u16 func_001F7650(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), u16 *, 2);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F7660);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F77E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F7960);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F7AD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F7C40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F7DA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F7F10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F8038);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F8190);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F8278);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F8320);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F8410);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F84C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F8540);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F85C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F8648);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F8798);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F8F88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F9178);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F9788);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F9A48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F9AB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F9B40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F9B80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F9BB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F9D38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F9EC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001F9FC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001FAAE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001FB7C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001FB9E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001FBA38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001FBA68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001FBA98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001FBAC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001FBBF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001FC870);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001FD670);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001FD6D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001FD758);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001FD760);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001FD7A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001FD7D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001FD8D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001FE168);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001FEB88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001FED38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001FED90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001FEDC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001FEDF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001FEE20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_001FEF48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002004E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00201B10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00201B70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00201C38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00201C40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00201C80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00201CB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00201DB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00201E98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00202010);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00202268);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002023C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00202580);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002027F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002028D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00202B58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00202EC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002031F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00203610);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002036C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00203808);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00203838);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00203868);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00203990);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00203AD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00203B80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00203BC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00203CE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00203D18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00203E58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002042A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00204660);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00204920);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00204C48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00204C50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00204C90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00204DA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00204DD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00204DF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00204FD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00205260);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00205430);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002054C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00205508);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002057A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00205950);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00205BC0);

s32 func_00205DA0(void *arg0, f32 *arg1) {
    *arg1 = (f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), u16 *, 4);
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00205DC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00205E20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00205FC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002061E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00206658);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002068A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00206AF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00206D58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00206E30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00206F90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00207200);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00207380);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002073F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00207420);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00207498);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002074F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00207500);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00207620);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00207630);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00207638);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00207640);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00207780);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00207950);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00207B10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00207D28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00207E88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00208128);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00208200);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00208398);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00208530);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00208588);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00208628);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00208658);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00208660);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002086C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002087E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00208858);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00208870);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00208908);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00208E00);

extern M2C_UNK func_001F75E8__func_00209250() __asm__("func_001F75E8");
extern M2C_UNK D_003A9238__func_00209250 __asm__("D_003A9238");

void *func_00209250(void *arg0) {
    func_001F75E8__func_00209250();
    M2C_FIELD(arg0, s32 *, 8) = 0x16;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_003A9238__func_00209250;
    M2C_FIELD(arg0, s16 *, 0x10) = 0;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00209290);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002092F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002092F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00209338);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00209368);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002093E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00209470);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002095A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002099C0);

extern M2C_UNK func_001F75E8__func_00209D18() __asm__("func_001F75E8");
extern M2C_UNK D_003A92F0__func_00209D18 __asm__("D_003A92F0");

void *func_00209D18(void *arg0) {
    func_001F75E8__func_00209D18();
    M2C_FIELD(arg0, s32 *, 8) = 0x17;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_003A92F0__func_00209D18;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00209D58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00209DB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00209DC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00209E00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00209E30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020A080);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020A100);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020A188);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020A2B0);

extern M2C_UNK func_001F75E8__func_0020A698() __asm__("func_001F75E8");
extern M2C_UNK D_003A93A8__func_0020A698 __asm__("D_003A93A8");

void *func_0020A698(void *arg0) {
    func_001F75E8__func_0020A698();
    M2C_FIELD(arg0, s32 *, 8) = 0x19;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_003A93A8__func_0020A698;
    M2C_FIELD(arg0, s16 *, 0x10) = 0;
    return arg0;
}

void func_0020A6D8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    M2C_FIELD(arg0, s16 *, 0x10) = 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020A6E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020A6F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020A8B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020AB10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020AB48);

void *func_0020AB88(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020AB98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020ABC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020ABD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020ABE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020ABE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020ABF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020AC10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020AC20);

extern M2C_UNK func_00226078__func_0020AC38(s32) __asm__("func_00226078");
extern s32 D_0037CE10__func_0020AC38 __asm__("D_0037CE10");

void func_0020AC38(void) {
    func_00226078__func_0020AC38(D_0037CE10__func_0020AC38);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020AC60);

void *func_0020AC68(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020AC78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020ACA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020ACE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020C6B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020CE28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020CF10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020D430);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020D530);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020D788);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020DA28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020DB60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020DC70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020DC78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020DE10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020DF28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020E170);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020E3F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020E928);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020E930);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020E968);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020E9E8);

extern M2C_UNK func_0020EBD0__func_0020EA08(s32) __asm__("func_0020EBD0");
extern M2C_UNK func_0020ECA0__func_0020EA08(s32) __asm__("func_0020ECA0");

s32 func_0020EA08(s32 arg0) {
    s32 temp_s0;

    temp_s0 = arg0 + 4;
    func_0020EBD0__func_0020EA08(temp_s0);
    func_0020ECA0__func_0020EA08(temp_s0);
    return arg0;
}

extern M2C_UNK func_0020CF10__func_0020EA48(s32, M2C_UNK) __asm__("func_0020CF10");
extern M2C_UNK func_0020EBD0__func_0020EA48(s32) __asm__("func_0020EBD0");

s32 func_0020EA48(s32 arg0, M2C_UNK arg1) {
    s32 temp_s0;

    temp_s0 = arg0 + 4;
    func_0020EBD0__func_0020EA48(temp_s0);
    func_0020CF10__func_0020EA48(temp_s0, arg1);
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020EA98);

extern M2C_UNK func_0020EBD0__func_0020EB00(s32) __asm__("func_0020EBD0");
extern M2C_UNK func_0020ED00__func_0020EB00(s32, M2C_UNK) __asm__("func_0020ED00");

s32 func_0020EB00(s32 arg0, M2C_UNK arg1) {
    s32 temp_s0;

    temp_s0 = arg0 + 4;
    func_0020EBD0__func_0020EB00(temp_s0);
    func_0020ED00__func_0020EB00(temp_s0, arg1);
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020EB50);

s32 func_0020EB58(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x18);
}

extern M2C_UNK func_0020EDE8__func_0020EB68(s32) __asm__("func_0020EDE8");

void func_0020EB68(s32 arg0) {
    func_0020EDE8__func_0020EB68(arg0 + 4);
}

extern M2C_UNK func_0020D430__func_0020EB88(s32) __asm__("func_0020D430");

void func_0020EB88(s32 arg0) {
    func_0020D430__func_0020EB88(arg0 + 4);
}

extern M2C_UNK func_0020D530__func_0020EBA8(s32) __asm__("func_0020D530");

void func_0020EBA8(s32 arg0) {
    func_0020D530__func_0020EBA8(arg0 + 4);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020EBC8);

extern M2C_UNK func_0020CE28__func_0020EBD0() __asm__("func_0020CE28");

s32 func_0020EBD0(s32 arg0) {
    func_0020CE28__func_0020EBD0();
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020EBF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020EC28);

extern void *func_0020F710__func_0020ECA0(s32) __asm__("func_0020F710");
extern s32 (*D_0038146C__func_0020ECA0)(M2C_UNK, M2C_UNK) __asm__("D_0038146C");

void func_0020ECA0(void **arg0) {
    void *temp_a0;
    void *temp_v0;

    temp_v0 = func_0020F710__func_0020ECA0(D_0038146C__func_0020ECA0(0xDC, 0));
    *arg0 = temp_v0;
    M2C_FIELD(temp_v0, s32 *, 0x10) = (s32) (M2C_FIELD(temp_v0, s32 *, 0x10) | 0x20);
    temp_a0 = *arg0;
    M2C_FIELD(temp_a0, u16 *, 6) = (u16) (M2C_FIELD(temp_a0, u16 *, 6) + 1);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020ED00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020EDE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020EE78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020EFD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020F058);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020F0D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020F170);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020F1D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020F260);

s32 func_0020F268(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) ((M2C_FIELD(arg0, s32 *, 0xC) & ~0x30) | ((arg1 & 1) * 0x10));
    return 1;
}

s32 func_0020F290(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) ((M2C_FIELD(arg0, s32 *, 0xC) & ~0x1C0) | ((arg1 & 7) << 6));
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020F2B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020F2C8);

extern M2C_UNK func_0020DE10__func_0020F3C0() __asm__("func_0020DE10");
extern M2C_UNK func_002261E8__func_0020F3C0(s32) __asm__("func_002261E8");
extern s32 D_0037CE10__func_0020F3C0 __asm__("D_0037CE10");

s32 func_0020F3C0(void) {
    func_002261E8__func_0020F3C0(D_0037CE10__func_0020F3C0);
    func_0020DE10__func_0020F3C0();
    return 1;
}

extern M2C_UNK func_002260C0__func_0020F3F0(s32) __asm__("func_002260C0");
extern s32 D_0037CE10__func_0020F3F0 __asm__("D_0037CE10");

void func_0020F3F0(void) {
    func_002260C0__func_0020F3F0(D_0037CE10__func_0020F3F0);
}

extern M2C_UNK func_0020DE10__func_0020F418() __asm__("func_0020DE10");
extern M2C_UNK func_00226140__func_0020F418(s32, s32) __asm__("func_00226140");
extern s32 D_0037CE10__func_0020F418 __asm__("D_0037CE10");

s32 func_0020F418(s32 arg0) {
    func_00226140__func_0020F418(D_0037CE10__func_0020F418, arg0);
    func_0020DE10__func_0020F418();
    return 1;
}

extern M2C_UNK func_0020DE10__func_0020F450() __asm__("func_0020DE10");
extern M2C_UNK func_00226260__func_0020F450(s32) __asm__("func_00226260");
extern s32 D_0037CE10__func_0020F450 __asm__("D_0037CE10");

void func_0020F450(void) {
    func_00226260__func_0020F450(D_0037CE10__func_0020F450);
    func_0020DE10__func_0020F450();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020F480);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020F550);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020F618);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020F670);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020F6C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020F708);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020F710);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020F788);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020F820);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020F8E8);

void func_0020F958(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020F960);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020F990);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020FD50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0020FF20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00210100);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002107B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00210A98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00210AA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00210AD0);

extern M2C_UNK func_00210B80__func_00210B60() __asm__("func_00210B80");

void func_00210B60(void) {
    func_00210B80__func_00210B60();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00210B80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00210BC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00211A18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00211AD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00212188);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002121C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002121E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00212230);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00212238);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00212268);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00212378);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002123A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002123E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002123E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00212438);

extern M2C_UNK func_00212188__func_00212470(M2C_UNK, M2C_UNK) __asm__("func_00212188");

void func_00212470(void) {
    func_00212188__func_00212470(1, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00212490);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002128E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00212B68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00212CB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00213188);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00213650);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00213B18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00213B20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00213C08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00213D98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00214018);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002140B8);

extern M2C_UNK func_00214240__func_002140F0(void *) __asm__("func_00214240");
extern s32 D_003810C4__func_002140F0 __asm__("D_003810C4");

void func_002140F0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xDC) = (s32) (D_003810C4__func_002140F0 - 5);
    func_00214240__func_002140F0(arg0);
}

extern M2C_UNK func_00215210__func_00214120() __asm__("func_00215210");

void func_00214120(void) {
    func_00215210__func_00214120();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00214140);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00214160);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002141F0);

void func_00214240(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00214248);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00214290);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00214338);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00214388);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002143F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002144E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00214580);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00214608);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00214620);

s32 func_002146B8(void *arg0) {
    return (M2C_FIELD(arg0, u16 *, 6) & 3) != 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002146D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00214750);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002147C8);

extern M2C_UNK func_002140B8__func_00214830(M2C_UNK, M2C_UNK) __asm__("func_002140B8");

void func_00214830(void) {
    func_002140B8__func_00214830(1, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00214850);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00214B10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00214DD8);

void *func_00215080(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00215098);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00215108);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00215170);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00215178);

void func_00215208(void) {
}

void func_00215210(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00215218);

void *func_00215338(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0x2710;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00215368);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002153D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002154D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002154F0);

extern M2C_UNK func_00213188__func_002154F8(s32, void *, M2C_UNK, M2C_UNK) __asm__("func_00213188");

s32 func_002154F8(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    func_00213188__func_002154F8(M2C_FIELD(arg0, s32 *, 0), arg0, arg1, arg2);
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00215530);

extern M2C_UNK func_002156E0__func_00215568(s32, s32) __asm__("func_002156E0");
extern M2C_UNK func_00215800__func_00215568(s32, s32) __asm__("func_00215800");
extern s32 func_00217480__func_00215568(s32, s32) __asm__("func_00217480");
extern s32 (*D_0038146C__func_00215568)(M2C_UNK, M2C_UNK) __asm__("D_0038146C");

s32 func_00215568(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_00217480__func_00215568(D_0038146C__func_00215568(0x8AC, 0), arg0);
    func_002156E0__func_00215568(arg0, temp_v0);
    func_00215800__func_00215568(arg0 + 8, temp_v0);
    return temp_v0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002155D0);

extern M2C_UNK func_002156E0__func_002155D8(s32, s32) __asm__("func_002156E0");
extern s32 func_0021C458__func_002155D8(s32, s32) __asm__("func_0021C458");
extern s32 (*D_0038146C__func_002155D8)(M2C_UNK, M2C_UNK) __asm__("D_0038146C");

s32 func_002155D8(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_0021C458__func_002155D8(D_0038146C__func_002155D8(0x1B8, 0), arg0);
    func_002156E0__func_002155D8(arg0, temp_v0);
    return temp_v0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00215638);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002156A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002156A8);

void func_002156E0(void *arg0, void *arg1) {
    *M2C_FIELD(arg1, void ***, 8) = M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(arg0, void **, 8) = arg1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002156F8);

extern s32 D_0037CE00__func_002157D0 __asm__("D_0037CE00");

s32 func_002157D0(void) {
    return D_0037CE00__func_002157D0;
}

extern s32 D_0037CE04__func_002157E0 __asm__("D_0037CE04");

s32 func_002157E0(void) {
    return D_0037CE04__func_002157E0;
}

extern s32 D_0037CE08__func_002157F0 __asm__("D_0037CE08");

s32 func_002157F0(void) {
    return D_0037CE08__func_002157F0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00215800);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00215818);

extern s32 D_0038146C__func_00215848 __asm__("D_0038146C");

void func_00215848(s32 arg0) {
    D_0038146C__func_00215848 = arg0;
}

extern s32 D_00381470__func_00215858 __asm__("D_00381470");

void func_00215858(s32 arg0) {
    D_00381470__func_00215858 = arg0;
}

extern s32 D_0037CDFC__func_00215868 __asm__("D_0037CDFC");

s32 func_00215868(void) {
    return D_0037CDFC__func_00215868;
}

extern M2C_UNK func_00215530__func_00215878(M2C_UNK, M2C_UNK) __asm__("func_00215530");

void func_00215878(void) {
    func_00215530__func_00215878(1, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00215898);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00215A20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00215B90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00215E10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00215F70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00216098);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00216198);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00216370);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00216748);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00216B10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00216B20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00216B40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00216C08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00216CC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00216CC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00216D60);

extern M2C_UNK func_00216F28__func_00216E08() __asm__("func_00216F28");
extern s32 func_00353440__func_00216E08(M2C_UNK, M2C_UNK *, M2C_UNK) __asm__("func_00353440");
extern s32 func_00353470__func_00216E08(M2C_UNK, M2C_UNK *, M2C_UNK) __asm__("func_00353470");
extern M2C_UNK func_003540A8__func_00216E08(M2C_UNK) __asm__("func_003540A8");
extern M2C_UNK func_00354178__func_00216E08(M2C_UNK) __asm__("func_00354178");
extern s32 D_00381068__func_00216E08 __asm__("D_00381068");
extern s32 D_0038106C__func_00216E08 __asm__("D_0038106C");
extern s32 D_00381070__func_00216E08 __asm__("D_00381070");
extern M2C_UNK func_00215F70__func_00216E08 __asm__("func_00215F70");
extern M2C_UNK func_00216098__func_00216E08 __asm__("func_00216098");
extern M2C_UNK func_00216198__func_00216E08 __asm__("func_00216198");

void func_00216E08(void) {
    func_00216F28__func_00216E08();
    D_00381070__func_00216E08 = func_00353470__func_00216E08(1, &func_00216198__func_00216E08, 0);
    D_00381068__func_00216E08 = func_00353440__func_00216E08(5, &func_00215F70__func_00216E08, -1);
    D_0038106C__func_00216E08 = func_00353470__func_00216E08(2, &func_00216098__func_00216E08, -1);
    func_003540A8__func_00216E08(5);
    func_00354178__func_00216E08(2);
    func_00354178__func_00216E08(1);
}

extern s32 func_00353460__func_00216E90(M2C_UNK, s32) __asm__("func_00353460");
extern s32 func_00353490__func_00216E90(M2C_UNK, s32) __asm__("func_00353490");
extern M2C_UNK func_00354040__func_00216E90(M2C_UNK) __asm__("func_00354040");
extern M2C_UNK func_003540A8__func_00216E90(M2C_UNK) __asm__("func_003540A8");
extern M2C_UNK func_00354110__func_00216E90(M2C_UNK) __asm__("func_00354110");
extern M2C_UNK func_00354178__func_00216E90(M2C_UNK) __asm__("func_00354178");
extern s32 D_00381068__func_00216E90 __asm__("D_00381068");
extern s32 D_0038106C__func_00216E90 __asm__("D_0038106C");
extern s32 D_00381070__func_00216E90 __asm__("D_00381070");

void func_00216E90(void) {
    func_00354040__func_00216E90(5);
    func_00354040__func_00216E90(2);
    func_00354110__func_00216E90(1);
    if (func_00353460__func_00216E90(5, D_00381068__func_00216E90) >= 2) {
        func_003540A8__func_00216E90(5);
    }
    if (func_00353490__func_00216E90(2, D_0038106C__func_00216E90) >= 2) {
        func_00354178__func_00216E90(2);
    }
    if (func_00353490__func_00216E90(1, D_00381070__func_00216E90) >= 2) {
        func_00354178__func_00216E90(1);
    }
}

extern s32 D_0038105C__func_00216F28 __asm__("D_0038105C");
extern s32 D_00381060__func_00216F28 __asm__("D_00381060");
extern s32 D_00381064__func_00216F28 __asm__("D_00381064");

void func_00216F28(void) {
    D_0038105C__func_00216F28 = 0;
    D_00381060__func_00216F28 = 0;
    D_00381064__func_00216F28 = 0;
}

/* Avança um contador circular (volta a 0 ao chegar no máximo). */
typedef struct {
    /* 0x00 */ s32 max;
    /* 0x04 */ s32 unk4;
    /* 0x08 */ s32 cur;
    /* 0x0C */ s32 prev;
    /* 0x10 */ s32 unk10;
} UnkCounter216F48;

void func_00216F48(UnkCounter216F48 *s) {
    s->prev = s->cur;
    if (++s->cur >= s->max) {
        s->cur = 0;
    }
    s->unk10 = 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00216F78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00216FB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00216FC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002170C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00217210);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002173C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00217480);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00217688);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00218160);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002184F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00218648);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00218720);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00218BE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00218EB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00219080);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00219258);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002195D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00219D88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00219F28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021A280);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021A640);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021A7A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021A7B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021A960);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021AAD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021AAD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021ADE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021AF50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021AFA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021AFC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021B038);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021B160);

extern M2C_UNK func_00216370__func_0021B178(s32) __asm__("func_00216370");
extern s32 D_0037CE14__func_0021B178 __asm__("D_0037CE14");

void func_0021B178(void) {
    func_00216370__func_0021B178(D_0037CE14__func_0021B178);
}

extern M2C_UNK func_00216748__func_0021B1A0(s32) __asm__("func_00216748");
extern s32 D_0037CE14__func_0021B1A0 __asm__("D_0037CE14");

void func_0021B1A0(void) {
    func_00216748__func_0021B1A0(D_0037CE14__func_0021B1A0);
}

s32 func_0021B1C8(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x82C);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021B1D8);

void func_0021B1F0(void *arg0, f32 *arg1, f32 *arg2) {
    *arg1 = (f32) M2C_FIELD(arg0, s32 *, 0x790);
    *arg2 = (f32) M2C_FIELD(arg0, s32 *, 0x794);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021B210);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021B218);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021B220);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021B228);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021B230);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021B238);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021B250);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021B280);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021B2B0);

extern M2C_UNK D_003A94F0__func_0021B2E0 __asm__("D_003A94F0");

void *func_0021B2E0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &D_003A94F0__func_0021B2E0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021B308);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021B338);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021B438);

void *func_0021B468(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    return arg0;
}

void *func_0021B490(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021B4E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021B528);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021B568);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021B570);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021B5D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021B628);

s32 func_0021B638(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x864);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021B648);

void func_0021B688(void *arg0, s32 arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x8A4) = arg1;
}

extern s32 func_00353460__func_0021B698(M2C_UNK, s32) __asm__("func_00353460");
extern M2C_UNK func_00354040__func_0021B698(M2C_UNK) __asm__("func_00354040");
extern M2C_UNK func_003540A8__func_0021B698(M2C_UNK) __asm__("func_003540A8");
extern s32 D_003810B0__func_0021B698 __asm__("D_003810B0");

void func_0021B698(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x128) != 0) {
        func_00354040__func_0021B698(2);
        if (func_00353460__func_0021B698(2, D_003810B0__func_0021B698) >= 2) {
            func_003540A8__func_0021B698(2);
        }
        M2C_FIELD(arg0, s32 *, 0x128) = 0;
    }
}

extern s32 func_00353440__func_0021B6F8(M2C_UNK, M2C_UNK *, M2C_UNK) __asm__("func_00353440");
extern M2C_UNK func_00354040__func_0021B6F8(M2C_UNK) __asm__("func_00354040");
extern M2C_UNK func_003540A8__func_0021B6F8(M2C_UNK) __asm__("func_003540A8");
extern s32 D_003810AC__func_0021B6F8 __asm__("D_003810AC");
extern s32 D_003810B0__func_0021B6F8 __asm__("D_003810B0");
extern M2C_UNK func_0021B768__func_0021B6F8 __asm__("func_0021B768");

void func_0021B6F8(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x128) == 0) {
        D_003810AC__func_0021B6F8 = M2C_FIELD(arg0, s32 *, 0x14);
        func_00354040__func_0021B6F8(2);
        D_003810B0__func_0021B6F8 = func_00353440__func_0021B6F8(2, &func_0021B768__func_0021B6F8, 0);
        func_003540A8__func_0021B6F8(2);
        M2C_FIELD(arg0, s32 *, 0x128) = 1;
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021B768);

s32 func_0021B800(void *arg0, s32 arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x8A0) = (s32) (0x3C / arg1);
    return 1;
}

s32 func_0021B828(void *arg0, s32 arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x828) = arg1;
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021B838);

extern M2C_UNK func_00219D88__func_0021B840(s32, s32) __asm__("func_00219D88");

void func_0021B840(s32 arg0, s32 arg1) {
    func_00219D88__func_0021B840(arg0 + 0x10, arg1 ^ 1);
}

s32 func_0021B860(void *arg0, s32 *arg1) {
    *arg1 = M2C_FIELD(arg0, s32 *, 0x838);
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021B870);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021B8D8);

s32 func_0021B8E8(void *arg0, s32 arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x878) = arg1;
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021B8F8);

s32 func_0021B900(void *arg0, s32 arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x87C) = arg1;
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021B910);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021B918);

s32 func_0021B928(void *arg0, f32 *arg1) {
    *arg1 = M2C_FIELD(M2C_FIELD(arg0, void **, 8), f32 *, 0x880);
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021B940);

s32 func_0021B950(void *arg0, f32 *arg1) {
    *arg1 = M2C_FIELD(M2C_FIELD(arg0, void **, 8), f32 *, 0x884);
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021B968);

s32 func_0021B978(void *arg0, f32 *arg1) {
    *arg1 = M2C_FIELD(M2C_FIELD(arg0, void **, 8), f32 *, 0x888);
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021B990);

s32 func_0021B9B0(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x814) == 1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021B9C8);

extern M2C_UNK func_0021AF50__func_0021BA48(M2C_UNK, M2C_UNK) __asm__("func_0021AF50");

void func_0021BA48(void) {
    func_0021AF50__func_0021BA48(1, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021BA68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021BAB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021BB10);

s32 func_0021BBA8(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 8);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021BBB8);

extern M2C_UNK func_0021BA68__func_0021BBC0(M2C_UNK, M2C_UNK) __asm__("func_0021BA68");

void func_0021BBC0(void) {
    func_0021BA68__func_0021BBC0(1, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021BBE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021BD38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021BE78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021C070);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021C078);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021C218);

void func_0021C250(void *arg0, f32 *arg1, f32 *arg2) {
    *arg1 = (f32) M2C_FIELD(arg0, s32 *, 0x40);
    *arg2 = (f32) M2C_FIELD(arg0, s32 *, 0x44);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021C270);

extern M2C_UNK func_0021C078__func_0021C278(s32, s32) __asm__("func_0021C078");

void func_0021C278(s32 arg0, s32 arg1) {
    func_0021C078__func_0021C278(arg0 + 0x10, arg1 ^ 1);
}

s32 func_0021C298(void *arg0, s32 *arg1) {
    *arg1 = M2C_FIELD(arg0, s32 *, 0x1A8);
    return 1;
}

extern M2C_UNK func_0021B238__func_0021C2A8() __asm__("func_0021B238");
extern M2C_UNK D_003A9568__func_0021C2A8 __asm__("D_003A9568");

void *func_0021C2A8(void *arg0, s32 arg1) {
    func_0021B238__func_0021C2A8();
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &D_003A9568__func_0021C2A8;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021C2F0);

extern M2C_UNK func_0021B2E0__func_0021C318() __asm__("func_0021B2E0");
extern M2C_UNK func_0021C3B0__func_0021C318(void *) __asm__("func_0021C3B0");
extern M2C_UNK func_0021C3C8__func_0021C318(void *) __asm__("func_0021C3C8");
extern M2C_UNK D_003A9550__func_0021C318 __asm__("D_003A9550");

void *func_0021C318(void *arg0, s32 arg1) {
    func_0021B2E0__func_0021C318();
    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &D_003A9550__func_0021C318;
    func_0021C3B0__func_0021C318(arg0 + 0x18);
    func_0021C3C8__func_0021C318(arg0 + 0x28);
    M2C_FIELD(arg0, s32 *, 0x188) = 1;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s32 *, 0xF0) = 0;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021C388);

void *func_0021C3B0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    return arg0;
}

void *func_0021C3C8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021C3F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021C420);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021C458);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021C4D8);

extern M2C_UNK func_0021C420__func_0021C550(M2C_UNK, M2C_UNK) __asm__("func_0021C420");

void func_0021C550(void) {
    func_0021C420__func_0021C550(1, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021C570);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021C7E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021C9E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021CB50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021CD58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021CD60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021CD80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021CDC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021CE18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021CE68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021CE78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021D020);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021D028);

extern M2C_UNK func_0021C7E0__func_0021D0B0() __asm__("func_0021C7E0");

void func_0021D0B0(void) {
    func_0021C7E0__func_0021D0B0();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021D0D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021D118);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021D130);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021D278);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021D280);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021D2E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021D318);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021D380);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021D388);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021D3A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021D3B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021D410);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021D418);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021D480);

extern M2C_UNK func_0021F5F0__func_0021D488(M2C_UNK, s32, s32) __asm__("func_0021F5F0");

void func_0021D488(s32 arg0, M2C_UNK arg1) {
    func_0021F5F0__func_0021D488(arg1, arg0, arg0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021D4B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021D4C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021D598);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021D648);

extern M2C_UNK func_0021F5F0__func_0021D650(M2C_UNK, s32) __asm__("func_0021F5F0");

void func_0021D650(s32 arg0, M2C_UNK arg1) {
    func_0021F5F0__func_0021D650(arg1, arg0);
}

extern M2C_UNK func_0021F5F0__func_0021D678(M2C_UNK, s32, s32) __asm__("func_0021F5F0");

void func_0021D678(s32 arg0, M2C_UNK arg1) {
    func_0021F5F0__func_0021D678(arg1, arg0, arg0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021D6A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021D860);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021DBE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021DEE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021E090);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021E2C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021E858);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021EF50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021F0D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021F110);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021F158);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021F168);

extern M2C_UNK func_0021E2C0__func_0021F210(s32) __asm__("func_0021E2C0");
extern M2C_UNK func_0021F240__func_0021F210(s32) __asm__("func_0021F240");

void func_0021F210(void *arg0) {
    func_0021F240__func_0021F210(M2C_FIELD(arg0, s32 *, 0x188));
    func_0021E2C0__func_0021F210(M2C_FIELD(arg0, s32 *, 0x188));
}

extern M2C_UNK func_0021E2C0__func_0021F240(u32) __asm__("func_0021E2C0");

void func_0021F240(void *arg0) {
    u32 temp_a0;

    M2C_FIELD(arg0, s32 *, 0x168) = 0;
    temp_a0 = M2C_FIELD(arg0, u32 *, 4);
    if (temp_a0 >= 2U) {
        func_0021E2C0__func_0021F240(temp_a0);
    }
    M2C_FIELD(arg0, u32 *, 4) = 0U;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021F280);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021F288);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021F298);

void *func_0021F2C0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x188) = arg1;
    M2C_FIELD(arg0, f32 *, 0x180) = 1.3f;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x158) = 0;
    M2C_FIELD(arg0, s32 *, 0x184) = 0;
    return arg0;
}

extern M2C_UNK func_0021F0D8__func_0021F2F0(M2C_UNK, M2C_UNK) __asm__("func_0021F0D8");

void func_0021F2F0(void) {
    func_0021F0D8__func_0021F2F0(1, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021F310);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021F348);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021F538);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021F540);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021F590);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021F5B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021F5C0);

extern M2C_UNK func_0021F310__func_0021F5C8(M2C_UNK, M2C_UNK) __asm__("func_0021F310");

void func_0021F5C8(void) {
    func_0021F310__func_0021F5C8(1, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021F5E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021F5F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021F670);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021F688);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021F738);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021F780);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021FA40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0021FB98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002202E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00220410);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00220628);

extern void *D_00381140__func_00220658 __asm__("D_00381140");

void func_00220658(void *arg0) {
    M2C_FIELD(arg0, void **, 0x124) = (void *) D_00381140__func_00220658;
    D_00381140__func_00220658 = arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00220670);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002206C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00220700);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00220748);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002207B0);

extern M2C_UNK func_00220410__func_00220868(M2C_UNK, M2C_UNK) __asm__("func_00220410");

void func_00220868(void) {
    func_00220410__func_00220868(1, 0xFFFF);
}

extern M2C_UNK func_00220410__func_00220888(M2C_UNK, M2C_UNK) __asm__("func_00220410");

void func_00220888(void) {
    func_00220410__func_00220888(0, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002208A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002209E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00220B08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00220EF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002210A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00221270);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00221660);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00221808);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002219D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00221EC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00222068);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00222290);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002223E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002228D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00222A78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00222CA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00222DF8);

extern s32 D_003813C4__func_00222E58 __asm__("D_003813C4");
extern s32 D_003813C8__func_00222E58 __asm__("D_003813C8");
extern s32 D_003813CC__func_00222E58 __asm__("D_003813CC");
extern M2C_UNK (*D_00381470__func_00222E58)(s32, s32) __asm__("D_00381470");

void func_00222E58(void) {
    if (D_003813C4__func_00222E58 != 0) {
        D_00381470__func_00222E58(D_003813C4__func_00222E58, D_003813CC__func_00222E58 * 0x10);
        D_003813C4__func_00222E58 = 0;
        D_003813C8__func_00222E58 = 0;
        D_003813CC__func_00222E58 = 0;
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00222EB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00222F40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00222FC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00223070);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00223078);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00223110);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002231D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002232B0);

s32 func_002232C8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002232D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002233A0);

extern M2C_UNK func_00214580__func_002233A8(s32) __asm__("func_00214580");

s32 func_002233A8(void *arg0) {
    func_00214580__func_002233A8(M2C_FIELD(arg0, s32 *, 4));
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002233C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002234B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002234C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00223598);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00223688);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00223690);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00223698);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00223788);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00223860);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00223938);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00223A28);

extern M2C_UNK func_00214580__func_00223A68(s32) __asm__("func_00214580");

void func_00223A68(void *arg0) {
    func_00214580__func_00223A68(M2C_FIELD(arg0, s32 *, 0x10));
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00223A88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00223B78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00223C68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00223D40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00223E30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00223E38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00223E40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00223F30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00224020);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002240F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002241E8);

extern M2C_UNK func_00214580__func_00224228(s32) __asm__("func_00214580");

void func_00224228(void *arg0) {
    func_00214580__func_00224228(M2C_FIELD(arg0, s32 *, 0x14));
}

extern M2C_UNK func_0022A2D8__func_00224248(M2C_UNK *, M2C_UNK *) __asm__("func_0022A2D8");
extern M2C_UNK D_003DE6C0__func_00224248 __asm__("D_003DE6C0");
extern M2C_UNK D_003DE6E8__func_00224248 __asm__("D_003DE6E8");
extern M2C_UNK D_003DE708__func_00224248 __asm__("D_003DE708");
extern M2C_UNK D_003DE728__func_00224248 __asm__("D_003DE728");
extern M2C_UNK D_003DE750__func_00224248 __asm__("D_003DE750");
extern M2C_UNK D_003DE778__func_00224248 __asm__("D_003DE778");
extern M2C_UNK D_004A2B10__func_00224248 __asm__("D_004A2B10");
extern M2C_UNK D_004A2B50__func_00224248 __asm__("D_004A2B50");
extern M2C_UNK D_004A2B90__func_00224248 __asm__("D_004A2B90");
extern M2C_UNK D_004A2BD0__func_00224248 __asm__("D_004A2BD0");
extern M2C_UNK D_004A2C10__func_00224248 __asm__("D_004A2C10");
extern M2C_UNK D_004A2C50__func_00224248 __asm__("D_004A2C50");

void func_00224248(void) {
    func_0022A2D8__func_00224248(&D_003DE6C0__func_00224248, &D_004A2B50__func_00224248);
    func_0022A2D8__func_00224248(&D_003DE6E8__func_00224248, &D_004A2B10__func_00224248);
    func_0022A2D8__func_00224248(&D_003DE708__func_00224248, &D_004A2BD0__func_00224248);
    func_0022A2D8__func_00224248(&D_003DE728__func_00224248, &D_004A2C10__func_00224248);
    func_0022A2D8__func_00224248(&D_003DE750__func_00224248, &D_004A2B90__func_00224248);
    func_0022A2D8__func_00224248(&D_003DE778__func_00224248, &D_004A2C50__func_00224248);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002242D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00224718);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00224E20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002259E0);

extern M2C_UNK func_00224E20__func_00225A08(M2C_UNK *, s32, s32) __asm__("func_00224E20");
extern void *D_00381080__func_00225A08 __asm__("D_00381080");
extern M2C_UNK D_003DFDB0__func_00225A08 __asm__("D_003DFDB0");

void func_00225A08(void) {
    func_00224E20__func_00225A08(&D_003DFDB0__func_00225A08, M2C_FIELD(D_00381080__func_00225A08, s32 *, 0), M2C_FIELD(D_00381080__func_00225A08, s32 *, 4));
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00225A40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00225A50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00225BB8);

extern M2C_UNK func_00225CE8__func_00225BC0() __asm__("func_00225CE8");

s32 func_00225BC0(s32 arg0) {
    func_00225CE8__func_00225BC0();
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00225BE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00225CE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00225D18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00225D30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00225F70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00225FA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00226010);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00226078);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002260C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00226120);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00226140);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002261E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00226260);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002262D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00226620);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00226AE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00226C48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00226FF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002273A0);

extern s32 func_0020EA48__func_002277D8(s32, void *) __asm__("func_0020EA48");
extern M2C_UNK func_0020EA98__func_002277D8(s32, M2C_UNK) __asm__("func_0020EA98");
extern s32 (*D_0038146C__func_002277D8)(M2C_UNK, M2C_UNK) __asm__("D_0038146C");

void func_002277D8(void *arg0) {
    s32 temp_a0;
    void *temp_s0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x7C);
    if (temp_a0 != 0) {
        func_0020EA98__func_002277D8(temp_a0, 3);
    }
    temp_s0 = arg0 + M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x7C) = func_0020EA48__func_002277D8(D_0038146C__func_002277D8(0x60, 0), temp_s0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00227840);

s32 func_00227888(s32 arg0) {
    return (arg0 << 6) + 0xB0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00227898);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002278A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002278A8);

void func_00227970(s32 *arg0) {
    s32 *temp_a1;
    s32 temp_a0;
    s32 var_a3;

    var_a3 = 0;
    do {
        temp_a1 = (var_a3 * 4) + *arg0;
        temp_a0 = ((var_a3 & 8) << 0x15) | ((var_a3 & 4) << 0xE) | ((var_a3 & 2) << 7) | (var_a3 & 1);
        var_a3 += 1;
        *temp_a1 = temp_a0;
    } while (var_a3 < 0x10);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002279C8);

extern M2C_UNK func_00348700__func_00227A38() __asm__("func_00348700");

void func_00227A38(void) {
    func_00348700__func_00227A38();
}

extern M2C_UNK func_00348750__func_00227A58() __asm__("func_00348750");

void func_00227A58(void) {
    func_00348750__func_00227A58();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00227A78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00227AF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00227B30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00227B80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00227BA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00227BD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00227C48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00227C88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00227CD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00227D00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00227D28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00227D30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00227D60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00227D68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00227D98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00227E10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00227E98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00227EB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002283C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002288A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00228A08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00229000);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00229008);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002296F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00229940);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00229A88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00229BC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00229D58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00229DF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00229E68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00229EE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00229EF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00229F60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022A020);

s32 func_0022A100(void **arg0) {
    s32 var_v0;
    void *temp_a0;

    temp_a0 = *arg0;
    var_v0 = 0;
    if (temp_a0 != NULL) {
        var_v0 = M2C_FIELD(temp_a0, s32 *, 0x10);
    }
    return var_v0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022A118);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022A120);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022A1E8);

extern M2C_UNK func_0022A998__func_0022A2D8(M2C_UNK *, s32, M2C_UNK) __asm__("func_0022A998");
extern M2C_UNK D_004A2CA8__func_0022A2D8 __asm__("D_004A2CA8");

void func_0022A2D8(s32 arg0, M2C_UNK arg1) {
    func_0022A998__func_0022A2D8(&D_004A2CA8__func_0022A2D8, arg0, arg1);
}

extern M2C_UNK func_0022A670__func_0022A300(M2C_UNK *, s32) __asm__("func_0022A670");
extern M2C_UNK D_004A2CA8__func_0022A300 __asm__("D_004A2CA8");

void func_0022A300(s32 arg0) {
    func_0022A670__func_0022A300(&D_004A2CA8__func_0022A300, arg0);
}

extern M2C_UNK func_0022A798__func_0022A328(M2C_UNK *, s32, M2C_UNK) __asm__("func_0022A798");
extern M2C_UNK D_004A2CA8__func_0022A328 __asm__("D_004A2CA8");

void func_0022A328(s32 arg0, M2C_UNK arg1) {
    func_0022A798__func_0022A328(&D_004A2CA8__func_0022A328, arg0, arg1);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022A350);

extern M2C_UNK func_00229D58__func_0022A438(M2C_UNK, M2C_UNK) __asm__("func_00229D58");

void func_0022A438(void) {
    func_00229D58__func_0022A438(1, 0xFFFF);
}

extern M2C_UNK func_00229D58__func_0022A458(M2C_UNK, M2C_UNK) __asm__("func_00229D58");

void func_0022A458(void) {
    func_00229D58__func_0022A458(0, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022A478);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022A670);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022A798);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022A8B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022A8C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022A8E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022A928);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022A998);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022AA30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022AA40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022AB28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022AB40);

extern M2C_UNK func_0022AB90__func_0022AB70(u16) __asm__("func_0022AB90");

void func_0022AB70(u16 *arg0) {
    func_0022AB90__func_0022AB70(*arg0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022AB90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022ABB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022D0C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022D938);

extern M2C_UNK func_0022EBC8__func_0022D9E8() __asm__("func_0022EBC8");

s32 func_0022D9E8(void) {
    func_0022EBC8__func_0022D9E8();
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022DA08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022DA50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022DA58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022DAA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022DAB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022DB30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022DBF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022DC40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022DC48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022DCD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022DD40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022DDD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022DDE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022DE30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022DE38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022E0E8);

extern M2C_UNK func_0022E930__func_0022E0F0() __asm__("func_0022E930");
extern s32 D_00386F40__func_0022E0F0 __asm__("D_00386F40");

s32 func_0022E0F0(void) {
    func_0022E930__func_0022E0F0();
    D_00386F40__func_0022E0F0 = 0;
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022E118);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022E140);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022E148);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022E1A0);

extern M2C_UNK func_00257808__func_0022E1C8() __asm__("func_00257808");

void func_0022E1C8(void) {
    func_00257808__func_0022E1C8();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022E1E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022E220);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022E410);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022E5A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022E930);

extern s8 D_004A3004__func_0022EA50 __asm__("D_004A3004");

s8 func_0022EA50(void) {
    return D_004A3004__func_0022EA50;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022EA60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022EA88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022EB28);

extern M2C_UNK func_0022EB28__func_0022EBA0() __asm__("func_0022EB28");

s32 func_0022EBA0(void) {
    func_0022EB28__func_0022EBA0();
    return 0;
}

void func_0022EBC0(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022EBC8);

extern s32 D_00386F58__func_0022EC30 __asm__("D_00386F58");
extern void *D_004A2D88__func_0022EC30 __asm__("D_004A2D88");
extern s32 D_004A2D8C__func_0022EC30 __asm__("D_004A2D8C");

void func_0022EC30(void) {
    M2C_UNK (*temp_v0)(s32);
    s32 temp_a0;
    void *var_s0;

    if (D_004A2D8C__func_0022EC30 != D_00386F58__func_0022EC30) {
        D_00386F58__func_0022EC30 = D_004A2D8C__func_0022EC30;
        var_s0 = D_004A2D88__func_0022EC30;
        if (var_s0 != NULL) {
            do {
                temp_a0 = M2C_FIELD(var_s0, s32 *, 0xC);
                temp_v0 = M2C_FIELD(var_s0, M2C_UNK (**)(s32), 8);
                var_s0 = M2C_FIELD(var_s0, void **, 0);
                temp_v0(temp_a0);
            } while (var_s0 != NULL);
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022EC90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022ED40);

extern M2C_UNK func_0023FDF8__func_0022EFC8() __asm__("func_0023FDF8");

void func_0022EFC8(void) {
    func_0023FDF8__func_0022EFC8();
}

extern M2C_UNK func_0023FE58__func_0022EFE8() __asm__("func_0023FE58");

void func_0022EFE8(void) {
    func_0023FE58__func_0022EFE8();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022F008);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022F040);

extern s32 D_004A2D88__func_0022F078 __asm__("D_004A2D88");

void func_0022F078(s32 arg0, s32 arg1) {
    if ((arg1 == 0xFFFF) && (arg0 != 0)) {
        D_004A2D88__func_0022F078 = 0;
    }
}

extern M2C_UNK func_0022F078__func_0022F098(M2C_UNK, M2C_UNK) __asm__("func_0022F078");

void func_0022F098(void) {
    func_0022F078__func_0022F098(1, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022F0B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022F0F0);

extern M2C_UNK func_00257AF8__func_0022F1D0(s32, s32) __asm__("func_00257AF8");

void func_0022F1D0(s32 arg0, s32 *arg1) {
    func_00257AF8__func_0022F1D0(*arg1 + 0x10, arg0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022F1F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022F290);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022F380);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022F538);

s32 func_0022F5E8(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    return temp_v0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022F5F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022F600);

s32 func_0022F608(s32 *arg0) {
    s32 temp_v0;

    temp_v0 = *arg0;
    *arg0 = 0;
    return temp_v0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022F618);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022F870);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022F918);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022FAB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022FB10);

extern u32 func_00239288__func_0022FB90() __asm__("func_00239288");

s32 func_0022FB90(void *arg0) {
    s32 temp_v0;

    if (M2C_FIELD(arg0, s32 *, 0xC) == 0) {
        return M2C_FIELD(arg0, s32 *, 8);
    }
    temp_v0 = (func_00239288__func_0022FB90() % (u32) M2C_FIELD(arg0, u32 *, 4)) + M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 8) = temp_v0;
    return temp_v0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022FBE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022FD10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022FDB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022FE28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022FE98);

/* Retorna 1 se algum dos n valores for diferente de zero. */
typedef struct {
    /* 0x0 */ u8 count;
    /* 0x1 */ char pad1[3];
    /* 0x4 */ s32 values[1];
} UnkFlags22FF00;

s32 func_0022FF00(UnkFlags22FF00 *s) {
    s32 i;

    for (i = 0; i < s->count; i++) {
        if (s->values[i]) {
            return 1;
        }
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022FF38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0022FF80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002300E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00230280);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00230368);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00230398);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002303F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00230438);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00230450);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00230498);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002304B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00230500);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00230530);

s32 func_00230578(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0) + M2C_FIELD(arg0, s32 *, 4);
}

s32 func_00230588(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0) - M2C_FIELD(arg0, s32 *, 4);
}

s32 func_00230598(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0) * M2C_FIELD(arg0, s32 *, 4);
}

s32 func_002305A8(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_a0 != 0) {
        return (s32) M2C_FIELD(arg0, s32 *, 0) / temp_a0;
    }
    return 0;
}

s32 func_002305D8(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_a0 != 0) {
        return (s32) M2C_FIELD(arg0, s32 *, 0) % temp_a0;
    }
    return 0;
}

void func_00230608(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00230610);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00230658);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002306A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00230798);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002307E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00230858);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00230890);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002308C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00230990);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002309B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002309D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002309F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00230A00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00230A28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00230A48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00230A68);

void func_00230A90(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00230A98);

extern M2C_UNK func_002367A8__func_00230B50(s32) __asm__("func_002367A8");

void func_00230B50(void *arg0) {
    func_002367A8__func_00230B50(M2C_FIELD(arg0, s32 *, 8));
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00230B70);

extern M2C_UNK func_00230610__func_00230BA8(s32, s32) __asm__("func_00230610");
extern M2C_UNK func_002306A8__func_00230BA8(s32, s32) __asm__("func_002306A8");
extern s32 func_002371E0__func_00230BA8(s32) __asm__("func_002371E0");

void func_00230BA8(void *arg0) {
    s32 temp_v0;
    s32 var_a0;
    s32 var_s2;
    s32 var_s3;
    u8 temp_v0_2;
    void *var_v1;

    var_s2 = 0x1000;
    var_s3 = 0x7FFF;
    temp_v0 = func_002371E0__func_00230BA8(M2C_FIELD(arg0, s32 *, 8));
    var_v1 = arg0 + 0x1C;
    if (temp_v0 >= 0) {
        var_a0 = 0;
        if (M2C_FIELD(arg0, u8 *, 0xE) != 0) {
            do {
                temp_v0_2 = M2C_FIELD(var_v1, u8 *, 0);
                if (temp_v0_2 == 0) {
                    var_s2 = M2C_FIELD(var_v1, s32 *, 8);
                    M2C_FIELD(var_v1, s32 *, 4) = var_s2;
                } else if (temp_v0_2 == 2) {
                    var_s3 = M2C_FIELD(var_v1, s32 *, 8);
                    M2C_FIELD(var_v1, s32 *, 4) = var_s3;
                }
                var_a0 += 1;
                var_v1 += 0xC;
            } while (var_a0 < (s32) M2C_FIELD(arg0, u8 *, 0xE));
        }
        func_00230610__func_00230BA8(temp_v0, var_s2);
        func_002306A8__func_00230BA8(temp_v0, var_s3);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00230C60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00230C98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00230E10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00230FC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00231128);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00231210);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00231260);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00231280);

u8 func_002312A0(void *arg0) {
    u8 temp_v0;

    temp_v0 = M2C_FIELD(arg0, u8 *, 0x19);
    M2C_FIELD(arg0, u8 *, 0x19) = 0U;
    return temp_v0;
}

void func_002312B0(s32 *arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 0x18) = (s32) *arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002312C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002312D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00231308);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00231348);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00231538);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00231590);

extern s32 D_003870C0__func_002317A8 __asm__("D_003870C0");

s32 func_002317A8(void) {
    s32 temp_v0;

    temp_v0 = D_003870C0__func_002317A8 + 1;
    D_003870C0__func_002317A8 = temp_v0;
    if (temp_v0 < 0) {
        D_003870C0__func_002317A8 = 1;
    }
    return D_003870C0__func_002317A8;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002317D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00231AE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00231B50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00231C60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00231C98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00231CD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00231D20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00231D60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00231D98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00231DD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00231E08);

void func_00231E40(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00231E48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00231FC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002320A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00232110);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002321D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002324C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00232670);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00232870);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00232920);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00232B08);

extern M2C_UNK func_00232B08__func_00232B38(M2C_UNK, M2C_UNK) __asm__("func_00232B08");

void func_00232B38(void) {
    func_00232B08__func_00232B38(1, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00232B58);

extern void *D_004A30AC__func_00232B68 __asm__("D_004A30AC");

void func_00232B68(s32 *arg0, s32 *arg1) {
    s32 temp_a0;
    u32 temp_v1;

    temp_a0 = *arg0;
    temp_v1 = M2C_FIELD(D_004A30AC__func_00232B68, u32 *, 0xC);
    if (temp_v1 < (u32) (temp_a0 + *arg1)) {
        *arg1 = temp_v1 - temp_a0;
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00232B98);

extern M2C_UNK func_002418C0__func_00232C08() __asm__("func_002418C0");

void func_00232C08(void) {
    func_002418C0__func_00232C08();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00232C28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00232E60);

void func_00232F28(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00232F30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00233030);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002333C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00233598);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002335E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00233608);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00233690);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002337A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00233840);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00233898);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00233930);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002339A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00233C40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00233CD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00233D30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00233D68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00233DD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00233E08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00233EC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002341A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00234378);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002343F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002344D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00234708);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00234748);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00234A50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00234B80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00234BA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00234C78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00234C98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00234E10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00234E68);

extern s32 func_00234E68__func_00234EA0() __asm__("func_00234E68");
extern s32 func_0032A4F8__func_00234EA0(s32, M2C_UNK, M2C_UNK) __asm__("func_0032A4F8");

s32 func_00234EA0(s32 arg0) {
    s32 temp_s1;

    temp_s1 = func_00234E68__func_00234EA0();
    return temp_s1 + func_0032A4F8__func_00234EA0(arg0 + 2, 1, 1);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00234EE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00234FE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00235178);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002351E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00235208);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00235240);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00235510);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00235698);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002357F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00235850);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002358B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00235BC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00235C18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00235C58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00235CA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00235CE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00235D28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00235D68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00235DA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00235DB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00235E00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00235E78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00235EA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00235F88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002360C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00236118);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00236238);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00236390);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002363F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002364F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00236598);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00236628);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002366D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00236740);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002367A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00236800);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00236880);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002369A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00236AA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00236B10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00236B18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00236B70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00236BA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00237048);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002371E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00237238);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002372A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00237378);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00237428);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002374F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002375B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00237BB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00237C30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002381B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00238448);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002389A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00238C08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00238C98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002390D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00239160);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002391A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002391B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00239248);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00239288);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00239378);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00239448);

extern M2C_UNK func_0022E0F0__func_00239518() __asm__("func_0022E0F0");

void func_00239518(void) {
    func_0022E0F0__func_00239518();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00239538);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002395C0);

extern M2C_UNK *D_004A6DC0__func_00239600 __asm__("D_004A6DC0");
extern M2C_UNK *D_004A6DC4__func_00239600 __asm__("D_004A6DC4");
extern M2C_UNK *D_004A6DC8__func_00239600 __asm__("D_004A6DC8");
extern M2C_UNK func_0023B970__func_00239600 __asm__("func_0023B970");
extern M2C_UNK func_0023BA00__func_00239600 __asm__("func_0023BA00");
extern M2C_UNK func_0023BDC0__func_00239600 __asm__("func_0023BDC0");

void func_00239600(void) {
    D_004A6DC0__func_00239600 = &func_0023B970__func_00239600;
    D_004A6DC4__func_00239600 = &func_0023BA00__func_00239600;
    D_004A6DC8__func_00239600 = &func_0023BDC0__func_00239600;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00239638);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002396F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002397B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00239870);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00239D48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00239EF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023A288);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023A690);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023AAD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023B3B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023B970);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023BA00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023BDC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023C0B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023C110);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023C190);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023C270);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023C380);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023C4D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023C5A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023C630);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023C790);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023C860);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023C920);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023CA30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023CB50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023CC70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023CE70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023D0B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023D1C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023D234);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023D2B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023D310);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023D380);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023D478);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023D480);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023D530);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023D5D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023D690);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023D738);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023D7E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023D8C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023D8F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023D968);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023DA90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023DE88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023E168);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023E220);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023E280);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023E5C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023E5E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023E7C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023EF00);

void func_0023F100(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023F108);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023F2A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023F4A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023F718);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023F988);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023FA88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023FB40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023FBF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023FCC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023FD78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023FDD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023FDF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023FE58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023FEC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0023FF78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00240070);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00240120);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00240140);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002401A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00240300);

s32 func_002404B0(void *arg0, s32 arg1, s32 *arg2) {
    if (*arg2 == 0) {
        *arg2 = M2C_FIELD(arg0, s32 *, 0x68);
    }
    *M2C_FIELD(arg0, s32 **, 0x64) = arg1 + (M2C_FIELD(arg0, s32 *, 0x68) - *arg2);
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002404E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002409B0);

extern M2C_UNK func_00241048__func_002409D0() __asm__("func_00241048");

void func_002409D0(void) {
    func_00241048__func_002409D0();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002409F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00240A80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00240AC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00240B70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00240C00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00240D98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00240E18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00240F38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00241048);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002410C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00241128);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002411E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002412A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00241320);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00241528);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00241600);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002416C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002416C4);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002417D8);

extern void *D_004A30AC__func_002418C0 __asm__("D_004A30AC");

s32 func_002418C0(void) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(D_004A30AC__func_002418C0, s32 *, 8);
    return (s32) ((temp_v1 - M2C_FIELD(D_004A30AC__func_002418C0, s32 *, 0x10)) * 0x64) / temp_v1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002418F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00241908);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00241918);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00241948);

M2C_UNK *func_00241978(void *arg0) {
    M2C_UNK *temp_v0;
    M2C_UNK *temp_v1;

    temp_v1 = M2C_FIELD(arg0, M2C_UNK **, 0);
    if (temp_v1 != NULL) {
        temp_v0 = *temp_v1;
        M2C_FIELD(arg0, M2C_UNK **, 0) = temp_v0;
        if (temp_v0 == NULL) {
            M2C_FIELD(arg0, s32 *, 4) = 0;
        } else {
            M2C_FIELD(temp_v0, s32 *, 4) = 0;
        }
        M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) - 1);
    }
    return temp_v1;
}

void func_002419B0(void *arg0, void *arg1) {
    void **temp_v1;
    void *temp_v1_2;

    if (arg1 == M2C_FIELD(arg0, void **, 0)) {
        M2C_FIELD(arg0, void **, 0) = (void *) M2C_FIELD(arg1, void **, 0);
    }
    if (arg1 == M2C_FIELD(arg0, void ***, 4)) {
        M2C_FIELD(arg0, void ***, 4) = (void **) M2C_FIELD(arg1, void ***, 4);
    }
    temp_v1 = M2C_FIELD(arg1, void ***, 4);
    if (temp_v1 != NULL) {
        *temp_v1 = M2C_FIELD(arg1, void **, 0);
    }
    temp_v1_2 = M2C_FIELD(arg1, void **, 0);
    if (temp_v1_2 != NULL) {
        M2C_FIELD(temp_v1_2, void ***, 4) = (void **) M2C_FIELD(arg1, void ***, 4);
    }
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) - 1);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00241A10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00241A50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00241A90);

s32 func_00241AF0(s32 arg0) {
    return (arg0 << 5) + 0x9C;
}

extern s32 func_00241AF0__func_00241B00() __asm__("func_00241AF0");
extern s32 func_00249B88__func_00241B00() __asm__("func_00249B88");

s32 func_00241B00(void) {
    s32 temp_s0;

    temp_s0 = func_00241AF0__func_00241B00();
    return temp_s0 + func_00249B88__func_00241B00();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00241B30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00241C70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002420C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00242238);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002422A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002422D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002422D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00242390);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002423D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00242608);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00242678);

extern u32 func_002371E0__func_00242730() __asm__("func_002371E0");

u32 func_00242730(void) {
    return func_002371E0__func_00242730() >> 0x1F;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00242750);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002427D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00242830);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002428C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002429B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002429C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00242AF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00242BB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00242E60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00242EF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00242FA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00243138);

extern M2C_UNK func_00243138__func_00243198(M2C_UNK, M2C_UNK) __asm__("func_00243138");

void func_00243198(void) {
    func_00243138__func_00243198(1, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002431B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002433E0);

void func_00243660(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00243668);

extern M2C_UNK func_00232C28__func_00243878() __asm__("func_00232C28");

void func_00243878(void) {
    func_00232C28__func_00243878();
}

extern M2C_UNK func_00232E60__func_00243898() __asm__("func_00232E60");

void func_00243898(void) {
    func_00232E60__func_00243898();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002438B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00243BD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00243CE0);

extern s8 D_004B0196__func_00243D00 __asm__("D_004B0196");

void func_00243D00(s8 arg0) {
    D_004B0196__func_00243D00 = arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00243D10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00243F58);

extern M2C_UNK func_00244020__func_00243FE8() __asm__("func_00244020");
extern M2C_UNK (*D_004B0190__func_00243FE8)(s32) __asm__("D_004B0190");

void func_00243FE8(s32 arg0) {
    func_00244020__func_00243FE8();
    D_004B0190__func_00243FE8(arg0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00244020);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00244118);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00244150);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00244188);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00244520);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002445F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00244640);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002446F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00244738);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002447E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002448B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002449E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00244A78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00244A80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00244AE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00244B48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00244B58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00244C20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00244C28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00244C70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00244CB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00244D18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00244D20);

extern M2C_UNK func_00248BC0__func_00244DB8(s32) __asm__("func_00248BC0");

void func_00244DB8(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x28);
    if (temp_a0 != 0) {
        func_00248BC0__func_00244DB8(temp_a0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00244DE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00244ED8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00244EE0);

extern M2C_UNK func_00248BC0__func_00244FB0(s32) __asm__("func_00248BC0");

void func_00244FB0(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_a0 != 0) {
        func_00248BC0__func_00244FB0(temp_a0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00244FD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002450B0);

extern M2C_UNK func_00248BC0__func_002452F8(s32) __asm__("func_00248BC0");

void func_002452F8(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x34);
    if (temp_a0 != 0) {
        func_00248BC0__func_002452F8(temp_a0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00245320);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002453B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002453C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00245488);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002454C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002454D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00245588);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002455C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002456E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00245760);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00245810);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00245918);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002459B8);

extern M2C_UNK func_00248908__func_002459C0(s32) __asm__("func_00248908");

void func_002459C0(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_a0 != 0) {
        func_00248908__func_002459C0(temp_a0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002459E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00245A78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00245D18);

extern M2C_UNK func_00248908__func_00245D20(s32) __asm__("func_00248908");

void func_00245D20(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_a0 != 0) {
        func_00248908__func_00245D20(temp_a0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00245D48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00245E20);

extern M2C_UNK func_00248908__func_00245FA8(s32) __asm__("func_00248908");

void func_00245FA8(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_a0 != 0) {
        func_00248908__func_00245FA8(temp_a0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00245FD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00246068);

extern M2C_UNK func_00246068__func_00246160 __asm__("func_00246068");

void func_00246160(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &func_00246068__func_00246160;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00246178);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00246230);

void func_00246260(void *arg0, void *arg1) {
    f32 temp_f1;
    f32 temp_f2;

    temp_f1 = (2.0f * (f32) M2C_FIELD(arg1, s32 *, 0)) / (f32) M2C_FIELD(arg1, s32 *, 4);
    temp_f2 = 1.0f - temp_f1;
    M2C_FIELD(arg0, f32 *, 0x24) = temp_f1;
    M2C_FIELD(arg0, f32 *, 0x20) = temp_f2;
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) (temp_f1 * ((f32) M2C_FIELD(arg1, s32 *, 8) * 0.00390625f));
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) (temp_f2 * ((f32) M2C_FIELD(arg1, s32 *, 8) * 0.00390625f));
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002462C0);

extern M2C_UNK func_0024A5F0__func_00246350(s32) __asm__("func_0024A5F0");
extern M2C_UNK func_002462C0__func_00246350 __asm__("func_002462C0");

s32 func_00246350(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &func_002462C0__func_00246350;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s8 *, 0x1B) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_0024A5F0__func_00246350(arg0 + 0x20);
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00246398);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002463E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002464E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00246648);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002467B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00246860);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00246990);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00246AD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00246B68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00246C78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00246D20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00246EA0);

extern M2C_UNK func_00246D20__func_00246F20 __asm__("func_00246D20");

void func_00246F20(M2C_UNK **arg0) {
    *arg0 = &func_00246D20__func_00246F20;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00246F30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00246F38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00247520);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00247570);

extern s32 D_004B019C__func_002475F8 __asm__("D_004B019C");

void func_002475F8(s32 arg0) {
    D_004B019C__func_002475F8 = arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00247608);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00247610);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00247648);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002478B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00247A60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00248020);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00248238);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00248268);

extern s32 D_004B1C44__func_00248308 __asm__("D_004B1C44");

void func_00248308(s32 arg0) {
    D_004B1C44__func_00248308 = arg0;
}

extern s32 D_004B1C48__func_00248318 __asm__("D_004B1C48");

void func_00248318(s32 arg0) {
    D_004B1C48__func_00248318 = arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00248328);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002483F8);

extern M2C_UNK (*D_004B1C44__func_002488E0)() __asm__("D_004B1C44");

void func_002488E0(void) {
    D_004B1C44__func_002488E0();
}

extern M2C_UNK (*D_004B1C48__func_00248908)() __asm__("D_004B1C48");

void func_00248908(void) {
    D_004B1C48__func_00248908();
}

void *func_00248930(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x98) = 0;
    M2C_FIELD(arg0, s32 *, 0x9C) = 0;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00248950);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00248980);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00248B28);

void func_00248B80(void *arg0, void *arg1) {
    M2C_FIELD(arg0, f32 *, 0x98) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0x9C) = (f32) M2C_FIELD(arg1, f32 *, 4);
}

extern M2C_UNK (*D_004B1C44__func_00248B98)() __asm__("D_004B1C44");

void func_00248B98(void) {
    D_004B1C44__func_00248B98();
}

extern M2C_UNK (*D_004B1C48__func_00248BC0)() __asm__("D_004B1C48");

void func_00248BC0(void) {
    D_004B1C48__func_00248BC0();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00248BE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00248C50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00248CA0);

void func_00248F08(void *arg0) {
    s32 var_v0;
    void *var_a0;

    var_a0 = arg0;
    var_v0 = 0x6A;
    do {
        var_v0 -= 2;
        M2C_FIELD(var_a0, f32 *, 0) = (f32) (((M2C_FIELD(var_a0, f32 *, -4) + M2C_FIELD(var_a0, f32 *, 4)) * 0.59738594f) + ((M2C_FIELD(var_a0, f32 *, -0xC) + M2C_FIELD(var_a0, f32 *, 0xC)) * -0.11459156f) + ((M2C_FIELD(var_a0, f32 *, -0x14) + M2C_FIELD(var_a0, f32 *, 0x14)) * 0.01803268f));
        var_a0 += 8;
    } while (var_v0 >= 0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00248F80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00249080);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002490E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00249268);

void *func_002497A8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xD44) = 0;
    M2C_FIELD(arg0, s32 *, 0xD64) = 1;
    M2C_FIELD(arg0, s32 *, 0xD54) = 0;
    M2C_FIELD(arg0, s32 *, 0xD58) = 0;
    M2C_FIELD(arg0, s16 *, 0xD50) = 0;
    M2C_FIELD(arg0, s16 *, 0xD52) = 0;
    M2C_FIELD(arg0, s32 *, 0xD5C) = 0;
    M2C_FIELD(arg0, s32 *, 0xD60) = 0;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002497D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00249858);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00249A68);

void func_00249AA8(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0xD5C) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0xD44) = (s32) M2C_FIELD(arg1, s32 *, 4);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00249AC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00249AD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00249B08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00249B88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00249B90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00249B98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00249BA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00249DD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00249DD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00249E70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024A220);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024A5F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024A648);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024A868);

extern M2C_UNK func_0024A5F0__func_0024A8E8(s32) __asm__("func_0024A5F0");
extern M2C_UNK func_0024A868__func_0024A8E8 __asm__("func_0024A868");

s32 func_0024A8E8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &func_0024A868__func_0024A8E8;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s8 *, 0x1B) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_0024A5F0__func_0024A8E8(arg0 + 0x20);
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024A930);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024A980);

extern M2C_UNK func_0024A5F0__func_0024AA10(s32) __asm__("func_0024A5F0");
extern M2C_UNK func_0024A980__func_0024AA10 __asm__("func_0024A980");

s32 func_0024AA10(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &func_0024A980__func_0024AA10;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s8 *, 0x1B) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_0024A5F0__func_0024AA10(arg0 + 0x20);
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024AA58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024AAC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024AB88);

void func_0024ABB8(void *arg0, s32 *arg1) {
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) ((f32) *arg1 * 0.00390625f);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024ABD8);

extern M2C_UNK func_00232E60__func_0024ACF8(s32) __asm__("func_00232E60");

void func_0024ACF8(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_a0 != 0) {
        func_00232E60__func_0024ACF8(temp_a0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024AD20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024AD60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024AE68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024AEF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024AF30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024B030);

extern M2C_UNK func_00232E60__func_0024B130(s32) __asm__("func_00232E60");

void func_0024B130(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_a0 != 0) {
        func_00232E60__func_0024B130(temp_a0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024B158);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024B1A0);

extern M2C_UNK func_0024B1A0__func_0024B1F8 __asm__("func_0024B1A0");

void func_0024B1F8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &func_0024B1A0__func_0024B1F8;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024B210);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024B230);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024B3B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024B3F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024B438);

f32 func_0024B4F8(f32 arg0) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f6;

    temp_f0 = arg0 * 0.5f;
    temp_f1 = temp_f0 * -0.25f * arg0;
    temp_f2 = temp_f1 * -0.5f * arg0;
    temp_f4 = temp_f2 * -0.625f * arg0;
    temp_f5 = temp_f4 * -0.7f * arg0;
    temp_f6 = temp_f5 * -0.75f * arg0;
    return temp_f0 + 1.0f + temp_f1 + temp_f2 + temp_f4 + temp_f5 + temp_f6 + (temp_f6 * -0.7857f * arg0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024B598);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024B5C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024B5F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024B690);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024B810);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024B8B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024B908);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024B960);

extern M2C_UNK D_00389728__func_0024B9A0 __asm__("D_00389728");

M2C_UNK *func_0024B9A0(void) {
    return &D_00389728__func_0024B9A0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024B9B0);

extern s32 D_00389720__func_0024BAD8 __asm__("D_00389720");

void func_0024BAD8(s32 arg0) {
    D_00389720__func_0024BAD8 = arg0;
}

extern s32 D_00389720__func_0024BAE8 __asm__("D_00389720");

void func_0024BAE8(s32 *arg0) {
    *arg0 = D_00389720__func_0024BAE8;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024BAF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024BB40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024BB78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024BBC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024BC48);

extern s32 D_00389734__func_0024BC78 __asm__("D_00389734");
extern s32 D_004B1C60__func_0024BC78 __asm__("D_004B1C60");

void func_0024BC78(s32 arg0) {
    if (D_00389734__func_0024BC78 == 0x01789A34) {
        D_004B1C60__func_0024BC78 = arg0;
    }
}

extern s32 D_00389734__func_0024BCA0 __asm__("D_00389734");
extern s32 D_004B1C5C__func_0024BCA0 __asm__("D_004B1C5C");

void func_0024BCA0(s32 arg0) {
    if (D_00389734__func_0024BCA0 == 0x01789A34) {
        D_004B1C5C__func_0024BCA0 = arg0;
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024BCC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024BD20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024BEB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024BF88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024C070);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024C130);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024C230);

extern s32 D_00389738__func_0024C338 __asm__("D_00389738");
extern s32 D_0038973C__func_0024C338 __asm__("D_0038973C");
extern s32 D_00389740__func_0024C338 __asm__("D_00389740");
extern s32 D_00389744__func_0024C338 __asm__("D_00389744");

void func_0024C338(void) {
    D_00389738__func_0024C338 = 0;
    D_00389740__func_0024C338 = 0;
    D_00389744__func_0024C338 = 0;
    D_0038973C__func_0024C338 = 0;
}

extern s32 D_00389738__func_0024C360 __asm__("D_00389738");
extern s32 D_0038973C__func_0024C360 __asm__("D_0038973C");
extern s32 D_00389740__func_0024C360 __asm__("D_00389740");
extern s32 D_00389744__func_0024C360 __asm__("D_00389744");

void func_0024C360(void) {
    D_00389738__func_0024C360 = 0;
    D_00389740__func_0024C360 = 0;
    D_00389744__func_0024C360 = 0;
    D_0038973C__func_0024C360 = 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024C388);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024C448);

extern void *D_00389738__func_0024C450 __asm__("D_00389738");
extern s32 D_00389740__func_0024C450 __asm__("D_00389740");

void func_0024C450(s32 arg0, void *arg1) {
    s32 var_a0;
    void *var_a1;

    var_a0 = arg0;
    var_a1 = arg1;
    D_00389740__func_0024C450 = var_a0;
    D_00389738__func_0024C450 = var_a1;
    if ((var_a1 != NULL) && (var_a0 > 0)) {
        do {
            M2C_FIELD(var_a1, s32 *, 0) = 0;
            var_a0 -= 1;
            M2C_FIELD(var_a1, s32 *, 4) = 0;
            var_a1 += 8;
        } while (var_a0 != 0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024C498);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024C508);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024C5A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024C5E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024C628);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024C6C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024C788);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024C808);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024C840);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024C908);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024C9C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024CB08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024CD38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024CE18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024D0F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024D260);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024D320);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024D3D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024D4D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024D5D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024D5F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024D658);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024D6E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024D768);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024D810);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024D848);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024D8C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024D978);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024D990);

extern s32 func_0024DB30__func_0024DA40(s32) __asm__("func_0024DB30");
extern s32 func_0024F6E8__func_0024DA40(s32) __asm__("func_0024F6E8");
extern s32 func_0024FDC0__func_0024DA40() __asm__("func_0024FDC0");
extern s32 D_00389B40__func_0024DA40 __asm__("D_00389B40");

s32 func_0024DA40(s32 arg0) {
    s32 var_s1;

    var_s1 = 0;
    if ((D_00389B40__func_0024DA40 == 0) && ((D_00389B40__func_0024DA40 = 1, (func_0024FDC0__func_0024DA40() != 0)) || (func_0024DB30__func_0024DA40(arg0) != 0))) {
        var_s1 = func_0024F6E8__func_0024DA40(arg0);
    }
    D_00389B40__func_0024DA40 = 0;
    return var_s1;
}

extern s32 func_0024DB30__func_0024DAC0(M2C_UNK) __asm__("func_0024DB30");
extern M2C_UNK func_0024F6E8__func_0024DAC0(M2C_UNK) __asm__("func_0024F6E8");
extern s32 func_0024FDC0__func_0024DAC0(M2C_UNK) __asm__("func_0024FDC0");
extern s32 D_00389B40__func_0024DAC0 __asm__("D_00389B40");

void func_0024DAC0(void) {
    if (D_00389B40__func_0024DAC0 == 0) {
        D_00389B40__func_0024DAC0 = 1;
        if (func_0024FDC0__func_0024DAC0(0) != 0) {
            func_0024F6E8__func_0024DAC0(0);
        } else if (func_0024DB30__func_0024DAC0(0) != 0) {
            func_0024F6E8__func_0024DAC0(0);
        }
    }
    D_00389B40__func_0024DAC0 = 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024DB30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024DC48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024DC60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024DDF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024DF50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024E358);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024E500);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024E730);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024EA90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024ECA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024EE00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024EF80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024F128);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024F408);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024F4B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024F550);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024F6E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024F810);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024F920);

void func_0024FD80(void *arg0, s32 *arg1, s32 *arg2) {
    *arg1 = (s32) M2C_FIELD(arg0, u8 *, 8);
    *arg2 = (s32) M2C_FIELD(arg0, u8 *, 9);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024FD98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024FDC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024FDE0);

extern s32 D_004B1E50__func_0024FEB0 __asm__("D_004B1E50");

void func_0024FEB0(s32 arg0) {
    D_004B1E50__func_0024FEB0 = arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024FEC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0024FF60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00250078);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00250250);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00250440);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002504A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00250598);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00250688);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00250798);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00250978);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002509A8);

extern s32 (*D_00389730__func_00250A40)() __asm__("D_00389730");

s32 func_00250A40(void) {
    s32 var_v1;

    var_v1 = 0;
    if (D_00389730__func_00250A40 != NULL) {
        var_v1 = D_00389730__func_00250A40();
    }
    return var_v1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00250A78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00250BE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00250D50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00250EC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00251180);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002512E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00251328);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00251378);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002513B0);

void func_002513E8(void) {
}

extern s32 D_0038AE94__func_002513F0 __asm__("D_0038AE94");

s32 func_002513F0(void) {
    return D_0038AE94__func_002513F0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00251400);

void func_00251408(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00251410);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00251660);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002517A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002518C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00251A48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00251BA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00251CA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00251D88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00251E58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00251EB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00251F28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00251FE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00252288);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00252700);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002528B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00252A90);

extern M2C_UNK func_002513E8__func_00252C38() __asm__("func_002513E8");

void func_00252C38(void) {
    func_002513E8__func_00252C38();
}

extern M2C_UNK func_002513F0__func_00252C58() __asm__("func_002513F0");

void func_00252C58(void) {
    func_002513F0__func_00252C58();
}

extern M2C_UNK func_00252700__func_00252C78(M2C_UNK) __asm__("func_00252700");
extern s8 D_0038AE84__func_00252C78 __asm__("D_0038AE84");
extern s32 D_0038AE88__func_00252C78 __asm__("D_0038AE88");

s32 func_00252C78(void) {
    func_00252700__func_00252C78(-1);
    D_0038AE84__func_00252C78 = 0;
    D_0038AE88__func_00252C78 = 0;
    return 0;
}

void func_00252CA8(void) {
}

extern s32 D_0038AE7C__func_00252CB0 __asm__("D_0038AE7C");
extern s32 D_0038AE80__func_00252CB0 __asm__("D_0038AE80");

void func_00252CB0(s32 arg0, s32 arg1) {
    D_0038AE7C__func_00252CB0 = arg0;
    D_0038AE80__func_00252CB0 = arg1;
}

extern void *func_00253790__func_00252CC8() __asm__("func_00253790");

s32 func_00252CC8(void) {
    void *temp_v0;

    temp_v0 = func_00253790__func_00252CC8();
    if (temp_v0 == NULL) {
        return -8;
    }
    return M2C_FIELD(temp_v0, s32 *, 0x54);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00252CF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00252D40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00252DD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00252E80);

extern M2C_UNK D_0038B718__func_00252F40 __asm__("D_0038B718");

M2C_UNK *func_00252F40(void) {
    return &D_0038B718__func_00252F40;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00252F50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00253000);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002530B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00253140);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00253410);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00253628);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00253790);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00253830);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002538B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00253950);

extern M2C_UNK func_00253628__func_002539C8(M2C_UNK) __asm__("func_00253628");

void func_002539C8(void) {
    func_00253628__func_002539C8(0x20);
}

extern M2C_UNK func_00253628__func_002539E8(M2C_UNK) __asm__("func_00253628");

void func_002539E8(void) {
    func_00253628__func_002539E8(0x42);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00253A08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00253B90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00253CF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00253E60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002540C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002542E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00254508);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002545E8);

extern M2C_UNK func_001C9CC8__func_002546C8(s32, s32) __asm__("func_001C9CC8");

void func_002546C8(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 4) = arg1;
    if (M2C_FIELD(arg0, s8 *, 0xE) < 0) {
        func_001C9CC8__func_002546C8(M2C_FIELD(arg0, s32 *, 0x54), (s32) (M2C_FIELD(arg0, s8 *, 0x34) * arg1) / 100);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00254718);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00254760);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00254778);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002547F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00254848);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00254898);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00255790);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002557F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00255898);

void func_002558F0(s32 arg0, u32 arg1) {
    u32 temp_a0;

    temp_a0 = arg0 + 0x10;
    if (arg1 >= temp_a0) {
        M2C_FIELD(temp_a0, s32 *, 8) = (s32) (M2C_FIELD(temp_a0, s32 *, 8) | 0x04000000);
    }
}

extern s32 func_00253790__func_00255918() __asm__("func_00253790");
extern M2C_UNK func_00255940__func_00255918(s32) __asm__("func_00255940");

void func_00255918(void) {
    func_00255940__func_00255918(func_00253790__func_00255918());
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00255940);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002559E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00255D88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00255ED0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00256030);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002563D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00256468);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00256798);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002568F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00256FD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00257040);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00257090);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00257110);

extern s32 func_002571D8__func_00257190(s32, M2C_UNK) __asm__("func_002571D8");
extern M2C_UNK func_002577A8__func_00257190() __asm__("func_002577A8");
extern M2C_UNK func_00257808__func_00257190() __asm__("func_00257808");

s32 func_00257190(s32 arg0, M2C_UNK arg1) {
    s32 temp_s0;

    func_002577A8__func_00257190();
    temp_s0 = func_002571D8__func_00257190(arg0, arg1);
    func_00257808__func_00257190();
    return temp_s0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002571D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002572E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00257320);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00257330);

extern s32 func_00257388__func_00257340(s32, M2C_UNK) __asm__("func_00257388");
extern M2C_UNK func_002577A8__func_00257340() __asm__("func_002577A8");
extern M2C_UNK func_00257808__func_00257340() __asm__("func_00257808");

s32 func_00257340(s32 arg0, M2C_UNK arg1) {
    s32 temp_s0;

    func_002577A8__func_00257340();
    temp_s0 = func_00257388__func_00257340(arg0, arg1);
    func_00257808__func_00257340();
    return temp_s0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00257388);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00257490);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002574D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002574E0);

extern s32 func_00257538__func_002574F0(s32, M2C_UNK) __asm__("func_00257538");
extern M2C_UNK func_002577A8__func_002574F0() __asm__("func_002577A8");
extern M2C_UNK func_00257808__func_002574F0() __asm__("func_00257808");

s32 func_002574F0(s32 arg0, M2C_UNK arg1) {
    s32 temp_s0;

    func_002577A8__func_002574F0();
    temp_s0 = func_00257538__func_002574F0(arg0, arg1);
    func_00257808__func_002574F0();
    return temp_s0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00257538);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00257640);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00257680);

void func_00257690(void *arg0, M2C_UNK arg1) {
    void *var_s0;

    var_s0 = M2C_FIELD(arg0, void **, 8);
    if (var_s0 != NULL) {
        do {
            M2C_FIELD(var_s0, M2C_UNK (**)(M2C_UNK, s32), 8)(arg1, M2C_FIELD(var_s0, s32 *, 0xC));
            var_s0 = M2C_FIELD(var_s0, void **, 0);
        } while (var_s0 != NULL);
    }
}

extern s32 D_004B489C__func_002576E0 __asm__("D_004B489C");

s32 func_002576E0(s32 arg0) {
    D_004B489C__func_002576E0 = arg0;
    return 0;
}

extern s32 D_004B489C__func_002576F0 __asm__("D_004B489C");

s32 func_002576F0(s32 *arg0) {
    *arg0 = D_004B489C__func_002576F0;
    return (D_004B489C__func_002576F0 != 0) ? 0 : -6;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00257710);

extern M2C_UNK func_00353770__func_00257778(s32) __asm__("func_00353770");
extern s32 D_0038BAE0__func_00257778 __asm__("D_0038BAE0");
extern s32 D_004B48A4__func_00257778 __asm__("D_004B48A4");

s32 func_00257778(void) {
    func_00353770__func_00257778(D_004B48A4__func_00257778);
    D_0038BAE0__func_00257778 = 0;
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002577A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00257808);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00257870);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00257A08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00257AF8);

extern M2C_UNK func_002577A8__func_00257B70() __asm__("func_002577A8");
extern M2C_UNK func_00257808__func_00257B70() __asm__("func_00257808");
extern s32 func_00257BB8__func_00257B70(s32, M2C_UNK) __asm__("func_00257BB8");

s32 func_00257B70(s32 arg0, M2C_UNK arg1) {
    s32 temp_s0;

    func_002577A8__func_00257B70();
    temp_s0 = func_00257BB8__func_00257B70(arg0, arg1);
    func_00257808__func_00257B70();
    return temp_s0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00257BB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00257C18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00257C98);

extern M2C_UNK func_002577A8__func_00257CA0() __asm__("func_002577A8");
extern M2C_UNK func_00257808__func_00257CA0() __asm__("func_00257808");
extern s32 func_00257CF8__func_00257CA0(s32, M2C_UNK, M2C_UNK) __asm__("func_00257CF8");

s32 func_00257CA0(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_s0;

    func_002577A8__func_00257CA0();
    temp_s0 = func_00257CF8__func_00257CA0(arg0, arg1, arg2);
    func_00257808__func_00257CA0();
    return temp_s0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00257CF8);

extern M2C_UNK func_002577A8__func_00257DD8() __asm__("func_002577A8");
extern M2C_UNK func_00257808__func_00257DD8() __asm__("func_00257808");
extern s32 func_00257E10__func_00257DD8(s32) __asm__("func_00257E10");

s32 func_00257DD8(s32 arg0) {
    s32 temp_s0;

    func_002577A8__func_00257DD8();
    temp_s0 = func_00257E10__func_00257DD8(arg0);
    func_00257808__func_00257DD8();
    return temp_s0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00257E10);

s32 func_00257E98(void *arg0, s32 *arg1) {
    *arg1 = M2C_FIELD(arg0, s32 *, 4);
    return 0;
}

s32 func_00257EA8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00257EC0);

extern M2C_UNK func_002577A8__func_00257F08() __asm__("func_002577A8");
extern M2C_UNK func_00257808__func_00257F08() __asm__("func_00257808");
extern s32 func_00257F50__func_00257F08(s32, M2C_UNK) __asm__("func_00257F50");

s32 func_00257F08(s32 arg0, M2C_UNK arg1) {
    s32 temp_s0;

    func_002577A8__func_00257F08();
    temp_s0 = func_00257F50__func_00257F08(arg0, arg1);
    func_00257808__func_00257F08();
    return temp_s0;
}

extern M2C_UNK func_00257690__func_00257F50() __asm__("func_00257690");

s32 func_00257F50(void) {
    func_00257690__func_00257F50();
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00257F70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00257FD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00258050);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00258080);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00258108);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00258138);

extern M2C_UNK func_002577A8__func_002581C0() __asm__("func_002577A8");
extern M2C_UNK func_00257808__func_002581C0() __asm__("func_00257808");
extern s32 func_00258208__func_002581C0(s32, M2C_UNK) __asm__("func_00258208");

s32 func_002581C0(s32 arg0, M2C_UNK arg1) {
    s32 temp_s0;

    func_002577A8__func_002581C0();
    temp_s0 = func_00258208__func_002581C0(arg0, arg1);
    func_00257808__func_002581C0();
    return temp_s0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00258208);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00258298);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00258308);

extern s32 D_004B4898__func_00258388 __asm__("D_004B4898");

void func_00258388(s32 arg0, s32 arg1) {
    if ((arg1 == 0xFFFF) && (arg0 != 0)) {
        D_004B4898__func_00258388 = 0;
    }
}

extern M2C_UNK func_00258388__func_002583A8(M2C_UNK, M2C_UNK) __asm__("func_00258388");

void func_002583A8(void) {
    func_00258388__func_002583A8(1, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002583C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002583D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002584B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002584B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00258598);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002589D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00258B50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00258DC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00258E18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00258E20);

extern s32 func_00259588__func_00258EF0(s32) __asm__("func_00259588");

s32 func_00258EF0(s32 *arg0) {
    s32 temp_a0;
    s32 var_v0;

    temp_a0 = *arg0;
    var_v0 = 1;
    if (temp_a0 != 0) {
        var_v0 = func_00259588__func_00258EF0(temp_a0);
    }
    return var_v0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00258F18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00258FC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00258FE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00259008);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00259138);

extern M2C_UNK func_00259138__func_00259318(s32, s32) __asm__("func_00259138");

void func_00259318(s32 arg0, s32 *arg1) {
    func_00259138__func_00259318(*arg1, arg0);
}

extern M2C_UNK func_0032B200__func_00259340(s32, s32) __asm__("func_0032B200");

void func_00259340(void *arg0, s32 *arg1) {
    func_0032B200__func_00259340(M2C_FIELD(arg0, s32 *, 0x30), *arg1);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00259360);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00259380);

extern M2C_UNK func_00234BA0__func_00259470(s32) __asm__("func_00234BA0");
extern M2C_UNK (*D_004B48B4__func_00259470)(void *) __asm__("D_004B48B4");

void func_00259470(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, void **, 4) != NULL) {
        func_00234BA0__func_00259470(M2C_FIELD(arg0, s32 *, 0xC));
        D_004B48B4__func_00259470(M2C_FIELD(arg0, void **, 4));
        M2C_FIELD(arg0, void **, 4) = NULL;
    }
    if (arg1 & 1) {
        D_004B48B4__func_00259470(arg0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002594D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00259538);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00259588);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002595F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00259608);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00259680);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00259730);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00259868);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00259978);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00259AF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025A648);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025A6B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025A6B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025A6C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025A6C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025A6D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025A6D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025A6E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025A6E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025A6F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025A6F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025A700);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025A708);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025A710);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025A718);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025A728);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025A738);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025A7D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025AA48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025AA88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025AB98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025ABB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025AE98);

extern M2C_UNK func_0025ABB0__func_0025AFA0() __asm__("func_0025ABB0");

void func_0025AFA0(void) {
    func_0025ABB0__func_0025AFA0();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025AFC0);

extern M2C_UNK D_003A9618__func_0025B028 __asm__("D_003A9618");

void *func_0025B028(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0xC) = &D_003A9618__func_0025B028;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025B048);

extern M2C_UNK func_0025B150__func_0025B0B8() __asm__("func_0025B150");
extern M2C_UNK D_003A9600__func_0025B0B8 __asm__("D_003A9600");
extern M2C_UNK (*D_004B48B4__func_0025B0B8)(void *) __asm__("D_004B48B4");

void func_0025B0B8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &D_003A9600__func_0025B0B8;
    func_0025B150__func_0025B0B8();
    if (arg1 & 1) {
        D_004B48B4__func_0025B0B8(arg0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025B110);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025B150);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025B198);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025B1D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025B218);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025B298);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025B2C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025B310);

void *func_0025B338(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    return arg0;
}

void *func_0025B350(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 2;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025B370);

extern M2C_UNK func_0025B028__func_0025B388(M2C_UNK *) __asm__("func_0025B028");
extern M2C_UNK D_003A9618__func_0025B388 __asm__("D_003A9618");
extern M2C_UNK D_004B48B0__func_0025B388 __asm__("D_004B48B0");
extern M2C_UNK *D_004B48BC__func_0025B388 __asm__("D_004B48BC");

void func_0025B388(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            func_0025B028__func_0025B388(&D_004B48B0__func_0025B388);
            return;
        }
        D_004B48BC__func_0025B388 = &D_003A9618__func_0025B388;
    }
}

extern M2C_UNK func_0025B388__func_0025B3D0(M2C_UNK, M2C_UNK) __asm__("func_0025B388");

void func_0025B3D0(void) {
    func_0025B388__func_0025B3D0(1, 0xFFFF);
}

extern M2C_UNK func_0025B388__func_0025B3F0(M2C_UNK, M2C_UNK) __asm__("func_0025B388");

void func_0025B3F0(void) {
    func_0025B388__func_0025B3F0(0, 0xFFFF);
}

extern M2C_UNK func_0032CAD8__func_0025B410 __asm__("func_0032CAD8");
extern M2C_UNK func_0032CF68__func_0025B410 __asm__("func_0032CF68");

void func_0025B410(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &func_0032CAD8__func_0025B410;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &func_0032CF68__func_0025B410;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025B430);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025B518);

extern M2C_UNK D_003A9630__func_0025B580 __asm__("D_003A9630");

void *func_0025B580(void *arg0) {
    void *temp_a1;
    void *temp_v1;

    M2C_FIELD(arg0, void **, 0x18) = (void *)3;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_003A9630__func_0025B580;
    temp_v1 = arg0 + 0x18;
    M2C_FIELD(temp_v1, void **, 4) = (void *)3;
    temp_a1 = arg0 + 0x20;
    M2C_FIELD(arg0, void **, 0x18) = temp_v1;
    M2C_FIELD(temp_v1, void **, 4) = temp_v1;
    M2C_FIELD(arg0, void **, 0x18) = temp_v1;
    M2C_FIELD(temp_v1, void **, 4) = temp_v1;
    M2C_FIELD(arg0, void **, 0x20) = (void *)3;
    M2C_FIELD(temp_a1, void **, 4) = (void *)3;
    M2C_FIELD(arg0, void **, 0x20) = temp_a1;
    M2C_FIELD(temp_a1, void **, 4) = temp_a1;
    M2C_FIELD(arg0, void **, 0x20) = temp_a1;
    M2C_FIELD(temp_a1, void **, 4) = temp_a1;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x78) = 0;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025B5D8);

extern M2C_UNK func_0025B778__func_0025B748(M2C_UNK, s32, M2C_UNK) __asm__("func_0025B778");

s32 func_0025B748(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_0025B778__func_0025B748(arg2, arg0, arg1);
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025B778);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025B890);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025BBD8);

extern f32 D_004B4988__func_0025BBE0 __asm__("D_004B4988");

f32 func_0025BBE0(void) {
    return D_004B4988__func_0025BBE0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025BBF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025BC88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025BD08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025BD78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025BDD8);

void func_0025BE20(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025BE28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025BE60);

extern void *D_004B5508__func_0025BE90 __asm__("D_004B5508");

u32 func_0025BE90(s32 arg0) {
    return (u32) M2C_FIELD(D_004B5508__func_0025BE90, u32 *, 4) >> -arg0;
}

extern M2C_UNK func_0025BF38__func_0025BEA8(M2C_UNK) __asm__("func_0025BF38");

void func_0025BEA8(void) {
    func_0025BF38__func_0025BEA8(1);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025BEC8);

extern s32 func_0025BE90__func_0025BF38() __asm__("func_0025BE90");
extern M2C_UNK func_0025BEC8__func_0025BF38(s32) __asm__("func_0025BEC8");

s32 func_0025BF38(s32 arg0) {
    s32 temp_s1;

    temp_s1 = func_0025BE90__func_0025BF38();
    func_0025BEC8__func_0025BF38(arg0);
    return temp_s1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025BF78);

extern s32 func_0025BE90__func_0025BFE0(M2C_UNK) __asm__("func_0025BE90");
extern M2C_UNK func_0025BF78__func_0025BFE0() __asm__("func_0025BF78");

s32 func_0025BFE0(void) {
    s32 temp_s0;

    temp_s0 = func_0025BE90__func_0025BFE0(0x20);
    func_0025BF78__func_0025BFE0();
    return temp_s0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025C010);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025C0D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025C128);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025C318);

extern s32 func_0025BF38__func_0025C3E0(M2C_UNK) __asm__("func_0025BF38");
extern M2C_UNK func_0025C4B8__func_0025C3E0() __asm__("func_0025C4B8");
extern M2C_UNK func_0025CE48__func_0025C3E0() __asm__("func_0025CE48");
extern M2C_UNK func_0025CF70__func_0025C3E0() __asm__("func_0025CF70");
extern s32 D_004B49D4__func_0025C3E0 __asm__("D_004B49D4");
extern s32 D_004B49D8__func_0025C3E0 __asm__("D_004B49D8");
extern s32 D_004B49DC__func_0025C3E0 __asm__("D_004B49DC");
extern s32 D_004B49E0__func_0025C3E0 __asm__("D_004B49E0");
extern s32 D_004B49E4__func_0025C3E0 __asm__("D_004B49E4");
extern s32 D_004B49E8__func_0025C3E0 __asm__("D_004B49E8");
extern s32 D_004B49EC__func_0025C3E0 __asm__("D_004B49EC");
extern void *D_004B5508__func_0025C3E0 __asm__("D_004B5508");

void func_0025C3E0(void) {
    M2C_FIELD(D_004B5508__func_0025C3E0, s32 *, 0x430) = 0;
    D_004B49D4__func_0025C3E0 = func_0025BF38__func_0025C3E0(0xA);
    D_004B49D8__func_0025C3E0 = func_0025BF38__func_0025C3E0(3);
    D_004B49DC__func_0025C3E0 = func_0025BF38__func_0025C3E0(0x10);
    if ((u32) (D_004B49D8__func_0025C3E0 - 2) < 2U) {
        D_004B49E0__func_0025C3E0 = func_0025BF38__func_0025C3E0(1);
        D_004B49E4__func_0025C3E0 = func_0025BF38__func_0025C3E0(3);
    }
    if (D_004B49D8__func_0025C3E0 == 3) {
        D_004B49E8__func_0025C3E0 = func_0025BF38__func_0025C3E0(1);
        D_004B49EC__func_0025C3E0 = func_0025BF38__func_0025C3E0(3);
    }
    func_0025CE48__func_0025C3E0();
    func_0025C4B8__func_0025C3E0();
    func_0025CF70__func_0025C3E0();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025C4B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025C4B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025C5E0);

extern s32 func_0025BF38__func_0025C7F0(M2C_UNK) __asm__("func_0025BF38");
extern M2C_UNK func_0025CE90__func_0025C7F0(M2C_UNK *) __asm__("func_0025CE90");
extern M2C_UNK D_003E20C0__func_0025C7F0 __asm__("D_003E20C0");
extern s32 D_004B49B8__func_0025C7F0 __asm__("D_004B49B8");
extern s32 D_004B49BC__func_0025C7F0 __asm__("D_004B49BC");
extern s32 D_004B49C0__func_0025C7F0 __asm__("D_004B49C0");
extern s32 D_004B49C4__func_0025C7F0 __asm__("D_004B49C4");
extern s32 D_004B49C8__func_0025C7F0 __asm__("D_004B49C8");
extern s32 D_004B49CC__func_0025C7F0 __asm__("D_004B49CC");
extern s32 D_004B49D0__func_0025C7F0 __asm__("D_004B49D0");

void func_0025C7F0(void) {
    s32 temp_v0;

    D_004B49B8__func_0025C7F0 = func_0025BF38__func_0025C7F0(3);
    temp_v0 = func_0025BF38__func_0025C7F0(1);
    D_004B49BC__func_0025C7F0 = temp_v0;
    if (temp_v0 != 0) {
        D_004B49C0__func_0025C7F0 = func_0025BF38__func_0025C7F0(8);
        D_004B49C4__func_0025C7F0 = func_0025BF38__func_0025C7F0(8);
        D_004B49C8__func_0025C7F0 = func_0025BF38__func_0025C7F0(8);
    }
    D_004B49CC__func_0025C7F0 = func_0025BF38__func_0025C7F0(0xE);
    func_0025CE90__func_0025C7F0(&D_003E20C0__func_0025C7F0);
    D_004B49D0__func_0025C7F0 = func_0025BF38__func_0025C7F0(0xE);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025C888);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025CA10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025CAF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025CBE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025CD60);

extern M2C_UNK func_0025BE20__func_0025CE28(M2C_UNK *) __asm__("func_0025BE20");
extern M2C_UNK D_003E21F8__func_0025CE28 __asm__("D_003E21F8");

void func_0025CE28(void) {
    func_0025BE20__func_0025CE28(&D_003E21F8__func_0025CE28);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025CE48);

extern M2C_UNK func_0025BF38__func_0025CE90(M2C_UNK) __asm__("func_0025BF38");

void func_0025CE90(void) {
    func_0025BF38__func_0025CE90(1);
}

extern M2C_UNK func_0025C0D0__func_0025CEB0() __asm__("func_0025C0D0");

void func_0025CEB0(void) {
    func_0025C0D0__func_0025CEB0();
}

extern s32 func_0025BF38__func_0025CED0(M2C_UNK) __asm__("func_0025BF38");
extern M2C_UNK func_0025CE90__func_0025CED0(M2C_UNK *) __asm__("func_0025CE90");
extern M2C_UNK D_003E2220__func_0025CED0 __asm__("D_003E2220");
extern M2C_UNK D_003E2248__func_0025CED0 __asm__("D_003E2248");
extern M2C_UNK D_003E2278__func_0025CED0 __asm__("D_003E2278");
extern s32 D_004B4A90__func_0025CED0 __asm__("D_004B4A90");
extern s32 D_004B4A94__func_0025CED0 __asm__("D_004B4A94");
extern s32 D_004B4A98__func_0025CED0 __asm__("D_004B4A98");
extern s32 D_004B4A9C__func_0025CED0 __asm__("D_004B4A9C");
extern s32 D_004B4AA0__func_0025CED0 __asm__("D_004B4AA0");
extern s32 D_004B4AA4__func_0025CED0 __asm__("D_004B4AA4");

void func_0025CED0(void) {
    D_004B4A90__func_0025CED0 = func_0025BF38__func_0025CED0(1);
    D_004B4A94__func_0025CED0 = func_0025BF38__func_0025CED0(8);
    D_004B4A98__func_0025CED0 = func_0025BF38__func_0025CED0(1);
    func_0025BF38__func_0025CED0(7);
    func_0025CE90__func_0025CED0(&D_003E2220__func_0025CED0);
    D_004B4A9C__func_0025CED0 = func_0025BF38__func_0025CED0(0x14);
    func_0025CE90__func_0025CED0(&D_003E2248__func_0025CED0);
    D_004B4AA0__func_0025CED0 = func_0025BF38__func_0025CED0(0x16);
    func_0025CE90__func_0025CED0(&D_003E2278__func_0025CED0);
    D_004B4AA4__func_0025CED0 = func_0025BF38__func_0025CED0(0x16);
}

extern s32 D_0038BBA8__func_0025CF70 __asm__("D_0038BBA8");
extern s32 D_0038BBAC__func_0025CF70 __asm__("D_0038BBAC");
extern s32 D_0038BBB0__func_0025CF70 __asm__("D_0038BBB0");
extern s32 D_0038BBF8__func_0025CF70 __asm__("D_0038BBF8");
extern s32 D_0038BBFC__func_0025CF70 __asm__("D_0038BBFC");
extern s32 D_004B49D4__func_0025CF70 __asm__("D_004B49D4");
extern s32 D_004B49D8__func_0025CF70 __asm__("D_004B49D8");
extern M2C_UNK D_004B4AC8__func_0025CF70 __asm__("D_004B4AC8");
extern s32 D_004B5508__func_0025CF70 __asm__("D_004B5508");
extern s32 D_004B5518__func_0025CF70 __asm__("D_004B5518");

void func_0025CF70(void) {
    s32 temp_a0;

    if (D_004B5508__func_0025CF70 == &D_004B4AC8__func_0025CF70) {
        if ((D_004B49D8__func_0025CF70 != 3) && (D_004B49D4__func_0025CF70 != D_0038BBFC__func_0025CF70)) {
            if (D_0038BBF8__func_0025CF70 != 0) {
                D_0038BBF8__func_0025CF70 = 0;
                D_0038BBA8__func_0025CF70 += 0x400;
            }
            if (D_004B49D4__func_0025CF70 < D_0038BBFC__func_0025CF70) {
                if (D_0038BBB0__func_0025CF70 == 0) {
                    D_0038BBF8__func_0025CF70 = 1;
                }
            }
            D_0038BBB0__func_0025CF70 = 0;
            D_0038BBFC__func_0025CF70 = D_004B49D4__func_0025CF70;
        }
        temp_a0 = D_0038BBA8__func_0025CF70 + D_004B49D4__func_0025CF70;
        D_004B5518__func_0025CF70 = temp_a0;
        if (D_0038BBF8__func_0025CF70 != 0) {
            if (D_0038BBFC__func_0025CF70 >= D_004B49D4__func_0025CF70) {
                D_004B5518__func_0025CF70 = temp_a0 + 0x400;
            }
        }
        D_0038BBAC__func_0025CF70 = (D_0038BBAC__func_0025CF70 < D_004B5518__func_0025CF70) ? D_004B5518__func_0025CF70 : D_0038BBAC__func_0025CF70;
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025D058);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025D120);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025D198);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025D278);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025D2D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025D378);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025D500);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025D638);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025D7F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025D8C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025DDA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025E760);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025EDD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025F380);

void func_0025F4B8(s32 *arg0) {
    *arg0 += 1;
}

void func_0025F4C8(s32 *arg0) {
    *arg0 -= 1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025F4D8);

void func_0025F590(s32 *arg0) {
    *arg0 += 1;
}

void func_0025F5A0(s32 *arg0) {
    *arg0 -= 1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025F5B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025F610);

void func_0025FB90(void) {
}

extern M2C_UNK (*D_004B5524__func_0025FB98)() __asm__("D_004B5524");

void func_0025FB98(void) {
    D_004B5524__func_0025FB98();
}

void *func_0025FBC0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(arg0, s32 *, 0x6C) = 0;
    M2C_FIELD(arg0, s32 *, 0x70) = 0;
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
    M2C_FIELD(arg0, s32 *, 0x78) = 0;
    M2C_FIELD(arg0, s32 *, 0x7C) = 0;
    M2C_FIELD(arg0, s32 *, 0x80) = 0;
    M2C_FIELD(arg0, s32 *, 0x84) = 0;
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
    M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    M2C_FIELD(arg0, s32 *, 0x90) = 0;
    M2C_FIELD(arg0, s32 *, 0x94) = 0;
    M2C_FIELD(arg0, s32 *, 0x98) = 0;
    M2C_FIELD(arg0, s32 *, 0x9C) = 0;
    M2C_FIELD(arg0, s32 *, 0xA0) = 0;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025FC68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0025FEC8);

extern M2C_UNK func_0026EE98__func_00260018() __asm__("func_0026EE98");

void func_00260018(void) {
    func_0026EE98__func_00260018();
}

extern M2C_UNK func_0026F028__func_00260038(s32, M2C_UNK *, M2C_UNK *) __asm__("func_0026F028");
extern s32 D_004B55E8__func_00260038 __asm__("D_004B55E8");
extern M2C_UNK func_00277E48__func_00260038 __asm__("func_00277E48");
extern M2C_UNK func_00277F00__func_00260038 __asm__("func_00277F00");

void func_00260038(void) {
    func_0026F028__func_00260038(D_004B55E8__func_00260038, &func_00277E48__func_00260038, &func_00277F00__func_00260038);
}

extern M2C_UNK func_002621C8__func_00260068() __asm__("func_002621C8");
extern M2C_UNK func_002676A0__func_00260068() __asm__("func_002676A0");
extern M2C_UNK func_00268C30__func_00260068() __asm__("func_00268C30");
extern M2C_UNK func_0026B3D0__func_00260068() __asm__("func_0026B3D0");
extern M2C_UNK func_0026E828__func_00260068() __asm__("func_0026E828");
extern M2C_UNK func_00293CB0__func_00260068() __asm__("func_00293CB0");
extern M2C_UNK func_00296438__func_00260068() __asm__("func_00296438");
extern M2C_UNK func_00297B28__func_00260068() __asm__("func_00297B28");
extern M2C_UNK func_002988C0__func_00260068() __asm__("func_002988C0");
extern M2C_UNK func_00299C80__func_00260068() __asm__("func_00299C80");
extern M2C_UNK func_0029D298__func_00260068() __asm__("func_0029D298");
extern M2C_UNK func_002A3440__func_00260068() __asm__("func_002A3440");

void func_00260068(void) {
    func_002A3440__func_00260068();
    func_002621C8__func_00260068();
    func_00293CB0__func_00260068();
    func_00296438__func_00260068();
    func_00297B28__func_00260068();
    func_002988C0__func_00260068();
    func_0026E828__func_00260068();
    func_002676A0__func_00260068();
    func_0026B3D0__func_00260068();
    func_00299C80__func_00260068();
    func_0029D298__func_00260068();
    func_00268C30__func_00260068();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002600E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00260178);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002602C8);

extern M2C_UNK func_0026CAB8__func_002602D0(s32) __asm__("func_0026CAB8");
extern s32 D_004B55E8__func_002602D0 __asm__("D_004B55E8");

void func_002602D0(void) {
    func_0026CAB8__func_002602D0(D_004B55E8__func_002602D0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002602F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002603C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00260438);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00260440);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002604A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00260528);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00260700);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00261430);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00261680);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002616E8);

extern M2C_UNK func_00261680__func_00261750() __asm__("func_00261680");

void func_00261750(void) {
    func_00261680__func_00261750();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00261770);

extern M2C_UNK func_00277290__func_00261778(s32, s32, M2C_UNK, M2C_UNK) __asm__("func_00277290");
extern s32 D_004B55D0__func_00261778 __asm__("D_004B55D0");
extern s32 D_004B55E8__func_00261778 __asm__("D_004B55E8");
extern s32 D_004B55FC__func_00261778 __asm__("D_004B55FC");

void func_00261778(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    if (D_004B55FC__func_00261778 != 0) {
        if ((D_004B55D0__func_00261778 == 0) && (D_004B55E8__func_00261778 != 0)) {
            func_00277290__func_00261778(D_004B55E8__func_00261778, arg0, arg1, arg2);
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002617D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00261838);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00261B90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00261BC0);

extern M2C_UNK func_00273298__func_00261E78(s32) __asm__("func_00273298");
extern s32 D_004B55E8__func_00261E78 __asm__("D_004B55E8");

void func_00261E78(void) {
    if (D_004B55E8__func_00261E78 != 0) {
        func_00273298__func_00261E78(D_004B55E8__func_00261E78 + 0x122C);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00261EB0);

extern s32 D_0038BC08__func_00261EC0 __asm__("D_0038BC08");

void func_00261EC0(void) {
    D_0038BC08__func_00261EC0 = 1;
}

extern s32 func_0025F4C8__func_00261ED0(s32 *) __asm__("func_0025F4C8");
extern M2C_UNK func_0025F4D8__func_00261ED0(s32 *) __asm__("func_0025F4D8");

s32 func_00261ED0(s32 **arg0) {
    s32 *temp_a0;
    s32 temp_s1;

    temp_a0 = *arg0;
    temp_s1 = *temp_a0;
    if (temp_a0 != NULL) {
        if (func_0025F4C8__func_00261ED0(temp_a0) == 0) {
            func_0025F4D8__func_00261ED0(*arg0);
        }
    }
    return temp_s1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00261F20);

extern M2C_UNK func_00261F20__func_00261FA0(M2C_UNK, M2C_UNK) __asm__("func_00261F20");

void func_00261FA0(void) {
    func_00261F20__func_00261FA0(1, 0xFFFF);
}

extern M2C_UNK func_00261F20__func_00261FC0(M2C_UNK, M2C_UNK) __asm__("func_00261F20");

void func_00261FC0(void) {
    func_00261F20__func_00261FC0(0, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00261FE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002621C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002627B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002627F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00262800);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00262870);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00262998);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00262BF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00262F10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00263028);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00263150);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00263268);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00263380);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00263498);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002635B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002636C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002637E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002638E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00263A10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00263B28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00263C50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00263D68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00263E80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00263F98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002640B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002641C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002642E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002643F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00264550);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00264718);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00264870);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002649C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00264B20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00264C78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00264DD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00264ED8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00265030);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00265200);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00265358);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002654B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00265608);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00265760);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002658B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00265A10);

extern s32 D_004B5ECC__func_00265B58 __asm__("D_004B5ECC");

s32 func_00265B58(void) {
    return D_004B5ECC__func_00265B58;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00265B68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002673A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00267430);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002674B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00267600);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002676A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00267760);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00267AD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00267BA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00267D18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00268618);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00268870);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00268A58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00268B00);

extern s32 func_0026F880__func_00268B90(s32, M2C_UNK, void *) __asm__("func_0026F880");
extern M2C_UNK func_0036A8C0__func_00268B90(s32) __asm__("func_0036A8C0");
extern void *D_0038C780__func_00268B90 __asm__("D_0038C780");

void func_00268B90(void *arg0) {
    s32 temp_s0;
    void *temp_a2;

    temp_a2 = D_0038C780__func_00268B90;
    temp_s0 = arg0 + 8;
    M2C_FIELD(arg0, void **, 0xC) = temp_a2;
    D_0038C780__func_00268B90 = arg0;
    if (func_0026F880__func_00268B90(temp_s0, 0x21, temp_a2) != 0) {
        func_0036A8C0__func_00268B90(temp_s0);
    }
}

extern s32 func_0026F880__func_00268BE0(s32, M2C_UNK, void *) __asm__("func_0026F880");
extern M2C_UNK func_0036A8C0__func_00268BE0(s32) __asm__("func_0036A8C0");
extern void *D_0038C780__func_00268BE0 __asm__("D_0038C780");

void func_00268BE0(void *arg0) {
    s32 temp_s0;
    void *temp_a2;

    temp_a2 = D_0038C780__func_00268BE0;
    temp_s0 = arg0 + 8;
    M2C_FIELD(arg0, void **, 0xC) = temp_a2;
    D_0038C780__func_00268BE0 = arg0;
    if (func_0026F880__func_00268BE0(temp_s0, 0x21, temp_a2) != 0) {
        func_0036A8C0__func_00268BE0(temp_s0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00268C30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00268E30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00268F98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00269188);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002693B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00269590);

extern s32 D_004B5ECC__func_00269818 __asm__("D_004B5ECC");

s32 func_00269818(void) {
    return D_004B5ECC__func_00269818;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00269828);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00269B30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026A158);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026A3A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026A620);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026A778);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026A8D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026B260);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026B270);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026B320);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026B388);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026B3D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026B490);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026BD08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026BE50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026BF98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026C088);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026C178);

extern M2C_UNK func_0026C178__func_0026C258() __asm__("func_0026C178");
extern s32 D_003FD778__func_0026C258 __asm__("D_003FD778");

void func_0026C258(void) {
    D_003FD778__func_0026C258 += 0x60;
    func_0026C178__func_0026C258();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026C280);

extern s32 D_003FD784__func_0026C2C8 __asm__("D_003FD784");

void func_0026C2C8(void) {
    D_003FD784__func_0026C2C8 = 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026C2D8);

extern void *D_0038C158__func_0026C360 __asm__("D_0038C158");

void func_0026C360(void *arg0) {
    M2C_FIELD(arg0, void **, 8) = (void *) D_0038C158__func_0026C360;
    D_0038C158__func_0026C360 = arg0;
}

extern void *D_0038C158__func_0026C378 __asm__("D_0038C158");

void func_0026C378(void *arg0) {
    M2C_FIELD(arg0, void **, 8) = (void *) D_0038C158__func_0026C378;
    D_0038C158__func_0026C378 = arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026C390);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026C4B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026C5E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026C860);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026C8C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026CAB8);

void func_0026CC10(void *arg0, void *arg1, void *arg2) {
    M2C_FIELD(arg2, f32 *, 0) = (f32) ((M2C_FIELD(arg1, f32 *, 0) * M2C_FIELD(arg0, f32 *, 0)) + (M2C_FIELD(arg1, f32 *, 8) * M2C_FIELD(arg0, f32 *, 4)) + M2C_FIELD(arg1, f32 *, 0x10));
    M2C_FIELD(arg2, f32 *, 4) = (f32) ((M2C_FIELD(arg1, f32 *, 4) * M2C_FIELD(arg0, f32 *, 0)) + (M2C_FIELD(arg1, f32 *, 0xC) * M2C_FIELD(arg0, f32 *, 4)) + M2C_FIELD(arg1, f32 *, 0x14));
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026CC68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026CD18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026CEC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026D148);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026D510);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026D598);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026D928);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026DA38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026DB38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026DC30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026DDA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026E250);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026E4D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026E5E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026E670);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026E7B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026E828);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026E8C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026EA28);

extern s32 D_004B5ECC__func_0026EA88 __asm__("D_004B5ECC");

s32 func_0026EA88(void) {
    return D_004B5ECC__func_0026EA88;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026EA98);

extern s32 (*D_004B5520__func_0026ED18)(s32) __asm__("D_004B5520");

void *func_0026ED18(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = D_004B5520__func_0026ED18(arg1 * 4);
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026ED58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026EDC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026EE98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026EED8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026EF38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026EFB8);

extern s32 func_0026EFB8__func_0026EFF8() __asm__("func_0026EFB8");

s32 func_0026EFF8(s32 arg0) {
    return (func_0026EFB8__func_0026EFF8() == 0) ? 0 : arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026F028);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026F068);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026F070);

extern M2C_UNK func_0026F098__func_0026F078() __asm__("func_0026F098");

void func_0026F078(void) {
    func_0026F098__func_0026F078();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026F098);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026F248);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026F2F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026F398);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026F438);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026F508);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026F5E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026F5F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026F700);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026F838);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026F840);

s32 func_0026F880(void **arg0, u32 arg1) {
    return arg1 < (u16) M2C_FIELD(*arg0, u16 *, 4);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026F890);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026F948);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026FA28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026FA90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026FB00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026FC58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026FC68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026FD40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026FD48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026FE18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026FEF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0026FF28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00270028);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00270098);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002700E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002701B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002702F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00270400);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00270528);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00270708);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002708E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00270A88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00270C18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00270CE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00270D50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00270E18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00270ED0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00270F08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00270F70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00271418);

extern s32 func_00271598__func_002714F0(void *) __asm__("func_00271598");
extern s32 func_00271938__func_002714F0(s32, s32) __asm__("func_00271938");
extern s32 func_00273848__func_002714F0(s32) __asm__("func_00273848");
extern s32 func_00274988__func_002714F0(s32) __asm__("func_00274988");
extern s32 func_002749A8__func_002714F0(s32, s32) __asm__("func_002749A8");

s32 func_002714F0(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_s3;

    if (arg1 == 0) {
        return M2C_FIELD(arg0, s32 *, 0x4C);
    }
    var_s3 = 1;
    temp_v0 = func_00271598__func_002714F0(arg0);
    if (temp_v0 != 0) {
        var_s3 = func_00274988__func_002714F0(temp_v0) + 1;
    }
    if ((arg1 > 0) && (arg1 < var_s3)) {
        return func_002749A8__func_002714F0(temp_v0, arg1 - 1);
    }
    return func_00271938__func_002714F0(func_00273848__func_002714F0(M2C_FIELD(arg0, s32 *, 0x50) + 0x24), arg1 - var_s3);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00271598);

extern M2C_UNK func_00271598__func_00271608() __asm__("func_00271598");

void func_00271608(void) {
    func_00271598__func_00271608();
}

extern s32 func_00271598__func_00271628() __asm__("func_00271598");

s32 func_00271628(void) {
    return func_00271598__func_00271628() != 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00271648);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00271668);

void func_00271690(u32 *arg0) {
    u32 temp_a1;

    temp_a1 = *arg0;
    *arg0 = (temp_a1 & 0xF000FFFF) | ((((temp_a1 >> 0x10) & 0xFFF) + 1) << 0x10);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002716C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00271718);

extern void *D_0038C270__func_002717A0 __asm__("D_0038C270");

void func_002717A0(void *arg0) {
    M2C_FIELD(arg0, void **, 8) = (void *) D_0038C270__func_002717A0;
    D_0038C270__func_002717A0 = arg0;
}

extern void *D_0038C270__func_002717B8 __asm__("D_0038C270");

void func_002717B8(void *arg0) {
    M2C_FIELD(arg0, void **, 8) = (void *) D_0038C270__func_002717B8;
    D_0038C270__func_002717B8 = arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002717D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00271900);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00271938);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00271970);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002719C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00271AF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00271B50);

void *func_00271B58(void *arg0) {
    void *temp_v1;
    void *temp_v1_2;

    temp_v1 = M2C_FIELD(arg0, void **, 0x54);
    if (temp_v1 != NULL) {
        M2C_FIELD(temp_v1, void **, 0x58) = (void *) M2C_FIELD(arg0, void **, 0x58);
    }
    temp_v1_2 = M2C_FIELD(arg0, void **, 0x58);
    if (temp_v1_2 != NULL) {
        M2C_FIELD(temp_v1_2, void **, 0x54) = (void *) M2C_FIELD(arg0, void **, 0x54);
    }
    M2C_FIELD(arg0, void **, 0x54) = NULL;
    M2C_FIELD(arg0, void **, 0x58) = NULL;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00271B90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00272230);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002724A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002725C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002727E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00272AA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00272CD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00272D80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00272DC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00272E20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00272E40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00272F80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00273008);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002730C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00273298);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002732E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00273580);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00273648);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00273748);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002737E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00273848);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00273850);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00273858);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00273FA0);

void *func_00273FA8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00273FC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00274010);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00274158);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00274160);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00274330);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002744E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002745C8);

extern M2C_UNK func_002745C8__func_00274748() __asm__("func_002745C8");

void func_00274748(void) {
    func_002745C8__func_00274748();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00274768);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002747E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00274870);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00274978);

s32 func_00274988(void *arg0) {
    s32 var_v1;

    var_v1 = 2;
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        var_v1 = M2C_FIELD(arg0, s32 *, 0) + 2;
    }
    return var_v1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002749A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00274A30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00274A80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00274AD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00274B38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00274BE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00274C60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00274CB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00274D20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00274E28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00274E68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00274FB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002754E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00275538);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00275570);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002755B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00275D28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00275DC0);

extern M2C_UNK func_00273748__func_00275E40(s32) __asm__("func_00273748");

void func_00275E40(s32 arg0) {
    func_00273748__func_00275E40(arg0 + 0x24);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00275E60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00276198);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00276398);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00276648);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002768E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00276D78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00276EE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00277178);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00277218);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00277290);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002772C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00277450);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00277540);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002775E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00277690);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00277760);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00277830);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002779D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00277A50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00277B00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00277BE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00277C20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00277DB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00277DF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00277E48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00277F00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00278160);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002783F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00278B90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00278DD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00278E70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00278F20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00278F58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00278FC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00279018);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002790F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00279410);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00279518);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00279650);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00279EB8);

extern M2C_UNK func_00279650__func_00279ED8() __asm__("func_00279650");

void func_00279ED8(void) {
    func_00279650__func_00279ED8();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00279EF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0027A168);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0027A288);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0027A3F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0027A610);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0027A758);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0027AAF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0027AF60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0027B080);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0027B1F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0027B390);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0027B500);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0027BA40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0027BC58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0027BDA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0027BE58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0027C0D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0027C4A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0027C570);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0027CC90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0027D7C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0027D828);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0027DB10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0027DCF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0027DF38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0027E0B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0027E0F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0027E248);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0027E3C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0027E410);

void func_0027E460(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0027E468);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0027E4B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0027E508);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0027E580);

void func_0027E5F8(void) {
}

void func_0027E600(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0027E608);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0027E820);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0027EA38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0027EC40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0027EE68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0027F0A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0027F2B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0027F4F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0027F728);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0027F908);

void func_0027FBB0(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0027FBB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0027FF40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0027FFD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00280190);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002802D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00280428);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00280558);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00280660);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00280878);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002809A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00280AB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00280B90);

void func_00280CE0(void) {
}

void func_00280CE8(void) {
}

void func_00280CF0(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00280CF8);

void func_00280EE0(void) {
}

void func_00280EE8(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00280EF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00281160);

void func_002812C8(void) {
}

void func_002812D0(void) {
}

void func_002812D8(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002812E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00281560);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00281790);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00281868);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00281A68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00281A78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00281CA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00281E90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00282038);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00282210);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002824F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002828B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00282BF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00282C18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00283160);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00283448);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00283CF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00284078);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00284290);

void func_002842F8(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00284300);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00284890);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00284BE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00284ED0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002851B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00285BB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00285E20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00285E40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00286058);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00286270);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00286488);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002866A0);

void func_002868B8(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002868C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00286D18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00287000);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00287098);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00287248);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00287310);

void func_00287348(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00287350);

void func_00287428(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00287430);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00287528);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00287698);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00287B10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00287D28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00287E28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00287FA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00288210);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00288278);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002883D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00288528);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00288680);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002887E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00288950);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00288AA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00288B10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00288B78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00288C10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00288C78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00288D10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00288D78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00288E08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00288E70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00288FE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00289188);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00289208);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00289298);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002893D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00289590);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00289750);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00289910);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002899B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00289A58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00289B60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00289C38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00289D40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00289E18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00289FF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0028A160);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0028A2E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0028A4B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0028A5B8);

extern M2C_UNK func_0028A5B8__func_0028A650(M2C_UNK, M2C_UNK) __asm__("func_0028A5B8");

void func_0028A650(void) {
    func_0028A5B8__func_0028A650(1, 0xFFFF);
}

extern M2C_UNK func_0028A5B8__func_0028A670(M2C_UNK, M2C_UNK) __asm__("func_0028A5B8");

void func_0028A670(void) {
    func_0028A5B8__func_0028A670(0, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0028A690);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0028A8A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0028A940);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0028AA08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0028AA88);

extern s32 D_004B5ECC__func_0028ADE0 __asm__("D_004B5ECC");

s32 func_0028ADE0(void) {
    return D_004B5ECC__func_0028ADE0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0028ADF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0028AE20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0028AE50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0028B178);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0028BC40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0028C248);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0028C450);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0028C4A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0028C6E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0028C9C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0028CEF8);

void func_0028D008(u32 *arg0) {
    u32 temp_a1;

    temp_a1 = *arg0;
    *arg0 = (temp_a1 & 0xF000FFFF) | ((((temp_a1 >> 0x10) & 0xFFF) + 1) << 0x10);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0028D038);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0028D100);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002929C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00292B18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00292DA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00292E80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00292F08);

extern M2C_UNK func_00292F08__func_00292FC8(M2C_UNK, M2C_UNK) __asm__("func_00292F08");

void func_00292FC8(void) {
    func_00292F08__func_00292FC8(1, 0xFFFF);
}

extern M2C_UNK func_00292F08__func_00292FE8(M2C_UNK, M2C_UNK) __asm__("func_00292F08");

void func_00292FE8(void) {
    func_00292F08__func_00292FE8(0, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00293008);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00293178);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00293618);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002937E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00293988);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00293B70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00293CB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00293FA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00294BB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00294D08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00294E58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00294FC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00295140);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002952D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00295460);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002955B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00295700);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00295850);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002959A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00295AF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00295C40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00295D90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00295EE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00296050);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002961A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002962E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00296438);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00296548);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00296BC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00296D28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00296EA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00296FD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002970E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00297468);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00297B28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00297B98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00297D48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00297E60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002981E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00298218);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00298848);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002988C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002989D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00298E00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002991D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00299800);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00299930);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00299A60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00299B90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00299BF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00299C00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00299C80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00299D90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00299F40);

extern s32 D_004B5ECC__func_0029AA90 __asm__("D_004B5ECC");

s32 func_0029AA90(void) {
    return D_004B5ECC__func_0029AA90;
}

extern s32 D_004B5ECC__func_0029AAA0 __asm__("D_004B5ECC");

s32 func_0029AAA0(void) {
    return D_004B5ECC__func_0029AAA0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029AAB0);

extern s32 D_004B5ECC__func_0029AD08 __asm__("D_004B5ECC");

s32 func_0029AD08(void) {
    return D_004B5ECC__func_0029AD08;
}

extern s32 D_004B5ECC__func_0029AD18 __asm__("D_004B5ECC");

s32 func_0029AD18(void) {
    return D_004B5ECC__func_0029AD18;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029AD28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029AE88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029AFE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029B078);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029B128);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029B360);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029B678);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029B808);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029B910);

extern M2C_UNK func_002737E0__func_0029B9C0(s32) __asm__("func_002737E0");

void func_0029B9C0(s32 arg0) {
    func_002737E0__func_0029B9C0(arg0 + 0x24);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029B9E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029BCF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029BF88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029C268);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029C368);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029CA40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029CC18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029CC68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029CD30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029CDD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029CE48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029D050);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029D068);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029D188);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029D298);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029D678);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029D698);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029D6B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029D9A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029DB98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029DC40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029DCF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029DD70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029DDE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029E1C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029E318);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029E5B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029E6A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029EBB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029F0E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029F2B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029F360);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029F410);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029F4B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029F508);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029F558);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029F768);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0029F978);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A0508);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A2740);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A2B90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A2D70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A30C0);

extern void *D_0038D058__func_002A3148 __asm__("D_0038D058");

void func_002A3148(void *arg0) {
    M2C_FIELD(arg0, void **, 8) = (void *) D_0038D058__func_002A3148;
    D_0038D058__func_002A3148 = arg0;
}

extern void *D_0038D058__func_002A3160 __asm__("D_0038D058");

void func_002A3160(void *arg0) {
    M2C_FIELD(arg0, void **, 8) = (void *) D_0038D058__func_002A3160;
    D_0038D058__func_002A3160 = arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A3178);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A32B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A3318);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A3440);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A3618);

extern s32 func_00274988__func_002A36D8(s32) __asm__("func_00274988");

s32 func_002A36D8(void *arg0) {
    s32 var_a1;

    var_a1 = func_00274988__func_002A36D8(arg0 + 8);
    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        var_a1 += M2C_FIELD(arg0, s32 *, 0x24);
    }
    return var_a1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A3718);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A3790);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A3880);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A3960);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A39B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A39C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A3B58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A4458);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A4490);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A4508);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A46D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A48D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A4960);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A4B10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A4BB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A4DB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A4E88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A4FF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A50A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A5218);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A52F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A53B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A5618);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A57A8);

extern M2C_UNK func_002A57A8__func_002A5818(M2C_UNK, M2C_UNK) __asm__("func_002A57A8");

void func_002A5818(void) {
    func_002A57A8__func_002A5818(1, 0xFFFF);
}

extern M2C_UNK func_002A57A8__func_002A5838(M2C_UNK, M2C_UNK) __asm__("func_002A57A8");

void func_002A5838(void) {
    func_002A57A8__func_002A5838(0, 0xFFFF);
}

extern M2C_UNK func_002737E0__func_002A5858(s32) __asm__("func_002737E0");

void func_002A5858(s32 arg0) {
    func_002737E0__func_002A5858(arg0 + 0x20);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A5878);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A5958);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A5AC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A5B28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A5BA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A5BB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A5C28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A5D88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A5E00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A5E08);

extern s32 func_00274988__func_002A5E50(void *) __asm__("func_00274988");
extern s32 func_002749A8__func_002A5E50(void *, s32) __asm__("func_002749A8");
extern s32 func_0029B360__func_002A5E50(s32, s32) __asm__("func_0029B360");

s32 func_002A5E50(void *arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_v1;
    s32 var_v0;
    void *temp_s2;

    if (arg1 == 0) {
        return M2C_FIELD(arg0, s32 *, 0x1C);
    }
    temp_s2 = arg0 + 8;
    if (arg1 == 1) {
        return M2C_FIELD(arg0, s32 *, 0x28);
    }
    temp_v1 = func_00274988__func_002A5E50(temp_s2) + 2;
    if ((arg1 >= 2) && (arg1 < temp_v1)) {
        return func_002749A8__func_002A5E50(temp_s2, arg1 - 2);
    }
    temp_a0 = M2C_FIELD(arg0, s32 *, 0x24);
    var_v0 = 0;
    if (temp_a0 != 0) {
        var_v0 = func_0029B360__func_002A5E50(temp_a0, arg1 - temp_v1);
    }
    return var_v0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A5EF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A5F58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A5FC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A6028);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A61F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A6270);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A62C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A6440);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A6878);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A6B40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A6CD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A6D90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A6E60);

extern M2C_UNK func_0032CB00__func_002A6E98(M2C_UNK *, s32, M2C_UNK) __asm__("func_0032CB00");
extern M2C_UNK D_003E71A8__func_002A6E98 __asm__("D_003E71A8");

void func_002A6E98(s32 arg0) {
    func_0032CB00__func_002A6E98(&D_003E71A8__func_002A6E98, arg0, 0);
}

extern M2C_UNK (*D_004B5524__func_002A6EC0)() __asm__("D_004B5524");

void func_002A6EC0(void) {
    D_004B5524__func_002A6EC0();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A6EE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A6EF8);

void func_002A6F58(void) {
}

void func_002A6F60(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A6F68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A7018);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A70B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A71A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A7238);

void func_002A7300(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A7308);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A7578);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A75B0);

s32 func_002A7600(void *arg0) {
    s32 var_a1;

    var_a1 = 0;
    if ((M2C_FIELD(arg0, u8 *, 0) == 0xEF) && (M2C_FIELD(arg0, u8 *, 1) == 0xBB)) {
        var_a1 = M2C_FIELD(arg0, u8 *, 2) == 0xBF;
    }
    return var_a1;
}

s32 func_002A7638(u16 *arg0) {
    return *arg0 == 0xFEFF;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A7648);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A7688);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A7758);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A7880);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A78B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A78F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A7940);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A7AD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A7BA8);

void func_002A7C48(void) {
}

extern M2C_UNK func_0022F008__func_002A7C50() __asm__("func_0022F008");
extern M2C_UNK func_0022F040__func_002A7C50() __asm__("func_0022F040");
extern M2C_UNK func_00233898__func_002A7C50(s32, s32, M2C_UNK *) __asm__("func_00233898");
extern M2C_UNK D_004B8AE8__func_002A7C50 __asm__("D_004B8AE8");

void func_002A7C50(void *arg0) {
    func_0022F008__func_002A7C50();
    func_00233898__func_002A7C50(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 8), &D_004B8AE8__func_002A7C50);
    func_0022F040__func_002A7C50();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A7C90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A7D30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A7D80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A7ED8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A7F30);

extern M2C_UNK func_002A6F68__func_002A8110() __asm__("func_002A6F68");

void func_002A8110(void) {
    func_002A6F68__func_002A8110();
}

void func_002A8130(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A8138);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A81C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A8520);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A8640);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A86F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A8A30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A8C28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A8D30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A8E70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A8FE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A9710);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A9720);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A9E18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A9EB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A9F80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002A9FA8);

extern M2C_UNK func_002ABBE8__func_002AA040() __asm__("func_002ABBE8");

void func_002AA040(void) {
    func_002ABBE8__func_002AA040();
}

extern M2C_UNK func_002A9FA8__func_002AA060() __asm__("func_002A9FA8");
extern M2C_UNK func_002ABC38__func_002AA060() __asm__("func_002ABC38");

void func_002AA060(void) {
    func_002A9FA8__func_002AA060();
    func_002ABC38__func_002AA060();
}

extern M2C_UNK func_002ABD80__func_002AA088() __asm__("func_002ABD80");

void func_002AA088(void) {
    func_002ABD80__func_002AA088();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AA0A8);

extern s32 D_0038D858__func_002AA0B8 __asm__("D_0038D858");

void func_002AA0B8(s32 arg0) {
    D_0038D858__func_002AA0B8 = arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AA0C8);

extern s32 D_0038D85C__func_002AA0E0 __asm__("D_0038D85C");

void func_002AA0E0(s32 arg0) {
    D_0038D85C__func_002AA0E0 = arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AA0F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AA0F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AA1A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AA2C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AA448);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AA648);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AA7A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AA9B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AA9F0);

void func_002AADE0(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AADE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AAE78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AAEC0);

extern s32 D_0038D864__func_002AB0F0 __asm__("D_0038D864");

void func_002AB0F0(s32 arg0) {
    D_0038D864__func_002AB0F0 = arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AB100);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AB180);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AB4F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AB878);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002ABA30);

extern M2C_UNK D_004B8A60__func_002ABAE8 __asm__("D_004B8A60");

M2C_UNK *func_002ABAE8(void) {
    return &D_004B8A60__func_002ABAE8;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002ABAF8);

extern M2C_UNK func_002ABAF8__func_002ABBA8(M2C_UNK, M2C_UNK) __asm__("func_002ABAF8");

void func_002ABBA8(void) {
    func_002ABAF8__func_002ABBA8(1, 0xFFFF);
}

extern M2C_UNK func_002ABAF8__func_002ABBC8(M2C_UNK, M2C_UNK) __asm__("func_002ABAF8");

void func_002ABBC8(void) {
    func_002ABAF8__func_002ABBC8(0, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002ABBE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002ABC38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002ABD78);

extern s32 D_004B90C0__func_002ABD80 __asm__("D_004B90C0");

s32 func_002ABD80(void) {
    return D_004B90C0__func_002ABD80;
}

void *func_002ABD90(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = -1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002ABDB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002ABDC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002ABF48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002ABFF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AC020);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AC0F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AC2B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AC4A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002ACBB0);

extern M2C_UNK func_002ABD90__func_002ACE28(M2C_UNK *) __asm__("func_002ABD90");
extern M2C_UNK func_002ABFF8__func_002ACE28(M2C_UNK *, M2C_UNK) __asm__("func_002ABFF8");
extern M2C_UNK D_004B90C8__func_002ACE28 __asm__("D_004B90C8");

void func_002ACE28(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            func_002ABD90__func_002ACE28(&D_004B90C8__func_002ACE28);
            return;
        }
        func_002ABFF8__func_002ACE28(&D_004B90C8__func_002ACE28, 2);
    }
}

extern M2C_UNK func_002ACE28__func_002ACE68(M2C_UNK, M2C_UNK) __asm__("func_002ACE28");

void func_002ACE68(void) {
    func_002ACE28__func_002ACE68(1, 0xFFFF);
}

extern M2C_UNK func_002ACE28__func_002ACE88(M2C_UNK, M2C_UNK) __asm__("func_002ACE28");

void func_002ACE88(void) {
    func_002ACE28__func_002ACE88(0, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002ACEA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AD2F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AD710);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AD7A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AD8C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AD9B0);

extern M2C_UNK func_002ADBB8__func_002ADAA8(void *) __asm__("func_002ADBB8");
extern M2C_UNK func_002ADBE8__func_002ADAA8(void *) __asm__("func_002ADBE8");
extern M2C_UNK func_002ADC18__func_002ADAA8(void *) __asm__("func_002ADC18");
extern M2C_UNK func_002AE4C8__func_002ADAA8() __asm__("func_002AE4C8");
extern M2C_UNK func_002B30D0__func_002ADAA8(void *) __asm__("func_002B30D0");
extern M2C_UNK func_002B7498__func_002ADAA8(s32) __asm__("func_002B7498");

void func_002ADAA8(void *arg0, s32 *arg1) {
    func_002AE4C8__func_002ADAA8();
    *arg1 = 0;
    func_002ADC18__func_002ADAA8(arg0);
    func_002ADBE8__func_002ADAA8(arg0);
    func_002ADBB8__func_002ADAA8(arg0);
    func_002B7498__func_002ADAA8(M2C_FIELD(arg0, s32 *, 0x1E38));
    func_002B30D0__func_002ADAA8(arg0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002ADB08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002ADBB0);

extern M2C_UNK func_002B7758__func_002ADBB8(s32, s32) __asm__("func_002B7758");

void func_002ADBB8(void *arg0) {
    func_002B7758__func_002ADBB8(M2C_FIELD(arg0, s32 *, 0x1E38), M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, s16 *, 0) = 0;
}

extern M2C_UNK func_002B7758__func_002ADBE8(s32, s32) __asm__("func_002B7758");

void func_002ADBE8(void *arg0) {
    func_002B7758__func_002ADBE8(M2C_FIELD(arg0, s32 *, 0x1E38), M2C_FIELD(arg0, s32 *, 0xC));
    M2C_FIELD(arg0, s16 *, 8) = 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002ADC18);

extern M2C_UNK func_002AE318__func_002ADC90() __asm__("func_002AE318");

void func_002ADC90(void) {
    func_002AE318__func_002ADC90();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002ADCB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002ADE80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002ADF10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AE318);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AE4C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AE600);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AE668);

extern M2C_UNK func_002B7498__func_002AE708(s32) __asm__("func_002B7498");
extern M2C_UNK func_002B7758__func_002AE708(s32, void *) __asm__("func_002B7758");

void func_002AE708(void *arg0, s32 *arg1) {
    s32 temp_s0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 0x28);
    *arg1 = 0;
    func_002B7758__func_002AE708(M2C_FIELD(arg0, s32 *, 0x28), arg0);
    func_002B7498__func_002AE708(temp_s0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AE740);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AE750);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AE9A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AEB68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AEBA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AEC08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AECD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AEF88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AF0E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AF1D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AF200);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AF3E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AF480);

extern M2C_UNK func_002B7758__func_002AF4D8(s32, void *) __asm__("func_002B7758");

void func_002AF4D8(void *arg0) {
    if (arg0 != NULL) {
        func_002B7758__func_002AF4D8(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, void **, 0x10));
        func_002B7758__func_002AF4D8(M2C_FIELD(arg0, s32 *, 0), arg0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AF518);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AF650);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AF8B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AFA10);

extern s32 func_002BB3D8__func_002AFA80(s32, s32) __asm__("func_002BB3D8");

void func_002AFA80(void *arg0, s32 arg1, s32 *arg2, s32 *arg3) {
    s32 temp_a1;
    s32 var_s0;
    s32 var_s1;

    var_s0 = 0;
    var_s1 = func_002BB3D8__func_002AFA80(arg1 << 0x10, M2C_FIELD(arg0, s32 *, 0x130));
    if (M2C_FIELD(arg0, s32 *, 0x1C) == 0) {
        temp_a1 = var_s1;
        var_s1 = func_002BB3D8__func_002AFA80(M2C_FIELD(arg0, s32 *, 8), var_s1);
        var_s0 = func_002BB3D8__func_002AFA80(M2C_FIELD(arg0, s32 *, 0x10), temp_a1);
    }
    *arg2 = var_s1;
    *arg3 = var_s0;
}

extern s32 func_002BB3D8__func_002AFB10(s32, s32) __asm__("func_002BB3D8");

void func_002AFB10(void *arg0, s32 arg1, s32 *arg2, s32 *arg3) {
    s32 var_s0;
    s32 var_s2;

    var_s2 = 0;
    var_s0 = func_002BB3D8__func_002AFB10(arg1 << 0x10, M2C_FIELD(arg0, s32 *, 0x134));
    if (M2C_FIELD(arg0, s32 *, 0x1C) == 0) {
        var_s2 = func_002BB3D8__func_002AFB10(M2C_FIELD(arg0, s32 *, 0xC), var_s0);
        var_s0 = func_002BB3D8__func_002AFB10(M2C_FIELD(arg0, s32 *, 0x14), var_s0);
    }
    *arg2 = var_s2;
    *arg3 = var_s0;
}

void func_002AFBA0(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002AFBA8);

s32 func_002B0078(void *arg0, s32 arg1, s32 arg2) {
    u16 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u16 *, 0x178);
    return (s32) (((arg1 << 6) * arg2) + ((s32) (temp_v1 << 0x10) >> 0x11)) / (s16) temp_v1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B00B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B01C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B01E0);

s16 func_002B1590(void *arg0) {
    s16 var_a1;
    void *temp_a0;
    void *temp_v0;

    temp_a0 = M2C_FIELD(arg0, void **, 0x17C);
    temp_v0 = M2C_FIELD(temp_a0, void **, 0x28);
    var_a1 = 0;
    if ((temp_v0 != NULL) && (M2C_FIELD(temp_v0, s16 *, 0x38) == 0x7D2)) {
        var_a1 = M2C_FIELD(M2C_FIELD(temp_a0, void **, 0x38), s16 *, 8);
    }
    return var_a1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B15C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B15C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B15E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B15E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B1720);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B17A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B1850);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B1878);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B1F40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B2138);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B2660);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B2700);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B2748);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B27C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B2860);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B2900);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B29B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B2B60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B3090);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B30A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B30D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B3100);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B3130);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B3360);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B3440);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B3548);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B3A08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B3EB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B3F30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B3FE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B40D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B4108);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B4218);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B4268);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B43D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B4550);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B45E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B4690);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B4A28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B4AB0);

extern M2C_UNK func_002B7758__func_002B4B28(s32, s32 *) __asm__("func_002B7758");

void func_002B4B28(s32 *arg0) {
    func_002B7758__func_002B4B28(*arg0, arg0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B4B48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B4C28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B4CA0);

extern M2C_UNK func_002B7758__func_002B4DB8(s32, s32 *) __asm__("func_002B7758");

void func_002B4DB8(s32 *arg0) {
    if (arg0 != NULL) {
        func_002B7758__func_002B4DB8(*arg0, arg0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B4DE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B4E88);

extern M2C_UNK func_002B7758__func_002B4F80(s32, void *) __asm__("func_002B7758");

void func_002B4F80(void *arg0) {
    if (arg0 != NULL) {
        func_002B7758__func_002B4F80(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, void **, 0xC));
        func_002B7758__func_002B4F80(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, void **, 0x10));
        func_002B7758__func_002B4F80(M2C_FIELD(arg0, s32 *, 0), arg0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B4FC8);

extern M2C_UNK func_002B7758__func_002B50A8(s32, void *) __asm__("func_002B7758");

void func_002B50A8(void *arg0) {
    if (arg0 != NULL) {
        func_002B7758__func_002B50A8(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, void **, 0xC));
        func_002B7758__func_002B50A8(M2C_FIELD(arg0, s32 *, 0), arg0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B50E8);

extern M2C_UNK func_002B7758__func_002B5218(s32, s32 *) __asm__("func_002B7758");

void func_002B5218(s32 *arg0) {
    if (arg0 != NULL) {
        func_002B7758__func_002B5218(*arg0, arg0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B5240);

extern M2C_UNK func_002B7758__func_002B5360(s32, s32 *) __asm__("func_002B7758");

void func_002B5360(s32 *arg0) {
    if (arg0 != NULL) {
        func_002B7758__func_002B5360(*arg0, arg0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B5388);

extern M2C_UNK func_002B7758__func_002B54C8(s32, void *) __asm__("func_002B7758");

void func_002B54C8(void *arg0) {
    if (arg0 != NULL) {
        func_002B7758__func_002B54C8(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, void **, 4));
        func_002B7758__func_002B54C8(M2C_FIELD(arg0, s32 *, 0), arg0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B5508);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B55E8);

extern M2C_UNK func_002B7758__func_002B5718(s32, void *) __asm__("func_002B7758");

void func_002B5718(void *arg0) {
    if (arg0 != NULL) {
        func_002B7758__func_002B5718(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, void **, 0xC));
        func_002B7758__func_002B5718(M2C_FIELD(arg0, s32 *, 0), arg0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B5758);

u16 func_002B5E30(void *arg0) {
    u16 var_v1;
    void *temp_v0;

    if (M2C_FIELD(arg0, u16 *, 0x1C) == 0) {
        temp_v0 = M2C_FIELD(arg0, void **, 0x28);
        var_v1 = 0x800;
        if (temp_v0 != NULL) {
            var_v1 = M2C_FIELD(temp_v0, u16 *, 0x16);
        }
        M2C_FIELD(arg0, u16 *, 0x1C) = var_v1;
    }
    return M2C_FIELD(arg0, u16 *, 0x1C);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B5E58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B5EA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B5EF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B6520);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B67C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B67F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B6A98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B6B28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B6B70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B6BB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B6C00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B6C18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B6D10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B6D18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B6F48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B6F70);

extern M2C_UNK func_002B4A28__func_002B7148(s32) __asm__("func_002B4A28");

void func_002B7148(void *arg0) {
    func_002B4A28__func_002B7148(M2C_FIELD(arg0, s32 *, 0x54));
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
}

extern M2C_UNK func_002B4A28__func_002B7178(s32) __asm__("func_002B4A28");
extern M2C_UNK func_002B4C28__func_002B7178(s32) __asm__("func_002B4C28");
extern M2C_UNK func_002B4DB8__func_002B7178(s32) __asm__("func_002B4DB8");
extern M2C_UNK func_002B4F80__func_002B7178(s32) __asm__("func_002B4F80");
extern M2C_UNK func_002B50A8__func_002B7178(s32) __asm__("func_002B50A8");
extern M2C_UNK func_002B5218__func_002B7178(s32) __asm__("func_002B5218");
extern M2C_UNK func_002B5360__func_002B7178(s32) __asm__("func_002B5360");
extern M2C_UNK func_002B54C8__func_002B7178(s32) __asm__("func_002B54C8");
extern M2C_UNK func_002B5718__func_002B7178(s32) __asm__("func_002B5718");
extern M2C_UNK func_002B7758__func_002B7178(s32, void *) __asm__("func_002B7758");
extern M2C_UNK func_002BA6A0__func_002B7178(s32) __asm__("func_002BA6A0");
extern M2C_UNK func_002C37A0__func_002B7178(s32) __asm__("func_002C37A0");
extern M2C_UNK func_002C40D8__func_002B7178(s32) __asm__("func_002C40D8");

void func_002B7178(void *arg0, s32 *arg1) {
    if (arg1 != NULL) {
        *arg1 = 0;
    }
    func_002B50A8__func_002B7178(M2C_FIELD(arg0, s32 *, 0x24));
    func_002B4C28__func_002B7178(M2C_FIELD(arg0, s32 *, 0));
    func_002B5218__func_002B7178(M2C_FIELD(arg0, s32 *, 0x28));
    func_002B4DB8__func_002B7178(M2C_FIELD(arg0, s32 *, 0x44));
    func_002B4DB8__func_002B7178(M2C_FIELD(arg0, s32 *, 0x48));
    func_002B4F80__func_002B7178(M2C_FIELD(arg0, s32 *, 0x4C));
    func_002B4F80__func_002B7178(M2C_FIELD(arg0, s32 *, 0x50));
    func_002B5360__func_002B7178(M2C_FIELD(arg0, s32 *, 0x2C));
    func_002B54C8__func_002B7178(M2C_FIELD(arg0, s32 *, 0x30));
    func_002B5718__func_002B7178(M2C_FIELD(arg0, s32 *, 0x34));
    func_002C40D8__func_002B7178(M2C_FIELD(arg0, s32 *, 0x38));
    func_002C37A0__func_002B7178(M2C_FIELD(arg0, s32 *, 0x3C));
    func_002B4A28__func_002B7178(M2C_FIELD(arg0, s32 *, 0x54));
    func_002BA6A0__func_002B7178(M2C_FIELD(arg0, s32 *, 0x20));
    func_002B7758__func_002B7178(M2C_FIELD(arg0, s32 *, 0xC8), M2C_FIELD(arg0, void **, 0x14));
    func_002B7758__func_002B7178(M2C_FIELD(arg0, s32 *, 0xC8), arg0);
}

s16 func_002B7230(void *arg0) {
    return (s16) (M2C_FIELD(arg0, u8 *, 1) | (M2C_FIELD(arg0, u8 *, 0) << 8));
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B7250);

void func_002B7258(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x8C) = 0x5500AAFF;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B7268);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B7378);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B7430);

extern M2C_UNK func_002B30D0__func_002B7498(void *) __asm__("func_002B30D0");
extern M2C_UNK func_002B7430__func_002B7498() __asm__("func_002B7430");

void func_002B7498(void *arg0) {
    func_002B7430__func_002B7498();
    func_002B30D0__func_002B7498(M2C_FIELD(arg0, void **, 0xC));
    func_002B30D0__func_002B7498(arg0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B74D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B7600);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B7758);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B7828);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B7870);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B78A0);

s32 func_002B7958(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8) - M2C_FIELD(arg0, s32 *, 0xC);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B7968);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B7970);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B7A20);

void func_002B7A98(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
}

void func_002B7AA8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + arg1);
}

s32 func_002B7AB8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4) - M2C_FIELD(arg0, s32 *, 0xC);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B7AC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B7B38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B7B80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B7CB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B7D38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B8010);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B8098);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B86E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B8890);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B8B80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B8E58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B99A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B9A58);

s32 func_002B9E90(void *arg0, s32 arg1) {
    return (s32) ((arg1 * M2C_FIELD(arg0, s32 *, 0xA8)) + M2C_FIELD(arg0, s32 *, 0xB0)) >> M2C_FIELD(arg0, s16 *, 0xB4);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B9EB0);

extern M2C_UNK func_002BB3D8__func_002B9F18(M2C_UNK, s32) __asm__("func_002BB3D8");

void func_002B9F18(void *arg0, M2C_UNK arg1) {
    func_002BB3D8__func_002B9F18(arg1, M2C_FIELD(arg0, s32 *, 0xA4));
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002B9F40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BA388);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BA6A0);

s32 func_002BA780(void *arg0) {
    s32 var_a1;

    var_a1 = 0;
    if ((arg0 != NULL) && (M2C_FIELD(arg0, s32 *, 0) == 0xA5A0F5A5)) {
        var_a1 = M2C_FIELD(arg0, s32 *, 0x3E0) == 0x0FA55AF0;
    }
    return var_a1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BA7B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BA808);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BAE38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BAF38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BAFF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BB128);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BB1F0);

extern M2C_UNK func_002B7758__func_002BB2C0(s32, void *) __asm__("func_002B7758");
extern s32 func_002BA780__func_002BB2C0() __asm__("func_002BA780");

s32 func_002BB2C0(void *arg0) {
    if (arg0 != NULL) {
        if (func_002BA780__func_002BB2C0() != 0) {
            func_002B7758__func_002BB2C0(M2C_FIELD(arg0, s32 *, 0x3D8), arg0);
            goto block_6;
        }
        return -1;
    }
block_6:
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BB308);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BB378);

void func_002BB380(void *arg0, s32 arg1) {
    s16 temp_a2;
    s32 temp_a1;
    s32 var_a3;
    s32 var_t1;
    void *var_v1;

    temp_a1 = arg1 - 1;
    do {
        var_t1 = 0;
        if (temp_a1 > 0) {
            var_v1 = arg0;
            var_a3 = temp_a1;
            do {
                temp_a2 = M2C_FIELD(var_v1, s16 *, 0);
                var_a3 -= 1;
                if (M2C_FIELD(var_v1, s16 *, 2) < temp_a2) {
                    M2C_FIELD(var_v1, s16 *, 0) = (s16) (u16) M2C_FIELD(var_v1, s16 *, 2);
                    var_t1 = 1;
                    M2C_FIELD(var_v1, s16 *, 2) = temp_a2;
                }
                var_v1 += 2;
            } while (var_a3 != 0);
        }
    } while (var_t1 != 0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BB3D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BB440);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BB4B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BB518);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BB5B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BB5B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BB718);

void func_002BB840(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BB848);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BB868);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BB8F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BB948);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BB990);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BB9E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BBA30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BBA88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BBA90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BBB20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BBC00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BBD78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BBDA8);

extern s32 func_002BB4B0__func_002BBDD8(M2C_UNK, s16) __asm__("func_002BB4B0");

s32 func_002BBDD8(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_s1;

    temp_s1 = func_002BB4B0__func_002BBDD8(arg1, M2C_FIELD(arg0, s16 *, 0x14));
    return temp_s1 + func_002BB4B0__func_002BBDD8(arg2, M2C_FIELD(arg0, s16 *, 0x16));
}

extern s32 func_002BB4B0__func_002BBE30(M2C_UNK, s16) __asm__("func_002BB4B0");

s32 func_002BBE30(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_s1;

    temp_s1 = func_002BB4B0__func_002BBE30(arg1, M2C_FIELD(arg0, s16 *, 0x1C));
    return temp_s1 + func_002BB4B0__func_002BBE30(arg2, M2C_FIELD(arg0, s16 *, 0x1E));
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BBE88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BBE90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BBE98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BBF18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BBF50);

s32 func_002BBFA8(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x28), s32 *, 0x60);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BBFB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BBFF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BC080);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BC228);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BC2C0);

void func_002BC4B8(void *arg0) {
    s16 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s16 *, 0x40);
    if ((u32) ((temp_v1 + 0x3FF) & 0xFFFF) < 0x7FFU) {
        if (temp_v1 < 0) {
            M2C_FIELD(arg0, s16 *, 0x40) = -0x4000;
            return;
        }
        M2C_FIELD(arg0, s16 *, 0x40) = 0x4000;
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BC4F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BC558);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BC590);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BC5C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BC658);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BC6C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BC798);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BC8E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BC9A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BCA10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BCA68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BCA90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BCAB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BCAE0);

void func_002BCE38(void *arg0) {
    void *temp_a1;

    temp_a1 = M2C_FIELD(arg0, void **, 0x20);
    M2C_FIELD(arg0, void **, 0x20) = (void *) (temp_a1 - 4);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x28), s32 *, 0x6C) = (s32) M2C_FIELD(temp_a1, s32 *, -4);
}

void func_002BCE58(void *arg0) {
    void *temp_a1;

    temp_a1 = M2C_FIELD(arg0, void **, 0x20);
    M2C_FIELD(arg0, void **, 0x20) = (void *) (temp_a1 - 4);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x28), s32 *, 0x58) = (s32) M2C_FIELD(temp_a1, s32 *, -4);
}

void func_002BCE78(void *arg0) {
    void *temp_a1;

    temp_a1 = M2C_FIELD(arg0, void **, 0x20);
    M2C_FIELD(arg0, void **, 0x20) = (void *) (temp_a1 - 4);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x28), s32 *, 0x5C) = (s32) M2C_FIELD(temp_a1, s32 *, -4);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BCE98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BCEE8);

void func_002BCF50(void *arg0) {
    s32 temp_a1;
    s32 temp_t1;
    void *temp_a0;

    temp_a0 = M2C_FIELD(arg0, void **, 0x20);
    temp_t1 = M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, void **, 0x20) = (void *) (temp_a0 - 4);
    temp_a1 = M2C_FIELD(arg0, s32 *, 0x24) + (M2C_FIELD(temp_a0, s32 *, -4) * 0x2C);
    switch (temp_t1) {                              /* irregular */
    case 22:
        M2C_FIELD(arg0, s32 *, 0x10) = temp_a1;
        M2C_FIELD(arg0, s32 *, 0xC) = temp_a1;
        /* fallthrough */
    case 19:
        M2C_FIELD(arg0, s32 *, 8) = temp_a1;
        return;
    case 20:
        M2C_FIELD(arg0, s32 *, 0xC) = temp_a1;
        return;
    case 21:
        M2C_FIELD(arg0, s32 *, 0x10) = temp_a1;
        return;
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BCFD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BD028);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BD078);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BD138);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BD2B8);

void func_002BD308(void *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x20);
    M2C_FIELD(temp_v0, s32 *, 0) = (s32) M2C_FIELD(temp_v0, s32 *, -4);
    M2C_FIELD(arg0, void **, 0x20) = (void *) (temp_v0 + 4);
}

void func_002BD320(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) *M2C_FIELD(arg0, s32 **, 0x28);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BD330);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BD360);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BD388);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BD3B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BD400);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BD430);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BD508);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BD678);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BDAC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BDC30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BDCE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BDD20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BDE58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BE098);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BE128);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BE338);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BE4C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BE5A8);

void func_002BE690(void *arg0) {
    void *temp_a1;

    temp_a1 = M2C_FIELD(arg0, void **, 0x20);
    M2C_FIELD(arg0, void **, 0x20) = (void *) (temp_a1 - 4);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x28), u16 *, 0x86) = (u16) M2C_FIELD(temp_a1, u16 *, -4);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BE6B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BE6F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BE750);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BE7C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BE830);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BE860);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BE8E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BE950);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BECB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BED70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BEDA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BEDD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BEE00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BEE30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BEE90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BEEF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BEF88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BEFF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BF038);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BF0D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BF1A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BF2C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BF330);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BF350);

void func_002BF3A8(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x28), s8 *, 0x8A) = 1;
}

void func_002BF3B8(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x28), s8 *, 0x8A) = 0;
}

void func_002BF3C8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) - 4);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BF3D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BF548);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BF628);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BF6A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BF770);

void func_002BF7F8(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BF800);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BF828);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BF858);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BF888);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BF8D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BF8E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BF980);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BFBB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BFEC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BFF28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002BFFF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C00D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C0128);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C0198);

void func_002C0290(void *arg0) {
    s32 temp_a1;
    s32 temp_a3;
    u8 *temp_v1_2;
    u8 *temp_v1_3;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0x20);
    M2C_FIELD(arg0, void **, 0x20) = (void *) (temp_v1 - 4);
    temp_a3 = M2C_FIELD(temp_v1, s32 *, -4);
    temp_a1 = M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x28);
    if (M2C_FIELD(arg0, s16 *, 0x18) != 0) {
        temp_v1_2 = temp_a1 + temp_a3;
        *temp_v1_2 &= 0xFE;
    }
    temp_v1_3 = temp_a1 + temp_a3;
    if (M2C_FIELD(arg0, s16 *, 0x1A) != 0) {
        *temp_v1_3 &= 0xFD;
    }
}

void func_002C02E8(void *arg0) {
    void *temp_a1;

    temp_a1 = M2C_FIELD(arg0, void **, 0x20);
    M2C_FIELD(arg0, void **, 0x20) = (void *) (temp_a1 - 4);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x28), u16 *, 0x82) = (u16) M2C_FIELD(temp_a1, u16 *, -4);
}

void func_002C0308(void *arg0) {
    void *temp_a1;

    temp_a1 = M2C_FIELD(arg0, void **, 0x20);
    M2C_FIELD(arg0, void **, 0x20) = (void *) (temp_a1 - 4);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x28), u16 *, 0x84) = (u16) M2C_FIELD(temp_a1, u16 *, -4);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C0328);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C04B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C04E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C0518);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C0550);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C0580);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C05C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C0600);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C0E90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C11D0);

extern M2C_UNK func_002B7758__func_002C1250(s32, void *) __asm__("func_002B7758");

void func_002C1250(void *arg0) {
    func_002B7758__func_002C1250(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, void **, 0xC));
    func_002B7758__func_002C1250(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, void **, 0x18));
    func_002B7758__func_002C1250(M2C_FIELD(arg0, s32 *, 0), arg0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C1298);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C1348);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C1430);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C14E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C1590);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C15D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C1778);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C20E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C2308);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C2400);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C2458);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C25A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C28D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C2C00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C2C50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C2F38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C3138);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C3238);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C3390);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C33E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C34D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C34F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C3608);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C3730);

extern M2C_UNK func_002B7758__func_002C37A0(s32, void *) __asm__("func_002B7758");

void func_002C37A0(void *arg0) {
    if (arg0 != NULL) {
        func_002B7758__func_002C37A0(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, void **, 0x10));
        func_002B7758__func_002C37A0(M2C_FIELD(arg0, s32 *, 0), arg0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C37E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C3F90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C3FB8);

extern M2C_UNK func_002B7758__func_002C40D8(s32, s32 *) __asm__("func_002B7758");

void func_002C40D8(s32 *arg0) {
    if (arg0 != NULL) {
        func_002B7758__func_002C40D8(*arg0, arg0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C4100);

extern M2C_UNK func_002C4240__func_002C4190(s32, M2C_UNK) __asm__("func_002C4240");
extern s32 D_0038D880__func_002C4190 __asm__("D_0038D880");

void func_002C4190(void) {
    if (D_0038D880__func_002C4190 != 0) {
        func_002C4240__func_002C4190(D_0038D880__func_002C4190, 3);
    }
    D_0038D880__func_002C4190 = 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C41C8);

extern M2C_UNK func_002C4ED0__func_002C4240(s32, M2C_UNK) __asm__("func_002C4ED0");
extern M2C_UNK func_002C76B0__func_002C4240(s32 *, M2C_UNK) __asm__("func_002C76B0");

void func_002C4240(s32 *arg0, s32 arg1) {
    s32 temp_a0;

    temp_a0 = *arg0;
    if (temp_a0 != 0) {
        func_002C4ED0__func_002C4240(temp_a0, 3);
    }
    if (arg1 & 1) {
        func_002C76B0__func_002C4240(arg0, 4);
    }
}

extern M2C_UNK func_002C4F40__func_002C4290(s32) __asm__("func_002C4F40");

void func_002C4290(s32 *arg0) {
    func_002C4F40__func_002C4290(*arg0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C42B0);

extern M2C_UNK func_002C50A8__func_002C42B8(s32) __asm__("func_002C50A8");

void func_002C42B8(s32 *arg0) {
    func_002C50A8__func_002C42B8(*arg0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C42D8);

extern M2C_UNK func_002C5578__func_002C4318(s32) __asm__("func_002C5578");

void func_002C4318(s32 *arg0) {
    func_002C5578__func_002C4318(*arg0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C4338);

extern M2C_UNK func_002C76E8__func_002C4378(s32) __asm__("func_002C76E8");

void func_002C4378(s32 *arg0) {
    func_002C76E8__func_002C4378(*arg0);
}

extern M2C_UNK func_002C5978__func_002C4398(s32) __asm__("func_002C5978");

void func_002C4398(s32 *arg0) {
    func_002C5978__func_002C4398(*arg0);
}

extern M2C_UNK func_002C5AA8__func_002C43B8(s32) __asm__("func_002C5AA8");

void func_002C43B8(s32 *arg0) {
    func_002C5AA8__func_002C43B8(*arg0);
}

extern M2C_UNK func_002C5A08__func_002C43D8(s32) __asm__("func_002C5A08");

void func_002C43D8(s32 *arg0) {
    func_002C5A08__func_002C43D8(*arg0);
}

extern M2C_UNK func_002C7888__func_002C43F8(s32) __asm__("func_002C7888");

void func_002C43F8(s32 *arg0) {
    func_002C7888__func_002C43F8(*arg0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C4418);

extern M2C_UNK func_002C7768__func_002C4428(s32) __asm__("func_002C7768");

void func_002C4428(s32 *arg0) {
    func_002C7768__func_002C4428(*arg0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C4448);

extern M2C_UNK func_002C7578__func_002C4450(s32) __asm__("func_002C7578");

void func_002C4450(s32 *arg0) {
    func_002C7578__func_002C4450(*arg0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C4470);

s32 func_002C4478(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 0x7C);
}

extern M2C_UNK func_002C75D0__func_002C4488(s32) __asm__("func_002C75D0");

void func_002C4488(s32 *arg0) {
    func_002C75D0__func_002C4488(*arg0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C44A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C4588);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C4620);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C4698);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C48F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C49E0);

s32 func_002C4AF0(void *arg0) {
    return (1 << (M2C_FIELD(arg0, u16 *, 0) * 4)) << M2C_FIELD(arg0, u16 *, 2);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C4B10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C4BD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C4ED0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C4F40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C50A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C50A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C5298);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C53F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C5578);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C5640);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C57C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C5978);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C5A08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C5AA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C5B00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C5C78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C5DB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C61D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C6660);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C6800);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C6F80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C71A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C7340);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C73E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C7408);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C7578);

void func_002C75D0(void) {
}

extern M2C_UNK *D_0038DD28__func_002C75D8 __asm__("D_0038DD28");
extern M2C_UNK *D_0038DD2C__func_002C75D8 __asm__("D_0038DD2C");
extern M2C_UNK *D_0038DD30__func_002C75D8 __asm__("D_0038DD30");
extern M2C_UNK *D_0038DD34__func_002C75D8 __asm__("D_0038DD34");
extern M2C_UNK D_0038DD38__func_002C75D8 __asm__("D_0038DD38");
extern M2C_UNK func_0033E258__func_002C75D8 __asm__("func_0033E258");
extern M2C_UNK func_0033E498__func_002C75D8 __asm__("func_0033E498");
extern M2C_UNK func_0033E508__func_002C75D8 __asm__("func_0033E508");
extern M2C_UNK func_0033E578__func_002C75D8 __asm__("func_0033E578");

void func_002C75D8(s32 arg0, s32 arg1) {
    if ((arg0 != 0) || (arg1 != 0)) {
        M2C_FIELD(&D_0038DD38__func_002C75D8, s32 *, 0) = arg0;
        M2C_FIELD(&D_0038DD38__func_002C75D8, s32 *, 4) = arg1;
        D_0038DD28__func_002C75D8 = &func_0033E258__func_002C75D8;
        D_0038DD2C__func_002C75D8 = &func_0033E498__func_002C75D8;
        D_0038DD30__func_002C75D8 = &func_0033E508__func_002C75D8;
        D_0038DD34__func_002C75D8 = &func_0033E578__func_002C75D8;
    }
}

extern s32 D_0038DC88__func_002C7648 __asm__("D_0038DC88");

void func_002C7648(s32 arg0) {
    D_0038DC88__func_002C7648 = arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C7658);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C76B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C76E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C7768);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C7888);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C78B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C7950);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C79A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C7B38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C7C28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C7C30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C7CE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C7D68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C8AF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C8BA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C8C98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C8D20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C8D68);

void func_002C8DA8(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C8DB0);

void func_002C8E38(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C8E40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C90A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C9160);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C91B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C92F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C9360);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C9390);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C9448);

extern M2C_UNK func_00346B54__func_002C94A0(s32, M2C_UNK, M2C_UNK) __asm__("func_00346B54");

void func_002C94A0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    func_00346B54__func_002C94A0(arg0 + 0xDAC, 0, 0x74);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C94D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C96C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C9738);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C9748);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C9920);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C99A8);

s32 func_002C9A48(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x3C) + ((u32) (M2C_FIELD(arg0, s32 *, 0x40) + 1) >> 1);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C9A60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C9A68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C9CB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C9DF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002C9F30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CA0D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CA230);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CA318);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CA410);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CA528);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CA6B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CA7C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CAA80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CAB78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CB358);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CBC10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CBEF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CC040);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CC348);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CC408);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CC498);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CC570);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CC678);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CC738);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CC7F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CC910);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CCA58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CCB58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CCC50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CCD30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CCE10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CCEF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CCFD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CD0B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CD168);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CD250);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CD348);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CD460);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CD518);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CD660);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CD778);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CD888);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CD950);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CD9F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CDA70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CDB38);

void func_002CDBF0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) + 1);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CDC00);

extern s32 D_0038DD58__func_002CDC78 __asm__("D_0038DD58");

void func_002CDC78(s32 arg0) {
    D_0038DD58__func_002CDC78 = arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CDC88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CDFB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CE090);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CE0D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CE280);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CE6A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CEA30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002CF240);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D0750);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D16E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D21B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D2880);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D2930);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D2B40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D2B80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D2BC8);

s32 func_002D2BD8(void *arg0) {
    return *M2C_FIELD(arg0, s32 **, 0x40);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D2BE8);

s32 func_002D2C48(void *arg0) {
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0x40);
    temp_v0 = M2C_FIELD(temp_v1, void **, 0x1D0);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0x28) = 0;
    }
    temp_v0_2 = M2C_FIELD(temp_v1, void **, 0x1E0);
    if (temp_v0_2 != NULL) {
        M2C_FIELD(temp_v0_2, s32 *, 0x28) = 0;
    }
    temp_v0_3 = M2C_FIELD(temp_v1, void **, 0x1F0);
    if (temp_v0_3 != NULL) {
        M2C_FIELD(temp_v0_3, s32 *, 0x28) = 0;
    }
    temp_v0_4 = M2C_FIELD(temp_v1, void **, 0x1D4);
    if (temp_v0_4 != NULL) {
        M2C_FIELD(temp_v0_4, s32 *, 0x28) = 0;
    }
    temp_v0_5 = M2C_FIELD(temp_v1, void **, 0x1E4);
    if (temp_v0_5 != NULL) {
        M2C_FIELD(temp_v0_5, s32 *, 0x28) = 0;
    }
    temp_v0_6 = M2C_FIELD(temp_v1, void **, 0x1F4);
    if (temp_v0_6 != NULL) {
        M2C_FIELD(temp_v0_6, s32 *, 0x28) = 0;
    }
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D2CA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D2CD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D2D50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D2D78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D2DA0);

void func_002D2DB8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 8);
}

void func_002D2DC8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
}

extern M2C_UNK func_002D3548__func_002D2DD8(s32, M2C_UNK *) __asm__("func_002D3548");
extern M2C_UNK D_003E8718__func_002D2DD8 __asm__("D_003E8718");

s32 func_002D2DD8(s32 arg0, void *arg1, s32 arg2, u32 arg3) {
    s32 temp_v0;
    u32 temp_a0;

    temp_v0 = ((u32) ((M2C_FIELD(arg1, u32 *, 8) + arg3) - 1) / arg3) * arg3;
    temp_a0 = temp_v0 + arg2;
    if ((u32) (M2C_FIELD(arg1, s32 *, 0) + M2C_FIELD(arg1, s32 *, 4)) < temp_a0) {
        func_002D3548__func_002D2DD8(arg0, &D_003E8718__func_002D2DD8);
        return 0;
    }
    M2C_FIELD(arg1, u32 *, 8) = temp_a0;
    return temp_v0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D2E48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D3000);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D3120);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D3168);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D32E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D3348);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D3358);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D33D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D3438);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D3500);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D3510);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D3548);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D35A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D36A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D36C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D37E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D3A90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D3B70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D3C50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D3D80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D3E10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D3E20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D3E30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D3E40);

extern M2C_UNK func_002D9778__func_002D3E50(s32) __asm__("func_002D9778");

s32 func_002D3E50(void *arg0) {
    func_002D9778__func_002D3E50(M2C_FIELD(arg0, s32 *, 0x40) + 0x68);
    return 1;
}

extern M2C_UNK func_002D9860__func_002D3E78(s32) __asm__("func_002D9860");

s32 func_002D3E78(void *arg0) {
    func_002D9860__func_002D3E78(M2C_FIELD(arg0, s32 *, 0x40) + 0x68);
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D3EA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D40F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D47F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D4C18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D4E38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D4EB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D4F48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D5000);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D50D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D5180);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D5238);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D5330);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D5430);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D54D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D5580);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D5660);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D5748);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D5820);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D58F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D5A10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D5B28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D5B88);

void func_002D5BE8(s32 arg0) {
    *(s32 *)0x10002010 = (*(s32 *)0x10002010 & 0xFF7FFFFF) | (arg0 << 0x17);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D5C10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D5EA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D5EC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D6050);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D6160);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D6278);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D63A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D65A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D6668);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D6B10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D6B98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D6D38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D6E88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D6EB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D7020);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D71A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D7418);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D7538);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D7648);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D77B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D7838);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D78A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D79C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D7A88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D7BB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D7DA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D7DE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D7E60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D7F00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D7FC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D80C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D8150);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D8220);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D82B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D8568);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D8608);

void func_002D8898(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 8) != 2) {
        M2C_FIELD(arg0, s32 *, 8) = 2;
        M2C_FIELD(arg0, s32 *, 0xC4) = (s32) M2C_FIELD(arg0, s32 *, 0x130);
    }
    M2C_FIELD(arg0, s32 *, 0x838) = 1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D88C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D8A38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D8B48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D8D00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D8E70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D8EF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D9020);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D9168);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D9328);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D9400);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D9688);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D9700);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D9778);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D9860);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D99B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D9A18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D9A90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D9CC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D9D00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D9D28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D9D60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D9D68);

extern M2C_UNK func_00346B54__func_002D9E10(M2C_UNK *, M2C_UNK, M2C_UNK) __asm__("func_00346B54");
extern M2C_UNK D_004BBD00__func_002D9E10 __asm__("D_004BBD00");

void func_002D9E10(void) {
    func_00346B54__func_002D9E10(&D_004BBD00__func_002D9E10, 0, 0x18);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D9E38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D9EE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002D9FA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DA0C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DA2E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DA438);

extern f32 D_0038E098__func_002DA550 __asm__("D_0038E098");

void func_002DA550(f32 arg0) {
    D_0038E098__func_002DA550 = arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DA560);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DA790);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DA900);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DACF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DB3D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DB438);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DB498);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DB698);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DB750);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DB790);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DB9B8);

extern s32 D_004C192C__func_002DB9C0 __asm__("D_004C192C");

void func_002DB9C0(s32 arg0) {
    D_004C192C__func_002DB9C0 = arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DB9D0);

extern M2C_UNK D_004BBFB0__func_002DBBB8 __asm__("D_004BBFB0");

void func_002DBBB8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 4) = &D_004BBFB0__func_002DBBB8;
    M2C_FIELD(arg0, s32 *, 0x274) = (s32) M2C_FIELD(&D_004BBFB0__func_002DBBB8, s32 *, 0x19C);
}

void func_002DBBD0(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DBBD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DBDD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DC238);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DC358);

s32 func_002DC360(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 8) + 1;
    M2C_FIELD(arg0, s32 *, 8) = temp_v0;
    if (temp_v0 >= 0x3C) {
        M2C_FIELD(arg0, s32 *, 8) = 0;
        temp_v0_2 = M2C_FIELD(arg0, s32 *, 4) + 1;
        M2C_FIELD(arg0, s32 *, 4) = temp_v0_2;
        if (temp_v0_2 >= 0x3C) {
            M2C_FIELD(arg0, s32 *, 4) = 0;
            M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 1);
        }
        return 1;
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DC3B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DC3C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DC4F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DC630);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DC668);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DCAA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DCE18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DD1D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DDAB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DDAD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DDBA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DDBD8);

extern M2C_UNK func_002DDBD8__func_002DDC70(M2C_UNK, M2C_UNK) __asm__("func_002DDBD8");

void func_002DDC70(void) {
    func_002DDBD8__func_002DDC70(1, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DDC90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DDD88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DDDC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DDF08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DDF38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DDF70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DE078);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DE178);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DE318);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DE648);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DE720);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DE8B0);

s32 func_002DE8F0(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, u8 *, 0x93E) & 2) {
        return arg1 + 2;
    }
    return arg1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DE910);

extern f32 D_00394A7C__func_002DE9B0 __asm__("D_00394A7C");
extern f32 D_004BBF94__func_002DE9B0 __asm__("D_004BBF94");

void func_002DE9B0(void *arg0) {
    f32 temp_f2;

    if (!(M2C_FIELD(arg0, u16 *, 0x926) & 0x400)) {
        temp_f2 = M2C_FIELD(arg0, f32 *, 0x374) - (M2C_FIELD(arg0, f32 *, 0x378) * ((((M2C_FIELD(arg0, f32 *, 0x350) / M2C_FIELD(arg0, f32 *, 0x354)) * 0.02f) + 0.01f) * D_00394A7C__func_002DE9B0) * (D_004BBF94__func_002DE9B0 * 0.016666668f));
        M2C_FIELD(arg0, f32 *, 0x374) = temp_f2;
        if (temp_f2 < 0.0f) {
            M2C_FIELD(arg0, f32 *, 0x374) = 0.0f;
            M2C_FIELD(arg0, s32 *, 0x37C) = 0;
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DEA48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DEA90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DEF80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DF140);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DF1E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DF328);

extern M2C_UNK func_00346B54__func_002DF658(M2C_UNK *, M2C_UNK, M2C_UNK) __asm__("func_00346B54");
extern M2C_UNK D_004C1948__func_002DF658 __asm__("D_004C1948");

void func_002DF658(void) {
    func_00346B54__func_002DF658(&D_004C1948__func_002DF658, 0, 0x54);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DF680);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DF6F0);

extern M2C_UNK func_002DF6F0__func_002DF710(M2C_UNK, M2C_UNK) __asm__("func_002DF6F0");

void func_002DF710(void) {
    func_002DF6F0__func_002DF710(1, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DF730);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DF7C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DF938);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DFB68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DFBF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DFC98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DFD28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DFDB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DFE50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DFED0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002DFF60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E0308);

void *func_002E0310(void *arg0, void *arg1) {
    void *temp_a2;
    void *temp_a3;

    temp_a2 = arg1 + 0xC;
    temp_a3 = arg0 + 0xC;
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
    M2C_FIELD(temp_a3, f32 *, 4) = (f32) M2C_FIELD(temp_a2, f32 *, 4);
    M2C_FIELD(temp_a3, f32 *, 8) = (f32) M2C_FIELD(temp_a2, f32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg1, s32 *, 0x18);
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E0358);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E1000);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E11D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E1368);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E14A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E1548);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E16D0);

extern M2C_UNK func_002E16D0__func_002E18B8(M2C_UNK, M2C_UNK) __asm__("func_002E16D0");

void func_002E18B8(void) {
    func_002E16D0__func_002E18B8(1, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E18D8);

f32 func_002E1940(f32 arg0, f32 arg1) {
    f32 var_f12;

    var_f12 = arg0 - arg1;
    if (fabsf(var_f12) > 180.0f) {
        if (var_f12 < 0.0f) {
            var_f12 += 360.0f;
        } else {
            var_f12 -= 360.0f;
        }
    }
    return var_f12;
}

extern M2C_UNK func_002E18D8__func_002E1990(f32) __asm__("func_002E18D8");

void func_002E1990(f32 arg0, f32 arg1) {
    func_002E18D8__func_002E1990(arg0 + arg1);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E19B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E1A90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E1AC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E1B00);

void *func_002E1B80(void *arg0, void *arg1, void *arg2) {
    M2C_FIELD(arg2, f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 0) + M2C_FIELD(arg1, f32 *, 0));
    M2C_FIELD(arg2, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 4) + M2C_FIELD(arg1, f32 *, 4));
    M2C_FIELD(arg2, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) + M2C_FIELD(arg1, f32 *, 8));
    return arg2;
}

void *func_002E1BB8(void *arg0, void *arg1, void *arg2) {
    M2C_FIELD(arg2, f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 0) - M2C_FIELD(arg1, f32 *, 0));
    M2C_FIELD(arg2, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 4) - M2C_FIELD(arg1, f32 *, 4));
    M2C_FIELD(arg2, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) - M2C_FIELD(arg1, f32 *, 8));
    return arg2;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E1BF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E1C20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E1C50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E1CC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E1D38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E1D88);

void func_002E1E10(void *arg0, void *arg1, void *arg2) {
    M2C_FIELD(arg2, f32 *, 0) = (f32) ((M2C_FIELD(arg0, f32 *, 4) * M2C_FIELD(arg1, f32 *, 8)) - (M2C_FIELD(arg0, f32 *, 8) * M2C_FIELD(arg1, f32 *, 4)));
    M2C_FIELD(arg2, f32 *, 4) = (f32) ((M2C_FIELD(arg0, f32 *, 8) * M2C_FIELD(arg1, f32 *, 0)) - (M2C_FIELD(arg0, f32 *, 0) * M2C_FIELD(arg1, f32 *, 8)));
    M2C_FIELD(arg2, f32 *, 8) = (f32) ((M2C_FIELD(arg0, f32 *, 0) * M2C_FIELD(arg1, f32 *, 4)) - (M2C_FIELD(arg0, f32 *, 4) * M2C_FIELD(arg1, f32 *, 0)));
}

void *func_002E1E78(void *arg0, void *arg1, void *arg2) {
    M2C_FIELD(arg2, f32 *, 0) = (f32) ((M2C_FIELD(arg0, f32 *, 0) * M2C_FIELD(arg1, f32 *, 0)) + (M2C_FIELD(arg0, f32 *, 4) * M2C_FIELD(arg1, f32 *, 0x10)) + (M2C_FIELD(arg0, f32 *, 8) * M2C_FIELD(arg1, f32 *, 0x20)) + M2C_FIELD(arg1, f32 *, 0x30));
    M2C_FIELD(arg2, f32 *, 4) = (f32) ((M2C_FIELD(arg0, f32 *, 0) * M2C_FIELD(arg1, f32 *, 4)) + (M2C_FIELD(arg0, f32 *, 4) * M2C_FIELD(arg1, f32 *, 0x14)) + (M2C_FIELD(arg0, f32 *, 8) * M2C_FIELD(arg1, f32 *, 0x24)) + M2C_FIELD(arg1, f32 *, 0x34));
    M2C_FIELD(arg2, f32 *, 8) = (f32) ((M2C_FIELD(arg0, f32 *, 0) * M2C_FIELD(arg1, f32 *, 8)) + (M2C_FIELD(arg0, f32 *, 4) * M2C_FIELD(arg1, f32 *, 0x18)) + (M2C_FIELD(arg0, f32 *, 8) * M2C_FIELD(arg1, f32 *, 0x28)) + M2C_FIELD(arg1, f32 *, 0x38));
    return arg2;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E1F28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E2000);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E2100);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E21A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E2238);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E22E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E2388);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E2430);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E2558);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E2638);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E2748);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E2918);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E2990);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E2A50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E2B98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E2C30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E2C80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E2CB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E2CF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E2DD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E2ED0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E2F50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E3078);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E30D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E3478);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E3720);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E37B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E3838);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E38A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E3910);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E3A10);

extern M2C_UNK func_002E3A10__func_002E3A48(M2C_UNK, M2C_UNK) __asm__("func_002E3A10");

void func_002E3A48(void) {
    func_002E3A10__func_002E3A48(1, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E3A68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E3B58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E3D10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E3E60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E4808);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E49F8);

extern M2C_UNK func_002E4808__func_002E4B90() __asm__("func_002E4808");

void func_002E4B90(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x80) = -1;
    func_002E4808__func_002E4B90();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E4BB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E4E50);

s32 func_002E4E78(void *arg0) {
    return (u32) (M2C_FIELD(arg0, s32 *, 0x318) - 0x33) < 0x20U;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E4E88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E4EF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E4F60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E4F90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E5030);

extern M2C_UNK func_002E50A8__func_002E5088() __asm__("func_002E50A8");

void func_002E5088(void) {
    func_002E50A8__func_002E5088();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E50A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E5190);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E5198);

extern M2C_UNK D_004C1B88__func_002E51A0 __asm__("D_004C1B88");

void func_002E51A0(s32 *arg0, s32 *arg1, M2C_UNK **arg2) {
    *arg0 = 0x2C5;
    *arg1 = 0xA4;
    *arg2 = &D_004C1B88__func_002E51A0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E51C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E53F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E5428);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E5528);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E55B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E5790);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E5880);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E5AA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E5B78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E5C78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E5D08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E5DB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E5DE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E5E20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E5E88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E5FF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E6260);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E66E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E67C8);

void func_002E6D88(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E6D90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E6F48);

void func_002E6F98(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E6FA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E6FB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E7148);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E71F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E72A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E72E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E74E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E7548);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E75E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E78D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E7AB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E7BD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E7C08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E7CC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E7D38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E7EB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E7FA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E8038);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E8138);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E8160);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E8188);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E81B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E8208);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E8628);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E8950);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E8BA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E8C18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E8F30);

extern s32 D_004C2180__func_002E9068 __asm__("D_004C2180");

void func_002E9068(void *arg0) {
    if ((D_004C2180__func_002E9068 & 1) && (M2C_FIELD(arg0, s32 *, 0x28) == 0) && (M2C_FIELD(arg0, s32 *, 0x9F0) & 0x2F800)) {
        D_004C2180__func_002E9068 |= 0x40;
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E90A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E9238);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E9370);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E9600);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E9740);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E9858);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E99D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E9A98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E9BC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E9DC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002E9F20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002EA340);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002EA358);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002EA3B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002EA3E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002EA4A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002EA630);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002EA718);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002EA8D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002EA9E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002EAC80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002EACB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002EB218);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002EB360);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002EB3E8);

extern M2C_UNK func_002EB4A0__func_002EB468(s32) __asm__("func_002EB4A0");

void func_002EB468(void) {
    s32 var_s0;

    var_s0 = 0;
    do {
        func_002EB4A0__func_002EB468(var_s0);
        var_s0 += 1;
    } while (var_s0 < 0x10);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002EB4A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002EB528);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002EB568);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002EB8A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002EBA70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002EBB98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002EBBF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002EBCD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002EBE90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002EBF90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002EC188);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002EC640);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002EC878);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002ECBB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002ECC60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002ECCD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002ED098);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002ED220);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002ED2B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002ED308);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002ED4A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002ED578);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002ED648);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002ED8F0);

extern M2C_UNK func_002ED8F0__func_002ED910(M2C_UNK, M2C_UNK) __asm__("func_002ED8F0");

void func_002ED910(void) {
    func_002ED8F0__func_002ED910(1, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002ED930);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002EDDB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002EDE90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002EE048);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002EE150);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002EE268);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002EE2F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002EE780);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002EED20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002EF120);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002EF480);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002EF650);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002EF7F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F0F60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F0FE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F10D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F1148);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F12D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F1338);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F1448);

extern M2C_UNK func_002F5090__func_002F21A0(s32, void **, s32) __asm__("func_002F5090");
extern M2C_UNK func_002F5398__func_002F21A0(s32, void **, s32) __asm__("func_002F5398");

s32 func_002F21A0(s32 arg0, void **arg1) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 var_a2;
    void *temp_a0;
    void *temp_a0_2;

    temp_a0 = *arg1;
    var_a2 = 0;
    if ((M2C_FIELD(temp_a0, s32 *, 0) & 0xFF0) == 0x1A0) {
        var_a2 = 1;
        M2C_FIELD(temp_a0, s32 *, 0x80) = (s32) (M2C_FIELD(temp_a0, s32 *, 0x80) | 0x1000);
        temp_a0_2 = *arg1;
        M2C_FIELD(temp_a0_2, s32 *, 0x7C) = (s32) (M2C_FIELD(temp_a0_2, s32 *, 0x7C) | 0x1000);
        M2C_FIELD(*arg1, s32 *, 0x58) = 0;
        M2C_FIELD(*arg1, s32 *, 0) = 0;
    }
    temp_a1 = M2C_FIELD(*arg1, s32 *, 0);
    if (((temp_a1 & 0xFF0) == 0x80) || (temp_a1 == 1)) {
        func_002F5090__func_002F21A0(arg0, arg1, var_a2);
        var_a2 = 1;
    }
    temp_a1_2 = M2C_FIELD(*arg1, s32 *, 0);
    if (((temp_a1_2 & 0xFF0) == 0x190) || (temp_a1_2 == 1)) {
        func_002F5398__func_002F21A0(arg0, arg1, var_a2);
        var_a2 = 1;
    }
    return var_a2;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F2278);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F41A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F4A78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F4C88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F4E70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F4F10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F5000);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F5080);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F5090);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F5398);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F5648);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F5760);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F5840);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F5980);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F5A58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F5B68);

extern M2C_UNK func_002F5B68__func_002F68C0(M2C_UNK, M2C_UNK) __asm__("func_002F5B68");

void func_002F68C0(void) {
    func_002F5B68__func_002F68C0(1, 0xFFFF);
}

extern M2C_UNK func_002F5B68__func_002F68E0(M2C_UNK, M2C_UNK) __asm__("func_002F5B68");

void func_002F68E0(void) {
    func_002F5B68__func_002F68E0(0, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F6900);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F6AA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F6B10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F6B58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F6CE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F6E40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F6E98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F70B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F7330);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F7350);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F7450);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F74E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F7618);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F7668);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F7770);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F77D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F7880);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F7998);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F7A50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F7AE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F7BB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F7CA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F7D78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F7E40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F7EC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F8158);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F8308);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F83B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F8560);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F86A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F86E8);

s32 func_002F87B0(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 0x30) != 0x1E;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F87C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F8838);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F88A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F8970);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F8A48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F8AE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F8B50);

s32 func_002F8BF0(void *arg0) {
    s32 var_v0;

    var_v0 = 1;
    if (!(M2C_FIELD(arg0, f32 *, 0x834) > 40.0f)) {
        var_v0 = 0;
    }
    return var_v0;
}

s32 func_002F8C18(void *arg0) {
    s32 var_v0;

    var_v0 = 1;
    if (!(M2C_FIELD(arg0, f32 *, 0x834) > 19.0f)) {
        var_v0 = 0;
    }
    return var_v0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F8C40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F8CB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F8D18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F8D88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F8E50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F8EC0);

extern s32 D_00444C04__func_002F8F58 __asm__("D_00444C04");

s32 func_002F8F58(s32 arg0) {
    return M2C_FIELD(((arg0 * 0x34) + D_00444C04__func_002F8F58), s32 *, 0x18) == 8;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F8F80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F90B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F9220);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F93B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F9420);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F9468);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F9488);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F9528);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F95B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F9840);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F9B38);

s32 func_002F9D90(void *arg0) {
    return M2C_FIELD(*M2C_FIELD(arg0, void ***, 4), s32 *, 0x28) == M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x28);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F9DB0);

extern M2C_UNK func_002E1AC8__func_002F9E60() __asm__("func_002E1AC8");

void func_002F9E60(void) {
    func_002E1AC8__func_002F9E60();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F9E80);

void func_002F9F10(void *arg0, void **arg1) {
    void *temp_a1;

    temp_a1 = *arg1;
    if (M2C_FIELD(temp_a1, s32 *, 0x74) == M2C_FIELD(arg0, s32 *, 0x30)) {
        M2C_FIELD(temp_a1, s32 *, 0x9C) = (s32) (M2C_FIELD(temp_a1, s32 *, 0x9C) + 1);
        return;
    }
    M2C_FIELD(temp_a1, s32 *, 0x9C) = 0;
}

void func_002F9F40(void **arg0) {
    void *temp_a0;

    temp_a0 = *arg0;
    if (M2C_FIELD(temp_a0, s32 *, 0xA0) == M2C_FIELD(temp_a0, s32 *, 0)) {
        M2C_FIELD(temp_a0, s32 *, 0xA4) = (s32) (M2C_FIELD(temp_a0, s32 *, 0xA4) + 1);
        return;
    }
    M2C_FIELD(temp_a0, s32 *, 0xA4) = 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002F9F70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FA0F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FA240);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FA278);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FA3C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FA3E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FA488);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FAA40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FAB18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FAE30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FAEA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FB188);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FB1E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FB3B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FB4A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FB920);

extern s32 D_004C4CE0__func_002FB9E8 __asm__("D_004C4CE0");

s32 func_002FB9E8(void) {
    return D_004C4CE0__func_002FB9E8 + 0xC;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FB9F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FBA20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FBA58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FBB60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FC5D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FC5E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FC878);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FC9F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FCC80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FCDF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FCFE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FD078);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FD0B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FD720);

s32 func_002FD898(f32 *arg0, f32 *arg1, void *arg2) {
    s32 var_v0;

    *arg0 = (M2C_FIELD(arg2, f32 *, 4) + M2C_FIELD(arg2, f32 *, 0x10) + M2C_FIELD(arg2, f32 *, 0x1C) + M2C_FIELD(arg2, f32 *, 0x28)) * 0.25f;
    *arg1 = (M2C_FIELD(arg2, f32 *, 0xC) + M2C_FIELD(arg2, f32 *, 0x18) + M2C_FIELD(arg2, f32 *, 0x24) + M2C_FIELD(arg2, f32 *, 0x30)) * 0.25f;
    var_v0 = 0;
    if (!(fabsf(M2C_FIELD(arg2, f32 *, 0x34)) < fabsf(M2C_FIELD(arg2, f32 *, 0x3C)))) {
        var_v0 = 1;
    }
    return var_v0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FD918);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FDA98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FDC00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FDCA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FDE88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FDF70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FDFF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FE0F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FE1E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FE368);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FE450);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FE4C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FE638);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FE808);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FE868);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FE988);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FEA38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FEC00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FEE98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FF048);

extern M2C_UNK func_002FEE98__func_002FF078() __asm__("func_002FEE98");
extern M2C_UNK func_002FF0D8__func_002FF078(s32) __asm__("func_002FF0D8");

void func_002FF078(s32 arg0) {
    func_002FEE98__func_002FF078();
    func_002FF0D8__func_002FF078(arg0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FF0A8);

void func_002FF0D8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, u8 *, 0x936) = (u8) (M2C_FIELD(arg0, u8 *, 0x936) & 0xFB);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FF0F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FF150);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FF198);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FF228);

/* Define um valor (ou incrementa, se receber -1) e liga a flag de "alterado". */
typedef struct {
    /* 0x000 */ char unk0[0x34];
    /* 0x034 */ s32 value;
    /* 0x038 */ char unk38[0x936 - 0x38];
    /* 0x936 */ u8 flags;
} Unk2FF2B0;

void func_002FF2B0(Unk2FF2B0 *s, s32 value) {
    if (value == -1) {
        s->value++;
    } else {
        s->value = value;
    }
    s->flags |= 1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FF2D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FF2F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FF390);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FF528);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FF690);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FF710);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FF908);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FFC28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FFCD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FFDB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FFEC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_002FFFF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00300298);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003004B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00300558);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003005A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00300678);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003007E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003008C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00300B58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00300FC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00301058);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00301150);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00301218);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00301318);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003015A8);

void func_00301670(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00301678);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00301828);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00301AA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00301C08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00301E98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00302090);

extern M2C_UNK func_00302090__func_003020C0() __asm__("func_00302090");
extern f32 D_004BBF94__func_003020C0 __asm__("D_004BBF94");

void func_003020C0(void *arg0) {
    f32 temp_f0;

    temp_f0 = M2C_FIELD(arg0, f32 *, 0x4F0) - D_004BBF94__func_003020C0;
    M2C_FIELD(arg0, f32 *, 0x4F0) = temp_f0;
    if (temp_f0 < 0.0f) {
        func_00302090__func_003020C0();
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00302100);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003023D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003024B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00302690);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00302AA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00302E10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00302F18);

extern M2C_UNK func_00346B54__func_00303278(M2C_UNK *, M2C_UNK, M2C_UNK) __asm__("func_00346B54");
extern M2C_UNK D_004CBFB0__func_00303278 __asm__("D_004CBFB0");

void func_00303278(void) {
    func_00346B54__func_00303278(&D_004CBFB0__func_00303278, 0, 0x32);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003032A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003033D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00303AF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00303DF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00303FA8);

s32 func_00304090(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 0x30) == 0x60;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003040A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00304188);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00304368);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00304640);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003046E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003048D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00304998);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00304A30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00304BB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00304CF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00304F20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00305348);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00305818);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00305890);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00305B30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00305C08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00305D00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00305DD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00305EA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00306038);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003060D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003062C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00306460);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003064C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00306530);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003066C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003067A0);

extern f32 D_00394AD8__func_00306930 __asm__("D_00394AD8");
extern f32 D_00394C08__func_00306930 __asm__("D_00394C08");
extern f32 D_004BBF94__func_00306930 __asm__("D_004BBF94");

void func_00306930(void *arg0) {
    f32 temp_f0;

    if (!(M2C_FIELD(arg0, u8 *, 0x939) & 0x20)) {
        M2C_FIELD(arg0, f32 *, 0x844) = (f32) (M2C_FIELD(arg0, f32 *, 0x844) + ((((f32) M2C_FIELD(arg0, s32 *, 0xB44) * (D_00394C08__func_00306930 * 0.2f)) + 10.0f) * D_00394AD8__func_00306930 * (D_004BBF94__func_00306930 * 0.016666668f)));
    }
    if (M2C_FIELD(arg0, u8 *, 0x93E) & 2) {
        M2C_FIELD(arg0, f32 *, 0x844) = 500.0f;
    }
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x364) * 5.0f;
    if (temp_f0 < M2C_FIELD(arg0, f32 *, 0x844)) {
        M2C_FIELD(arg0, f32 *, 0x844) = temp_f0;
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003069F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00306AE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00306B40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00306FC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00306FF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00307250);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00307B18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00308220);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00308390);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003085D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00308738);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003088B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00308910);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00308A30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00309060);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00309188);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003092C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00309520);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003096B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00309A80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00309FA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030A190);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030A868);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030AC70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030AE70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030AEF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030AFD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030B038);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030B408);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030B4D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030B550);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030B928);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030BB40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030BC78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030BEF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030C030);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030C0F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030C200);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030C2D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030C3F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030C5E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030C6B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030C7A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030C8F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030CA70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030CB70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030CBD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030CDA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030CE10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030CFD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030D070);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030D120);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030D9B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030DE10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030DEF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030E078);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030E270);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030E390);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030E4C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030E650);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030EA68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030EE18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030EF10);

void func_0030F0A0(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030F0A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030F548);

void func_0030F650(void) {
}

void func_0030F658(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030F660);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030F8B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030F940);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030FAD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030FE30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030FEA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0030FF00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00310418);

void func_00310548(void) {
}

void func_00310550(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00310558);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003109D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00310AE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00310E40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00311140);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003111E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003112F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003115C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00311750);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003117A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003119D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00311C38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00311E00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00311FA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003122D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00312428);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00312540);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003127E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00312A58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00312CD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00312DF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00313018);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003139C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00314A20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00314B60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00314CF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00314D58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00314F20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00315108);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003152B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003155B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00315688);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00315758);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00315888);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00315A70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00315BD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00316688);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003167F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00316938);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003169B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00316A70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00316B40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00316E78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00317208);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00317580);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00317AA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00317C20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00317C60);

extern s32 func_002E4E78__func_00317CE8(void *) __asm__("func_002E4E78");
extern M2C_UNK func_002E8138__func_00317CE8(f32, void *, s32) __asm__("func_002E8138");

void func_00317CE8(void *arg0, s32 arg1) {
    f32 temp_f2;
    f32 var_f12;
    s32 var_a1;

    var_a1 = arg1;
    var_f12 = 0.15f;
    if (var_a1 != 0) {
        var_f12 = ((M2C_FIELD(arg0, f32 *, 0xA0) / M2C_FIELD(arg0, f32 *, 0xA4)) * 0.125f) + 0.15f;
    } else {
        temp_f2 = (f32) M2C_FIELD(arg0, s32 *, 0x2F0);
        if (temp_f2 < M2C_FIELD(arg0, f32 *, 0x9C)) {
            var_a1 = 1;
            var_f12 = ((M2C_FIELD(arg0, f32 *, 0xA0) / (M2C_FIELD(arg0, f32 *, 0xA4) - temp_f2)) * 0.125f) + 0.15f;
        }
    }
    if (var_a1 != 0) {
        func_002E8138__func_00317CE8(var_f12, arg0, var_a1);
        if (func_002E4E78__func_00317CE8(arg0) != 0) {
            M2C_FIELD(arg0, u16 *, 0x924) = (u16) (M2C_FIELD(arg0, u16 *, 0x924) | 0x30);
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00317DA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00317FD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00318298);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00318448);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003185A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00318708);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003188F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00318968);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00318E38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00319218);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003192A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003196D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00319CF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031A3D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031A660);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031A718);

extern void *D_0039E1E0__func_0031A900 __asm__("D_0039E1E0");

s32 func_0031A900(s32 arg0) {
    M2C_UNK (*temp_v0)();

    temp_v0 = M2C_FIELD(D_0039E1E0__func_0031A900, M2C_UNK (**)(), 0xC);
    if (temp_v0 != NULL) {
        temp_v0();
    }
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031A940);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031A970);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031A9E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031AA00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031AA20);

extern M2C_UNK func_0031B220__func_0031AA30() __asm__("func_0031B220");

void func_0031AA30(void) {
    func_0031B220__func_0031AA30();
}

extern M2C_UNK func_0031B628__func_0031AA50() __asm__("func_0031B628");

void func_0031AA50(void) {
    func_0031B628__func_0031AA50();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031AA70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031AE48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031B220);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031B628);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031BA30);

extern s32 D_0039E1E0__func_0031BAB0 __asm__("D_0039E1E0");

void func_0031BAB0(s32 arg0) {
    D_0039E1E0__func_0031BAB0 = arg0;
}

extern M2C_UNK func_00330730__func_0031BAC0(M2C_UNK *, s32 *, s32) __asm__("func_00330730");
extern M2C_UNK D_0039E1E8__func_0031BAC0 __asm__("D_0039E1E8");

void func_0031BAC0(s32 *arg0) {
    func_00330730__func_0031BAC0(&D_0039E1E8__func_0031BAC0, arg0, *arg0);
}

extern M2C_UNK func_0031A940__func_0031BAE8(s32) __asm__("func_0031A940");
extern M2C_UNK func_00331288__func_0031BAE8(void (*)()) __asm__("func_00331288");
extern s32 D_0039E204__func_0031BAE8 __asm__("D_0039E204");

void func_0031BAE8(void) {
    if (D_0039E204__func_0031BAE8 != 0) {
        func_0031A940__func_0031BAE8(D_0039E204__func_0031BAE8);
        D_0039E204__func_0031BAE8 = 0;
        func_00331288__func_0031BAE8(func_0031BAE8);
    }
}

extern s32 func_0031A900__func_0031BB30(M2C_UNK *) __asm__("func_0031A900");
extern M2C_UNK func_00331218__func_0031BB30(M2C_UNK *) __asm__("func_00331218");
extern s32 D_0039E204__func_0031BB30 __asm__("D_0039E204");
extern M2C_UNK D_0039E220__func_0031BB30 __asm__("D_0039E220");
extern M2C_UNK func_0031BAE8__func_0031BB30 __asm__("func_0031BAE8");

void func_0031BB30(void) {
    if (D_0039E204__func_0031BB30 == 0) {
        D_0039E204__func_0031BB30 = func_0031A900__func_0031BB30(&D_0039E220__func_0031BB30);
        func_00331218__func_0031BB30(&func_0031BAE8__func_0031BB30);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031BB78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031BBB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031BBF8);

void func_0031BC80(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031BC88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031BCD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031BE70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031C000);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031C190);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031C2F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031C470);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031C498);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031C4A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031C570);

extern M2C_UNK func_0031C4A8__func_0031C690(M2C_UNK) __asm__("func_0031C4A8");

void func_0031C690(void) {
    func_0031C4A8__func_0031C690(0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031C6B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031C6C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031C790);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031C800);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031C870);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031C878);

extern M2C_UNK func_0031C8A0__func_0031C880() __asm__("func_0031C8A0");

void func_0031C880(void) {
    func_0031C8A0__func_0031C880();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031C8A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031C8E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031C948);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031C9B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031CD98);

extern M2C_UNK func_00330730__func_0031CDC8() __asm__("func_00330730");

void func_0031CDC8(void) {
    func_00330730__func_0031CDC8();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031CDE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031CE08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031CE28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031CE48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031CE68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031CE78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031CEA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031CF80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031D070);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031D0F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031D158);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031D160);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031D208);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031D238);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031D368);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031D398);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031D4A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031D748);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031D848);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031D9B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031DAF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031E2F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031E330);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031E338);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031E488);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031E4A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031E4B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031E568);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031E570);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031E5B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031E658);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031E778);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031E7F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031E848);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031E888);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031E8A8);

extern M2C_UNK (*D_0039F9DC__func_0031E8C0)() __asm__("D_0039F9DC");

void func_0031E8C0(s8 *arg0) {
    *arg0 = 0;
    D_0039F9DC__func_0031E8C0();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031E8E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031FA68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031FC18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0031FEE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003200B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003202B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00320570);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00320658);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00320858);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00320A30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00320B00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00320B70);

extern M2C_UNK D_003A77C0__func_00320BF0 __asm__("D_003A77C0");
extern M2C_UNK *D_004CC818__func_00320BF0 __asm__("D_004CC818");

void func_00320BF0(void) {
    D_004CC818__func_00320BF0 = &D_003A77C0__func_00320BF0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00320C08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00320C78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00320CA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00320CD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00320CF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00320D08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00320D20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003217C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00321808);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00321840);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003218B8);

extern s32 D_0039F9D4__func_003218F8 __asm__("D_0039F9D4");
extern s32 D_0039F9D8__func_003218F8 __asm__("D_0039F9D8");
extern s32 D_0039F9DC__func_003218F8 __asm__("D_0039F9DC");

void func_003218F8(s32 arg0, s32 arg1, s32 arg2) {
    D_0039F9D4__func_003218F8 = arg0;
    D_0039F9D8__func_003218F8 = arg1;
    D_0039F9DC__func_003218F8 = arg2;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00321918);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00321978);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003219E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00321CA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00321CF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00321EF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00322018);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003221A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003223C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00322458);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003225E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00322670);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00322950);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003229A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00322CB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00322D58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00322F20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032331C);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00323360);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00323380);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003233E0);

extern M2C_UNK func_00330730__func_00323438() __asm__("func_00330730");

void func_00323438(void) {
    func_00330730__func_00323438();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00323458);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003234C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003234E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00323518);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00323580);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003235C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00323608);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00323660);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00323680);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003236A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00323700);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00323780);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00323818);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003238A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00323928);

s32 func_00323980(s32 arg0, s32 arg1, s32 arg2) {
    return ((arg1 * arg2) + arg0) << 5;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00323990);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00323A28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00323CD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00323F20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00324030);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003242D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00324530);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00324538);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00324618);

s32 func_00324640(s32 arg0, s32 arg1) {
    return ((s32) (((arg0 + 7) & ~7) << 5) >> 3) * ((arg1 + 1) & ~1);
}

s32 func_00324668(s32 arg0, s32 arg1) {
    return ((s32) (((((arg0 + 0xF) & ~0xF) * 0x10) + 0xF) & ~0xF) >> 3) * ((arg1 + 1) & ~1);
}

s32 func_00324698(s32 arg0, s32 arg1) {
    return ((s32) (((((arg0 + 0xF) & ~0xF) * 8) + 0xF) & ~0xF) >> 3) * ((arg1 + 3) & ~3);
}

s32 func_003246C8(s32 arg0, s32 arg1) {
    return ((s32) (((arg0 + 0x1F) & ~0x1F) * 4) >> 3) * ((arg1 + 3) & ~3);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003246F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003247D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003248B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00324990);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00324998);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003249E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00324A38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00324AA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00324B28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00324BE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00324BF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00324C20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00324D50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00324DA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00324E10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00324EF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00324F58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00325178);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003251B8);

extern M2C_UNK func_00353780__func_003252E8(s32) __asm__("func_00353780");
extern s32 D_004CC9CC__func_003252E8 __asm__("D_004CC9CC");

void func_003252E8(void) {
    func_00353780__func_003252E8(D_004CC9CC__func_003252E8);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00325310);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00325430);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003255C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00325858);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00325898);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00325D28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00325E68);

extern M2C_UNK func_00347450__func_003260E8(s32, s32, s32) __asm__("func_00347450");
extern s32 D_003A0374__func_003260E8 __asm__("D_003A0374");
extern s32 D_004CCA00__func_003260E8 __asm__("D_004CCA00");

s32 func_003260E8(s32 arg0, s32 arg1, s32 *arg2, s32 *arg3) {
    void *temp_s0;

    temp_s0 = D_004CCA00__func_003260E8 + ((arg0 - 1) * (D_003A0374__func_003260E8 + 0xC));
    if (arg1 != 0) {
        func_00347450__func_003260E8(arg1, temp_s0 + 0xC, D_003A0374__func_003260E8);
    }
    if (arg2 != NULL) {
        *arg2 = M2C_FIELD(temp_s0, s32 *, 8);
    }
    if (arg3 != NULL) {
        *arg3 = M2C_FIELD(temp_s0, s32 *, 4);
    }
    return M2C_FIELD(temp_s0, s32 *, 8);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00326178);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00326228);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00326338);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00326380);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00326388);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00326408);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00326418);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00326468);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003265F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00326680);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003267B8);

extern M2C_UNK func_003272B0__func_003268E0(void *) __asm__("func_003272B0");
extern M2C_UNK func_003277F8__func_003268E0(void *) __asm__("func_003277F8");
extern void *func_00327800__func_003268E0() __asm__("func_00327800");
extern s32 func_00327990__func_003268E0(M2C_UNK) __asm__("func_00327990");
extern M2C_UNK func_00347450__func_003268E0(s32, s32, M2C_UNK) __asm__("func_00347450");

s32 func_003268E0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0_2;
    void *temp_v0;

    temp_v0 = func_00327800__func_003268E0();
    M2C_FIELD(temp_v0, s32 *, 0x14) = arg2;
    M2C_FIELD(temp_v0, s32 *, 0x10) = arg1;
    M2C_FIELD(temp_v0, s32 *, 0) = (s32) ((M2C_FIELD(temp_v0, s32 *, 0) & 0xFF0FFFFF) | 0x800000);
    M2C_FIELD(temp_v0, s32 *, 0x18) = 1;
    temp_v0_2 = func_00327990__func_003268E0(0x800000);
    M2C_FIELD(temp_v0, s32 *, 0x24) = temp_v0_2;
    if (temp_v0_2 == 0) {
        M2C_FIELD(temp_v0, s32 *, 0xC) = 2;
        func_003277F8__func_003268E0(temp_v0);
    }
    func_00347450__func_003268E0(M2C_FIELD(temp_v0, s32 *, 0x24) + 0x14, arg0, 0x100);
    func_003272B0__func_003268E0(temp_v0);
    return M2C_FIELD(temp_v0, s32 *, 0);
}

extern M2C_UNK func_003272B0__func_00326990(void *) __asm__("func_003272B0");
extern M2C_UNK func_003277F8__func_00326990(void *) __asm__("func_003277F8");
extern void *func_00327800__func_00326990() __asm__("func_00327800");
extern s32 func_00327990__func_00326990(M2C_UNK) __asm__("func_00327990");
extern M2C_UNK func_00347450__func_00326990(s32, s32, M2C_UNK) __asm__("func_00347450");

s32 func_00326990(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0_2;
    void *temp_v0;

    temp_v0 = func_00327800__func_00326990();
    M2C_FIELD(temp_v0, s32 *, 0x14) = arg3;
    M2C_FIELD(temp_v0, s32 *, 0x18) = arg1;
    M2C_FIELD(temp_v0, s32 *, 0x10) = arg2;
    M2C_FIELD(temp_v0, s32 *, 0) = (s32) ((M2C_FIELD(temp_v0, s32 *, 0) & 0xFF0FFFFF) | 0x200000);
    temp_v0_2 = func_00327990__func_00326990(0x200000);
    M2C_FIELD(temp_v0, s32 *, 0x24) = temp_v0_2;
    if (temp_v0_2 == 0) {
        M2C_FIELD(temp_v0, s32 *, 0xC) = 2;
        func_003277F8__func_00326990(temp_v0);
    }
    func_00347450__func_00326990(M2C_FIELD(temp_v0, s32 *, 0x24) + 0x14, arg0, 0x100);
    func_003272B0__func_00326990(temp_v0);
    return M2C_FIELD(temp_v0, s32 *, 0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00326A48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00326AF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00326BD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00326C90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00326D28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00326E58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00326F08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00327048);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00327078);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00327238);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00327240);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003272A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003272B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00327750);

void func_003277F8(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00327800);

extern M2C_UNK func_003312F8__func_00327940(s32, M2C_UNK, M2C_UNK) __asm__("func_003312F8");
extern M2C_UNK func_00331508__func_00327940(M2C_UNK *) __asm__("func_00331508");
extern M2C_UNK func_003315F0__func_00327940(M2C_UNK *) __asm__("func_003315F0");
extern M2C_UNK D_004D1B5C__func_00327940 __asm__("D_004D1B5C");

void func_00327940(s32 arg0) {
    func_00331508__func_00327940(&D_004D1B5C__func_00327940);
    func_003312F8__func_00327940(arg0, 0, 0x30);
    func_003315F0__func_00327940(&D_004D1B5C__func_00327940);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00327990);

extern M2C_UNK func_003312F8__func_00327A50(s32, M2C_UNK, M2C_UNK) __asm__("func_003312F8");
extern M2C_UNK func_00331508__func_00327A50(M2C_UNK *) __asm__("func_00331508");
extern M2C_UNK func_003315F0__func_00327A50(M2C_UNK *) __asm__("func_003315F0");
extern M2C_UNK D_004D1B5C__func_00327A50 __asm__("D_004D1B5C");

void func_00327A50(s32 arg0) {
    func_00331508__func_00327A50(&D_004D1B5C__func_00327A50);
    func_003312F8__func_00327A50(arg0, 0, 0x114);
    func_003315F0__func_00327A50(&D_004D1B5C__func_00327A50);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00327AA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00327AB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00327B50);

extern M2C_UNK func_00331508__func_00327BB8(M2C_UNK *) __asm__("func_00331508");
extern M2C_UNK func_003315F0__func_00327BB8(M2C_UNK *) __asm__("func_003315F0");
extern M2C_UNK D_004D1CA0__func_00327BB8 __asm__("D_004D1CA0");

void *func_00327BB8(void **arg0) {
    void *temp_v0;
    void *var_s0;

    func_00331508__func_00327BB8(&D_004D1CA0__func_00327BB8);
    temp_v0 = *arg0;
    var_s0 = NULL;
    if (temp_v0 != NULL) {
        var_s0 = temp_v0;
        *arg0 = M2C_FIELD(var_s0, void **, 4);
    }
    func_003315F0__func_00327BB8(&D_004D1CA0__func_00327BB8);
    return var_s0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00327C20);

extern s32 D_003A03C0__func_00327C50 __asm__("D_003A03C0");
extern s32 D_004D1C88__func_00327C50 __asm__("D_004D1C88");

s32 *func_00327C50(s32 arg0) {
    s32 *temp_v0;
    s32 temp_a2;

    temp_a2 = arg0 & 0xFF;
    if ((arg0 < 0x100) || (temp_a2 >= D_004D1C88__func_00327C50)) {
        return NULL;
    }
    temp_v0 = D_003A03C0__func_00327C50 + (temp_a2 * 0x30);
    return ((*temp_v0 ^ arg0) != 0) ? NULL : temp_v0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00327CA0);

extern M2C_UNK func_00327CA0__func_00327D08(void *) __asm__("func_00327CA0");
extern M2C_UNK func_00331508__func_00327D08(M2C_UNK *) __asm__("func_00331508");
extern M2C_UNK func_003315F0__func_00327D08(M2C_UNK *) __asm__("func_003315F0");
extern M2C_UNK D_004D1CA0__func_00327D08 __asm__("D_004D1CA0");

void func_00327D08(void *arg0) {
    M2C_UNK (*temp_s3)(s32);
    s32 temp_s0;
    s32 temp_s2;

    func_00331508__func_00327D08(&D_004D1CA0__func_00327D08);
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    temp_s0 = M2C_FIELD(arg0, s32 *, 0x10);
    temp_s3 = M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x18);
    temp_s2 = M2C_FIELD(arg0, s32 *, 0xC);
    func_003315F0__func_00327D08(&D_004D1CA0__func_00327D08);
    if (temp_s0 != 0) {
        if (temp_s2 == 0) {
            func_00327CA0__func_00327D08(arg0);
        }
    } else if (temp_s3 != NULL) {
        temp_s3(M2C_FIELD(arg0, s32 *, 0));
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00327D98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00327DD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00327EC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00327FA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003280A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00328188);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00328190);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00328248);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00328308);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00328310);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003283A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00328400);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00328518);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003285F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00328620);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00328690);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003286D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00328708);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003287E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00328828);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00328868);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00328968);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003289C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00328A60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00328AB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00328AF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00328B10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00328B48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00328CA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00328CA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00328E08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00328E10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00328E58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00328EE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00328EF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00328F10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00328F30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00328F68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00328FA0);

extern s32 func_00328F30__func_00328FF0() __asm__("func_00328F30");

s32 func_00328FF0(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_00328F30__func_00328FF0();
    return (temp_v0 == 0) ? 0 : (arg0 + temp_v0);
}

extern s32 func_00328F68__func_00329020() __asm__("func_00328F68");

s32 func_00329020(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_00328F68__func_00329020();
    return (temp_v0 == 0) ? 0 : (arg0 + temp_v0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00329050);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003290E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00329148);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00329150);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00329198);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00329228);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00329358);

extern M2C_UNK func_00329358__func_003299E0() __asm__("func_00329358");

void func_003299E0(void) {
    func_00329358__func_003299E0();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00329A00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00329A18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00329A50);

extern M2C_UNK func_00326468__func_00329A90(s32, s32) __asm__("func_00326468");
extern M2C_UNK func_00331508__func_00329A90(s32) __asm__("func_00331508");
extern M2C_UNK func_003315F0__func_00329A90(s32) __asm__("func_003315F0");

void func_00329A90(void *arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_v0;

    temp_s1 = arg0 + 4;
    func_00331508__func_00329A90(temp_s1);
    temp_s0 = M2C_FIELD(arg0, s32 *, 0x4C);
    temp_s1_2 = temp_s0 - arg1;
    M2C_FIELD(arg0, s32 *, 0x4C) = temp_s1_2;
    func_003315F0__func_00329A90(temp_s1);
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x44);
    if ((temp_s0 >= temp_v0) && (temp_s1_2 < temp_v0)) {
        M2C_FIELD(arg0, s32 *, 0x48) = 1;
        if (M2C_FIELD(arg0, s32 *, 0x38) == 1) {
            func_00326468__func_00329A90(M2C_FIELD(arg0, s32 *, 0x174), M2C_FIELD(arg0, s32 *, 0x40));
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00329B20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00329BA0);

void *func_00329C18(void *arg0, s32 arg1) {
    s32 temp_v1;
    void *temp_v0;

    temp_v1 = arg1 & 0xFF;
    if (temp_v1 >= M2C_FIELD(arg0, s32 *, 0x18)) {
        return NULL;
    }
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x14) + (temp_v1 * 0x124);
    if (arg1 == M2C_FIELD(temp_v0, s32 *, 0)) {
        return (M2C_FIELD(temp_v0, s32 *, 4) == 0) ? NULL : temp_v0;
    }
    return NULL;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00329C60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00329CD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00329D18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00329F20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00329F60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00329FB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032A0B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032A218);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032A4F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032A520);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032A790);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032A870);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032A920);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032A970);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032A9E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032AA40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032AAA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032AB98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032ACA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032AF28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032B0F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032B200);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032B2E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032B310);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032B348);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032B398);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032B3D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032B4E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032B588);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032B5F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032B618);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032B638);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032B690);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032B6E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032B758);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032B7B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032B808);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032B880);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032B9F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032BAE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032BB38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032BB98);

extern M2C_UNK func_00327750__func_0032BC60(M2C_UNK) __asm__("func_00327750");
extern M2C_UNK func_00357360__func_0032BC60(s32, M2C_UNK, M2C_UNK) __asm__("func_00357360");
extern M2C_UNK func_003577F8__func_0032BC60(s32, M2C_UNK, M2C_UNK) __asm__("func_003577F8");

s32 func_0032BC60(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 temp_s0;

    temp_s0 = arg0 & 0xFFFFFF;
    func_00357360__func_0032BC60(temp_s0, arg2, 0);
    func_003577F8__func_0032BC60(temp_s0, arg1, arg3);
    func_00327750__func_0032BC60(1);
    return 0;
}

extern M2C_UNK func_003260E8__func_0032BCD0(s32, M2C_UNK, M2C_UNK, M2C_UNK) __asm__("func_003260E8");
extern M2C_UNK func_00357360__func_0032BCD0(s32, M2C_UNK, M2C_UNK) __asm__("func_00357360");

void func_0032BCD0(s32 arg0) {
    s32 temp_a0;

    temp_a0 = arg0 & 0xFFFFFF;
    if ((arg0 >> 0x18) == 1) {
        func_003260E8__func_0032BCD0(temp_a0, 0, 0, 0);
        return;
    }
    func_00357360__func_0032BCD0(temp_a0, 0, 2);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032BD20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032BD70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032BE48);

extern M2C_UNK func_0032BE48__func_0032BF00() __asm__("func_0032BE48");

void func_0032BF00(void) {
    func_0032BE48__func_0032BF00();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032BF20);

extern M2C_UNK func_0032BF20__func_0032C0B8() __asm__("func_0032BF20");

void func_0032C0B8(void) {
    func_0032BF20__func_0032C0B8();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032C0D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032C408);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032C410);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032C430);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032CAD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032CAF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032CB00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032CB28);

extern M2C_UNK func_0032CB28__func_0032CB58(M2C_UNK, M2C_UNK) __asm__("func_0032CB28");

void func_0032CB58(void) {
    func_0032CB28__func_0032CB58(1, 0xFFFF);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032CB78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032CB98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032CE38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032CEA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032CF20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032CF60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032CF68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032D260);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032D2A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032D2C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032D2C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032D2D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032D2D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032D3B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032D460);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032D4D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032D5D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032D6B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032D758);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032D828);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032D898);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032DAE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032DC38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032DD88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032DED8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032DEF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032E398);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032E500);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032E510);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032E600);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032E678);

void func_0032E680(s32 arg0, void *arg1, void *arg2, void *arg3) {
    f32 temp_f1;
    s32 var_a0;
    void *var_a1;
    void *var_a3;

    var_a0 = arg0;
    var_a1 = arg1;
    var_a3 = arg3;
    if (var_a0 > 0) {
        do {
            var_a0 -= 1;
            M2C_FIELD(var_a3, f32 *, 0) = (f32) (M2C_FIELD(var_a1, f32 *, 0) - M2C_FIELD(arg2, f32 *, 0));
            M2C_FIELD(var_a3, f32 *, 4) = (f32) (M2C_FIELD(var_a1, f32 *, 4) - M2C_FIELD(arg2, f32 *, 4));
            temp_f1 = M2C_FIELD(var_a1, f32 *, 8);
            var_a1 += 0xC;
            M2C_FIELD(var_a3, f32 *, 8) = (f32) (temp_f1 - M2C_FIELD(arg2, f32 *, 8));
            var_a3 += 0xC;
        } while (var_a0 != 0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032E6D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032E718);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032E768);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032E770);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032E7A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032E7B0);

f32 func_0032E810(void *arg0, void *arg1) {
    return (M2C_FIELD(arg0, f32 *, 0) * M2C_FIELD(arg1, f32 *, 0)) + (M2C_FIELD(arg0, f32 *, 4) * M2C_FIELD(arg1, f32 *, 4)) + (M2C_FIELD(arg0, f32 *, 8) * M2C_FIELD(arg1, f32 *, 8));
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032E840);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032E918);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032E9F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032EA40);

extern f32 func_0032E770__func_0032EA48() __asm__("func_0032E770");

f32 func_0032EA48(void *arg0) {
    return func_0032E770__func_0032EA48() / M2C_FIELD(arg0, f32 *, 0xC);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032EA78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032EAF0);

f32 func_0032EB58(void *arg0, void *arg1) {
    return ((M2C_FIELD(arg0, f32 *, 0) * M2C_FIELD(arg1, f32 *, 0)) + (M2C_FIELD(arg0, f32 *, 4) * M2C_FIELD(arg1, f32 *, 4)) + (M2C_FIELD(arg0, f32 *, 8) * M2C_FIELD(arg1, f32 *, 8))) / (M2C_FIELD(arg0, f32 *, 0xC) * M2C_FIELD(arg1, f32 *, 0xC));
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032EBA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032EBD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032EC00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032ED58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032EE28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032EE40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032EE58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032EEA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032EEC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032EF38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032EF40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032F320);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032F3B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032F428);

s32 func_0032F510(u16 *arg0, void *arg1) {
    return *arg0 - ((M2C_FIELD(arg1, u8 *, 1) << 8) | M2C_FIELD(arg1, u8 *, 0));
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032F530);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032F5B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032F6E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032F718);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032F758);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032F768);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032F788);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032F7D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032F818);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032F838);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032F920);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032F980);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032F9B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032FA90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0032FD98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00330340);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00330388);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00330600);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00330650);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00330730);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003308F8);

extern M2C_UNK func_00353770__func_00330948(s32) __asm__("func_00353770");

void func_00330948(void *arg0) {
    func_00353770__func_00330948(M2C_FIELD(arg0, s32 *, 8));
}

extern M2C_UNK func_00353780__func_00330968(s32) __asm__("func_00353780");
extern M2C_UNK func_00353790__func_00330968(s32) __asm__("func_00353790");
extern s32 D_003A0438__func_00330968 __asm__("D_003A0438");

void func_00330968(void *arg0) {
    if (D_003A0438__func_00330968 != 0) {
        func_00353790__func_00330968(M2C_FIELD(arg0, s32 *, 8));
        return;
    }
    func_00353780__func_00330968(M2C_FIELD(arg0, s32 *, 8));
}

extern M2C_UNK func_003537A0__func_003309A0(s32) __asm__("func_003537A0");

void func_003309A0(void *arg0) {
    func_003537A0__func_003309A0(M2C_FIELD(arg0, s32 *, 8));
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003309C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00330A10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00330A50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00330A60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00330B80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00330C48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00330C70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00330D58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00330E00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00330E58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00330E60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00330ED8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00330F38);

extern M2C_UNK func_003535A0__func_00330FD0() __asm__("func_003535A0");

void func_00330FD0(void) {
    func_003535A0__func_00330FD0();
}

extern s32 D_003A0970__func_00330FF0 __asm__("D_003A0970");

void func_00330FF0(s32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 1:
        D_003A0970__func_00330FF0 = 0x3D86;
        return;
    case 2:
        D_003A0970__func_00330FF0 = 0x3D09;
        return;
    case 3:
        D_003A0970__func_00330FF0 = 0x7080;
        return;
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00331050);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003310C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00331168);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00331180);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003311A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003311F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00331218);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00331288);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003312D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003312F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00331428);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00331498);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003314A0);

extern M2C_UNK func_00353770__func_003314E8(s32) __asm__("func_00353770");

void func_003314E8(s32 *arg0) {
    func_00353770__func_003314E8(*arg0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00331508);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003315F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00331690);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003316C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00331778);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00331878);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00331930);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00331978);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003319E8);

extern M2C_UNK func_003316C0__func_003319F0(s32, M2C_UNK) __asm__("func_003316C0");
extern M2C_UNK func_00331778__func_003319F0() __asm__("func_00331778");
extern s32 D_003A0958__func_003319F0 __asm__("D_003A0958");

void func_003319F0(s32 arg0, M2C_UNK arg1) {
    if (D_003A0958__func_003319F0 == 0) {
        func_00331778__func_003319F0();
    }
    func_003316C0__func_003319F0(arg0, arg1);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00331A40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00331A58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00331B28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00331B88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00331C70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00331C78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00331C88);

extern s32 D_003A0998__func_00331CA0 __asm__("D_003A0998");

s32 func_00331CA0(void) {
    return D_003A0998__func_00331CA0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00331CB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00331D20);

extern s32 D_003A0A18__func_00331D40 __asm__("D_003A0A18");

void func_00331D40(s32 arg0) {
    D_003A0A18__func_00331D40 = arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00331D50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00331D58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00331DA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00331DD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00331EC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00332010);

extern M2C_UNK func_00331DA0__func_003320F8(s32) __asm__("func_00331DA0");

void func_003320F8(s32 *arg0) {
    func_00331DA0__func_003320F8(*arg0);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00332118);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00332320);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00332328);

extern M2C_UNK func_00331DA0__func_003323B8(s32) __asm__("func_00331DA0");

void func_003323B8(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x1E44);
    if (temp_a0 != 0) {
        func_00331DA0__func_003323B8(temp_a0);
        M2C_FIELD(arg0, s32 *, 0x1E44) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x1E58) = 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003323F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003324B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00332580);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00332890);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00332920);

s32 func_00332A08(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_t2;
    s32 var_t4;
    s32 var_t5;
    void *var_t0;

    var_t2 = 0;
    var_t4 = 0x3B9AC9FF;
    var_t5 = 0;
    if (arg2 > 0) {
        var_t0 = arg1;
        do {
            temp_v1 = M2C_FIELD(arg0, u8 *, 0) - M2C_FIELD(var_t0, u8 *, 0);
            temp_v0 = M2C_FIELD(arg0, u8 *, 1) - M2C_FIELD(var_t0, u8 *, 1);
            temp_a1 = M2C_FIELD(arg0, u8 *, 2) - M2C_FIELD(var_t0, u8 *, 2);
            temp_a0 = M2C_FIELD(arg0, u8 *, 3) - M2C_FIELD(var_t0, u8 *, 3);
            temp_v1_2 = (temp_v1 * temp_v1) + (temp_v0 * temp_v0) + (temp_a1 * temp_a1) + (temp_a0 * temp_a0);
            if (temp_v1_2 < var_t4) {
                var_t4 = temp_v1_2;
                var_t5 = var_t2;
            }
            var_t2 += 1;
            var_t0 += 0x14;
        } while (var_t2 < arg2);
    }
    return var_t5;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00332A98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00333438);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003334F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00333700);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00333888);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00333998);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003339F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00333A28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00333AB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00333B68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00333C70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00333ED8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00334370);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00334378);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003344D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003344F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003346E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00334A50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00334CB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00334E50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00334E58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00335190);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003352D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00335630);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003359D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00335B70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00335DC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00336120);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003362E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00336460);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00336468);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00336948);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00336AE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00336EC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003372E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003374C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00337778);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00337AD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00337C98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00337E20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00337E28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00338800);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00338AF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00338FE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00339508);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00339768);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00339AF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00339E98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033A058);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033A1F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033A1F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033A238);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033AF30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033AF38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033AF78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033AF80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033B0B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033B618);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033B968);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033B970);

extern M2C_UNK D_003A1230__func_0033BB00 __asm__("D_003A1230");

M2C_UNK *func_0033BB00(void) {
    return &D_003A1230__func_0033BB00;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033BB10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033BBA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033BC10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033BCB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033BD80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033BE50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033BF08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033BFC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033C060);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033C0B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033C130);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033C140);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033C2B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033C348);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033C3E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033C458);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033C5C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033C8A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033CAA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033CCA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033CE88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033CF20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033CF28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033CFF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033D0C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033D1C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033D2D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033D418);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033D4B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033D538);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033D720);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033D7D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033D838);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033D9A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033DA18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033DA20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033DA88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033DAD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033DAE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033DC00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033DC08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033DD40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033DDF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033DEB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033DF90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033E048);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033E0F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033E158);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033E1B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033E1C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033E230);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033E258);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033E498);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033E508);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033E578);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033E5E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033E650);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033E6C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033E700);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033E760);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033E768);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033E7A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033E7F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033E860);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033E8C8);

s32 func_0033E930(s32 arg0) {
    u32 temp_a0;

    temp_a0 = arg0 & 0xFF;
    return (((temp_a0 / 10U) * 6) + temp_a0) & 0xFF;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033E960);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033E980);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033E9E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033EA50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033EB08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033EBB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033EBE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033EC08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033EC98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033ECA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033ECE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033EEB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033EF08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033EF18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033EF28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033F050);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033F088);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033F148);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033F228);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033F2C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033F3D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033F550);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033F618);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033F670);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033F7F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033F940);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033F9D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033FB10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033FBE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033FD00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033FDC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033FF90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0033FFA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00340180);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00340428);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00340500);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003405E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00340608);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003406F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003407E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00340868);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00340958);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00340A70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00340B90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00340CD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00340DE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00340EE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00340FE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00341110);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00341288);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003413C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00341510);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00341A18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00341B30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00342100);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00342438);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00342828);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003429B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00342CB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003430E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00343488);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00343770);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00343A28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00343C78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00343FA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00344830);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00344C10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00344D48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00344EA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003457F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003458F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00345B90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00345FA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00345FD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00346010);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00346038);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00346238);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00346260);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00346288);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003463E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003468D8);

extern s32 D_003A3174__func_00346908 __asm__("D_003A3174");

s32 func_00346908(void) {
    return D_003A3174__func_00346908;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00346918);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003469AC);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00346A58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00346B54);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00346C0C);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00346D3C);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00346EDC);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00347028);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00347140);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00347288);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00347450);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00347618);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00347620);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00347680);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00347700);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00347708);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003477A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003482B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003483A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003483A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00348400);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00348470);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00348480);

INCLUDE_ASM("asm/nonmatchings/cod/000000", atexit);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00348548);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00348568);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00348590);

INCLUDE_ASM("asm/nonmatchings/cod/000000", exit);

extern M2C_UNK func_00348AD8__func_00348700(s32) __asm__("func_00348AD8");
extern M2C_UNK func_00348B38__func_00348700(s32) __asm__("func_00348B38");
extern s32 func_0034D6E0__func_00348700(s32, s32) __asm__("func_0034D6E0");
extern s32 D_003A3174__func_00348700 __asm__("D_003A3174");

s32 func_00348700(s32 arg0) {
    s32 temp_s0;

    func_00348AD8__func_00348700(D_003A3174__func_00348700);
    temp_s0 = func_0034D6E0__func_00348700(D_003A3174__func_00348700, arg0);
    func_00348B38__func_00348700(D_003A3174__func_00348700);
    return temp_s0;
}

extern M2C_UNK func_00348AD8__func_00348750(s32) __asm__("func_00348AD8");
extern M2C_UNK func_00348B38__func_00348750(s32) __asm__("func_00348B38");
extern M2C_UNK func_0034DE10__func_00348750(s32, s32) __asm__("func_0034DE10");
extern s32 D_003A3174__func_00348750 __asm__("D_003A3174");

void func_00348750(s32 arg0) {
    func_00348AD8__func_00348750(D_003A3174__func_00348750);
    func_0034DE10__func_00348750(D_003A3174__func_00348750, arg0);
    func_00348B38__func_00348750(D_003A3174__func_00348750);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00348798);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00348AD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00348B38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00348B78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00348B98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00348BA8);

extern void *D_003A3174__func_00349588 __asm__("D_003A3174");

s32 func_00349588(void) {
    s32 temp_v1;

    temp_v1 = (M2C_FIELD(D_003A3174__func_00349588, s32 *, 0x58) * 0x41C64E6D) + 0x3039;
    M2C_FIELD(D_003A3174__func_00349588, s32 *, 0x58) = temp_v1;
    return temp_v1 & 0x7FFFFFFF;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003495B8);

extern M2C_UNK func_003495B8__func_0034A4B0(s32, s32, M2C_UNK) __asm__("func_003495B8");
extern s32 D_003A3174__func_0034A4B0 __asm__("D_003A3174");

void func_0034A4B0(s32 arg0, M2C_UNK arg1) {
    func_003495B8__func_0034A4B0(D_003A3174__func_0034A4B0, arg0, arg1);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0034A4E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0034A4E8);

extern M2C_UNK func_0034A4E8__func_0034A6F8(s32, s32, M2C_UNK, M2C_UNK) __asm__("func_0034A4E8");
extern s32 D_003A3174__func_0034A6F8 __asm__("D_003A3174");

void func_0034A6F8(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_0034A4E8__func_0034A6F8(D_003A3174__func_0034A6F8, arg0, arg1, arg2);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0034A730);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0034A7B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0034A7B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0034A808);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0034A880);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0034A8A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0034A950);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0034A9C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0034AA38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0034AAD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0034B068);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0034B170);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0034B240);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0034C288);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0034C438);

extern M2C_UNK func_0034C570__func_0034C540(s32, void *, M2C_UNK, M2C_UNK) __asm__("func_0034C570");

void func_0034C540(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_0034C570__func_0034C540(M2C_FIELD(arg0, s32 *, 0x54), arg0, arg1, arg2);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0034C570);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0034D478);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0034D6E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0034DE10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0034E108);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0034E278);

extern M2C_UNK func_0034E278__func_0034E4A8(s32, s32, M2C_UNK, M2C_UNK) __asm__("func_0034E278");
extern s32 D_003A3174__func_0034E4A8 __asm__("D_003A3174");

void func_0034E4A8(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_0034E278__func_0034E4A8(D_003A3174__func_0034E4A8, arg0, arg1, arg2);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0034E4E0);

extern M2C_UNK D_003FC3A0__func_0034E500 __asm__("D_003FC3A0");

M2C_UNK *func_0034E500(void) {
    return &D_003FC3A0__func_0034E500;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0034E510);

extern M2C_UNK func_0034E500__func_0034E518(s32) __asm__("func_0034E500");
extern s32 D_003A3174__func_0034E518 __asm__("D_003A3174");

void func_0034E518(void) {
    func_0034E500__func_0034E518(D_003A3174__func_0034E518);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0034E540);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0034E630);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0034E820);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0034EC68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0034F298);

extern s32 func_00353E30__func_0034F458(M2C_UNK) __asm__("func_00353E30");
extern s32 D_003FD7C0__func_0034F458 __asm__("D_003FD7C0");

s32 func_0034F458(s32 *arg0, M2C_UNK arg1) {
    s32 temp_v0;

    D_003FD7C0__func_0034F458 = 0;
    temp_v0 = func_00353E30__func_0034F458(arg1);
    if ((temp_v0 == 0xFFFFFFFF) && (D_003FD7C0__func_0034F458 != 0)) {
        *arg0 = D_003FD7C0__func_0034F458;
    }
    return temp_v0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0034F4B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0034F500);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0034F530);

extern M2C_UNK func_00351850__func_0034F648() __asm__("func_00351850");

void func_0034F648(void) {
    func_00351850__func_0034F648();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0034F668);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0034F7D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0034F968);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0034FA10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0034FA48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0034FB50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0034FC88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0034FD10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0034FDD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0034FE08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00350010);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00350110);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00350268);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003502D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00350460);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00350528);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003506C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00350840);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00350900);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00350970);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00350B20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00350D08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00350E80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00350E88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00351150);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00351210);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00351790);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00351850);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00351960);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003519B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003519C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00351A58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00351A88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00351A98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00351B30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00351BF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00351C60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00351CE0);

extern M2C_UNK func_00353150__func_00351D48(s32, s16) __asm__("func_00353150");

void func_00351D48(void *arg0) {
    func_00353150__func_00351D48(M2C_FIELD(arg0, s32 *, 0x54), M2C_FIELD(arg0, s16 *, 0xE));
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00351D68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00351F88);

extern s32 func_00353E20__func_00353150(M2C_UNK) __asm__("func_00353E20");
extern s32 D_003FD7C0__func_00353150 __asm__("D_003FD7C0");

s32 func_00353150(s32 *arg0, M2C_UNK arg1) {
    s32 temp_v0;

    D_003FD7C0__func_00353150 = 0;
    temp_v0 = func_00353E20__func_00353150(arg1);
    if ((temp_v0 == -1) && (D_003FD7C0__func_00353150 != 0)) {
        *arg0 = D_003FD7C0__func_00353150;
    }
    return temp_v0;
}

extern s32 func_00353EE0__func_003531A8(M2C_UNK, M2C_UNK) __asm__("func_00353EE0");
extern s32 D_003FD7C0__func_003531A8 __asm__("D_003FD7C0");

s32 func_003531A8(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_v0;

    D_003FD7C0__func_003531A8 = 0;
    temp_v0 = func_00353EE0__func_003531A8(arg1, arg2);
    if ((temp_v0 == -1) && (D_003FD7C0__func_003531A8 != 0)) {
        *arg0 = D_003FD7C0__func_003531A8;
    }
    return temp_v0;
}

extern s32 func_00353E28__func_00353208(M2C_UNK, M2C_UNK, M2C_UNK) __asm__("func_00353E28");
extern s32 D_003FD7C0__func_00353208 __asm__("D_003FD7C0");

s32 func_00353208(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 temp_v0;

    D_003FD7C0__func_00353208 = 0;
    temp_v0 = func_00353E28__func_00353208(arg1, arg2, arg3);
    if ((temp_v0 == -1) && (D_003FD7C0__func_00353208 != 0)) {
        *arg0 = D_003FD7C0__func_00353208;
    }
    return temp_v0;
}

extern s32 func_00353DA8__func_00353268(M2C_UNK, M2C_UNK, M2C_UNK) __asm__("func_00353DA8");
extern s32 D_003FD7C0__func_00353268 __asm__("D_003FD7C0");

s32 func_00353268(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 temp_v0;

    D_003FD7C0__func_00353268 = 0;
    temp_v0 = func_00353DA8__func_00353268(arg1, arg2, arg3);
    if ((temp_v0 == -1) && (D_003FD7C0__func_00353268 != 0)) {
        *arg0 = D_003FD7C0__func_00353268;
    }
    return temp_v0;
}

extern s32 func_00353D28__func_003532C8(M2C_UNK, M2C_UNK, M2C_UNK) __asm__("func_00353D28");
extern s32 D_003FD7C0__func_003532C8 __asm__("D_003FD7C0");

s32 func_003532C8(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 temp_v0;

    D_003FD7C0__func_003532C8 = 0;
    temp_v0 = func_00353D28__func_003532C8(arg1, arg2, arg3);
    if ((temp_v0 == -1) && (D_003FD7C0__func_003532C8 != 0)) {
        *arg0 = D_003FD7C0__func_003532C8;
    }
    return temp_v0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353340);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353350);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353360);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353370);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353380);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353390);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003533A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003533B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003533C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003533D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003533E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003533F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353400);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353410);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353420);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353430);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353440);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353450);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353460);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353470);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353480);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353490);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003534A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003534B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003534C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003534D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003534E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003534F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353500);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353510);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353520);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353530);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353540);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353550);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353560);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353570);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353580);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353590);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003535A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003535B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003535C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003535D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003535E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003535F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353600);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353610);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353620);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353630);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353640);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353650);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353660);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353670);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353680);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353690);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003536A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003536B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003536C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003536D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003536E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003536F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353700);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353710);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353720);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353730);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353740);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353750);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353760);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353770);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353780);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353790);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003537A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003537B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003537C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003537D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003537E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003537F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353800);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353810);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353820);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353830);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353840);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353850);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353860);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353870);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353880);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353890);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003538A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003538B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003538C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003538D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003538E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003538F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353900);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353910);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353920);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353930);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353940);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353950);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353960);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353970);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353980);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353990);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003539A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003539B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003539C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003539D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", FlushCache);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003539F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353A00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353A10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353A20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353A30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353A40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353A50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353A60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353A70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353A80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353A90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353AA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353AB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353AC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353AD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353AE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353AF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353B00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353B10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353B20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353B30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353B40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353B50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353B60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353B70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353B80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353B90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353BA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353BB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353BC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353BD0);

extern s32 D_003A3988__func_00353BE0 __asm__("D_003A3988");

void func_00353BE0(void) {
    D_003A3988__func_00353BE0 = 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353BF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353C80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353D28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353DA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353E20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353E28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353E30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353EE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353EF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00353FA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00354020);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00354040);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003540A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00354110);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00354178);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003541E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003542B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00354390);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00354428);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003544A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00354570);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00354598);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003545C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00354600);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00354640);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003547D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00354950);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00354A20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00354AE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00354B20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00354BD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00354C08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00354CA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00354E08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00355400);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00355438);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00355498);

void func_003554B8(void *arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003554C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003554E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003554F0);

extern M2C_UNK func_00353490__func_00355770(M2C_UNK, s32) __asm__("func_00353490");
extern M2C_UNK func_00354110__func_00355770(M2C_UNK) __asm__("func_00354110");
extern s32 D_003A399C__func_00355770 __asm__("D_003A399C");
extern s32 D_004D5414__func_00355770 __asm__("D_004D5414");

void func_00355770(void) {
    func_00354110__func_00355770(5);
    func_00353490__func_00355770(5, D_004D5414__func_00355770);
    D_003A399C__func_00355770 = 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003557A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003557C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00355838);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00355888);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003559C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00355A00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00355A40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00355B88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00355C34);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00355C38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00355DD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00355E00);

void func_00355EA8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) & 0xFFFFFFFE);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00355EC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00355EF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00355F38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00356008);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00356048);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00356118);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00356168);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003561A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00356278);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003563B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00356448);

s32 func_00356640(void *arg0) {
    void *temp_a1;

    temp_a1 = M2C_FIELD(arg0, void **, 0);
    if ((temp_a1 == NULL) || (M2C_FIELD(arg0, s32 *, 4) != M2C_FIELD(temp_a1, s32 *, 0x18)) || !(M2C_FIELD(temp_a1, s32 *, 0x10) & 1)) {
        return 0;
    }
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00356680);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00356698);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003566F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00356780);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003567F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00356BA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00356BF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00356C28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00356C38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00356C88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00356E90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00356F20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00356F58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003571E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00357360);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00357598);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003577F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00357AB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00357B18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00357BA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00357C10);

extern M2C_UNK func_00357C10__func_00357C88() __asm__("func_00357C10");

void func_00357C88(void) {
    func_00357C10__func_00357C88();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00357CA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00357CB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00357DB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00357E48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00357E80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00358088);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00358118);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003581B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003581D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003581E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00358408);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00358428);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00358450);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003585A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003585F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00358708);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00358760);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00358778);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003587C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00358800);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00358840);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00358850);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00358858);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00358958);

INCLUDE_ASM("asm/nonmatchings/cod/000000", _InitSys);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003589C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003589D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003589E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00358A18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00358A28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00358A90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00358B40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00358B70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00358B78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00358BA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00358BA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00358BB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00358BC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00358C00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00358C10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00358CE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00358D58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00358D68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00358D78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00358D88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00358EE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00358EE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00358F78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00358F80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00359110);

extern void *D_003A49F8__func_00359198 __asm__("D_003A49F8");

void *func_00359198(void *arg0) {
    void **temp_v0;
    void *temp_v1;

    temp_v0 = M2C_FIELD(arg0, void ***, 4);
    temp_v1 = M2C_FIELD(arg0, void **, 0);
    if (temp_v0 != NULL) {
        *temp_v0 = temp_v1;
    } else {
        D_003A49F8__func_00359198 = temp_v1;
    }
    if (temp_v1 != NULL) {
        M2C_FIELD(temp_v1, void ***, 4) = (void **) M2C_FIELD(arg0, void ***, 4);
    }
    M2C_FIELD(arg0, void ***, 4) = NULL;
    return temp_v1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003591D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00359470);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003594C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003594C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00359538);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00359580);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00359590);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00359640);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00359690);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003596C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003597B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00359838);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003598A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003598B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00359908);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00359968);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00359A98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00359B88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00359BB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00359BC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00359C68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00359CB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00359CB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00359CE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00359D10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00359D18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00359D50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00359D88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00359D98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00359DC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00359DC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00359DD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00359E10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00359E20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00359E30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00359EF8);

extern s32 func_00353BC0__func_00359F08() __asm__("func_00353BC0");
extern M2C_UNK func_00353BD0__func_00359F08() __asm__("func_00353BD0");
extern M2C_UNK func_00359F48__func_00359F08() __asm__("func_00359F48");

void func_00359F08(void) {
    if (func_00353BC0__func_00359F08() == 0x02000000) {
        func_00359F48__func_00359F08();
        return;
    }
    func_00353BD0__func_00359F08();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00359F48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035A140);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035A358);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035A378);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035AA68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035AA78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035AAA0);

void func_0035AAD0(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035AAD8);

extern M2C_UNK (*D_003A505C__func_0035AB30)() __asm__("D_003A505C");

void func_0035AB30(void) {
    D_003A505C__func_0035AB30();
}

extern s32 (*D_003A505C__func_0035AB58)() __asm__("D_003A505C");

s32 func_0035AB58(void) {
    return D_003A505C__func_0035AB58() + 8;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035AB80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035ABA8);

extern s32 (*D_003A505C__func_0035AC10)() __asm__("D_003A505C");

s32 func_0035AC10(void) {
    return D_003A505C__func_0035AC10() + 4;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035AC38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035AF10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035AF18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035AF20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035AFF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035B140);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035B1C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035B248);

void func_0035B2D8(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035B2E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035B610);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035B7F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035B9D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035BA38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035BB28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035BB30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035BBC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035C230);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035C290);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035C298);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035C868);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035CDA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035CED8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035CF78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035D1B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035D210);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035D278);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035D520);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035D688);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035D7A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035D7F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035D8A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035D940);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035D9E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035DA10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035DA68);

extern s32 D_003A5650__func_0035DAA0 __asm__("D_003A5650");

s32 func_0035DAA0(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_003A5650__func_0035DAA0;
    D_003A5650__func_0035DAA0 = arg0;
    return temp_v0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035DAB0);

extern s32 *func_0035AB58__func_0035DAF0() __asm__("func_0035AB58");

s32 func_0035DAF0(void) {
    return *func_0035AB58__func_0035DAF0();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035DB10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035DB48);

extern M2C_UNK func_00348750__func_0035DB70() __asm__("func_00348750");

void func_0035DB70(void) {
    func_00348750__func_0035DB70();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035DB90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035DC00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035DC90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035DD58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035DD88);

s32 func_0035E078(void **arg0) {
    return *M2C_FIELD(*arg0, s32 *(**)(), 4)();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035E0A0);

extern M2C_UNK D_003FCE38__func_0035E0D0 __asm__("D_003FCE38");

M2C_UNK **func_0035E0D0(M2C_UNK **arg0) {
    *arg0 = &D_003FCE38__func_0035E0D0;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035E0E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035E138);

extern M2C_UNK D_003FCE50__func_0035E168 __asm__("D_003FCE50");

M2C_UNK **func_0035E168(M2C_UNK **arg0) {
    *arg0 = &D_003FCE50__func_0035E168;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035E180);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035E1C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035E2D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035E360);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035E390);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035E428);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035E458);

u8 *func_0035E498(u8 *arg0, s32 *arg1) {
    s32 var_a2;
    s32 var_a3;
    u8 *var_a0;
    u8 temp_v1;
    u8 temp_v1_2;

    temp_v1 = *arg0;
    var_a3 = 0;
    var_a0 = arg0 + 1;
    var_a2 = temp_v1 & 0x7F;
    if (temp_v1 & 0x80) {
        do {
            temp_v1_2 = *var_a0;
            var_a3 += 7;
            var_a0 += 1;
            var_a2 |= (temp_v1_2 & 0x7F) << var_a3;
        } while (temp_v1_2 & 0x80);
    }
    *arg1 = var_a2;
    return var_a0;
}

u8 *func_0035E4E0(u8 *arg0, s32 *arg1) {
    s32 var_t0;
    u32 var_a3;
    u8 *var_a0;
    u8 temp_a2;

    var_a0 = arg0;
    var_a3 = 0;
    var_t0 = 0;
    do {
        temp_a2 = *var_a0;
        var_a0 += 1;
        var_t0 |= (temp_a2 & 0x7F) << var_a3;
        var_a3 += 7;
    } while (temp_a2 & 0x80);
    if ((var_a3 < 0x20U) && (temp_a2 & 0x40)) {
        var_t0 |= -1 << var_a3;
    }
    *arg1 = var_t0;
    return var_a0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035E530);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035E630);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035E898);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035E8E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035E968);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035EAA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035EB90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035EC98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035F030);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035F058);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035F0D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035F2A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035F420);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035F450);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035F490);

extern M2C_UNK D_003FCF88__func_0035F4B8 __asm__("D_003FCF88");

void func_0035F4B8(void *arg0, s32 arg1, s32 arg2) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 8) = arg2;
        M2C_FIELD(arg0, s32 *, 0) = arg1;
        M2C_FIELD(arg0, M2C_UNK **, 4) = &D_003FCF88__func_0035F4B8;
    }
}

extern M2C_UNK D_003FCFA0__func_0035F4D8 __asm__("D_003FCFA0");

void func_0035F4D8(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0) = arg1;
        M2C_FIELD(arg0, M2C_UNK **, 4) = &D_003FCFA0__func_0035F4D8;
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035F4F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035F528);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035F5C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035F798);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035F7B8);

extern M2C_UNK func_0035F420__func_0035F808() __asm__("func_0035F420");

void func_0035F808(void) {
    func_0035F420__func_0035F808();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035F828);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035F848);

extern M2C_UNK func_0035F420__func_0035F898() __asm__("func_0035F420");

void func_0035F898(void) {
    func_0035F420__func_0035F898();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035F8B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035F8D0);

extern M2C_UNK func_0035F420__func_0035F920() __asm__("func_0035F420");

void func_0035F920(void) {
    func_0035F420__func_0035F920();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035F940);

extern M2C_UNK D_003FCFB8__func_0035F970 __asm__("D_003FCFB8");

M2C_UNK **func_0035F970(M2C_UNK **arg0) {
    *arg0 = &D_003FCFB8__func_0035F970;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035F988);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035F9D8);

extern M2C_UNK D_003FCFD0__func_0035FA08 __asm__("D_003FCFD0");

M2C_UNK **func_0035FA08(M2C_UNK **arg0) {
    *arg0 = &D_003FCFD0__func_0035FA08;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035FA20);

extern s32 func_0035F450__func_0035FA70() __asm__("func_0035F450");

s32 func_0035FA70(void) {
    return func_0035F450__func_0035FA70() ^ 1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035FA90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035FA98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035FAB0);

extern u32 func_00346EDC__func_0035FAF0(s32, s32) __asm__("func_00346EDC");

u32 func_0035FAF0(s32 *arg0, s32 *arg1) {
    return func_00346EDC__func_0035FAF0(*arg0, *arg1) >> 0x1F;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035FB18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0035FFE0);

extern M2C_UNK D_003FD168__func_00360030 __asm__("D_003FD168");

void func_00360030(void *arg0, s32 arg1, s32 arg2) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 8) = arg2;
        M2C_FIELD(arg0, s32 *, 0) = arg1;
        M2C_FIELD(arg0, M2C_UNK **, 4) = &D_003FD168__func_00360030;
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00360050);

extern M2C_UNK D_003FD138__func_00360078 __asm__("D_003FD138");

void func_00360078(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0) = arg1;
        M2C_FIELD(arg0, M2C_UNK **, 4) = &D_003FD138__func_00360078;
    }
}

extern M2C_UNK D_003FD128__func_00360098 __asm__("D_003FD128");

void func_00360098(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0) = arg1;
        M2C_FIELD(arg0, M2C_UNK **, 4) = &D_003FD128__func_00360098;
    }
}

extern M2C_UNK D_003FD118__func_003600B8 __asm__("D_003FD118");

void func_003600B8(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0) = arg1;
        M2C_FIELD(arg0, M2C_UNK **, 4) = &D_003FD118__func_003600B8;
    }
}

extern M2C_UNK D_003FD108__func_003600D8 __asm__("D_003FD108");

void func_003600D8(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0) = arg1;
        M2C_FIELD(arg0, M2C_UNK **, 4) = &D_003FD108__func_003600D8;
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003600F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003601A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003601E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00360218);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00360250);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00360288);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003602C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003602F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00360330);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00360368);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003603A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003603D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00360410);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00360448);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00360480);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003604B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003604F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00360528);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00360560);

extern M2C_UNK func_0035F420__func_003605B0() __asm__("func_0035F420");

void func_003605B0(void) {
    func_0035F420__func_003605B0();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003605D0);

extern M2C_UNK func_0035F420__func_00360620() __asm__("func_0035F420");

void func_00360620(void) {
    func_0035F420__func_00360620();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00360640);

extern M2C_UNK func_0035F420__func_00360690() __asm__("func_0035F420");

void func_00360690(void) {
    func_0035F420__func_00360690();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003606B0);

extern M2C_UNK func_0035F420__func_00360700() __asm__("func_0035F420");

void func_00360700(void) {
    func_0035F420__func_00360700();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00360720);

extern M2C_UNK func_0035F420__func_00360770() __asm__("func_0035F420");

void func_00360770(void) {
    func_0035F420__func_00360770();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00360790);

extern M2C_UNK func_0035F420__func_003607E0() __asm__("func_0035F420");

void func_003607E0(void) {
    func_0035F420__func_003607E0();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00360800);

extern M2C_UNK func_0035F420__func_00360850() __asm__("func_0035F420");

void func_00360850(void) {
    func_0035F420__func_00360850();
}

void _init(void) {
}

void _fini(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00360880);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00360898);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003608A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003608E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00360918);

void func_00360948(void *arg0, s32 arg1, s32 arg2) {
    s32 *temp_a1;
    s32 temp_a1_2;

    temp_a1 = arg1 + (arg2 * 4);
    M2C_FIELD(arg0, s32 **, 8) = temp_a1;
    if (M2C_FIELD(arg0, s32 *, 0) & 0x03000000) {
        temp_a1_2 = *temp_a1;
        if (temp_a1_2 != 0xFFFFFFFF) {
            M2C_FIELD(arg0, s32 **, 8) = (s32 *) (*M2C_FIELD(arg0, s32 **, 0xC) + temp_a1_2);
        }
    }
}

s32 func_00360990(s32 *arg0) {
    return *arg0 & 0xFF7FFFFF;
}

void func_003609A8(s32 *arg0, s32 arg1) {
    *arg0 = (*arg0 & 0xFF80FFFF) | (arg1 << 0x10);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003609C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00360A28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00360A30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00360A90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00360B30);

void func_00360BC0(void) {
}

void func_00360BC8(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00360BD0);

s32 func_00360BD8(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 4) + (arg1 * 4);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00360BE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00360CA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00360CE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00360D90);

s32 func_003610D0(u32 *arg0, u32 *arg1) {
    u32 temp_a0;
    u32 temp_a1;

    temp_a0 = *arg0;
    temp_a1 = *arg1;
    if (temp_a0 < temp_a1) {
        return -1;
    }
    return temp_a1 < temp_a0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003610F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00361180);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00361220);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003612B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003612F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003613F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003614D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003615D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003616F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003617B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00361890);

s32 func_003618A0(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 4) + (arg1 * 4);
}

s32 func_003618B0(u32 *arg0, u32 *arg1) {
    u32 temp_a0;
    u32 temp_a1;

    temp_a0 = *arg0;
    temp_a1 = *arg1;
    if (temp_a0 < temp_a1) {
        return -1;
    }
    return temp_a1 < temp_a0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003618D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00361910);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00361948);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00361A30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00361B08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00361B28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00361B60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00361CC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00361DE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00361E18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00361E78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00361E98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00361EC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00361ED0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00361EE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00361F18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00361F48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00361FD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00362090);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003620C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003620F8);

extern M2C_UNK func_0011A2F8__func_00362120(void *) __asm__("func_0011A2F8");
extern M2C_UNK func_001F62B8__func_00362120() __asm__("func_001F62B8");
extern M2C_UNK D_003A67A8__func_00362120 __asm__("D_003A67A8");

void func_00362120(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_003A67A8__func_00362120;
    func_001F62B8__func_00362120();
    if (arg1 & 1) {
        func_0011A2F8__func_00362120(arg0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00362170);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00362190);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003621E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00362210);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00362238);

extern M2C_UNK func_003622C0__func_00362268() __asm__("func_003622C0");

void func_00362268(void) {
    func_003622C0__func_00362268();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00362288);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003622C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003622E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00362310);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00362320);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00362328);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00362330);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003624D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00362640);

extern s32 func_00101EF8__func_003628E0(M2C_UNK *, M2C_UNK) __asm__("func_00101EF8");
extern s32 func_001D07F0__func_003628E0(s32, void *, M2C_UNK) __asm__("func_001D07F0");
extern M2C_UNK D_003FDAA0__func_003628E0 __asm__("D_003FDAA0");

void func_003628E0(void *arg0, M2C_UNK arg1) {
    s32 temp_a0;

    temp_a0 = func_00101EF8__func_003628E0(&D_003FDAA0__func_003628E0, 0x21);
    M2C_FIELD(arg0, s32 *, 0x138) = (s32) (M2C_FIELD(arg0, s32 *, 0x138) & 0xFFFDFFFF);
    if ((temp_a0 != 0) && (func_001D07F0__func_003628E0(temp_a0, arg0, arg1) != 0)) {
        M2C_FIELD(arg0, s32 *, 0x138) = (s32) (M2C_FIELD(arg0, s32 *, 0x138) | 0x20000);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00362958);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00362AE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00362B10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00362B70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00362B80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00362BC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00362BD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00362C30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00362CA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00362E60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00363050);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00363140);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00363248);

void func_00363288(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00363290);

extern M2C_UNK func_0011A2F8__func_003632C0(void *) __asm__("func_0011A2F8");
extern M2C_UNK func_0011BA40__func_003632C0() __asm__("func_0011BA40");
extern M2C_UNK D_003A69D8__func_003632C0 __asm__("D_003A69D8");

void func_003632C0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x6C) = &D_003A69D8__func_003632C0;
    func_0011BA40__func_003632C0();
    if (arg1 & 1) {
        func_0011A2F8__func_003632C0(arg0);
    }
}

extern M2C_UNK func_0011A2F8__func_00363310(void *) __asm__("func_0011A2F8");
extern M2C_UNK func_0011BA40__func_00363310() __asm__("func_0011BA40");
extern M2C_UNK D_003A69D8__func_00363310 __asm__("D_003A69D8");

void func_00363310(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x6C) = &D_003A69D8__func_00363310;
    func_0011BA40__func_00363310();
    if (arg1 & 1) {
        func_0011A2F8__func_00363310(arg0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00363360);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00363390);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00363398);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003633A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003633A8);

void func_003633B0(void) {
}

extern M2C_UNK func_00346EDC__func_003633B8(s32, s32) __asm__("func_00346EDC");

void func_003633B8(s32 arg0, s32 arg1) {
    func_00346EDC__func_003633B8(arg0 + 4, arg1 + 4);
}

s32 func_003633D8(void *arg0, void *arg1) {
    return M2C_FIELD(arg0, s32 *, 4) - M2C_FIELD(arg1, s32 *, 4);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003633E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00363428);

void func_00363468(void) {
}

void func_00363470(void) {
}

void func_00363478(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00363480);

extern M2C_UNK func_00133DF8__func_00363490() __asm__("func_00133DF8");

void func_00363490(void) {
    func_00133DF8__func_00363490();
}

void func_003634B0(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003634B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003634F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00363538);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00363568);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003635A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003635E8);

void func_00363628(void) {
}

void func_00363630(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00363638);

void func_00363660(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00363668);

void func_00363690(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00363698);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003636C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003636D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00363738);

void func_00363768(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00363770);

void func_003637A0(void) {
}

extern M2C_UNK func_00133DF8__func_003637A8() __asm__("func_00133DF8");

void func_003637A8(void) {
    func_00133DF8__func_003637A8();
}

void func_003637C8(void) {
}

extern M2C_UNK func_00133DF8__func_003637D0() __asm__("func_00133DF8");

void func_003637D0(void) {
    func_00133DF8__func_003637D0();
}

void func_003637F0(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003637F8);

void func_00363828(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00363830);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00363978);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00363A20);

void func_00363A80(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00363A88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00363AB0);

void func_00363AD8(void) {
}

void func_00363AE0(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00363AE8);

void func_00363B10(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00363B18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00363B40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00363B70);

void func_00363BA0(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00363BA8);

void func_00363BD8(void) {
}

extern M2C_UNK atexit__func_00363BE0(M2C_UNK *) __asm__("atexit");
extern M2C_UNK func_001E1F60__func_00363BE0(M2C_UNK *) __asm__("func_001E1F60");
extern s32 D_00442A20__func_00363BE0 __asm__("D_00442A20");
extern M2C_UNK D_004DF7F8__func_00363BE0 __asm__("D_004DF7F8");
extern M2C_UNK func_00177A10__func_00363BE0 __asm__("func_00177A10");

M2C_UNK *func_00363BE0(void) {
    if (D_00442A20__func_00363BE0 == 0) {
        func_001E1F60__func_00363BE0(&D_004DF7F8__func_00363BE0);
        D_00442A20__func_00363BE0 = 1;
        atexit__func_00363BE0(&func_00177A10__func_00363BE0);
    }
    return &D_004DF7F8__func_00363BE0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00363C38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00363C68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00363C70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00363EB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00363EE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00363F20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00363F28);

void func_00363F30(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00363F38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00363F68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00363F98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00363FC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00363FF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00364028);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00364058);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00364088);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003640B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003640E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00364118);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00364150);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00364160);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00364190);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003641C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003641C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00364298);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003642A0);

extern M2C_UNK func_00118410__func_00364320(void *) __asm__("func_00118410");
extern M2C_UNK func_0011A2F8__func_00364320(void *) __asm__("func_0011A2F8");
extern M2C_UNK func_00182688__func_00364320() __asm__("func_00182688");
extern M2C_UNK D_003A6860__func_00364320 __asm__("D_003A6860");
extern M2C_UNK D_003A6898__func_00364320 __asm__("D_003A6898");
extern M2C_UNK D_003A7670__func_00364320 __asm__("D_003A7670");

void func_00364320(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x10C) = &D_003A7670__func_00364320;
    func_00182688__func_00364320();
    M2C_FIELD(arg0, M2C_UNK **, 0x404) = &D_003A6860__func_00364320;
    M2C_FIELD(arg0, M2C_UNK **, 0x10C) = &D_003A6898__func_00364320;
    func_00118410__func_00364320(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x10C) = &D_003A6860__func_00364320;
    if (arg1 & 1) {
        func_0011A2F8__func_00364320(arg0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00364398);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003643A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003643F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003644E8);

extern M2C_UNK D_003A76B0__func_003645E0 __asm__("D_003A76B0");

void *func_003645E0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x108) = -1;
    M2C_FIELD(arg0, M2C_UNK **, 0x10C) = &D_003A76B0__func_003645E0;
    M2C_FIELD(arg0, s32 *, 0x100) = 0;
    M2C_FIELD(arg0, s32 *, 0x104) = 0;
    M2C_FIELD(arg0, s8 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0x110) = 0;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00364610);

extern M2C_UNK func_001858C0__func_00364640(s32) __asm__("func_001858C0");

void func_00364640(void *arg0) {
    func_001858C0__func_00364640(M2C_FIELD(arg0, s32 *, 0x110));
}

extern M2C_UNK func_00185D60__func_00364660(s32) __asm__("func_00185D60");

void func_00364660(void *arg0) {
    func_00185D60__func_00364660(M2C_FIELD(arg0, s32 *, 0x110));
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00364680);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00364688);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003646E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003647B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00364808);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00364838);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00364868);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003648C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003648E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003648E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003648F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00364920);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00364968);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003649F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00364A38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00364A80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00364AB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00364AB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00364B30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00364BB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00364C18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00364C40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00364C48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00364C78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00364CA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00364CA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00364D20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00364D28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00364D40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00364D78);

void func_00364DA8(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00364DB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00364DD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00364E60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003650C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003651B8);

void func_003651F0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    *M2C_FIELD(arg0, s32 **, 0x18) = 0;
    *M2C_FIELD(arg0, s32 **, 0x20) = 0;
}

void func_00365208(M2C_UNK **arg0, M2C_UNK *arg1) {
    M2C_UNK *temp_v0;

    temp_v0 = *arg0;
    if (temp_v0 != NULL) {
        *temp_v0 = arg1;
    }
    M2C_FIELD(arg1, M2C_UNK **, 4) = temp_v0;
    *arg0 = arg1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00365220);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003652A8);

s32 func_00365308(void **arg0) {
    return *M2C_FIELD(*arg0, s32 **, 0xC);
}

f32 func_00365318(void **arg0) {
    return *M2C_FIELD(*arg0, f32 **, 0xC);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00365328);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00365330);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003653B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00365460);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003656D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00365808);

void func_00365838(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00365840);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00365848);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00365878);

void func_00365890(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00365898);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003658C8);

void func_003658F8(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00365900);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00365920);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00365928);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00365930);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00365970);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003659A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003659C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003659D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00365A10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00365A30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00365A60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00365A70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00365AD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00365AE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00365B08);

extern void *func_0011A238__func_00365B60(M2C_UNK, M2C_UNK *, M2C_UNK) __asm__("func_0011A238");
extern M2C_UNK func_003312D8__func_00365B60(s32, M2C_UNK) __asm__("func_003312D8");
extern M2C_UNK func_003314A0__func_00365B60(s32) __asm__("func_003314A0");
extern M2C_UNK func_00346B54__func_00365B60(s32, M2C_UNK, M2C_UNK) __asm__("func_00346B54");
extern M2C_UNK D_003A7DA8__func_00365B60 __asm__("D_003A7DA8");
extern M2C_UNK D_003D84C8__func_00365B60 __asm__("D_003D84C8");

void *func_00365B60(void) {
    s32 temp_s0;
    void *temp_v0;

    temp_v0 = func_0011A238__func_00365B60(0x18, &D_003D84C8__func_00365B60, 0);
    temp_s0 = temp_v0 + 4;
    M2C_FIELD(temp_v0, M2C_UNK **, 0) = &D_003A7DA8__func_00365B60;
    func_00346B54__func_00365B60(temp_s0, 0, 0x10);
    M2C_FIELD(temp_v0, s32 *, 0x14) = 1;
    func_003312D8__func_00365B60(temp_s0, 0x10);
    func_003314A0__func_00365B60(temp_s0);
    return temp_v0;
}

void func_00365BE0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) + 1);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00365BF0);

extern M2C_UNK func_00331508__func_00365C38(s32) __asm__("func_00331508");

void func_00365C38(s32 arg0) {
    func_00331508__func_00365C38(arg0 + 4);
}

extern M2C_UNK func_003315F0__func_00365C58(s32) __asm__("func_003315F0");

void func_00365C58(s32 arg0) {
    func_003315F0__func_00365C58(arg0 + 4);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00365C78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00365CA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00365D00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00365D20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00365D28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00365D30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00365D98);

void func_00365E08(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00365E18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00365E60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00365E68);

extern M2C_UNK func_0032CF68__func_00365ED8(s32) __asm__("func_0032CF68");
extern M2C_UNK func_00330F38__func_00365ED8(s32, M2C_UNK) __asm__("func_00330F38");

void func_00365ED8(void *arg0) {
    func_00330F38__func_00365ED8(arg0 + 0x14, 0);
    func_0032CF68__func_00365ED8(M2C_FIELD(arg0, s32 *, 0x10));
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00365F10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00365F30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00365F58);

void func_00365F90(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00365F98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00365FA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00365FF8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00366000);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00366008);

extern M2C_UNK func_003312D8__func_00366038(s32, M2C_UNK) __asm__("func_003312D8");

void func_00366038(s32 arg0) {
    func_003312D8__func_00366038(arg0 + 0x20, 0x4A0);
    func_003312D8__func_00366038(arg0, 0x20);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00366070);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003660A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003660E0);

extern s32 func_00353450__func_00366340(M2C_UNK, M2C_UNK *, M2C_UNK, void *) __asm__("func_00353450");
extern M2C_UNK func_00354040__func_00366340(M2C_UNK) __asm__("func_00354040");
extern M2C_UNK func_003540A8__func_00366340(M2C_UNK) __asm__("func_003540A8");
extern M2C_UNK D_003663E0__func_00366340 __asm__("D_003663E0");

void func_00366340(void *arg0) {
    func_00354040__func_00366340(2);
    M2C_FIELD(arg0, s32 *, 0x1808) = func_00353450__func_00366340(2, &D_003663E0__func_00366340, -1, arg0);
    func_003540A8__func_00366340(2);
}

extern M2C_UNK func_00353460__func_00366390(M2C_UNK, s32) __asm__("func_00353460");
extern M2C_UNK func_00354040__func_00366390(M2C_UNK) __asm__("func_00354040");
extern M2C_UNK func_003540A8__func_00366390(M2C_UNK) __asm__("func_003540A8");

void func_00366390(void *arg0) {
    func_00354040__func_00366390(2);
    func_00353460__func_00366390(2, M2C_FIELD(arg0, s32 *, 0x1808));
    func_003540A8__func_00366390(2);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003663D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003663D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00366420);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003664C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00366660);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00366690);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003666D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003666E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003667C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003667F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00366848);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003668A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003668B0);

extern M2C_UNK func_0035F4D8__func_003668B8(s32 *, M2C_UNK *) __asm__("func_0035F4D8");
extern M2C_UNK D_003DB598__func_003668B8 __asm__("D_003DB598");
extern s32 D_003FD728__func_003668B8 __asm__("D_003FD728");

s32 *func_003668B8(void) {
    if (D_003FD728__func_003668B8 == 0) {
        func_0035F4D8__func_003668B8(&D_003FD728__func_003668B8, &D_003DB598__func_003668B8);
    }
    return &D_003FD728__func_003668B8;
}

extern M2C_UNK func_0035F4D8__func_003668F8(s32 *, M2C_UNK *) __asm__("func_0035F4D8");
extern M2C_UNK D_003DB5A8__func_003668F8 __asm__("D_003DB5A8");
extern s32 D_003FD730__func_003668F8 __asm__("D_003FD730");

s32 *func_003668F8(void) {
    if (D_003FD730__func_003668F8 == 0) {
        func_0035F4D8__func_003668F8(&D_003FD730__func_003668F8, &D_003DB5A8__func_003668F8);
    }
    return &D_003FD730__func_003668F8;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00366938);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00366960);

extern M2C_UNK func_0022A300__func_003669C0(M2C_UNK *) __asm__("func_0022A300");
extern s32 D_0037C894__func_003669C0 __asm__("D_0037C894");
extern M2C_UNK D_003DB578__func_003669C0 __asm__("D_003DB578");
extern M2C_UNK D_003DB580__func_003669C0 __asm__("D_003DB580");

void func_003669C0(void) {
    s32 temp_v0;

    temp_v0 = D_0037C894__func_003669C0 - 1;
    D_0037C894__func_003669C0 = temp_v0;
    if (temp_v0 == 0) {
        func_0022A300__func_003669C0(&D_003DB578__func_003669C0);
        func_0022A300__func_003669C0(&D_003DB580__func_003669C0);
    }
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00366A00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00366A38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00366A48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00366A70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00366B18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00366BC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00366BD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00366C08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00366C38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00366C90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00366CA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00366CD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00366D08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00366D60);

s32 func_00366F78(void *arg0, f32 *arg1) {
    *arg1 = (f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), u16 *, 6);
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00366F98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00366FC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00367068);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00367098);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003671C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003672E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00367398);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00367448);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00367470);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00367498);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003674C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003674E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00367510);

s32 func_003675A0(void *arg0, f32 *arg1) {
    *arg1 = (f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), u16 *, 4);
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003675C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003675F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00367620);

void func_00367628(void) {
}

void func_00367630(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00367638);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00367640);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00367648);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00367650);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00367658);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00367660);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00367668);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00367670);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00367678);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00367680);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00367688);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00367690);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00367698);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003676A0);

s32 func_00367728(void *arg0, f32 *arg1) {
    f32 temp_f1;

    temp_f1 = (f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), u16 *, 0xA);
    *arg1 = temp_f1;
    if (M2C_FIELD(arg0, s32 *, 0x14) != 0) {
        *arg1 = temp_f1 / (f32) M2C_FIELD(arg0, u8 *, 0x18);
    }
    return 1;
}

s32 func_00367768(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 4);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00367778);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003678E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00367A00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00367AA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00367B28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00367BC0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00367CF0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00367D08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00367D48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00367E38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00367F28);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00367FB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00368048);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00368178);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00368190);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003681D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003682E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003683D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003684F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003685D8);

extern M2C_UNK func_001F75E8__func_00368610() __asm__("func_001F75E8");
extern M2C_UNK D_003A8E30__func_00368610 __asm__("D_003A8E30");

void *func_00368610(void *arg0) {
    func_001F75E8__func_00368610();
    M2C_FIELD(arg0, s32 *, 0x10) = -1;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_003A8E30__func_00368610;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    return arg0;
}

s32 func_00368660(void *arg0, f32 *arg1) {
    *arg1 = (f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), u16 *, 8);
    return 1;
}

s32 func_00368680(void *arg0, f32 *arg1) {
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0xC);
    *arg1 = (f32) (M2C_FIELD(((M2C_FIELD(temp_v1, u16 *, 0xC) * 2) + M2C_FIELD(temp_v1, s32 *, 8)), u16 *, -4) + 1);
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003686B0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003686E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003686F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00368718);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00368788);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00368798);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003687C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003687F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00368948);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00368990);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003689C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00368C40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00368D00);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00368DC8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00368E18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00368E50);

s32 func_00368F00(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 4);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00368F10);

s32 func_00368F58(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 4);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00368F68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00368FB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00369000);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00369068);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00369090);

s32 func_003690B8(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 0x40) & 0xFFF;
}

s32 func_003690C8(void **arg0) {
    return ((u32) M2C_FIELD(*arg0, u32 *, 0x40) >> 0xC) & 0xFFF;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003690E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003690F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00369130);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003691B8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003691D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003691F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00369210);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00369230);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00369250);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00369270);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003692C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00369310);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003693B0);

void *func_003693D8(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = (s32) (arg2 * 0x60);
    return arg0;
}

void func_003693F0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 4);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00369400);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00369428);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00369490);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00369508);

extern M2C_UNK func_0035F4D8__func_00369588(s32 *, M2C_UNK *) __asm__("func_0035F4D8");
extern M2C_UNK D_003E1F68__func_00369588 __asm__("D_003E1F68");
extern s32 D_003FD758__func_00369588 __asm__("D_003FD758");

s32 *func_00369588(void) {
    if (D_003FD758__func_00369588 == 0) {
        func_0035F4D8__func_00369588(&D_003FD758__func_00369588, &D_003E1F68__func_00369588);
    }
    return &D_003FD758__func_00369588;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003695C8);

void func_003695F8(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00369600);

extern M2C_UNK func_0035F4B8__func_00369670(s32 *, M2C_UNK *, s32 *) __asm__("func_0035F4B8");
extern M2C_UNK func_0035F4D8__func_00369670(s32 *, M2C_UNK *) __asm__("func_0035F4D8");
extern M2C_UNK D_003E1F68__func_00369670 __asm__("D_003E1F68");
extern M2C_UNK D_003E1F80__func_00369670 __asm__("D_003E1F80");
extern s32 D_003FD758__func_00369670 __asm__("D_003FD758");
extern s32 D_004E4100__func_00369670 __asm__("D_004E4100");

s32 *func_00369670(void) {
    if (D_004E4100__func_00369670 == 0) {
        if (D_003FD758__func_00369670 == 0) {
            func_0035F4D8__func_00369670(&D_003FD758__func_00369670, &D_003E1F68__func_00369670);
        }
        func_0035F4B8__func_00369670(&D_004E4100__func_00369670, &D_003E1F80__func_00369670, &D_003FD758__func_00369670);
    }
    return &D_004E4100__func_00369670;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003696E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00369758);

extern M2C_UNK func_0035F4D8__func_00369788(s32 *, M2C_UNK *) __asm__("func_0035F4D8");
extern M2C_UNK D_003E1FC0__func_00369788 __asm__("D_003E1FC0");
extern s32 D_003FD768__func_00369788 __asm__("D_003FD768");

s32 *func_00369788(void) {
    if (D_003FD768__func_00369788 == 0) {
        func_0035F4D8__func_00369788(&D_003FD768__func_00369788, &D_003E1FC0__func_00369788);
    }
    return &D_003FD768__func_00369788;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003697C8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00369840);

extern M2C_UNK func_0035F4B8__func_00369878(s32 *, M2C_UNK *, s32 *) __asm__("func_0035F4B8");
extern M2C_UNK func_0035F4D8__func_00369878(s32 *, M2C_UNK *) __asm__("func_0035F4D8");
extern M2C_UNK D_003E2000__func_00369878 __asm__("D_003E2000");
extern M2C_UNK D_003E2010__func_00369878 __asm__("D_003E2010");
extern s32 D_003FD770__func_00369878 __asm__("D_003FD770");
extern s32 D_004E4110__func_00369878 __asm__("D_004E4110");

s32 *func_00369878(void) {
    if (D_004E4110__func_00369878 == 0) {
        if (D_003FD770__func_00369878 == 0) {
            func_0035F4D8__func_00369878(&D_003FD770__func_00369878, &D_003E2000__func_00369878);
        }
        func_0035F4B8__func_00369878(&D_004E4110__func_00369878, &D_003E2010__func_00369878, &D_003FD770__func_00369878);
    }
    return &D_004E4110__func_00369878;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_003698F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00369920);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00369928);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00369930);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00369958);

s32 func_00369D38(s32 *arg0) {
    return *arg0 + 8;
}

extern u16 D_0038C260__func_00369D48 __asm__("D_0038C260");

u16 **func_00369D48(u16 **arg0) {
    *arg0 = &D_0038C260__func_00369D48;
    D_0038C260__func_00369D48 += 1;
    return arg0;
}

extern M2C_UNK func_00270C18__func_00369D68() __asm__("func_00270C18");

s32 func_00369D68(s32 arg0) {
    func_00270C18__func_00369D68();
    return arg0;
}

u16 **func_00369D90(u16 **arg0, u16 **arg1) {
    u16 *temp_a2;

    temp_a2 = *arg1;
    *arg0 = temp_a2;
    *temp_a2 += 1;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00369DB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00369E20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00369E98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_00369EE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036A458);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036A5F8);

extern M2C_UNK D_0038C260__func_0036A6E0 __asm__("D_0038C260");

s32 func_0036A6E0(s32 *arg0) {
    return *arg0 == (s32) &D_0038C260__func_0036A6E0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036A6F8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036A770);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036A800);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036A848);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036A878);

extern M2C_UNK (*D_004B5520__func_0036A880)() __asm__("D_004B5520");

void func_0036A880(void) {
    D_004B5520__func_0036A880();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036A8A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036A8C0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036A928);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036A938);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036AAA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036AAB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036AAB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036AB10);

extern M2C_UNK (*D_004B5520__func_0036AB20)() __asm__("D_004B5520");

void func_0036AB20(void) {
    D_004B5520__func_0036AB20();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036AB48);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036AB70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036AC08);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036ACD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036AD10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036AD18);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036AD20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036AD78);

extern M2C_UNK (*D_004B5520__func_0036AD88)() __asm__("D_004B5520");

void func_0036AD88(void) {
    D_004B5520__func_0036AD88();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036ADB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036ADD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036ADE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036AE10);

void func_0036AE60(void) {
}

extern M2C_UNK func_00274010__func_0036AE68(s32) __asm__("func_00274010");

void func_0036AE68(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_a0 != 0) {
        func_00274010__func_0036AE68(temp_a0);
    }
    M2C_FIELD(arg0, s32 *, 0x10) = 1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036AEA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036AF30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036AFB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036B040);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036B090);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036B1E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036B260);

s32 func_0036B288(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4) == 0;
}

extern M2C_UNK func_00346B54__func_0036B298(s32, M2C_UNK, s32) __asm__("func_00346B54");
extern s32 (*D_004B5520__func_0036B298)(s32) __asm__("D_004B5520");

void func_0036B298(void *arg0) {
    s32 temp_v0;

    temp_v0 = D_004B5520__func_0036B298(M2C_FIELD(arg0, s32 *, 0) * 8);
    M2C_FIELD(arg0, s32 *, 4) = temp_v0;
    func_00346B54__func_0036B298(temp_v0, 0, M2C_FIELD(arg0, s32 *, 0) * 8);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036B2E8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036B840);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036BA80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036BB00);

s32 func_0036BB20(s32 arg0) {
    return arg0 & 0xFFFFFFFE;
}

extern M2C_UNK func_00274010__func_0036BB30(s32) __asm__("func_00274010");

void func_0036BB30(s32 arg0) {
    func_00274010__func_0036BB30(arg0 + 8);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036BB50);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036BB58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036BB60);

extern M2C_UNK func_00274988__func_0036BB68(s32) __asm__("func_00274988");

void func_0036BB68(s32 arg0) {
    func_00274988__func_0036BB68(arg0 + 8);
}

extern M2C_UNK func_002749A8__func_0036BB88(s32) __asm__("func_002749A8");

void func_0036BB88(s32 arg0) {
    func_002749A8__func_0036BB88(arg0 + 8);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036BBA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036BC20);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036BD30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036BD38);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036BD40);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036BDA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036BDA8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036BDB0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036BE10);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036BEB8);

extern M2C_UNK func_00274010__func_0036BF60(s32) __asm__("func_00274010");

void func_0036BF60(s32 arg0) {
    func_00274010__func_0036BF60(arg0 + 8);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036BF80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036BF88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036BF90);

extern M2C_UNK func_00274988__func_0036BF98(s32) __asm__("func_00274988");

void func_0036BF98(s32 arg0) {
    func_00274988__func_0036BF98(arg0 + 8);
}

extern M2C_UNK func_002749A8__func_0036BFB8(s32) __asm__("func_002749A8");

void func_0036BFB8(s32 arg0) {
    func_002749A8__func_0036BFB8(arg0 + 8);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036BFD8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036C050);

extern s32 func_00346EDC__func_0036C0C8(s32) __asm__("func_00346EDC");

s32 func_0036C0C8(s32 *arg0) {
    return func_00346EDC__func_0036C0C8(*arg0 + 8) == 0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036C0F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036C158);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036C160);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036C168);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036C170);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036C178);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036C180);

void func_0036C1B8(void) {
}

void func_0036C1C0(void) {
}

void func_0036C1C8(void) {
}

void func_0036C1D0(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036C1D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036C1E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036C1E8);

void func_0036C248(void) {
}

void func_0036C250(void) {
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036C258);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036C2D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036C2E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036C2E8);

void func_0036C348(void) {
}

void func_0036C350(void) {
}

extern M2C_UNK func_00274010__func_0036C358(s32) __asm__("func_00274010");

void func_0036C358(s32 arg0) {
    func_00274010__func_0036C358(arg0 + 8);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036C378);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036C380);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036C388);

extern M2C_UNK func_00274988__func_0036C390(s32) __asm__("func_00274988");

void func_0036C390(s32 arg0) {
    func_00274988__func_0036C390(arg0 + 8);
}

extern M2C_UNK func_002749A8__func_0036C3B0(s32) __asm__("func_002749A8");

void func_0036C3B0(s32 arg0) {
    func_002749A8__func_0036C3B0(arg0 + 8);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036C3D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036C448);

extern M2C_UNK func_0036C588__func_0036C4C8(void *, M2C_UNK) __asm__("func_0036C588");
extern M2C_UNK func_0036C5A8__func_0036C4C8() __asm__("func_0036C5A8");
extern M2C_UNK func_0036C5C8__func_0036C4C8(void *, M2C_UNK) __asm__("func_0036C5C8");
extern M2C_UNK func_0036C5F0__func_0036C4C8(void *, M2C_UNK) __asm__("func_0036C5F0");
extern M2C_UNK func_0036C618__func_0036C4C8(void *, M2C_UNK) __asm__("func_0036C618");
extern M2C_UNK func_0036C670__func_0036C4C8(void *) __asm__("func_0036C670");
extern M2C_UNK D_003AA048__func_0036C4C8 __asm__("D_003AA048");

void *func_0036C4C8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 4) = &D_003AA048__func_0036C4C8;
    func_0036C5A8__func_0036C4C8();
    func_0036C588__func_0036C4C8(arg0, 0);
    func_0036C5C8__func_0036C4C8(arg0, 1);
    func_0036C5F0__func_0036C4C8(arg0, 0);
    func_0036C618__func_0036C4C8(arg0, 0);
    func_0036C670__func_0036C4C8(arg0);
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036C538);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036C568);

s32 func_0036C570(s32 *arg0) {
    return *arg0 & 0x3F;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036C580);

void func_0036C588(s32 *arg0, s32 arg1) {
    *arg0 = (*arg0 & 0xF000FFFF) | (arg1 << 0x10);
}

void func_0036C5A8(s32 *arg0, s32 arg1) {
    *arg0 = (*arg0 & 0xFFFFFFC0) | arg1;
}

void func_0036C5C8(s32 *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = *arg0 & 0xFFFF7FFF;
    *arg0 = temp_v0;
    if (arg1 != 0) {
        *arg0 = temp_v0 | 0x8000;
    }
}

void func_0036C5F0(s32 *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = *arg0 & 0xFFFFBFFF;
    *arg0 = temp_v0;
    if (arg1 != 0) {
        *arg0 = temp_v0 | 0x4000;
    }
}

void func_0036C618(s32 *arg0, s32 arg1) {
    if (arg1 == 0) {
        *arg0 &= 0xFFFFC03F;
        return;
    }
    *arg0 = (*arg0 & 0xFFFFC03F) | (arg1 << 6);
}

void func_0036C658(s32 *arg0) {
    *arg0 |= 0x40000000;
}

void func_0036C670(s32 *arg0) {
    *arg0 &= 0xBFFFFFFF;
}

s32 func_0036C688(s32 *arg0) {
    return ((s32) *arg0 >> 0x1E) & 1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036C698);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036C6A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036C6A8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036C6D0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036C6E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036C708);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036C720);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036C748);

s32 func_0036C7D0(s32 *arg0) {
    return *arg0 + 8;
}

s32 func_0036C7E0(s32 *arg0) {
    return *arg0 + 8;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036C7F0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036C8A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036C8F0);

extern M2C_UNK func_002749A8__func_0036C928(s32) __asm__("func_002749A8");

void func_0036C928(s32 arg0) {
    func_002749A8__func_0036C928(arg0 + 8);
}

extern M2C_UNK func_00274010__func_0036C948(s32) __asm__("func_00274010");

void func_0036C948(s32 arg0) {
    func_00274010__func_0036C948(arg0 + 8);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036C968);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036C970);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036C998);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036C9A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036CA28);

void func_0036CA38(void) {
}

extern M2C_UNK func_00274010__func_0036CA40(s32) __asm__("func_00274010");

void func_0036CA40(s32 arg0) {
    func_00274010__func_0036CA40(arg0 + 8);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036CA60);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036CA68);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036CA70);

extern M2C_UNK func_00274988__func_0036CA78(s32) __asm__("func_00274988");

void func_0036CA78(s32 arg0) {
    func_00274988__func_0036CA78(arg0 + 8);
}

extern M2C_UNK func_002749A8__func_0036CA98(s32) __asm__("func_002749A8");

void func_0036CA98(s32 arg0) {
    func_002749A8__func_0036CA98(arg0 + 8);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036CAB8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036CB40);

void func_0036CB50(void) {
}

extern M2C_UNK func_00274010__func_0036CB58(s32) __asm__("func_00274010");

void func_0036CB58(s32 arg0) {
    func_00274010__func_0036CB58(arg0 + 8);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036CB78);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036CB80);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036CB88);

extern M2C_UNK func_00274988__func_0036CB90(s32) __asm__("func_00274988");

void func_0036CB90(s32 arg0) {
    func_00274988__func_0036CB90(arg0 + 8);
}

extern M2C_UNK func_002749A8__func_0036CBB0(s32) __asm__("func_002749A8");

void func_0036CBB0(s32 arg0) {
    func_002749A8__func_0036CBB0(arg0 + 8);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036CBD0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036CC58);

void func_0036CC68(void) {
}

extern M2C_UNK func_00274010__func_0036CC70(s32) __asm__("func_00274010");

void func_0036CC70(s32 arg0) {
    func_00274010__func_0036CC70(arg0 + 8);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036CC90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036CC98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036CCA0);

extern M2C_UNK func_00274988__func_0036CCA8(s32) __asm__("func_00274988");

void func_0036CCA8(s32 arg0) {
    func_00274988__func_0036CCA8(arg0 + 8);
}

extern M2C_UNK func_002749A8__func_0036CCC8(s32) __asm__("func_002749A8");

void func_0036CCC8(s32 arg0) {
    func_002749A8__func_0036CCC8(arg0 + 8);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036CCE8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036CD70);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036CD98);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036CDA0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036CDF8);

extern M2C_UNK (*D_004B5520__func_0036CE08)() __asm__("D_004B5520");

void func_0036CE08(void) {
    D_004B5520__func_0036CE08();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036CE30);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036CE58);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036CF10);

void func_0036CF60(void) {
}

extern M2C_UNK func_00274010__func_0036CF68(s32) __asm__("func_00274010");

void func_0036CF68(s32 arg0) {
    func_00274010__func_0036CF68(arg0 + 8);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036CF88);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036CF90);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036CF98);

extern M2C_UNK func_00274988__func_0036CFA0(s32) __asm__("func_00274988");

void func_0036CFA0(s32 arg0) {
    func_00274988__func_0036CFA0(arg0 + 8);
}

extern M2C_UNK func_002749A8__func_0036CFC0(s32) __asm__("func_002749A8");

void func_0036CFC0(s32 arg0) {
    func_002749A8__func_0036CFC0(arg0 + 8);
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036CFE0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036D068);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036D078);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036D0A0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036D0B0);

extern M2C_UNK func_00346B54__func_0036D0F0(void *, M2C_UNK, M2C_UNK) __asm__("func_00346B54");

void func_0036D0F0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_00346B54__func_0036D0F0(arg0 + 0x10, 0, 4);
    func_00346B54__func_0036D0F0(arg0 + 0x14, 0, 4);
    func_00346B54__func_0036D0F0(arg0 + 0x18, 0, 4);
}

extern M2C_UNK func_0035F4D8__func_0036D150(s32 *, M2C_UNK *) __asm__("func_0035F4D8");
extern M2C_UNK D_003E7BA0__func_0036D150 __asm__("D_003E7BA0");
extern s32 D_003FD790__func_0036D150 __asm__("D_003FD790");

s32 *func_0036D150(void) {
    if (D_003FD790__func_0036D150 == 0) {
        func_0035F4D8__func_0036D150(&D_003FD790__func_0036D150, &D_003E7BA0__func_0036D150);
    }
    return &D_003FD790__func_0036D150;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036D190);

extern M2C_UNK func_0035F4B8__func_0036D1C0(s32 *, M2C_UNK *, M2C_UNK *) __asm__("func_0035F4B8");
extern M2C_UNK func_0036E780__func_0036D1C0() __asm__("func_0036E780");
extern M2C_UNK D_003E7BC0__func_0036D1C0 __asm__("D_003E7BC0");
extern M2C_UNK D_003FD7A8__func_0036D1C0 __asm__("D_003FD7A8");
extern s32 D_004E41E0__func_0036D1C0 __asm__("D_004E41E0");

s32 *func_0036D1C0(void) {
    if (D_004E41E0__func_0036D1C0 == 0) {
        func_0036E780__func_0036D1C0();
        func_0035F4B8__func_0036D1C0(&D_004E41E0__func_0036D1C0, &D_003E7BC0__func_0036D1C0, &D_003FD7A8__func_0036D1C0);
    }
    return &D_004E41E0__func_0036D1C0;
}

extern M2C_UNK func_00346B54__func_0036D210(s32, M2C_UNK, M2C_UNK) __asm__("func_00346B54");

void func_0036D210(void *arg0) {
    func_00346B54__func_0036D210(arg0 + 0xC, 0, 0xC);
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036D250);

extern M2C_UNK func_0035F4B8__func_0036D288(s32 *, M2C_UNK *, M2C_UNK *) __asm__("func_0035F4B8");
extern M2C_UNK func_0036E7C0__func_0036D288() __asm__("func_0036E7C0");
extern M2C_UNK D_003E7BE0__func_0036D288 __asm__("D_003E7BE0");
extern M2C_UNK D_003FD7B0__func_0036D288 __asm__("D_003FD7B0");
extern s32 D_004E41F0__func_0036D288 __asm__("D_004E41F0");

s32 *func_0036D288(void) {
    if (D_004E41F0__func_0036D288 == 0) {
        func_0036E7C0__func_0036D288();
        func_0035F4B8__func_0036D288(&D_004E41F0__func_0036D288, &D_003E7BE0__func_0036D288, &D_003FD7B0__func_0036D288);
    }
    return &D_004E41F0__func_0036D288;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036D2D8);

extern M2C_UNK func_0036D328__func_0036D308() __asm__("func_0036D328");

void func_0036D308(void) {
    func_0036D328__func_0036D308();
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036D328);

extern M2C_UNK func_0035F4D8__func_0036D348(s32 *, M2C_UNK *) __asm__("func_0035F4D8");
extern M2C_UNK D_003E7BF8__func_0036D348 __asm__("D_003E7BF8");
extern s32 D_003FD798__func_0036D348 __asm__("D_003FD798");

s32 *func_0036D348(void) {
    if (D_003FD798__func_0036D348 == 0) {
        func_0035F4D8__func_0036D348(&D_003FD798__func_0036D348, &D_003E7BF8__func_0036D348);
    }
    return &D_003FD798__func_0036D348;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036D388);

extern M2C_UNK func_0035F4D8__func_0036D398(s32 *, M2C_UNK *) __asm__("func_0035F4D8");
extern M2C_UNK D_003E7C08__func_0036D398 __asm__("D_003E7C08");
extern s32 D_003FD7A0__func_0036D398 __asm__("D_003FD7A0");

s32 *func_0036D398(void) {
    if (D_003FD7A0__func_0036D398 == 0) {
        func_0035F4D8__func_0036D398(&D_003FD7A0__func_0036D398, &D_003E7C08__func_0036D398);
    }
    return &D_003FD7A0__func_0036D398;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036D3D8);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036D468);

void func_0036D4D0(void) {
}

extern M2C_UNK func_0035F4B8__func_0036D4D8(s32 *, M2C_UNK *, s32 *) __asm__("func_0035F4B8");
extern M2C_UNK func_0036E780__func_0036D4D8() __asm__("func_0036E780");
extern M2C_UNK D_003E7BC0__func_0036D4D8 __asm__("D_003E7BC0");
extern M2C_UNK D_003E7C20__func_0036D4D8 __asm__("D_003E7C20");
extern s32 D_003FD7A8__func_0036D4D8 __asm__("D_003FD7A8");
extern s32 D_004E41E0__func_0036D4D8 __asm__("D_004E41E0");
extern s32 D_004E4200__func_0036D4D8 __asm__("D_004E4200");

s32 *func_0036D4D8(void) {
    if (D_004E4200__func_0036D4D8 == 0) {
        if (D_004E41E0__func_0036D4D8 == 0) {
            func_0036E780__func_0036D4D8();
            func_0035F4B8__func_0036D4D8(&D_004E41E0__func_0036D4D8, &D_003E7BC0__func_0036D4D8, &D_003FD7A8__func_0036D4D8);
        }
        func_0035F4B8__func_0036D4D8(&D_004E4200__func_0036D4D8, &D_003E7C20__func_0036D4D8, &D_004E41E0__func_0036D4D8);
    }
    return &D_004E4200__func_0036D4D8;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036D560);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036D5B0);

extern M2C_UNK func_0035F4B8__func_0036D638(s32 *, M2C_UNK *, s32 *) __asm__("func_0035F4B8");
extern M2C_UNK func_0035F4D8__func_0036D638(s32 *, M2C_UNK *) __asm__("func_0035F4D8");
extern M2C_UNK D_003E7BF8__func_0036D638 __asm__("D_003E7BF8");
extern M2C_UNK D_003E7C40__func_0036D638 __asm__("D_003E7C40");
extern s32 D_003FD798__func_0036D638 __asm__("D_003FD798");
extern s32 D_004E4210__func_0036D638 __asm__("D_004E4210");

s32 *func_0036D638(void) {
    if (D_004E4210__func_0036D638 == 0) {
        if (D_003FD798__func_0036D638 == 0) {
            func_0035F4D8__func_0036D638(&D_003FD798__func_0036D638, &D_003E7BF8__func_0036D638);
        }
        func_0035F4B8__func_0036D638(&D_004E4210__func_0036D638, &D_003E7C40__func_0036D638, &D_003FD798__func_0036D638);
    }
    return &D_004E4210__func_0036D638;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036D6B0);

extern M2C_UNK func_0035F4B8__func_0036D6D8(s32 *, M2C_UNK *, s32 *) __asm__("func_0035F4B8");
extern M2C_UNK func_0035F4D8__func_0036D6D8(s32 *, M2C_UNK *) __asm__("func_0035F4D8");
extern M2C_UNK D_003E7BF8__func_0036D6D8 __asm__("D_003E7BF8");
extern M2C_UNK D_003E7C40__func_0036D6D8 __asm__("D_003E7C40");
extern M2C_UNK D_003E7C58__func_0036D6D8 __asm__("D_003E7C58");
extern s32 D_003FD798__func_0036D6D8 __asm__("D_003FD798");
extern s32 D_004E4210__func_0036D6D8 __asm__("D_004E4210");
extern s32 D_004E4220__func_0036D6D8 __asm__("D_004E4220");

s32 *func_0036D6D8(void) {
    if (D_004E4220__func_0036D6D8 == 0) {
        if (D_004E4210__func_0036D6D8 == 0) {
            if (D_003FD798__func_0036D6D8 == 0) {
                func_0035F4D8__func_0036D6D8(&D_003FD798__func_0036D6D8, &D_003E7BF8__func_0036D6D8);
            }
            func_0035F4B8__func_0036D6D8(&D_004E4210__func_0036D6D8, &D_003E7C40__func_0036D6D8, &D_003FD798__func_0036D6D8);
        }
        func_0035F4B8__func_0036D6D8(&D_004E4220__func_0036D6D8, &D_003E7C58__func_0036D6D8, &D_004E4210__func_0036D6D8);
    }
    return &D_004E4220__func_0036D6D8;
}

extern M2C_UNK func_0035F4B8__func_0036D780(s32 *, M2C_UNK *, s32 *) __asm__("func_0035F4B8");
extern M2C_UNK func_0035F4D8__func_0036D780(s32 *, M2C_UNK *) __asm__("func_0035F4D8");
extern M2C_UNK D_003E7BF8__func_0036D780 __asm__("D_003E7BF8");
extern M2C_UNK D_003E7C40__func_0036D780 __asm__("D_003E7C40");
extern M2C_UNK D_003E7C78__func_0036D780 __asm__("D_003E7C78");
extern s32 D_003FD798__func_0036D780 __asm__("D_003FD798");
extern s32 D_004E4210__func_0036D780 __asm__("D_004E4210");
extern s32 D_004E4230__func_0036D780 __asm__("D_004E4230");

s32 *func_0036D780(void) {
    if (D_004E4230__func_0036D780 == 0) {
        if (D_004E4210__func_0036D780 == 0) {
            if (D_003FD798__func_0036D780 == 0) {
                func_0035F4D8__func_0036D780(&D_003FD798__func_0036D780, &D_003E7BF8__func_0036D780);
            }
            func_0035F4B8__func_0036D780(&D_004E4210__func_0036D780, &D_003E7C40__func_0036D780, &D_003FD798__func_0036D780);
        }
        func_0035F4B8__func_0036D780(&D_004E4230__func_0036D780, &D_003E7C78__func_0036D780, &D_004E4210__func_0036D780);
    }
    return &D_004E4230__func_0036D780;
}

extern M2C_UNK func_0035F4B8__func_0036D828(s32 *, M2C_UNK *, s32 *) __asm__("func_0035F4B8");
extern M2C_UNK func_0035F4D8__func_0036D828(s32 *, M2C_UNK *) __asm__("func_0035F4D8");
extern M2C_UNK D_003E7BF8__func_0036D828 __asm__("D_003E7BF8");
extern M2C_UNK D_003E7C40__func_0036D828 __asm__("D_003E7C40");
extern M2C_UNK D_003E7C98__func_0036D828 __asm__("D_003E7C98");
extern s32 D_003FD798__func_0036D828 __asm__("D_003FD798");
extern s32 D_004E4210__func_0036D828 __asm__("D_004E4210");
extern s32 D_004E4240__func_0036D828 __asm__("D_004E4240");

s32 *func_0036D828(void) {
    if (D_004E4240__func_0036D828 == 0) {
        if (D_004E4210__func_0036D828 == 0) {
            if (D_003FD798__func_0036D828 == 0) {
                func_0035F4D8__func_0036D828(&D_003FD798__func_0036D828, &D_003E7BF8__func_0036D828);
            }
            func_0035F4B8__func_0036D828(&D_004E4210__func_0036D828, &D_003E7C40__func_0036D828, &D_003FD798__func_0036D828);
        }
        func_0035F4B8__func_0036D828(&D_004E4240__func_0036D828, &D_003E7C98__func_0036D828, &D_004E4210__func_0036D828);
    }
    return &D_004E4240__func_0036D828;
}

extern M2C_UNK func_0035F4B8__func_0036D8D0(s32 *, M2C_UNK *, s32 *) __asm__("func_0035F4B8");
extern M2C_UNK func_0035F4D8__func_0036D8D0(s32 *, M2C_UNK *) __asm__("func_0035F4D8");
extern M2C_UNK D_003E7BF8__func_0036D8D0 __asm__("D_003E7BF8");
extern M2C_UNK D_003E7C40__func_0036D8D0 __asm__("D_003E7C40");
extern M2C_UNK D_003E7CB8__func_0036D8D0 __asm__("D_003E7CB8");
extern s32 D_003FD798__func_0036D8D0 __asm__("D_003FD798");
extern s32 D_004E4210__func_0036D8D0 __asm__("D_004E4210");
extern s32 D_004E4250__func_0036D8D0 __asm__("D_004E4250");

s32 *func_0036D8D0(void) {
    if (D_004E4250__func_0036D8D0 == 0) {
        if (D_004E4210__func_0036D8D0 == 0) {
            if (D_003FD798__func_0036D8D0 == 0) {
                func_0035F4D8__func_0036D8D0(&D_003FD798__func_0036D8D0, &D_003E7BF8__func_0036D8D0);
            }
            func_0035F4B8__func_0036D8D0(&D_004E4210__func_0036D8D0, &D_003E7C40__func_0036D8D0, &D_003FD798__func_0036D8D0);
        }
        func_0035F4B8__func_0036D8D0(&D_004E4250__func_0036D8D0, &D_003E7CB8__func_0036D8D0, &D_004E4210__func_0036D8D0);
    }
    return &D_004E4250__func_0036D8D0;
}

extern M2C_UNK func_0035F4B8__func_0036D978(s32 *, M2C_UNK *, s32 *) __asm__("func_0035F4B8");
extern M2C_UNK func_0035F4D8__func_0036D978(s32 *, M2C_UNK *) __asm__("func_0035F4D8");
extern M2C_UNK D_003E7BF8__func_0036D978 __asm__("D_003E7BF8");
extern M2C_UNK D_003E7C40__func_0036D978 __asm__("D_003E7C40");
extern M2C_UNK D_003E7CD8__func_0036D978 __asm__("D_003E7CD8");
extern s32 D_003FD798__func_0036D978 __asm__("D_003FD798");
extern s32 D_004E4210__func_0036D978 __asm__("D_004E4210");
extern s32 D_004E4260__func_0036D978 __asm__("D_004E4260");

s32 *func_0036D978(void) {
    if (D_004E4260__func_0036D978 == 0) {
        if (D_004E4210__func_0036D978 == 0) {
            if (D_003FD798__func_0036D978 == 0) {
                func_0035F4D8__func_0036D978(&D_003FD798__func_0036D978, &D_003E7BF8__func_0036D978);
            }
            func_0035F4B8__func_0036D978(&D_004E4210__func_0036D978, &D_003E7C40__func_0036D978, &D_003FD798__func_0036D978);
        }
        func_0035F4B8__func_0036D978(&D_004E4260__func_0036D978, &D_003E7CD8__func_0036D978, &D_004E4210__func_0036D978);
    }
    return &D_004E4260__func_0036D978;
}

extern M2C_UNK func_0035F4B8__func_0036DA20(s32 *, M2C_UNK *, s32 *) __asm__("func_0035F4B8");
extern M2C_UNK func_0035F4D8__func_0036DA20(s32 *, M2C_UNK *) __asm__("func_0035F4D8");
extern M2C_UNK D_003E7BF8__func_0036DA20 __asm__("D_003E7BF8");
extern M2C_UNK D_003E7C40__func_0036DA20 __asm__("D_003E7C40");
extern M2C_UNK D_003E7CF8__func_0036DA20 __asm__("D_003E7CF8");
extern s32 D_003FD798__func_0036DA20 __asm__("D_003FD798");
extern s32 D_004E4210__func_0036DA20 __asm__("D_004E4210");
extern s32 D_004E4270__func_0036DA20 __asm__("D_004E4270");

s32 *func_0036DA20(void) {
    if (D_004E4270__func_0036DA20 == 0) {
        if (D_004E4210__func_0036DA20 == 0) {
            if (D_003FD798__func_0036DA20 == 0) {
                func_0035F4D8__func_0036DA20(&D_003FD798__func_0036DA20, &D_003E7BF8__func_0036DA20);
            }
            func_0035F4B8__func_0036DA20(&D_004E4210__func_0036DA20, &D_003E7C40__func_0036DA20, &D_003FD798__func_0036DA20);
        }
        func_0035F4B8__func_0036DA20(&D_004E4270__func_0036DA20, &D_003E7CF8__func_0036DA20, &D_004E4210__func_0036DA20);
    }
    return &D_004E4270__func_0036DA20;
}

extern M2C_UNK func_0035F4B8__func_0036DAC8(s32 *, M2C_UNK *, s32 *) __asm__("func_0035F4B8");
extern M2C_UNK func_0035F4D8__func_0036DAC8(s32 *, M2C_UNK *) __asm__("func_0035F4D8");
extern M2C_UNK D_003E7BF8__func_0036DAC8 __asm__("D_003E7BF8");
extern M2C_UNK D_003E7C40__func_0036DAC8 __asm__("D_003E7C40");
extern M2C_UNK D_003E7D18__func_0036DAC8 __asm__("D_003E7D18");
extern s32 D_003FD798__func_0036DAC8 __asm__("D_003FD798");
extern s32 D_004E4210__func_0036DAC8 __asm__("D_004E4210");
extern s32 D_004E4280__func_0036DAC8 __asm__("D_004E4280");

s32 *func_0036DAC8(void) {
    if (D_004E4280__func_0036DAC8 == 0) {
        if (D_004E4210__func_0036DAC8 == 0) {
            if (D_003FD798__func_0036DAC8 == 0) {
                func_0035F4D8__func_0036DAC8(&D_003FD798__func_0036DAC8, &D_003E7BF8__func_0036DAC8);
            }
            func_0035F4B8__func_0036DAC8(&D_004E4210__func_0036DAC8, &D_003E7C40__func_0036DAC8, &D_003FD798__func_0036DAC8);
        }
        func_0035F4B8__func_0036DAC8(&D_004E4280__func_0036DAC8, &D_003E7D18__func_0036DAC8, &D_004E4210__func_0036DAC8);
    }
    return &D_004E4280__func_0036DAC8;
}

extern M2C_UNK func_0035F4B8__func_0036DB70(s32 *, M2C_UNK *, s32 *) __asm__("func_0035F4B8");
extern M2C_UNK func_0035F4D8__func_0036DB70(s32 *, M2C_UNK *) __asm__("func_0035F4D8");
extern M2C_UNK D_003E7BF8__func_0036DB70 __asm__("D_003E7BF8");
extern M2C_UNK D_003E7C40__func_0036DB70 __asm__("D_003E7C40");
extern M2C_UNK D_003E7D38__func_0036DB70 __asm__("D_003E7D38");
extern s32 D_003FD798__func_0036DB70 __asm__("D_003FD798");
extern s32 D_004E4210__func_0036DB70 __asm__("D_004E4210");
extern s32 D_004E4290__func_0036DB70 __asm__("D_004E4290");

s32 *func_0036DB70(void) {
    if (D_004E4290__func_0036DB70 == 0) {
        if (D_004E4210__func_0036DB70 == 0) {
            if (D_003FD798__func_0036DB70 == 0) {
                func_0035F4D8__func_0036DB70(&D_003FD798__func_0036DB70, &D_003E7BF8__func_0036DB70);
            }
            func_0035F4B8__func_0036DB70(&D_004E4210__func_0036DB70, &D_003E7C40__func_0036DB70, &D_003FD798__func_0036DB70);
        }
        func_0035F4B8__func_0036DB70(&D_004E4290__func_0036DB70, &D_003E7D38__func_0036DB70, &D_004E4210__func_0036DB70);
    }
    return &D_004E4290__func_0036DB70;
}

extern M2C_UNK func_0035F4B8__func_0036DC18(s32 *, M2C_UNK *, s32 *) __asm__("func_0035F4B8");
extern M2C_UNK func_0035F4D8__func_0036DC18(s32 *, M2C_UNK *) __asm__("func_0035F4D8");
extern M2C_UNK D_003E7BF8__func_0036DC18 __asm__("D_003E7BF8");
extern M2C_UNK D_003E7C40__func_0036DC18 __asm__("D_003E7C40");
extern M2C_UNK D_003E7D58__func_0036DC18 __asm__("D_003E7D58");
extern s32 D_003FD798__func_0036DC18 __asm__("D_003FD798");
extern s32 D_004E4210__func_0036DC18 __asm__("D_004E4210");
extern s32 D_004E42A0__func_0036DC18 __asm__("D_004E42A0");

s32 *func_0036DC18(void) {
    if (D_004E42A0__func_0036DC18 == 0) {
        if (D_004E4210__func_0036DC18 == 0) {
            if (D_003FD798__func_0036DC18 == 0) {
                func_0035F4D8__func_0036DC18(&D_003FD798__func_0036DC18, &D_003E7BF8__func_0036DC18);
            }
            func_0035F4B8__func_0036DC18(&D_004E4210__func_0036DC18, &D_003E7C40__func_0036DC18, &D_003FD798__func_0036DC18);
        }
        func_0035F4B8__func_0036DC18(&D_004E42A0__func_0036DC18, &D_003E7D58__func_0036DC18, &D_004E4210__func_0036DC18);
    }
    return &D_004E42A0__func_0036DC18;
}

extern M2C_UNK func_0035F4B8__func_0036DCC0(s32 *, M2C_UNK *, s32 *) __asm__("func_0035F4B8");
extern M2C_UNK func_0035F4D8__func_0036DCC0(s32 *, M2C_UNK *) __asm__("func_0035F4D8");
extern M2C_UNK D_003E7BF8__func_0036DCC0 __asm__("D_003E7BF8");
extern M2C_UNK D_003E7C40__func_0036DCC0 __asm__("D_003E7C40");
extern M2C_UNK D_003E7D78__func_0036DCC0 __asm__("D_003E7D78");
extern s32 D_003FD798__func_0036DCC0 __asm__("D_003FD798");
extern s32 D_004E4210__func_0036DCC0 __asm__("D_004E4210");
extern s32 D_004E42B0__func_0036DCC0 __asm__("D_004E42B0");

s32 *func_0036DCC0(void) {
    if (D_004E42B0__func_0036DCC0 == 0) {
        if (D_004E4210__func_0036DCC0 == 0) {
            if (D_003FD798__func_0036DCC0 == 0) {
                func_0035F4D8__func_0036DCC0(&D_003FD798__func_0036DCC0, &D_003E7BF8__func_0036DCC0);
            }
            func_0035F4B8__func_0036DCC0(&D_004E4210__func_0036DCC0, &D_003E7C40__func_0036DCC0, &D_003FD798__func_0036DCC0);
        }
        func_0035F4B8__func_0036DCC0(&D_004E42B0__func_0036DCC0, &D_003E7D78__func_0036DCC0, &D_004E4210__func_0036DCC0);
    }
    return &D_004E42B0__func_0036DCC0;
}

extern M2C_UNK func_0035F4B8__func_0036DD68(s32 *, M2C_UNK *, s32 *) __asm__("func_0035F4B8");
extern M2C_UNK func_0035F4D8__func_0036DD68(s32 *, M2C_UNK *) __asm__("func_0035F4D8");
extern M2C_UNK D_003E7BF8__func_0036DD68 __asm__("D_003E7BF8");
extern M2C_UNK D_003E7C40__func_0036DD68 __asm__("D_003E7C40");
extern M2C_UNK D_003E7D90__func_0036DD68 __asm__("D_003E7D90");
extern s32 D_003FD798__func_0036DD68 __asm__("D_003FD798");
extern s32 D_004E4210__func_0036DD68 __asm__("D_004E4210");
extern s32 D_004E42C0__func_0036DD68 __asm__("D_004E42C0");

s32 *func_0036DD68(void) {
    if (D_004E42C0__func_0036DD68 == 0) {
        if (D_004E4210__func_0036DD68 == 0) {
            if (D_003FD798__func_0036DD68 == 0) {
                func_0035F4D8__func_0036DD68(&D_003FD798__func_0036DD68, &D_003E7BF8__func_0036DD68);
            }
            func_0035F4B8__func_0036DD68(&D_004E4210__func_0036DD68, &D_003E7C40__func_0036DD68, &D_003FD798__func_0036DD68);
        }
        func_0035F4B8__func_0036DD68(&D_004E42C0__func_0036DD68, &D_003E7D90__func_0036DD68, &D_004E4210__func_0036DD68);
    }
    return &D_004E42C0__func_0036DD68;
}

extern M2C_UNK func_0035F4B8__func_0036DE10(s32 *, M2C_UNK *, s32 *) __asm__("func_0035F4B8");
extern M2C_UNK func_0035F4D8__func_0036DE10(s32 *, M2C_UNK *) __asm__("func_0035F4D8");
extern M2C_UNK D_003E7BF8__func_0036DE10 __asm__("D_003E7BF8");
extern M2C_UNK D_003E7C40__func_0036DE10 __asm__("D_003E7C40");
extern M2C_UNK D_003E7DA8__func_0036DE10 __asm__("D_003E7DA8");
extern s32 D_003FD798__func_0036DE10 __asm__("D_003FD798");
extern s32 D_004E4210__func_0036DE10 __asm__("D_004E4210");
extern s32 D_004E42D0__func_0036DE10 __asm__("D_004E42D0");

s32 *func_0036DE10(void) {
    if (D_004E42D0__func_0036DE10 == 0) {
        if (D_004E4210__func_0036DE10 == 0) {
            if (D_003FD798__func_0036DE10 == 0) {
                func_0035F4D8__func_0036DE10(&D_003FD798__func_0036DE10, &D_003E7BF8__func_0036DE10);
            }
            func_0035F4B8__func_0036DE10(&D_004E4210__func_0036DE10, &D_003E7C40__func_0036DE10, &D_003FD798__func_0036DE10);
        }
        func_0035F4B8__func_0036DE10(&D_004E42D0__func_0036DE10, &D_003E7DA8__func_0036DE10, &D_004E4210__func_0036DE10);
    }
    return &D_004E42D0__func_0036DE10;
}

extern M2C_UNK func_0035F4B8__func_0036DEB8(s32 *, M2C_UNK *, s32 *) __asm__("func_0035F4B8");
extern M2C_UNK func_0035F4D8__func_0036DEB8(s32 *, M2C_UNK *) __asm__("func_0035F4D8");
extern M2C_UNK D_003E7BF8__func_0036DEB8 __asm__("D_003E7BF8");
extern M2C_UNK D_003E7C40__func_0036DEB8 __asm__("D_003E7C40");
extern M2C_UNK D_003E7DC0__func_0036DEB8 __asm__("D_003E7DC0");
extern s32 D_003FD798__func_0036DEB8 __asm__("D_003FD798");
extern s32 D_004E4210__func_0036DEB8 __asm__("D_004E4210");
extern s32 D_004E42E0__func_0036DEB8 __asm__("D_004E42E0");

s32 *func_0036DEB8(void) {
    if (D_004E42E0__func_0036DEB8 == 0) {
        if (D_004E4210__func_0036DEB8 == 0) {
            if (D_003FD798__func_0036DEB8 == 0) {
                func_0035F4D8__func_0036DEB8(&D_003FD798__func_0036DEB8, &D_003E7BF8__func_0036DEB8);
            }
            func_0035F4B8__func_0036DEB8(&D_004E4210__func_0036DEB8, &D_003E7C40__func_0036DEB8, &D_003FD798__func_0036DEB8);
        }
        func_0035F4B8__func_0036DEB8(&D_004E42E0__func_0036DEB8, &D_003E7DC0__func_0036DEB8, &D_004E4210__func_0036DEB8);
    }
    return &D_004E42E0__func_0036DEB8;
}

extern M2C_UNK func_0035F4B8__func_0036DF60(s32 *, M2C_UNK *, s32 *) __asm__("func_0035F4B8");
extern M2C_UNK func_0035F4D8__func_0036DF60(s32 *, M2C_UNK *) __asm__("func_0035F4D8");
extern M2C_UNK D_003E7BF8__func_0036DF60 __asm__("D_003E7BF8");
extern M2C_UNK D_003E7C40__func_0036DF60 __asm__("D_003E7C40");
extern M2C_UNK D_003E7DD8__func_0036DF60 __asm__("D_003E7DD8");
extern s32 D_003FD798__func_0036DF60 __asm__("D_003FD798");
extern s32 D_004E4210__func_0036DF60 __asm__("D_004E4210");
extern s32 D_004E42F0__func_0036DF60 __asm__("D_004E42F0");

s32 *func_0036DF60(void) {
    if (D_004E42F0__func_0036DF60 == 0) {
        if (D_004E4210__func_0036DF60 == 0) {
            if (D_003FD798__func_0036DF60 == 0) {
                func_0035F4D8__func_0036DF60(&D_003FD798__func_0036DF60, &D_003E7BF8__func_0036DF60);
            }
            func_0035F4B8__func_0036DF60(&D_004E4210__func_0036DF60, &D_003E7C40__func_0036DF60, &D_003FD798__func_0036DF60);
        }
        func_0035F4B8__func_0036DF60(&D_004E42F0__func_0036DF60, &D_003E7DD8__func_0036DF60, &D_004E4210__func_0036DF60);
    }
    return &D_004E42F0__func_0036DF60;
}

extern M2C_UNK func_0035F4B8__func_0036E008(s32 *, M2C_UNK *, s32 *) __asm__("func_0035F4B8");
extern M2C_UNK func_0035F4D8__func_0036E008(s32 *, M2C_UNK *) __asm__("func_0035F4D8");
extern M2C_UNK D_003E7BF8__func_0036E008 __asm__("D_003E7BF8");
extern M2C_UNK D_003E7C40__func_0036E008 __asm__("D_003E7C40");
extern M2C_UNK D_003E7DF0__func_0036E008 __asm__("D_003E7DF0");
extern s32 D_003FD798__func_0036E008 __asm__("D_003FD798");
extern s32 D_004E4210__func_0036E008 __asm__("D_004E4210");
extern s32 D_004E4300__func_0036E008 __asm__("D_004E4300");

s32 *func_0036E008(void) {
    if (D_004E4300__func_0036E008 == 0) {
        if (D_004E4210__func_0036E008 == 0) {
            if (D_003FD798__func_0036E008 == 0) {
                func_0035F4D8__func_0036E008(&D_003FD798__func_0036E008, &D_003E7BF8__func_0036E008);
            }
            func_0035F4B8__func_0036E008(&D_004E4210__func_0036E008, &D_003E7C40__func_0036E008, &D_003FD798__func_0036E008);
        }
        func_0035F4B8__func_0036E008(&D_004E4300__func_0036E008, &D_003E7DF0__func_0036E008, &D_004E4210__func_0036E008);
    }
    return &D_004E4300__func_0036E008;
}

extern M2C_UNK func_0035F4B8__func_0036E0B0(s32 *, M2C_UNK *, s32 *) __asm__("func_0035F4B8");
extern M2C_UNK func_0035F4D8__func_0036E0B0(s32 *, M2C_UNK *) __asm__("func_0035F4D8");
extern M2C_UNK D_003E7BF8__func_0036E0B0 __asm__("D_003E7BF8");
extern M2C_UNK D_003E7C40__func_0036E0B0 __asm__("D_003E7C40");
extern M2C_UNK D_003E7E08__func_0036E0B0 __asm__("D_003E7E08");
extern s32 D_003FD798__func_0036E0B0 __asm__("D_003FD798");
extern s32 D_004E4210__func_0036E0B0 __asm__("D_004E4210");
extern s32 D_004E4310__func_0036E0B0 __asm__("D_004E4310");

s32 *func_0036E0B0(void) {
    if (D_004E4310__func_0036E0B0 == 0) {
        if (D_004E4210__func_0036E0B0 == 0) {
            if (D_003FD798__func_0036E0B0 == 0) {
                func_0035F4D8__func_0036E0B0(&D_003FD798__func_0036E0B0, &D_003E7BF8__func_0036E0B0);
            }
            func_0035F4B8__func_0036E0B0(&D_004E4210__func_0036E0B0, &D_003E7C40__func_0036E0B0, &D_003FD798__func_0036E0B0);
        }
        func_0035F4B8__func_0036E0B0(&D_004E4310__func_0036E0B0, &D_003E7E08__func_0036E0B0, &D_004E4210__func_0036E0B0);
    }
    return &D_004E4310__func_0036E0B0;
}

extern M2C_UNK func_0035F4B8__func_0036E158(s32 *, M2C_UNK *, s32 *) __asm__("func_0035F4B8");
extern M2C_UNK func_0035F4D8__func_0036E158(s32 *, M2C_UNK *) __asm__("func_0035F4D8");
extern M2C_UNK D_003E7BF8__func_0036E158 __asm__("D_003E7BF8");
extern M2C_UNK D_003E7C40__func_0036E158 __asm__("D_003E7C40");
extern M2C_UNK D_003E7E20__func_0036E158 __asm__("D_003E7E20");
extern s32 D_003FD798__func_0036E158 __asm__("D_003FD798");
extern s32 D_004E4210__func_0036E158 __asm__("D_004E4210");
extern s32 D_004E4320__func_0036E158 __asm__("D_004E4320");

s32 *func_0036E158(void) {
    if (D_004E4320__func_0036E158 == 0) {
        if (D_004E4210__func_0036E158 == 0) {
            if (D_003FD798__func_0036E158 == 0) {
                func_0035F4D8__func_0036E158(&D_003FD798__func_0036E158, &D_003E7BF8__func_0036E158);
            }
            func_0035F4B8__func_0036E158(&D_004E4210__func_0036E158, &D_003E7C40__func_0036E158, &D_003FD798__func_0036E158);
        }
        func_0035F4B8__func_0036E158(&D_004E4320__func_0036E158, &D_003E7E20__func_0036E158, &D_004E4210__func_0036E158);
    }
    return &D_004E4320__func_0036E158;
}

extern M2C_UNK func_0035F4B8__func_0036E200(s32 *, M2C_UNK *, s32 *) __asm__("func_0035F4B8");
extern M2C_UNK func_0035F4D8__func_0036E200(s32 *, M2C_UNK *) __asm__("func_0035F4D8");
extern M2C_UNK D_003E7BF8__func_0036E200 __asm__("D_003E7BF8");
extern M2C_UNK D_003E7C40__func_0036E200 __asm__("D_003E7C40");
extern M2C_UNK D_003E7E38__func_0036E200 __asm__("D_003E7E38");
extern s32 D_003FD798__func_0036E200 __asm__("D_003FD798");
extern s32 D_004E4210__func_0036E200 __asm__("D_004E4210");
extern s32 D_004E4330__func_0036E200 __asm__("D_004E4330");

s32 *func_0036E200(void) {
    if (D_004E4330__func_0036E200 == 0) {
        if (D_004E4210__func_0036E200 == 0) {
            if (D_003FD798__func_0036E200 == 0) {
                func_0035F4D8__func_0036E200(&D_003FD798__func_0036E200, &D_003E7BF8__func_0036E200);
            }
            func_0035F4B8__func_0036E200(&D_004E4210__func_0036E200, &D_003E7C40__func_0036E200, &D_003FD798__func_0036E200);
        }
        func_0035F4B8__func_0036E200(&D_004E4330__func_0036E200, &D_003E7E38__func_0036E200, &D_004E4210__func_0036E200);
    }
    return &D_004E4330__func_0036E200;
}

extern M2C_UNK func_0035F4B8__func_0036E2A8(s32 *, M2C_UNK *, s32 *) __asm__("func_0035F4B8");
extern M2C_UNK func_0035F4D8__func_0036E2A8(s32 *, M2C_UNK *) __asm__("func_0035F4D8");
extern M2C_UNK D_003E7BF8__func_0036E2A8 __asm__("D_003E7BF8");
extern M2C_UNK D_003E7C40__func_0036E2A8 __asm__("D_003E7C40");
extern M2C_UNK D_003E7E58__func_0036E2A8 __asm__("D_003E7E58");
extern s32 D_003FD798__func_0036E2A8 __asm__("D_003FD798");
extern s32 D_004E4210__func_0036E2A8 __asm__("D_004E4210");
extern s32 D_004E4340__func_0036E2A8 __asm__("D_004E4340");

s32 *func_0036E2A8(void) {
    if (D_004E4340__func_0036E2A8 == 0) {
        if (D_004E4210__func_0036E2A8 == 0) {
            if (D_003FD798__func_0036E2A8 == 0) {
                func_0035F4D8__func_0036E2A8(&D_003FD798__func_0036E2A8, &D_003E7BF8__func_0036E2A8);
            }
            func_0035F4B8__func_0036E2A8(&D_004E4210__func_0036E2A8, &D_003E7C40__func_0036E2A8, &D_003FD798__func_0036E2A8);
        }
        func_0035F4B8__func_0036E2A8(&D_004E4340__func_0036E2A8, &D_003E7E58__func_0036E2A8, &D_004E4210__func_0036E2A8);
    }
    return &D_004E4340__func_0036E2A8;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036E350);

extern M2C_UNK func_0035F4B8__func_0036E3C0(s32 *, M2C_UNK *, s32 *) __asm__("func_0035F4B8");
extern M2C_UNK func_0035F4D8__func_0036E3C0(s32 *, M2C_UNK *) __asm__("func_0035F4D8");
extern M2C_UNK D_003E7BF8__func_0036E3C0 __asm__("D_003E7BF8");
extern M2C_UNK D_003E7C40__func_0036E3C0 __asm__("D_003E7C40");
extern M2C_UNK D_003E7E78__func_0036E3C0 __asm__("D_003E7E78");
extern s32 D_003FD798__func_0036E3C0 __asm__("D_003FD798");
extern s32 D_004E4210__func_0036E3C0 __asm__("D_004E4210");
extern s32 D_004E4350__func_0036E3C0 __asm__("D_004E4350");

s32 *func_0036E3C0(void) {
    if (D_004E4350__func_0036E3C0 == 0) {
        if (D_004E4210__func_0036E3C0 == 0) {
            if (D_003FD798__func_0036E3C0 == 0) {
                func_0035F4D8__func_0036E3C0(&D_003FD798__func_0036E3C0, &D_003E7BF8__func_0036E3C0);
            }
            func_0035F4B8__func_0036E3C0(&D_004E4210__func_0036E3C0, &D_003E7C40__func_0036E3C0, &D_003FD798__func_0036E3C0);
        }
        func_0035F4B8__func_0036E3C0(&D_004E4350__func_0036E3C0, &D_003E7E78__func_0036E3C0, &D_004E4210__func_0036E3C0);
    }
    return &D_004E4350__func_0036E3C0;
}

extern M2C_UNK func_0035F4B8__func_0036E468(s32 *, M2C_UNK *, s32 *) __asm__("func_0035F4B8");
extern M2C_UNK func_0035F4D8__func_0036E468(s32 *, M2C_UNK *) __asm__("func_0035F4D8");
extern M2C_UNK D_003E7BF8__func_0036E468 __asm__("D_003E7BF8");
extern M2C_UNK D_003E7C40__func_0036E468 __asm__("D_003E7C40");
extern M2C_UNK D_003E7E90__func_0036E468 __asm__("D_003E7E90");
extern s32 D_003FD798__func_0036E468 __asm__("D_003FD798");
extern s32 D_004E4210__func_0036E468 __asm__("D_004E4210");
extern s32 D_004E4360__func_0036E468 __asm__("D_004E4360");

s32 *func_0036E468(void) {
    if (D_004E4360__func_0036E468 == 0) {
        if (D_004E4210__func_0036E468 == 0) {
            if (D_003FD798__func_0036E468 == 0) {
                func_0035F4D8__func_0036E468(&D_003FD798__func_0036E468, &D_003E7BF8__func_0036E468);
            }
            func_0035F4B8__func_0036E468(&D_004E4210__func_0036E468, &D_003E7C40__func_0036E468, &D_003FD798__func_0036E468);
        }
        func_0035F4B8__func_0036E468(&D_004E4360__func_0036E468, &D_003E7E90__func_0036E468, &D_004E4210__func_0036E468);
    }
    return &D_004E4360__func_0036E468;
}

extern M2C_UNK func_0035F4B8__func_0036E510(s32 *, M2C_UNK *, s32 *) __asm__("func_0035F4B8");
extern M2C_UNK func_0035F4D8__func_0036E510(s32 *, M2C_UNK *) __asm__("func_0035F4D8");
extern M2C_UNK D_003E7BF8__func_0036E510 __asm__("D_003E7BF8");
extern M2C_UNK D_003E7C40__func_0036E510 __asm__("D_003E7C40");
extern M2C_UNK D_003E7EA8__func_0036E510 __asm__("D_003E7EA8");
extern s32 D_003FD798__func_0036E510 __asm__("D_003FD798");
extern s32 D_004E4210__func_0036E510 __asm__("D_004E4210");
extern s32 D_004E4370__func_0036E510 __asm__("D_004E4370");

s32 *func_0036E510(void) {
    if (D_004E4370__func_0036E510 == 0) {
        if (D_004E4210__func_0036E510 == 0) {
            if (D_003FD798__func_0036E510 == 0) {
                func_0035F4D8__func_0036E510(&D_003FD798__func_0036E510, &D_003E7BF8__func_0036E510);
            }
            func_0035F4B8__func_0036E510(&D_004E4210__func_0036E510, &D_003E7C40__func_0036E510, &D_003FD798__func_0036E510);
        }
        func_0035F4B8__func_0036E510(&D_004E4370__func_0036E510, &D_003E7EA8__func_0036E510, &D_004E4210__func_0036E510);
    }
    return &D_004E4370__func_0036E510;
}

extern M2C_UNK func_0035F4B8__func_0036E5B8(s32 *, M2C_UNK *, s32 *) __asm__("func_0035F4B8");
extern M2C_UNK func_0035F4D8__func_0036E5B8(s32 *, M2C_UNK *) __asm__("func_0035F4D8");
extern M2C_UNK D_003E7BF8__func_0036E5B8 __asm__("D_003E7BF8");
extern M2C_UNK D_003E7C40__func_0036E5B8 __asm__("D_003E7C40");
extern M2C_UNK D_003E7EC8__func_0036E5B8 __asm__("D_003E7EC8");
extern s32 D_003FD798__func_0036E5B8 __asm__("D_003FD798");
extern s32 D_004E4210__func_0036E5B8 __asm__("D_004E4210");
extern s32 D_004E4380__func_0036E5B8 __asm__("D_004E4380");

s32 *func_0036E5B8(void) {
    if (D_004E4380__func_0036E5B8 == 0) {
        if (D_004E4210__func_0036E5B8 == 0) {
            if (D_003FD798__func_0036E5B8 == 0) {
                func_0035F4D8__func_0036E5B8(&D_003FD798__func_0036E5B8, &D_003E7BF8__func_0036E5B8);
            }
            func_0035F4B8__func_0036E5B8(&D_004E4210__func_0036E5B8, &D_003E7C40__func_0036E5B8, &D_003FD798__func_0036E5B8);
        }
        func_0035F4B8__func_0036E5B8(&D_004E4380__func_0036E5B8, &D_003E7EC8__func_0036E5B8, &D_004E4210__func_0036E5B8);
    }
    return &D_004E4380__func_0036E5B8;
}

extern M2C_UNK func_0035F490__func_0036E660(s32 *, M2C_UNK *, M2C_UNK *, M2C_UNK) __asm__("func_0035F490");
extern M2C_UNK func_0035F4D8__func_0036E660(s32 *, M2C_UNK *) __asm__("func_0035F4D8");
extern M2C_UNK func_0036E9B8__func_0036E660() __asm__("func_0036E9B8");
extern M2C_UNK D_003E7C08__func_0036E660 __asm__("D_003E7C08");
extern M2C_UNK D_003E7EE8__func_0036E660 __asm__("D_003E7EE8");
extern M2C_UNK D_003E7F00__func_0036E660 __asm__("D_003E7F00");
extern s32 D_003FD7A0__func_0036E660 __asm__("D_003FD7A0");
extern s32 D_004E4390__func_0036E660 __asm__("D_004E4390");

s32 *func_0036E660(void) {
    if (D_004E4390__func_0036E660 == 0) {
        if (D_003FD7A0__func_0036E660 == 0) {
            func_0035F4D8__func_0036E660(&D_003FD7A0__func_0036E660, &D_003E7C08__func_0036E660);
        }
        func_0036E9B8__func_0036E660();
        func_0035F490__func_0036E660(&D_004E4390__func_0036E660, &D_003E7EE8__func_0036E660, &D_003E7F00__func_0036E660, 2);
    }
    return &D_004E4390__func_0036E660;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036E6E0);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036E710);

extern s32 D_003E79E8__func_0036E718 __asm__("D_003E79E8");

s32 func_0036E718(void) {
    return D_003E79E8__func_0036E718;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036E728);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036E730);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036E770);

extern M2C_UNK func_0035F4D8__func_0036E780(s32 *, M2C_UNK *) __asm__("func_0035F4D8");
extern M2C_UNK D_003E7F10__func_0036E780 __asm__("D_003E7F10");
extern s32 D_003FD7A8__func_0036E780 __asm__("D_003FD7A8");

s32 *func_0036E780(void) {
    if (D_003FD7A8__func_0036E780 == 0) {
        func_0035F4D8__func_0036E780(&D_003FD7A8__func_0036E780, &D_003E7F10__func_0036E780);
    }
    return &D_003FD7A8__func_0036E780;
}

extern M2C_UNK func_0035F4D8__func_0036E7C0(s32 *, M2C_UNK *) __asm__("func_0035F4D8");
extern M2C_UNK D_003E7F30__func_0036E7C0 __asm__("D_003E7F30");
extern s32 D_003FD7B0__func_0036E7C0 __asm__("D_003FD7B0");

s32 *func_0036E7C0(void) {
    if (D_003FD7B0__func_0036E7C0 == 0) {
        func_0035F4D8__func_0036E7C0(&D_003FD7B0__func_0036E7C0, &D_003E7F30__func_0036E7C0);
    }
    return &D_003FD7B0__func_0036E7C0;
}

extern M2C_UNK func_0035F4B8__func_0036E800(s32 *, M2C_UNK *, M2C_UNK *) __asm__("func_0035F4B8");
extern M2C_UNK func_0036D150__func_0036E800() __asm__("func_0036D150");
extern M2C_UNK D_003E7F58__func_0036E800 __asm__("D_003E7F58");
extern M2C_UNK D_003FD790__func_0036E800 __asm__("D_003FD790");
extern s32 D_004E43B0__func_0036E800 __asm__("D_004E43B0");

s32 *func_0036E800(void) {
    if (D_004E43B0__func_0036E800 == 0) {
        func_0036D150__func_0036E800();
        func_0035F4B8__func_0036E800(&D_004E43B0__func_0036E800, &D_003E7F58__func_0036E800, &D_003FD790__func_0036E800);
    }
    return &D_004E43B0__func_0036E800;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036E850);

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036E880);

u32 func_0036E888(void *arg0, s32 arg1) {
    u32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u32 *, 0x38);
    return (u32) ((arg1 + temp_v1) - 1) / temp_v1;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036E8B0);

extern M2C_UNK func_0035F4D8__func_0036E948(s32 *, M2C_UNK *) __asm__("func_0035F4D8");
extern M2C_UNK D_003E80C0__func_0036E948 __asm__("D_003E80C0");
extern s32 D_003FD7B8__func_0036E948 __asm__("D_003FD7B8");

s32 *func_0036E948(void) {
    if (D_003FD7B8__func_0036E948 == 0) {
        func_0035F4D8__func_0036E948(&D_003FD7B8__func_0036E948, &D_003E80C0__func_0036E948);
    }
    return &D_003FD7B8__func_0036E948;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036E988);

extern M2C_UNK func_0035F4B8__func_0036E9B8(s32 *, M2C_UNK *, M2C_UNK *) __asm__("func_0035F4B8");
extern M2C_UNK func_0036EA38__func_0036E9B8() __asm__("func_0036EA38");
extern M2C_UNK D_003E80E0__func_0036E9B8 __asm__("D_003E80E0");
extern s32 D_004E43A0__func_0036E9B8 __asm__("D_004E43A0");
extern M2C_UNK D_004E4400__func_0036E9B8 __asm__("D_004E4400");

s32 *func_0036E9B8(void) {
    if (D_004E43A0__func_0036E9B8 == 0) {
        func_0036EA38__func_0036E9B8();
        func_0035F4B8__func_0036E9B8(&D_004E43A0__func_0036E9B8, &D_003E80E0__func_0036E9B8, &D_004E4400__func_0036E9B8);
    }
    return &D_004E43A0__func_0036E9B8;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036EA08);

extern M2C_UNK func_0035F4B8__func_0036EA38(s32 *, M2C_UNK *, M2C_UNK *) __asm__("func_0035F4B8");
extern M2C_UNK func_0036E948__func_0036EA38() __asm__("func_0036E948");
extern M2C_UNK D_003E80F8__func_0036EA38 __asm__("D_003E80F8");
extern M2C_UNK D_003FD7B8__func_0036EA38 __asm__("D_003FD7B8");
extern s32 D_004E4400__func_0036EA38 __asm__("D_004E4400");

s32 *func_0036EA38(void) {
    if (D_004E4400__func_0036EA38 == 0) {
        func_0036E948__func_0036EA38();
        func_0035F4B8__func_0036EA38(&D_004E4400__func_0036EA38, &D_003E80F8__func_0036EA38, &D_003FD7B8__func_0036EA38);
    }
    return &D_004E4400__func_0036EA38;
}

INCLUDE_ASM("asm/nonmatchings/cod/000000", func_0036EA88);
