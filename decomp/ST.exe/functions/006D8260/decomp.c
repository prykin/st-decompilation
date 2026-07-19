
int FUN_006d8260(undefined4 *param_1,uint param_2,undefined *param_3,undefined4 param_4)

{
  undefined4 ****ppppuVar1;
  int extraout_EAX;
  int iVar2;
  int iVar3;
  undefined4 ****ppppuVar4;
  int iVar5;
  undefined4 *****pppppuVar6;
  int *piVar7;
  undefined4 ****ppppuVar8;
  undefined4 *****pppppuVar9;
  undefined4 *****pppppuVar10;
  undefined4 ****ppppuVar11;
  int *piVar12;
  uint uVar13;
  undefined4 *local_b0;
  InternalExceptionFrame local_a4;
  undefined4 ***local_60;
  undefined4 ****local_4c;
  int *local_48;
  undefined4 ****local_44;
  undefined4 ***local_40;
  undefined4 ***local_34;
  int local_30;
  undefined4 ***local_2c;
  undefined4 ****local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0079df28;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff40;
  local_30 = 0;
  if ((int)param_2 < 3) {
    ExceptionList = &local_14;
    local_1c = &stack0xffffff40;
    RaiseInternalException(-0x34,DAT_007ed77c,s_E__DKW_DDX_C_fillpoly_c_007ee2e8,0x34);
    iVar2 = extraout_EAX;
  }
  else {
    local_8 = 0;
    ExceptionList = &local_14;
    FUN_0072da40();
    local_8 = 0xffffffff;
    local_a4.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_a4;
    local_48 = (int *)&stack0xffffff40;
    local_1c = &stack0xffffff40;
    iVar2 = __setjmp3(local_a4.jumpBuffer,2,FUN_0072da21,0xffffffff);
    local_1c = &stack0xffffff40;
    if (iVar2 == 0) {
      pppppuVar9 = (undefined4 *****)0x0;
      local_60 = (undefined4 ****)0x7fffffff;
      local_2c = (undefined4 ****)0x80000001;
      local_4c = (undefined4 *****)0x0;
      iVar2 = 0;
      pppppuVar6 = (undefined4 *****)local_4c;
      if (0 < (int)param_2) {
        local_b0 = param_1;
        pppppuVar10 = pppppuVar9;
        do {
          pppppuVar9 = (undefined4 *****)FUN_006aac10(0x28);
          pppppuVar9[2] = (undefined4 ****)*local_b0;
          pppppuVar9[3] = (undefined4 ****)local_b0[1];
          iVar2 = iVar2 + 1;
          pppppuVar9[4] = (undefined4 ****)param_1[(iVar2 % (int)param_2) * 2];
          ppppuVar8 = (undefined4 ****)param_1[(iVar2 % (int)param_2) * 2 + 1];
          pppppuVar9[5] = ppppuVar8;
          ppppuVar11 = pppppuVar9[2];
          ppppuVar1 = pppppuVar9[4];
          if ((ppppuVar11 == ppppuVar1) && (pppppuVar9[3] == ppppuVar8)) {
            FUN_006a5e90(pppppuVar9);
            pppppuVar9 = pppppuVar10;
          }
          else {
            ppppuVar4 = pppppuVar9[3];
            if (((int)ppppuVar8 < (int)ppppuVar4) ||
               ((ppppuVar4 == ppppuVar8 && ((int)ppppuVar1 < (int)ppppuVar11)))) {
              pppppuVar9[3] = ppppuVar8;
              pppppuVar9[5] = ppppuVar4;
              pppppuVar9[2] = ppppuVar1;
              pppppuVar9[4] = ppppuVar11;
            }
            else if ((int)ppppuVar4 < (int)ppppuVar8) {
              pppppuVar9[1] = (undefined4 ****)((uint)pppppuVar9[1] | 4);
            }
            ppppuVar8 = pppppuVar9[3];
            if ((int)ppppuVar8 < (int)local_60) {
              local_60 = ppppuVar8;
            }
            if ((int)local_2c < (int)pppppuVar9[5]) {
              local_2c = pppppuVar9[5];
            }
            ppppuVar11 = pppppuVar9[2];
            ppppuVar1 = pppppuVar9[4];
            if ((int)ppppuVar11 < (int)ppppuVar1) {
              ppppuVar4 = (undefined4 ****)0x1;
            }
            else {
              ppppuVar4 = (undefined4 ****)-(uint)(ppppuVar11 != ppppuVar1);
            }
            pppppuVar9[9] = ppppuVar4;
            uVar13 = (int)ppppuVar1 - (int)ppppuVar11 >> 0x1f;
            iVar3 = ((int)ppppuVar1 - (int)ppppuVar11 ^ uVar13) - uVar13;
            iVar5 = (int)pppppuVar9[5] - (int)ppppuVar8;
            ppppuVar8 = (undefined4 ****)(iVar3 * 2);
            pppppuVar9[8] = ppppuVar8;
            pppppuVar9[7] = (undefined4 ****)(iVar5 * 2);
            pppppuVar9[6] = (undefined4 ****)((int)ppppuVar8 - iVar5);
            if (iVar3 <= iVar5) {
              pppppuVar9[1] = (undefined4 ****)((uint)pppppuVar9[1] | 1);
            }
            if (iVar5 == 0) {
              pppppuVar9[1] = (undefined4 ****)((uint)pppppuVar9[1] | 2);
            }
            FUN_006b9910(&local_4c,pppppuVar9);
          }
          local_b0 = local_b0 + 2;
          pppppuVar10 = pppppuVar9;
          pppppuVar6 = (undefined4 *****)local_4c;
        } while (iVar2 < (int)param_2);
      }
      for (; pppppuVar6 != (undefined4 *****)0x0; pppppuVar6 = (undefined4 *****)*pppppuVar6) {
        if ((((uint)pppppuVar9[1] & 4) != 0) && (((uint)pppppuVar6[1] & 6) == 0)) {
          pppppuVar6[1] = (undefined4 ****)((uint)pppppuVar6[1] | 8);
          pppppuVar9[1] = (undefined4 ****)((uint)pppppuVar9[1] | 8);
        }
        pppppuVar9 = pppppuVar6;
      }
      local_20 = (undefined4 *****)0x0;
      local_40 = local_60;
      ppppuVar8 = (undefined4 ****)local_60;
      iVar2 = local_30;
      if ((int)local_60 <= (int)local_2c) {
        do {
          pppppuVar9 = (undefined4 *****)local_20;
          local_40 = ppppuVar8;
          if (ppppuVar8 == (undefined4 ****)local_60) {
            pppppuVar6 = &local_4c;
            local_60 = (undefined4 ****)0x7fffffff;
            pppppuVar10 = (undefined4 *****)local_4c;
            while (pppppuVar10 != (undefined4 *****)0x0) {
              ppppuVar11 = pppppuVar10[3];
              if ((int)ppppuVar8 < (int)ppppuVar11) {
                pppppuVar6 = pppppuVar10;
                if ((int)ppppuVar11 < (int)local_60) {
                  local_60 = ppppuVar11;
                }
              }
              else {
                *pppppuVar6 = *pppppuVar10;
                *pppppuVar10 = local_20;
                local_20 = pppppuVar10;
                pppppuVar9 = pppppuVar10;
              }
              pppppuVar10 = (undefined4 *****)*pppppuVar6;
            }
          }
          param_2 = 0;
          local_44 = &local_20;
          uVar13 = param_2;
          for (; pppppuVar9 != (undefined4 *****)0x0; pppppuVar9 = (undefined4 *****)*pppppuVar9) {
            if ((ppppuVar8 != pppppuVar9[5]) || (param_2 = uVar13, ((uint)pppppuVar9[1] & 10) != 0))
            {
              local_34 = pppppuVar9[2];
              ppppuVar8 = (undefined4 ****)local_34;
              if (0 < (int)pppppuVar9[6]) {
                if ((int)pppppuVar9[9] < 0) {
                  do {
                    ppppuVar11 = (undefined4 ****)((int)pppppuVar9[6] - (int)pppppuVar9[7]);
                    pppppuVar9[6] = ppppuVar11;
                    ppppuVar8 = pppppuVar9[2];
                    pppppuVar9[2] = (undefined4 ****)((int)ppppuVar8 + -1);
                    if ((int)ppppuVar11 < 1) break;
                  } while ((int)pppppuVar9[4] < (int)ppppuVar8);
                }
                else {
                  do {
                    ppppuVar11 = (undefined4 ****)((int)pppppuVar9[6] - (int)pppppuVar9[7]);
                    pppppuVar9[6] = ppppuVar11;
                    ppppuVar8 = pppppuVar9[2];
                    pppppuVar9[2] = (undefined4 ****)((int)ppppuVar8 + 1);
                    if ((int)ppppuVar11 < 1) break;
                  } while ((int)ppppuVar8 < (int)pppppuVar9[4]);
                }
              }
              iVar2 = 0;
              piVar12 = local_48;
              if (0 < (int)uVar13) {
                do {
                  if (((int)local_34 < *piVar12) ||
                     (((undefined4 ****)local_34 == (undefined4 ****)*piVar12 &&
                      ((int)ppppuVar8 < piVar12[1])))) {
                    if (((uint)pppppuVar9[1] & 2) == 0) {
                      piVar7 = piVar12 + 2;
                    }
                    else {
                      piVar7 = piVar12 + 4;
                    }
                    FUN_0072da70(piVar7,piVar12,(iVar2 * 0x1fffffff + uVar13) * 8);
                    break;
                  }
                  iVar2 = iVar2 + 1;
                  piVar12 = piVar12 + 2;
                } while (iVar2 < (int)uVar13);
              }
              *piVar12 = (int)local_34;
              piVar12[1] = (int)ppppuVar8;
              param_2 = uVar13 + 1;
              if (((uint)pppppuVar9[1] & 2) != 0) {
                piVar12[2] = (int)local_34;
                piVar12[3] = (int)ppppuVar8;
                param_2 = uVar13 + 2;
              }
              pppppuVar9[6] = (undefined4 ****)((int)pppppuVar9[6] + (int)pppppuVar9[8]);
              pppppuVar9[3] = (undefined4 ****)((int)pppppuVar9[3] + 1);
              ppppuVar8 = (undefined4 ****)local_40;
            }
            if (ppppuVar8 == pppppuVar9[5]) {
              *local_44 = *pppppuVar9;
              FUN_006a5e90(pppppuVar9);
              ppppuVar8 = (undefined4 ****)local_40;
              pppppuVar9 = (undefined4 *****)local_44;
            }
            local_44 = pppppuVar9;
            uVar13 = param_2;
          }
          iVar2 = *local_48;
          if (0 < (int)(uVar13 - 1)) {
            piVar12 = local_48 + 3;
            uVar13 = uVar13 >> 1;
            do {
              if (iVar2 < piVar12[-3]) {
                iVar2 = piVar12[-3];
              }
              if (iVar2 <= *piVar12) {
                local_30 = (*(code *)param_3)(param_4,iVar2,ppppuVar8,*piVar12,ppppuVar8);
                if (local_30 != 0) {
                  RaiseInternalException
                            (local_30,DAT_007ed77c,s_E__DKW_DDX_C_fillpoly_c_007ee2e8,0xd5);
                }
                iVar2 = *piVar12;
                ppppuVar8 = (undefined4 ****)local_40;
              }
              piVar12 = piVar12 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          ppppuVar8 = (undefined4 ****)((int)ppppuVar8 + 1);
          local_40 = ppppuVar8;
          iVar2 = local_30;
        } while ((int)ppppuVar8 <= (int)local_2c);
      }
    }
    local_30 = iVar2;
    iVar2 = local_30;
    g_currentExceptionFrame = local_a4.previous;
    FUN_006b9890((int *)&local_4c);
    FUN_006b9890((int *)&local_20);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      RaiseInternalException(iVar2,DAT_007ed77c,s_E__DKW_DDX_C_fillpoly_c_007ee2e8,0xe8);
    }
  }
  ExceptionList = local_14;
  return iVar2;
}

