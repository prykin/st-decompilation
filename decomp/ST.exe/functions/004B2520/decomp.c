
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_004b2520(uint param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined4 *param_6
            ,undefined4 *param_7,undefined4 *param_8,int param_9,int *param_10)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  short sVar13;
  int *piVar14;
  bool bVar15;
  int local_68;
  int local_64;
  int local_48;
  int local_34;
  int *local_30;
  int local_2c;
  int local_28;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_00790940;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_30 = (int *)0x0;
  ExceptionList = &local_14;
  *param_8 = 0xffffffff;
  *param_7 = 0xffffffff;
  *param_6 = 0xffffffff;
  *param_10 = 0;
  local_48 = 1;
  local_8 = 0;
  Library::MSVCRT::FUN_0072da40();
  local_34 = 0;
  local_8 = 0xffffffff;
  iVar5 = thunk_FUN_004b2390(param_1,param_3,param_4,param_5,param_10,1);
  if (iVar5 != 0) {
    local_34 = 1;
    goto cf_common_exit_004B2601;
  }
  if ((param_2 < 0x32) || (0x73 < param_2)) {
    if ((0 < param_2) && (param_2 < 0x29)) {
      local_2c = *(int *)(&DAT_007dfbac + param_2 * 4);
      goto LAB_004b266b;
    }
    local_2c = 0;
    uVar12 = _SHORT_007fb240;
    piVar14 = local_30;
  }
  else {
    uVar6 = thunk_FUN_004406c0((byte)param_1);
    local_2c = *(int *)(&DAT_007e3f20 + ((uVar6 & 0xff) + param_2 * 3) * 4);
LAB_004b266b:
    uVar12 = _SHORT_007fb240;
    for (iVar5 = param_3 + -8; piVar14 = local_30, iVar5 <= param_3 + 8; iVar5 = iVar5 + 1) {
      if ((-1 < iVar5) && (iVar5 < (short)uVar12)) {
        for (iVar9 = param_4 + -8; iVar9 <= param_4 + 8; iVar9 = iVar9 + 1) {
          if (((-1 < iVar9) &&
              (SHORT_007fb242 = (short)((uint)_SHORT_007fb240 >> 0x10), iVar7 = (int)SHORT_007fb242,
              iVar9 < iVar7)) && (iVar7 = 0, 0 < SHORT_007fb244 + -1)) {
            do {
              sVar3 = (short)iVar5;
              if ((((sVar3 < 0) || ((short)uVar12 <= sVar3)) ||
                  ((sVar4 = (short)iVar9, sVar4 < 0 ||
                   ((SHORT_007fb242 <= sVar4 || (sVar13 = (short)iVar7, sVar13 < 0)))))) ||
                 (SHORT_007fb244 <= sVar13)) {
                piVar14 = (int *)0x0;
              }
              else {
                piVar14 = *(int **)(DAT_007fb248 +
                                   ((int)sVar4 * (int)(short)uVar12 +
                                    (int)sVar13 * (int)SHORT_007fb246 + (int)sVar3) * 8);
              }
              if (((piVar14 != (int *)0x0) && ((uint)piVar14[9] < 8)) &&
                 (((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[piVar14[9] * 0x51] < 8)) &&
                  (iVar8 = (**(code **)(*piVar14 + 0x2c))(), uVar12 = _SHORT_007fb240, iVar8 == 0x6f
                  )))) {
                bVar1 = *(byte *)(piVar14 + 9);
                if (DAT_00808a8f == '\0') {
                  if (bVar1 == (byte)param_1) {
LAB_004b281d:
                    iVar8 = 0;
                  }
                  else {
                    uVar6 = (uint)bVar1;
                    uVar11 = param_1 & 0xff;
                    cVar2 = *(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar11);
                    if ((cVar2 == '\0') &&
                       (*(char *)((int)&DAT_00808a4f + uVar11 * 8 + uVar6) == '\0')) {
                      iVar8 = -2;
                    }
                    else if ((cVar2 == '\x01') &&
                            (*(char *)((int)&DAT_00808a4f + uVar11 * 8 + uVar6) == '\0')) {
                      iVar8 = -1;
                    }
                    else if ((cVar2 == '\0') &&
                            (*(char *)((int)&DAT_00808a4f + uVar11 * 8 + uVar6) == '\x01')) {
                      iVar8 = 1;
                    }
                    else {
                      if ((cVar2 != '\x01') ||
                         (*(char *)((int)&DAT_00808a4f + uVar11 * 8 + uVar6) != '\x01'))
                      goto LAB_004b281d;
                      iVar8 = 2;
                    }
                  }
                  bVar15 = iVar8 < 0;
                }
                else {
                  bVar15 = (&DAT_008087ea)[(param_1 & 0xff) * 0x51] !=
                           (&DAT_008087ea)[(uint)bVar1 * 0x51];
                }
                if ((bVar15) && (local_2c < piVar14[0x134])) goto LAB_004b288e;
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < SHORT_007fb244 + -1);
          }
        }
      }
    }
  }
