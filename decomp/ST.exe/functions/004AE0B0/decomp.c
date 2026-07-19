
/* [STSwitchEnumApplier] Switch target param_4 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004AE0B0_param_4Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_38=56;CASE_39=57;CASE_4F=79;CASE_5E=94;CASE_61=97 */

undefined4 __cdecl
FUN_004ae0b0(int param_1,int param_2,int param_3,Global_sub_004AE0B0_param_4Enum param_4,int param_5
            ,undefined4 *param_6,int *param_7,int *param_8,int param_9,int *param_10)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined3 extraout_var;
  void *pvVar8;
  uint uVar9;
  short sVar10;
  int iVar11;
  uint uVar12;
  short sVar13;
  short sVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined4 local_24;
  undefined4 local_20;
  int local_18;
  int *local_10;
  int local_c;
  short local_8;
  short local_6;
  
  iVar11 = 1;
  local_24 = 0;
  iVar15 = 1;
  local_18 = 0;
  local_c = 0;
  if (*(int *)(&DAT_00791d68 + param_4 * 4) == 0) {
    iVar15 = 1;
    iVar11 = 1;
  }
  else if (*(int *)(&DAT_00791d68 + param_4 * 4) == 1) {
    iVar15 = 2;
    iVar11 = 2;
  }
  if (((((param_1 < 0) || (iVar11 = iVar11 + param_1, DAT_007fb240 < iVar11)) || (param_2 < 0)) ||
      ((iVar15 = iVar15 + param_2, DAT_007fb242 < iVar15 || (param_3 < 0)))) ||
     ((int)DAT_007fb244 < param_3 + 1)) {
cf_break_loop_004AE25B:
    local_20 = 0;
    goto LAB_004aecb2;
  }
  local_20 = 1;
  for (iVar16 = param_1; iVar7 = param_2, iVar16 < iVar11; iVar16 = iVar16 + 1) {
    for (; iVar7 < iVar15; iVar7 = iVar7 + 1) {
      iVar6 = param_3;
      if (param_3 < param_3 + 1) {
        do {
          sVar13 = (short)iVar16;
          if (sVar13 < 0) goto cf_break_loop_004AE25B;
          sVar10 = (short)iVar7;
          sVar14 = (short)iVar6;
          if ((((sVar13 < DAT_007fb240) && (-1 < sVar10)) &&
              ((sVar10 < DAT_007fb242 &&
               (((-1 < sVar14 && (sVar14 < DAT_007fb244)) &&
                (*(int *)(DAT_007fb248 +
                         ((int)sVar14 * (int)DAT_007fb246 + (int)sVar10 * (int)DAT_007fb240 +
                         (int)sVar13) * 8) != 0)))))) ||
             (((sVar13 < 0 || (DAT_007fb240 <= sVar13)) ||
              ((sVar10 < 0 ||
               (((DAT_007fb242 <= sVar10 || (sVar14 < 0)) ||
                ((DAT_007fb244 <= sVar14 ||
                 (*(short *)(DAT_007fb280 +
                            ((int)sVar10 * (int)DAT_007fb278 + (int)sVar14 * (int)DAT_007fb27e +
                            (int)sVar13) * 2) != 0)))))))))) goto cf_break_loop_004AE25B;
          iVar6 = iVar6 + 1;
        } while (iVar6 < param_3 + 1);
      }
    }
  }
  local_18 = 1;
  sVar13 = (short)param_3;
  iVar16 = param_1;
  if (0 < param_3) {
    for (; iVar16 < iVar11; iVar16 = iVar16 + 1) {
      if (param_2 < iVar15) {
        sVar14 = sVar13 + -1;
        iVar7 = param_2;
        do {
          sVar10 = (short)iVar16;
          if ((-1 < sVar10) &&
             ((((((sVar4 = (short)iVar7, sVar10 < DAT_007fb240 && (-1 < sVar4)) &&
                 (sVar4 < DAT_007fb242)) && ((-1 < sVar14 && (sVar14 < DAT_007fb244)))) &&
               (*(int *)(DAT_007fb248 +
                        ((int)sVar14 * (int)DAT_007fb246 + (int)sVar4 * (int)DAT_007fb240 +
                        (int)sVar10) * 8) != 0)) ||
              (((-1 < sVar10 && (sVar10 < DAT_007fb240)) &&
               ((-1 < sVar4 &&
                ((((sVar4 < DAT_007fb242 && (-1 < sVar14)) && (sVar14 < DAT_007fb244)) &&
                 (*(short *)(DAT_007fb280 +
                            ((int)sVar4 * (int)DAT_007fb278 + (int)sVar14 * (int)DAT_007fb27e +
                            (int)sVar10) * 2) != -1)))))))))) {
            local_18 = 0;
            goto LAB_004ae37e;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar15);
      }
    }
  }
LAB_004ae37e:
  if (((param_9 == 0) ||
      (iVar16 = thunk_FUN_004406c0((char)param_5), sVar14 = DAT_007fb240, (char)iVar16 == '\x03'))
     && ((sVar14 = DAT_007fb240, local_18 != 0 && (local_18 = 0, param_3 < 4)))) {
    local_18 = 1;
    for (local_c = param_1; local_c < iVar11; local_c = local_c + 1) {
      if (param_2 < iVar15) {
        iVar16 = param_2;
        do {
          bVar3 = thunk_FUN_004961b0((short)local_c,(short)iVar16,sVar13 + 1);
          sVar14 = DAT_007fb240;
          if (CONCAT31(extraout_var,bVar3) == 0) {
            local_18 = 0;
            goto LAB_004ae41c;
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < iVar15);
      }
    }
  }
LAB_004ae41c:
  switch(param_4) {
  case CASE_38:
  case CASE_39:
  case CASE_4F:
  case CASE_5E:
  case CASE_61:
    local_c = 0;
    local_10 = thunk_FUN_004d85e0(param_1,param_2,param_3);
    if (local_10 != (int *)0x0) {
      iVar11 = (**(code **)(*local_10 + 0x2c))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((&BYTE_004aecec)[param_4]) {
      case 0:
        if (iVar11 == 0xdc) {
          local_c = 1;
        }
        break;
      case 1:
        if (iVar11 == 0xdd) {
          local_c = 1;
        }
        break;
      case 2:
        if (iVar11 == 0xde) {
          local_c = 1;
        }
      }
    }
    break;
  default:
    local_c = 1;
    for (iVar16 = param_1; iVar7 = param_2, iVar16 < iVar11; iVar16 = iVar16 + 1) {
      for (; iVar7 < iVar15; iVar7 = iVar7 + 1) {
        iVar6 = param_3;
        if (param_3 < param_3 + 1) {
          do {
            sVar10 = (short)iVar16;
            if (((sVar10 < 0) || (sVar14 <= sVar10)) ||
               ((sVar4 = (short)iVar7, sVar4 < 0 ||
                (((DAT_007fb242 <= sVar4 || (sVar5 = (short)iVar6, sVar5 < 0)) ||
                 (DAT_007fb244 <= sVar5)))))) {
              local_10 = (int *)0x0;
            }
            else {
              local_10 = *(int **)(DAT_007fb248 + 4 +
                                  ((int)sVar4 * (int)sVar14 + (int)sVar5 * (int)DAT_007fb246 +
                                  (int)sVar10) * 8);
            }
            if (((local_10 != (int *)0x0) && (local_10[8] != 0xbe)) ||
               (pvVar8 = thunk_FUN_004d85e0(iVar16,iVar7,iVar6), pvVar8 != (void *)0x0))
            goto cf_break_loop_004AEC96;
            iVar6 = iVar6 + 1;
            local_10 = (int *)0x0;
            sVar14 = DAT_007fb240;
          } while (iVar6 < param_3 + 1);
        }
      }
    }
    if (((int)param_4 < 0x54) || (0x5a < (int)param_4)) {
      if (param_4 == 100) {
        iVar11 = *(int *)(&DAT_007f57f6 + param_5 * 0xa62);
        if ((iVar11 != 0) && (uVar17 = 0, 0 < *(int *)(iVar11 + 0xc))) {
          do {
            FUN_006acc70(iVar11,uVar17,&local_10);
            thunk_FUN_004162b0(local_10,(undefined2 *)((int)&param_9 + 2),&local_6,&local_8);
            if ((((param_9._2_2_ != param_1) || ((local_6 != param_2 || (local_8 != param_3)))) &&
                (uVar9 = param_9._2_2_ - param_1, uVar12 = (int)uVar9 >> 0x1f,
                (int)((uVar9 ^ uVar12) - uVar12) < 0x10)) &&
               (uVar9 = local_6 - param_2 >> 0x1f, (int)((local_6 - param_2 ^ uVar9) - uVar9) < 0x10
               )) goto cf_break_loop_004AEC96;
            iVar11 = *(int *)(&DAT_007f57f6 + param_5 * 0xa62);
            uVar17 = uVar17 + 1;
          } while ((int)uVar17 < *(int *)(iVar11 + 0xc));
        }
      }
      else if (param_4 == 0x4d) {
        iVar11 = *(int *)(&DAT_007f5802 + param_5 * 0xa62);
        param_10 = (int *)(&DAT_007f5802 + param_5 * 0xa62);
        if (iVar11 != 0) {
          iVar15 = DAT_00795118 / 0xc9;
          uVar17 = 0;
          if (0 < *(int *)(iVar11 + 0xc)) {
            do {
              FUN_006acc70(iVar11,uVar17,&local_10);
              thunk_FUN_004162b0(local_10,(undefined2 *)((int)&param_9 + 2),&local_6,&local_8);
              if ((((param_9._2_2_ != param_1) || (local_6 != param_2)) || (local_8 != param_3)) &&
                 ((uVar9 = param_9._2_2_ - param_1, uVar12 = (int)uVar9 >> 0x1f,
                  (int)((uVar9 ^ uVar12) - uVar12) <= iVar15 &&
                  (uVar9 = local_6 - param_2 >> 0x1f,
                  (int)((local_6 - param_2 ^ uVar9) - uVar9) <= iVar15))))
              goto cf_break_loop_004AEC96;
              uVar17 = uVar17 + 1;
              iVar11 = *param_10;
            } while ((int)uVar17 < *(int *)(iVar11 + 0xc));
          }
        }
      }
      else if (param_4 == 0x43) {
        iVar11 = *(int *)(&DAT_007f580e + param_5 * 0xa62);
        param_10 = (int *)(&DAT_007f580e + param_5 * 0xa62);
        if (iVar11 != 0) {
          iVar15 = DAT_007950f0 / 0xc9;
          uVar17 = 0;
          if (0 < *(int *)(iVar11 + 0xc)) {
            do {
              FUN_006acc70(iVar11,uVar17,&local_10);
              thunk_FUN_004162b0(local_10,(undefined2 *)((int)&param_9 + 2),&local_6,&local_8);
              if ((((param_9._2_2_ != param_1) || (local_6 != param_2)) || (local_8 != param_3)) &&
                 ((uVar9 = param_9._2_2_ - param_1, uVar12 = (int)uVar9 >> 0x1f,
                  (int)((uVar9 ^ uVar12) - uVar12) <= iVar15 &&
                  (uVar9 = local_6 - param_2 >> 0x1f,
                  (int)((local_6 - param_2 ^ uVar9) - uVar9) <= iVar15))))
              goto cf_break_loop_004AEC96;
              uVar17 = uVar17 + 1;
              iVar11 = *param_10;
            } while ((int)uVar17 < *(int *)(iVar11 + 0xc));
          }
        }
      }
      else if (param_4 == 0x73) {
        iVar11 = *(int *)(&DAT_007f5812 + param_5 * 0xa62);
        param_10 = (int *)(&DAT_007f5812 + param_5 * 0xa62);
        if (iVar11 != 0) {
          iVar15 = DAT_007951b0 / 0xc9;
          uVar17 = 0;
          if (0 < *(int *)(iVar11 + 0xc)) {
            do {
              FUN_006acc70(iVar11,uVar17,&local_10);
              thunk_FUN_004162b0(local_10,(undefined2 *)((int)&param_9 + 2),&local_6,&local_8);
              if ((((param_9._2_2_ != param_1) || (local_6 != param_2)) || (local_8 != param_3)) &&
                 ((uVar9 = param_9._2_2_ - param_1, uVar12 = (int)uVar9 >> 0x1f,
                  (int)((uVar9 ^ uVar12) - uVar12) <= iVar15 &&
                  (uVar9 = local_6 - param_2 >> 0x1f,
                  (int)((local_6 - param_2 ^ uVar9) - uVar9) <= iVar15))))
              goto cf_break_loop_004AEC96;
              uVar17 = uVar17 + 1;
              iVar11 = *param_10;
            } while ((int)uVar17 < *(int *)(iVar11 + 0xc));
          }
        }
      }
      else if (param_4 == 0x65) {
        iVar11 = *(int *)(&DAT_007f5806 + param_5 * 0xa62);
        param_10 = (int *)(&DAT_007f5806 + param_5 * 0xa62);
        if (iVar11 != 0) {
          iVar15 = DAT_00795178 / 0xc9;
          uVar17 = 0;
          if (0 < *(int *)(iVar11 + 0xc)) {
            do {
              FUN_006acc70(iVar11,uVar17,&local_10);
              thunk_FUN_004162b0(local_10,(undefined2 *)((int)&param_9 + 2),&local_6,&local_8);
              if ((((param_9._2_2_ != param_1) || (local_6 != param_2)) || (local_8 != param_3)) &&
                 ((uVar9 = param_9._2_2_ - param_1, uVar12 = (int)uVar9 >> 0x1f,
                  (int)((uVar9 ^ uVar12) - uVar12) <= iVar15 &&
                  (uVar9 = local_6 - param_2 >> 0x1f,
                  (int)((local_6 - param_2 ^ uVar9) - uVar9) <= iVar15))))
              goto cf_break_loop_004AEC96;
              uVar17 = uVar17 + 1;
              iVar11 = *param_10;
            } while ((int)uVar17 < *(int *)(iVar11 + 0xc));
          }
        }
      }
    }
    else {
      local_c = 0;
      sVar10 = (short)param_1;
      if (((((param_2 + -1 < 0) || (sVar10 < 0)) || (sVar14 <= sVar10)) ||
          (((sVar4 = (short)(param_2 + -1), sVar4 < 0 || (DAT_007fb242 <= sVar4)) ||
           ((sVar13 < 0 ||
            ((DAT_007fb244 <= sVar13 ||
             (piVar1 = *(int **)(DAT_007fb248 +
                                ((int)sVar13 * (int)DAT_007fb246 + (int)sVar14 * (int)sVar4 +
                                (int)sVar10) * 8), piVar1 == (int *)0x0)))))))) ||
         (((iVar11 = (**(code **)(*piVar1 + 0x2c))(), iVar11 != 0x53 ||
           ((param_10 != (int *)0x0 && ((int *)piVar1[6] != param_10)))) &&
          (((iVar11 = (**(code **)(*piVar1 + 0x2c))(), sVar14 = DAT_007fb240, iVar11 < 0x54 ||
            (iVar11 = (**(code **)(*piVar1 + 0x2c))(), sVar14 = DAT_007fb240, 0x5a < iVar11)) ||
           ((param_10 != (int *)0x0 && (*(int **)((int)piVar1 + 0x5d3) != param_10)))))))) {
        sVar4 = (short)param_2;
        if (((param_1 + -1 < 0) ||
            ((((sVar5 = (short)(param_1 + -1), sVar5 < 0 || (sVar14 <= sVar5)) || (sVar4 < 0)) ||
             (((DAT_007fb242 <= sVar4 || (sVar13 < 0)) ||
              ((DAT_007fb244 <= sVar13 ||
               (piVar1 = *(int **)(DAT_007fb248 +
                                  ((int)sVar13 * (int)DAT_007fb246 + (int)sVar4 * (int)sVar14 +
                                  (int)sVar5) * 8), piVar1 == (int *)0x0)))))))) ||
           (((iVar11 = (**(code **)(*piVar1 + 0x2c))(), piVar2 = param_10, iVar11 != 0x53 ||
             ((param_10 != (int *)0x0 && ((int *)piVar1[6] != param_10)))) &&
            (((iVar11 = (**(code **)(*piVar1 + 0x2c))(), sVar14 = DAT_007fb240, iVar11 < 0x54 ||
              (iVar11 = (**(code **)(*piVar1 + 0x2c))(), sVar14 = DAT_007fb240, 0x5a < iVar11)) ||
             ((piVar2 != (int *)0x0 && (*(int **)((int)piVar1 + 0x5d3) != piVar2)))))))) {
          if (((param_1 + 1 < (int)sVar14) &&
              ((((((sVar5 = (short)(param_1 + 1), -1 < sVar5 && (sVar5 < sVar14)) && (-1 < sVar4))
                 && ((sVar4 < DAT_007fb242 && (-1 < sVar13)))) && (sVar13 < DAT_007fb244)) &&
               (piVar1 = *(int **)(DAT_007fb248 +
                                  ((int)sVar13 * (int)DAT_007fb246 + (int)sVar4 * (int)sVar14 +
                                  (int)sVar5) * 8), piVar1 != (int *)0x0)))) &&
             (((iVar11 = (**(code **)(*piVar1 + 0x2c))(), piVar2 = param_10, iVar11 == 0x53 &&
               ((param_10 == (int *)0x0 || ((int *)piVar1[6] == param_10)))) ||
              ((iVar11 = (**(code **)(*piVar1 + 0x2c))(), sVar14 = DAT_007fb240, 0x53 < iVar11 &&
               ((iVar11 = (**(code **)(*piVar1 + 0x2c))(), sVar14 = DAT_007fb240, iVar11 < 0x5b &&
                ((piVar2 == (int *)0x0 || (*(int **)((int)piVar1 + 0x5d3) == piVar2)))))))))) {
            local_c = 1;
          }
          else if (((param_2 + 1 < (int)DAT_007fb242) &&
                   (((-1 < sVar10 && (sVar10 < sVar14)) &&
                    (sVar4 = (short)(param_2 + 1), -1 < sVar4)))) &&
                  ((((sVar4 < DAT_007fb242 && (-1 < sVar13)) &&
                    ((sVar13 < DAT_007fb244 &&
                     (piVar1 = *(int **)(DAT_007fb248 +
                                        ((int)sVar13 * (int)DAT_007fb246 + (int)sVar14 * (int)sVar4
                                        + (int)sVar10) * 8), piVar1 != (int *)0x0)))) &&
                   (((iVar11 = (**(code **)(*piVar1 + 0x2c))(), piVar2 = param_10, iVar11 == 0x53 &&
                     ((param_10 == (int *)0x0 || ((int *)piVar1[6] == param_10)))) ||
                    (((iVar11 = (**(code **)(*piVar1 + 0x2c))(), 0x53 < iVar11 &&
                      (iVar11 = (**(code **)(*piVar1 + 0x2c))(), iVar11 < 0x5b)) &&
                     ((piVar2 == (int *)0x0 || (*(int **)((int)piVar1 + 0x5d3) == piVar2)))))))))) {
            local_c = 1;
          }
        }
        else {
          local_c = 1;
        }
      }
      else {
        local_c = 1;
      }
    }
  }
switchD_004ae472_caseD_3:
  if ((local_18 != 0) && (local_c != 0)) {
    local_24 = 1;
  }
LAB_004aecb2:
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = local_20;
  }
  if (param_7 != (int *)0x0) {
    *param_7 = local_18;
  }
  if (param_8 != (int *)0x0) {
    *param_8 = local_c;
  }
  return local_24;
cf_break_loop_004AEC96:
  local_c = 0;
  goto switchD_004ae472_caseD_3;
}

