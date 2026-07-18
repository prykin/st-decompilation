
int FUN_006d8260(undefined4 *param_1,uint param_2,undefined *param_3,undefined4 param_4)

{
  undefined4 ***pppuVar1;
  int iVar2;
  int iVar3;
  undefined4 ***pppuVar4;
  int iVar5;
  undefined4 ****ppppuVar6;
  int *piVar7;
  undefined4 ***pppuVar8;
  undefined4 ****ppppuVar9;
  undefined4 ****ppppuVar10;
  undefined4 ***pppuVar11;
  int *piVar12;
  uint uVar13;
  undefined4 *local_b0;
  undefined4 local_a4;
  undefined4 local_a0 [16];
  undefined4 **local_60;
  undefined4 ***local_4c;
  int *local_48;
  undefined4 ***local_44;
  undefined4 **local_40;
  undefined4 **local_34;
  int local_30;
  undefined4 **local_2c;
  undefined4 ***local_20;
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
    iVar2 = FUN_006a5e40(-0x34,DAT_007ed77c,0x7ee2e8,0x34);
  }
  else {
    local_8 = 0;
    ExceptionList = &local_14;
    FUN_0072da40();
    local_8 = 0xffffffff;
    local_a4 = DAT_00858df8;
    DAT_00858df8 = &local_a4;
    local_48 = (int *)&stack0xffffff40;
    local_1c = &stack0xffffff40;
    iVar2 = __setjmp3(local_a0,2,FUN_0072da21,0xffffffff);
    local_1c = &stack0xffffff40;
    if (iVar2 == 0) {
      ppppuVar9 = (undefined4 ****)0x0;
      local_60 = (undefined4 ***)0x7fffffff;
      local_2c = (undefined4 ***)0x80000001;
      local_4c = (undefined4 ****)0x0;
      iVar2 = 0;
      ppppuVar6 = (undefined4 ****)local_4c;
      if (0 < (int)param_2) {
        local_b0 = param_1;
        ppppuVar10 = ppppuVar9;
        do {
          ppppuVar9 = (undefined4 ****)FUN_006aac10(0x28);
          ppppuVar9[2] = (undefined4 ***)*local_b0;
          ppppuVar9[3] = (undefined4 ***)local_b0[1];
          iVar2 = iVar2 + 1;
          ppppuVar9[4] = (undefined4 ***)param_1[(iVar2 % (int)param_2) * 2];
          pppuVar8 = (undefined4 ***)param_1[(iVar2 % (int)param_2) * 2 + 1];
          ppppuVar9[5] = pppuVar8;
          pppuVar11 = ppppuVar9[2];
          pppuVar1 = ppppuVar9[4];
          if ((pppuVar11 == pppuVar1) && (ppppuVar9[3] == pppuVar8)) {
            FUN_006a5e90(ppppuVar9);
            ppppuVar9 = ppppuVar10;
          }
          else {
            pppuVar4 = ppppuVar9[3];
            if (((int)pppuVar8 < (int)pppuVar4) ||
               ((pppuVar4 == pppuVar8 && ((int)pppuVar1 < (int)pppuVar11)))) {
              ppppuVar9[3] = pppuVar8;
              ppppuVar9[5] = pppuVar4;
              ppppuVar9[2] = pppuVar1;
              ppppuVar9[4] = pppuVar11;
            }
            else if ((int)pppuVar4 < (int)pppuVar8) {
              ppppuVar9[1] = (undefined4 ***)((uint)ppppuVar9[1] | 4);
            }
            pppuVar8 = ppppuVar9[3];
            if ((int)pppuVar8 < (int)local_60) {
              local_60 = pppuVar8;
            }
            if ((int)local_2c < (int)ppppuVar9[5]) {
              local_2c = ppppuVar9[5];
            }
            pppuVar11 = ppppuVar9[2];
            pppuVar1 = ppppuVar9[4];
            if ((int)pppuVar11 < (int)pppuVar1) {
              pppuVar4 = (undefined4 ***)0x1;
            }
            else {
              pppuVar4 = (undefined4 ***)-(uint)(pppuVar11 != pppuVar1);
            }
            ppppuVar9[9] = pppuVar4;
            uVar13 = (int)pppuVar1 - (int)pppuVar11 >> 0x1f;
            iVar3 = ((int)pppuVar1 - (int)pppuVar11 ^ uVar13) - uVar13;
            iVar5 = (int)ppppuVar9[5] - (int)pppuVar8;
            pppuVar8 = (undefined4 ***)(iVar3 * 2);
            ppppuVar9[8] = pppuVar8;
            ppppuVar9[7] = (undefined4 ***)(iVar5 * 2);
            ppppuVar9[6] = (undefined4 ***)((int)pppuVar8 - iVar5);
            if (iVar3 <= iVar5) {
              ppppuVar9[1] = (undefined4 ***)((uint)ppppuVar9[1] | 1);
            }
            if (iVar5 == 0) {
              ppppuVar9[1] = (undefined4 ***)((uint)ppppuVar9[1] | 2);
            }
            FUN_006b9910(&local_4c,ppppuVar9);
          }
          local_b0 = local_b0 + 2;
          ppppuVar10 = ppppuVar9;
          ppppuVar6 = (undefined4 ****)local_4c;
        } while (iVar2 < (int)param_2);
      }
      for (; ppppuVar6 != (undefined4 ****)0x0; ppppuVar6 = (undefined4 ****)*ppppuVar6) {
        if ((((uint)ppppuVar9[1] & 4) != 0) && (((uint)ppppuVar6[1] & 6) == 0)) {
          ppppuVar6[1] = (undefined4 ***)((uint)ppppuVar6[1] | 8);
          ppppuVar9[1] = (undefined4 ***)((uint)ppppuVar9[1] | 8);
        }
        ppppuVar9 = ppppuVar6;
      }
      local_20 = (undefined4 ****)0x0;
      local_40 = local_60;
      pppuVar8 = (undefined4 ***)local_60;
      iVar2 = local_30;
      if ((int)local_60 <= (int)local_2c) {
        do {
          ppppuVar9 = (undefined4 ****)local_20;
          local_40 = pppuVar8;
          if (pppuVar8 == (undefined4 ***)local_60) {
            ppppuVar6 = &local_4c;
            local_60 = (undefined4 ***)0x7fffffff;
            ppppuVar10 = (undefined4 ****)local_4c;
            while (ppppuVar10 != (undefined4 ****)0x0) {
              pppuVar11 = ppppuVar10[3];
              if ((int)pppuVar8 < (int)pppuVar11) {
                ppppuVar6 = ppppuVar10;
                if ((int)pppuVar11 < (int)local_60) {
                  local_60 = pppuVar11;
                }
              }
              else {
                *ppppuVar6 = *ppppuVar10;
                *ppppuVar10 = local_20;
                local_20 = ppppuVar10;
                ppppuVar9 = ppppuVar10;
              }
              ppppuVar10 = (undefined4 ****)*ppppuVar6;
            }
          }
          param_2 = 0;
          local_44 = &local_20;
          uVar13 = param_2;
          for (; ppppuVar9 != (undefined4 ****)0x0; ppppuVar9 = (undefined4 ****)*ppppuVar9) {
            if ((pppuVar8 != ppppuVar9[5]) || (param_2 = uVar13, ((uint)ppppuVar9[1] & 10) != 0)) {
              local_34 = ppppuVar9[2];
              pppuVar8 = (undefined4 ***)local_34;
              if (0 < (int)ppppuVar9[6]) {
                if ((int)ppppuVar9[9] < 0) {
                  do {
                    pppuVar11 = (undefined4 ***)((int)ppppuVar9[6] - (int)ppppuVar9[7]);
                    ppppuVar9[6] = pppuVar11;
                    pppuVar8 = ppppuVar9[2];
                    ppppuVar9[2] = (undefined4 ***)((int)pppuVar8 + -1);
                    if ((int)pppuVar11 < 1) break;
                  } while ((int)ppppuVar9[4] < (int)pppuVar8);
                }
                else {
                  do {
                    pppuVar11 = (undefined4 ***)((int)ppppuVar9[6] - (int)ppppuVar9[7]);
                    ppppuVar9[6] = pppuVar11;
                    pppuVar8 = ppppuVar9[2];
                    ppppuVar9[2] = (undefined4 ***)((int)pppuVar8 + 1);
                    if ((int)pppuVar11 < 1) break;
                  } while ((int)pppuVar8 < (int)ppppuVar9[4]);
                }
              }
              iVar2 = 0;
              piVar12 = local_48;
              if (0 < (int)uVar13) {
                do {
                  if (((int)local_34 < *piVar12) ||
                     (((undefined4 ***)local_34 == (undefined4 ***)*piVar12 &&
                      ((int)pppuVar8 < piVar12[1])))) {
                    if (((uint)ppppuVar9[1] & 2) == 0) {
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
              piVar12[1] = (int)pppuVar8;
              param_2 = uVar13 + 1;
              if (((uint)ppppuVar9[1] & 2) != 0) {
                piVar12[2] = (int)local_34;
                piVar12[3] = (int)pppuVar8;
                param_2 = uVar13 + 2;
              }
              ppppuVar9[6] = (undefined4 ***)((int)ppppuVar9[6] + (int)ppppuVar9[8]);
              ppppuVar9[3] = (undefined4 ***)((int)ppppuVar9[3] + 1);
              pppuVar8 = (undefined4 ***)local_40;
            }
            if (pppuVar8 == ppppuVar9[5]) {
              *local_44 = *ppppuVar9;
              FUN_006a5e90(ppppuVar9);
              pppuVar8 = (undefined4 ***)local_40;
              ppppuVar9 = (undefined4 ****)local_44;
            }
            local_44 = ppppuVar9;
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
                local_30 = (*(code *)param_3)(param_4,iVar2,pppuVar8,*piVar12,pppuVar8);
                if (local_30 != 0) {
                  FUN_006a5e40(local_30,DAT_007ed77c,0x7ee2e8,0xd5);
                }
                iVar2 = *piVar12;
                pppuVar8 = (undefined4 ***)local_40;
              }
              piVar12 = piVar12 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          pppuVar8 = (undefined4 ***)((int)pppuVar8 + 1);
          local_40 = pppuVar8;
          iVar2 = local_30;
        } while ((int)pppuVar8 <= (int)local_2c);
      }
    }
    local_30 = iVar2;
    iVar2 = local_30;
    DAT_00858df8 = (undefined4 *)local_a4;
    FUN_006b9890((int *)&local_4c);
    FUN_006b9890((int *)&local_20);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      FUN_006a5e40(iVar2,DAT_007ed77c,0x7ee2e8,0xe8);
    }
  }
  ExceptionList = local_14;
  return iVar2;
}