LAB_004b288e:
  local_30 = piVar14;
  if (local_30 == (int *)0x0) {
    if (*param_10 != 0) {
      *param_10 = 0;
      local_34 = 1;
      goto cf_common_exit_004B2601;
    }
    local_48 = 0;
  }
  else {
    piVar14 = local_30 + 0x134;
    *piVar14 = *piVar14 - local_2c;
    if (*piVar14 < 0) {
      local_30[0x134] = 0;
    }
    local_30[0x135] = *(int *)(DAT_00802a38 + 0xe4);
    uVar12 = _SHORT_007fb240;
  }
  local_28 = 1;
  iVar5 = param_4 - param_3;
  local_64 = param_3;
  while( true ) {
    local_64 = local_64 + 1;
    local_68 = param_3 + -1;
    sVar3 = SHORT_007fb242;
    if (SHORT_007fb242 < (short)uVar12) {
      sVar3 = (short)uVar12;
    }
    if (sVar3 <= local_28) break;
    iVar9 = 0;
    if (0 < SHORT_007fb244 + -1) {
      do {
        if (local_68 <= local_64) {
          piVar14 = (int *)(&stack0xffffff7c + local_34 * 0xc);
          iVar7 = local_68;
          do {
            if ((-1 < iVar7) && (iVar7 < (short)uVar12)) {
              iVar8 = local_68 + iVar5;
              if ((-1 < iVar8) &&
                 ((iVar8 < SHORT_007fb242 &&
                  (iVar10 = thunk_FUN_004b2390(param_1,iVar7,iVar8,iVar9,param_10,local_48),
                  uVar12 = _SHORT_007fb240, iVar10 != 0)))) {
                *piVar14 = iVar7;
                piVar14[1] = iVar8;
                piVar14[2] = iVar9;
                local_34 = local_34 + 1;
                piVar14 = piVar14 + 3;
                if (0xe < local_34) goto cf_common_exit_004B2601;
              }
              iVar8 = local_64 + iVar5;
              if (((-1 < iVar8) && (iVar8 < SHORT_007fb242)) &&
                 (iVar10 = thunk_FUN_004b2390(param_1,iVar7,iVar8,iVar9,param_10,local_48),
                 uVar12 = _SHORT_007fb240, iVar10 != 0)) {
                *piVar14 = iVar7;
                piVar14[1] = iVar8;
                piVar14[2] = iVar9;
                local_34 = local_34 + 1;
                piVar14 = piVar14 + 3;
                if (0xe < local_34) goto cf_common_exit_004B2601;
              }
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 <= local_64);
        }
        iVar7 = iVar5 + 1 + local_68;
        iVar8 = iVar5 + -1 + local_64;
        if (iVar7 <= iVar8) {
          piVar14 = (int *)(&stack0xffffff7c + local_34 * 0xc);
          do {
            if ((-1 < iVar7) && (iVar7 < SHORT_007fb242)) {
              if ((-1 < local_68) &&
                 ((local_68 < (short)uVar12 &&
                  (iVar10 = thunk_FUN_004b2390(param_1,local_68,iVar7,iVar9,param_10,local_48),
                  uVar12 = _SHORT_007fb240, iVar10 != 0)))) {
                *piVar14 = local_68;
                piVar14[1] = iVar7;
                piVar14[2] = iVar9;
                local_34 = local_34 + 1;
                piVar14 = piVar14 + 3;
                if (0xe < local_34) goto cf_common_exit_004B2601;
              }
              if (((-1 < local_64) && (local_64 < (short)uVar12)) &&
                 (iVar10 = thunk_FUN_004b2390(param_1,local_64,iVar7,iVar9,param_10,local_48),
                 uVar12 = _SHORT_007fb240, iVar10 != 0)) {
                *piVar14 = local_64;
                piVar14[1] = iVar7;
                piVar14[2] = iVar9;
                local_34 = local_34 + 1;
                piVar14 = piVar14 + 3;
                if (0xe < local_34) goto cf_common_exit_004B2601;
              }
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 <= iVar8);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < SHORT_007fb244 + -1);
    }
    local_28 = local_28 + 1;
    param_3 = local_68;
  }
cf_common_exit_004B2601:
  if (local_34 != 0) {
    if (local_34 < 2) {
      local_34 = 0;
    }
    else {
      local_34 = param_9 % local_34;
    }
    local_34 = local_34 * 0xc;
    *param_6 = *(undefined4 *)(&stack0xffffff7c + local_34);
    *param_7 = *(undefined4 *)(&stack0xffffff80 + local_34);
    *param_8 = *(undefined4 *)(&stack0xffffff84 + local_34);
  }
  ExceptionList = local_14;
  return 0;
}

