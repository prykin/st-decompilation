
undefined4 __fastcall FUN_004d9820(int *param_1)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  longlong lVar10;
  int local_8;
  
  if (param_1[0x136] + 0x4bU <= *(uint *)(DAT_00802a38 + 0xe4)) {
    param_1[0x136] = *(uint *)(DAT_00802a38 + 0xe4);
    param_1[0x137] = 0;
    param_1[0x138] = 0;
    iVar7 = param_1[0x16d] + -0xd;
    if (iVar7 < param_1[0x16d] + 0xd) {
      do {
        if (((-1 < iVar7) && (iVar7 < DAT_007fb242)) &&
           (iVar9 = param_1[0x16c] + -0xd, sVar4 = DAT_007fb240, sVar5 = DAT_007fb244,
           iVar9 < param_1[0x16c] + 0xd)) {
          do {
            if (((-1 < iVar9) && (iVar9 < sVar4)) && (local_8 = 0, 0 < sVar5)) {
              do {
                sVar8 = (short)iVar9;
                if ((((-1 < sVar8) && (sVar8 < sVar4)) &&
                    (((sVar6 = (short)iVar7, -1 < sVar6 &&
                      ((((sVar6 < DAT_007fb242 && (sVar2 = (short)local_8, -1 < sVar2)) &&
                        (sVar2 < sVar5)) &&
                       ((piVar1 = *(int **)(DAT_007fb248 +
                                           ((int)sVar6 * (int)sVar4 + (int)sVar2 * (int)DAT_007fb246
                                           + (int)sVar8) * 8), piVar1 != (int *)0x0 &&
                        (piVar1 != param_1)))))) &&
                     (iVar3 = (**(code **)(*piVar1 + 0x2c))(), iVar3 == 0x3a)))) &&
                   (iVar3 = FUN_006aced8(iVar9,iVar7,param_1[0x16c],param_1[0x16d]), iVar3 < 0xe)) {
                  param_1[0x137] = param_1[0x137] + 1;
                  param_1[0x138] = param_1[0x138] + iVar3;
                }
                local_8 = local_8 + 1;
                sVar4 = DAT_007fb240;
                sVar5 = DAT_007fb244;
              } while (local_8 < DAT_007fb244);
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < param_1[0x16c] + 0xd);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < param_1[0x16d] + 0xd);
    }
  }
  iVar7 = param_1[0x137] * 0xd - param_1[0x138];
  if (iVar7 < 0) {
    iVar7 = 0;
  }
  if (param_1[0x137] == 0) {
    iVar7 = thunk_FUN_004d8230();
  }
  else {
    lVar10 = FUN_006b12cc(0xd);
    iVar9 = (int)lVar10;
    lVar10 = FUN_006b12cc(iVar7);
    iVar7 = FUN_006b12a8((int)lVar10,iVar9);
    iVar7 = iVar7 + DAT_007eda8c;
    iVar9 = thunk_FUN_004d8230();
    lVar10 = FUN_006b12cc(iVar9);
    iVar7 = FUN_006b12dc((int)lVar10,iVar7);
    iVar7 = FUN_006b1280(iVar7);
  }
  param_1[0x139] = iVar7;
  if ((uint)(param_1[0x139] + param_1[0x135]) <= *(uint *)(DAT_00802a38 + 0xe4)) {
    param_1[0x135] = *(uint *)(DAT_00802a38 + 0xe4);
    param_1[0x134] = param_1[0x134] + 2;
    thunk_FUN_004d82b0(2);
    if (99 < param_1[0x134]) {
      thunk_FUN_004d9b20((int)param_1);
    }
  }
  return 0;
}

