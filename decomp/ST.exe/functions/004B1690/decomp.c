
undefined4 __cdecl FUN_004b1690(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  short sVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  void *local_10;
  int local_c;
  undefined4 local_8;
  
  if ((((param_1 < 0) || ((int)DAT_007fb240 < param_1 + 1)) || (param_2 < 0)) ||
     ((((int)DAT_007fb242 < param_2 + 1 || (param_3 < 0)) || ((int)DAT_007fb244 < param_3 + 1)))) {
cf_break_loop_004B1816:
    bVar1 = false;
  }
  else {
    bVar1 = true;
    local_10 = (void *)0x1;
    iVar8 = param_1;
    if (param_1 < param_1 + 1) {
      do {
        iVar5 = param_2;
        if (param_2 < param_2 + 1) {
          do {
            iVar3 = param_3;
            if (param_3 < param_3 + 1) {
              do {
                sVar7 = (short)iVar8;
                if (sVar7 < 0) goto cf_break_loop_004B1816;
                sVar6 = (short)iVar5;
                sVar2 = (short)iVar3;
                if (((((sVar7 < DAT_007fb240) && (-1 < sVar6)) &&
                     ((sVar6 < DAT_007fb242 &&
                      (((-1 < sVar2 && (sVar2 < DAT_007fb244)) &&
                       (*(int *)(DAT_007fb248 +
                                ((int)sVar2 * (int)DAT_007fb246 + (int)sVar6 * (int)DAT_007fb240 +
                                (int)sVar7) * 8) != 0)))))) ||
                    ((sVar7 < 0 || (DAT_007fb240 <= sVar7)))) ||
                   ((sVar6 < 0 ||
                    (((DAT_007fb242 <= sVar6 || (sVar2 < 0)) ||
                     ((DAT_007fb244 <= sVar2 ||
                      (*(short *)(DAT_007fb280 +
                                 ((int)sVar6 * (int)DAT_007fb278 + (int)sVar2 * (int)DAT_007fb27e +
                                 (int)sVar7) * 2) != 0)))))))) goto cf_break_loop_004B1816;
                iVar3 = iVar3 + 1;
              } while (iVar3 < param_3 + 1);
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < param_2 + 1);
        }
        bVar1 = true;
        iVar8 = iVar8 + 1;
      } while (iVar8 < param_1 + 1);
    }
  }
  local_8 = (undefined *)0x0;
  if (param_4 == 0xdd) {
    local_8 = &DAT_007907ac;
  }
  else if (param_4 == 0xde) {
    local_8 = &DAT_007907d0;
  }
  if (bVar1) {
    local_c = 1;
    sVar7 = (short)param_3;
    if ((0 < param_3) && (iVar8 = param_1 + -1, iVar8 < param_1 + 2)) {
      do {
        iVar5 = param_2 + -1;
        if (iVar5 < param_2 + 2) {
          param_4 = iVar5 * 0xc;
          do {
            if (*(int *)(local_8 + param_4 + param_2 * -0xc + param_1 * -4 + iVar8 * 4 + 0x10) == 1)
            {
              sVar2 = sVar7 + -1;
              sVar6 = (short)iVar8;
              if ((-1 < sVar6) &&
                 ((((((sVar4 = (short)iVar5, sVar6 < DAT_007fb240 && (-1 < sVar4)) &&
                     (sVar4 < DAT_007fb242)) && ((-1 < sVar2 && (sVar2 < DAT_007fb244)))) &&
                   (*(int *)(DAT_007fb248 +
                            ((int)sVar4 * (int)DAT_007fb240 + (int)DAT_007fb246 * (int)sVar2 +
                            (int)sVar6) * 8) != 0)) ||
                  ((((-1 < sVar6 && (sVar6 < DAT_007fb240)) &&
                    ((-1 < sVar4 &&
                     (((sVar4 < DAT_007fb242 && (-1 < sVar2)) && (sVar2 < DAT_007fb244)))))) &&
                   (*(short *)(DAT_007fb280 +
                              ((int)sVar4 * (int)DAT_007fb278 + (int)DAT_007fb27e * (int)sVar2 +
                              (int)sVar6) * 2) != -1)))))) {
                local_c = 0;
                goto LAB_004b199c;
              }
            }
            iVar5 = iVar5 + 1;
            param_4 = param_4 + 0xc;
          } while (iVar5 < param_2 + 2);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < param_1 + 2);
    }
LAB_004b199c:
    sVar2 = DAT_007fb240;
    if (((param_5 == 0) && (local_c != 0)) &&
       ((local_c = 0, param_3 < 3 && (local_c = 1, iVar8 = param_1, param_1 < param_1 + 3)))) {
      do {
        if (param_2 < param_2 + 3) {
          iVar5 = param_2;
          do {
            bVar1 = thunk_FUN_004961b0((short)iVar8,(short)iVar5,sVar7 + 1);
            if ((CONCAT31(extraout_var,bVar1) == 0) ||
               (bVar1 = thunk_FUN_004961b0((short)iVar8,(short)iVar5,sVar7 + 2),
               CONCAT31(extraout_var_00,bVar1) == 0)) {
              local_c = 0;
              sVar2 = DAT_007fb240;
              goto LAB_004b1a39;
            }
            iVar5 = iVar5 + 1;
            sVar2 = DAT_007fb240;
          } while (iVar5 < param_2 + 3);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < param_1 + 3);
    }
LAB_004b1a39:
    bVar1 = true;
    iVar8 = param_1;
    if (param_1 < param_1 + 3) {
      do {
        iVar5 = param_2;
        if (param_2 < param_2 + 3) {
          do {
            iVar3 = param_3;
            if (param_3 < param_3 + 1) {
              do {
                sVar7 = (short)iVar8;
                if ((((sVar7 < 0) || (sVar2 <= sVar7)) || (sVar6 = (short)iVar5, sVar6 < 0)) ||
                   (((DAT_007fb242 <= sVar6 || (sVar4 = (short)iVar3, sVar4 < 0)) ||
                    (DAT_007fb244 <= sVar4)))) {
                  local_10 = (void *)0x0;
                }
                else {
                  local_10 = *(void **)(DAT_007fb248 + 4 +
                                       ((int)sVar6 * (int)sVar2 + (int)sVar4 * (int)DAT_007fb246 +
                                       (int)sVar7) * 8);
                  sVar2 = DAT_007fb240;
                }
                if ((local_10 != (void *)0x0) && (*(int *)((int)local_10 + 0x20) != 0xbe)) {
                  bVar1 = false;
                  goto LAB_004b1b6e;
                }
                iVar3 = iVar3 + 1;
              } while (iVar3 < param_3 + 1);
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < param_2 + 3);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < param_1 + 3);
    }
    if (DAT_007fa150 != 0) {
      *(undefined4 *)(DAT_007fa150 + 4) = 0;
      iVar8 = FUN_006b1190(DAT_007fa150,&local_10);
      while (-1 < iVar8) {
        if (local_10 != (void *)0x0) {
          thunk_FUN_004162b0(local_10,(undefined2 *)((int)&param_4 + 2),
                             (undefined2 *)((int)&param_5 + 2),(undefined2 *)((int)&local_8 + 2));
          if (((param_4._2_2_ == param_1) && (param_5._2_2_ == param_2)) &&
             (local_8._2_2_ == param_3)) {
            bVar1 = false;
          }
        }
        iVar8 = FUN_006b1190(DAT_007fa150,&local_10);
      }
    }
LAB_004b1b6e:
    if ((local_c != 0) && (bVar1)) {
      return 1;
    }
  }
  return 0;
}

