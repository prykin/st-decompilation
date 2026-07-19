
void __thiscall
FUN_004db160(void *this,int param_1,undefined4 param_2,int *param_3,int *param_4,int *param_5,
            int *param_6)

{
  void *pvVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  short sVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_60 [21];
  void *local_c;
  int local_8;
  
  *param_6 = -1;
  sVar2 = (short)*param_3;
  local_c = this;
  if ((((((-1 < sVar2) && (sVar2 < DAT_007fb240)) && (sVar7 = (short)*param_4, -1 < sVar7)) &&
       ((sVar7 < DAT_007fb242 && (sVar6 = (short)*param_5, -1 < sVar6)))) &&
      ((sVar6 < DAT_007fb244 &&
       ((piVar5 = *(int **)(DAT_007fb248 +
                           ((int)DAT_007fb246 * (int)sVar6 + (int)DAT_007fb240 * (int)sVar7 +
                           (int)sVar2) * 8), piVar5 != (int *)0x0 && (piVar5[9] != param_1)))))) &&
     ((iVar3 = (**(code **)(*piVar5 + 0x2c))(), iVar3 == 0x3c ||
      (iVar3 = (**(code **)(*piVar5 + 0x2c))(), iVar3 == 0x53)))) {
    uVar4 = thunk_FUN_004406c0((char)piVar5[9]);
    uVar4 = uVar4 & 0xff;
    if (uVar4 == 1) {
      iVar3 = thunk_FUN_004e60d0(piVar5[9],0x42);
    }
    else {
      if (uVar4 == 2) {
        iVar3 = piVar5[9];
        iVar10 = 0x43;
      }
      else {
        if (uVar4 != 3) goto LAB_004db257;
        iVar3 = piVar5[9];
        iVar10 = 99;
      }
      iVar3 = thunk_FUN_004e60d0(iVar3,iVar10);
    }
    if (iVar3 != 0) {
      iVar3 = *param_5;
      iVar10 = *param_4;
      iVar9 = *param_3;
cf_common_join_004DB690:
      param_1 = iVar9;
      *param_6 = piVar5[9];
      if (param_1 < 0) {
        return;
      }
      if (iVar10 < 0) {
        return;
      }
      if (iVar3 < 0) {
        return;
      }
      iVar3 = 0;
      piVar5 = local_60;
      do {
        *piVar5 = iVar3;
        pvVar1 = local_c;
        iVar3 = iVar3 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar3 < 0x15);
      iVar3 = 0x15;
      do {
        uVar4 = *(int *)((int)pvVar1 + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)pvVar1 + 0x1c) = uVar4;
        uVar4 = (uVar4 >> 0x10) % 0x15;
        do {
          uVar8 = *(int *)((int)pvVar1 + 0x1c) * 0x41c64e6d + 0x3039;
          *(uint *)((int)pvVar1 + 0x1c) = uVar8;
          uVar8 = (uVar8 >> 0x10) % 0x15;
        } while (uVar8 == uVar4);
        iVar9 = local_60[uVar4];
        iVar3 = iVar3 + -1;
        local_60[uVar4] = local_60[uVar8];
        local_60[uVar8] = iVar9;
      } while (iVar3 != 0);
      iVar3 = 1;
      uVar4 = *(int *)((int)local_c + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)local_c + 0x1c) = uVar4;
      uVar4 = (uVar4 >> 0x10) % 0xd2;
      iVar9 = 0;
      piVar5 = local_60;
      do {
        uVar4 = uVar4 - *piVar5;
        if ((int)uVar4 < 1) {
          iVar3 = local_60[iVar9];
          break;
        }
        iVar9 = iVar9 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar9 < 0x15);
      uVar4 = *(int *)((int)local_c + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)local_c + 0x1c) = uVar4;
      uVar4 = (uVar4 >> 0x10) % 0x168;
      iVar9 = FUN_006aff50(uVar4);
      iVar9 = FUN_006b1280(iVar9 * iVar3);
      iVar9 = iVar9 + param_1;
      iVar11 = FUN_006aff5b(uVar4);
      iVar3 = FUN_006b1280(iVar11 * iVar3);
      iVar3 = iVar3 + iVar10;
      if (iVar9 < 0) {
        return;
      }
      if (DAT_007fb240 <= iVar9) {
        return;
      }
      if (iVar3 < 0) {
        return;
      }
      if (DAT_007fb242 <= iVar3) {
        return;
      }
      *param_3 = iVar9;
      *param_4 = iVar3;
      return;
    }
  }
LAB_004db257:
  param_5 = (int *)0x1;
  sVar2 = DAT_007fb244;
  do {
    local_8 = 0;
    if (sVar2 != 1 && -1 < sVar2 + -1) {
      do {
        iVar9 = *param_3 - (int)param_5;
        if (iVar9 <= *param_3 + (int)param_5) {
          do {
            if ((-1 < iVar9) && (iVar9 < DAT_007fb240)) {
              iVar10 = *param_4 - (int)param_5;
              sVar2 = (short)iVar9;
              if ((((-1 < iVar10) &&
                   (((iVar10 < DAT_007fb242 && (-1 < sVar2)) && (sVar2 < DAT_007fb240)))) &&
                  (((sVar7 = (short)iVar10, -1 < sVar7 && (sVar7 < DAT_007fb242)) &&
                   (sVar6 = (short)local_8, -1 < sVar6)))) &&
                 (((sVar6 < DAT_007fb244 &&
                   (piVar5 = *(int **)(DAT_007fb248 +
                                      ((int)sVar6 * (int)DAT_007fb246 +
                                       (int)sVar7 * (int)DAT_007fb240 + (int)sVar2) * 8),
                   piVar5 != (int *)0x0)) &&
                  ((piVar5[9] != param_1 &&
                   ((iVar3 = (**(code **)(*piVar5 + 0x2c))(), iVar3 == 0x3c ||
                    (iVar3 = (**(code **)(*piVar5 + 0x2c))(), iVar3 == 0x53)))))))) {
                uVar4 = thunk_FUN_004406c0((char)piVar5[9]);
                uVar4 = uVar4 & 0xff;
                if (uVar4 == 1) {
                  iVar11 = thunk_FUN_004e60d0(piVar5[9],0x42);
                  iVar3 = local_8;
                }
                else {
                  if (uVar4 == 2) {
                    iVar3 = piVar5[9];
                    iVar11 = 0x43;
                  }
                  else {
                    if (uVar4 != 3) goto LAB_004db3e4;
                    iVar3 = piVar5[9];
                    iVar11 = 99;
                  }
                  iVar11 = thunk_FUN_004e60d0(iVar3,iVar11);
                  iVar3 = local_8;
                }
                local_8 = iVar3;
                if (iVar11 != 0) goto cf_common_join_004DB690;
              }
LAB_004db3e4:
              iVar10 = *param_4 + (int)param_5;
              if ((((-1 < iVar10) && (iVar10 < DAT_007fb242)) &&
                  (piVar5 = (int *)thunk_FUN_004db980(sVar2,(short)iVar10,(short)local_8,0),
                  piVar5 != (int *)0x0)) &&
                 ((piVar5[9] != param_1 &&
                  ((iVar3 = (**(code **)(*piVar5 + 0x2c))(), iVar3 == 0x3c ||
                   (iVar3 = (**(code **)(*piVar5 + 0x2c))(), iVar3 == 0x53)))))) {
                uVar4 = thunk_FUN_004406c0((char)piVar5[9]);
                uVar4 = uVar4 & 0xff;
                if (uVar4 == 1) {
                  iVar11 = thunk_FUN_004e60d0(piVar5[9],0x42);
                  iVar3 = local_8;
                }
                else {
                  if (uVar4 == 2) {
                    iVar3 = piVar5[9];
                    iVar11 = 0x43;
                  }
                  else {
                    if (uVar4 != 3) goto LAB_004db497;
                    iVar3 = piVar5[9];
                    iVar11 = 99;
                  }
                  iVar11 = thunk_FUN_004e60d0(iVar3,iVar11);
                  iVar3 = local_8;
                }
                local_8 = iVar3;
                if (iVar11 != 0) goto cf_common_join_004DB690;
              }
            }
LAB_004db497:
            iVar9 = iVar9 + 1;
          } while (iVar9 <= *param_3 + (int)param_5);
        }
        iVar10 = (*param_4 - (int)param_5) + 1;
        if (iVar10 <= *param_4 + -1 + (int)param_5) {
          do {
            if ((-1 < iVar10) && (iVar10 < DAT_007fb242)) {
              iVar9 = *param_3 - (int)param_5;
              if ((-1 < iVar9) &&
                 ((((iVar9 < DAT_007fb240 &&
                    (piVar5 = (int *)thunk_FUN_004db980((short)iVar9,(short)iVar10,(short)local_8,0)
                    , piVar5 != (int *)0x0)) && (piVar5[9] != param_1)) &&
                  ((iVar3 = (**(code **)(*piVar5 + 0x2c))(), iVar3 == 0x3c ||
                   (iVar3 = (**(code **)(*piVar5 + 0x2c))(), iVar3 == 0x53)))))) {
                uVar4 = thunk_FUN_004406c0((char)piVar5[9]);
                uVar4 = uVar4 & 0xff;
                if (uVar4 == 1) {
                  iVar11 = thunk_FUN_004e60d0(piVar5[9],0x42);
                  iVar3 = local_8;
                }
                else {
                  if (uVar4 == 2) {
                    iVar3 = piVar5[9];
                    iVar11 = 0x43;
                  }
                  else {
                    if (uVar4 != 3) goto LAB_004db58d;
                    iVar3 = piVar5[9];
                    iVar11 = 99;
                  }
                  iVar11 = thunk_FUN_004e60d0(iVar3,iVar11);
                  iVar3 = local_8;
                }
                local_8 = iVar3;
                if (iVar11 != 0) goto cf_common_join_004DB690;
              }
LAB_004db58d:
              iVar9 = *param_3 + (int)param_5;
              if ((((-1 < iVar9) && (iVar9 < DAT_007fb240)) &&
                  ((piVar5 = (int *)thunk_FUN_004db980((short)iVar9,(short)iVar10,(short)local_8,0),
                   piVar5 != (int *)0x0 && (piVar5[9] != param_1)))) &&
                 ((iVar3 = (**(code **)(*piVar5 + 0x2c))(), iVar3 == 0x3c ||
                  (iVar3 = (**(code **)(*piVar5 + 0x2c))(), iVar3 == 0x53)))) {
                uVar4 = thunk_FUN_004406c0((char)piVar5[9]);
                uVar4 = uVar4 & 0xff;
                if (uVar4 == 1) {
                  iVar11 = thunk_FUN_004e60d0(piVar5[9],0x42);
                  iVar3 = local_8;
                }
                else {
                  if (uVar4 == 2) {
                    iVar3 = piVar5[9];
                    iVar11 = 0x43;
                  }
                  else {
                    if (uVar4 != 3) goto LAB_004db638;
                    iVar3 = piVar5[9];
                    iVar11 = 99;
                  }
                  iVar11 = thunk_FUN_004e60d0(iVar3,iVar11);
                  iVar3 = local_8;
                }
                local_8 = iVar3;
                if (iVar11 != 0) goto cf_common_join_004DB690;
              }
            }
LAB_004db638:
            iVar10 = iVar10 + 1;
          } while (iVar10 <= *param_4 + -1 + (int)param_5);
        }
        local_8 = local_8 + 1;
        sVar2 = DAT_007fb244;
      } while (local_8 < DAT_007fb244 + -1);
    }
    param_5 = (int *)((int)param_5 + 1);
    if (7 < (int)param_5) {
      return;
    }
  } while( true );
}

