
void FUN_0044e260(uint param_1,uint param_2,uint param_3,int *param_4)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint *local_18;
  int *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  piVar1 = param_4;
  local_14 = (int *)thunk_FUN_0042b760(param_1,param_2);
  if (local_14 != (int *)0x0) {
    puVar2 = thunk_FUN_004233e0((int)local_14);
    param_2 = puVar2[3];
    if (param_2 != 0) {
      local_18 = FUN_006ae290((uint *)0x0,param_2,4,1);
      uVar10 = 0;
      if (0 < (int)param_2) {
        do {
          FUN_006acc70((int)puVar2,uVar10,&local_2c);
          local_14 = (int *)thunk_FUN_0042b620(param_1,local_2c,1);
          if ((local_14 == (int *)0x0) || (iVar3 = (**(code **)(*local_14 + 0xf8))(), iVar3 == 0)) {
            FUN_006b0c70((int)puVar2,uVar10);
            param_2 = param_2 - 1;
            uVar10 = uVar10 - 1;
          }
          else {
            FUN_006ae140(local_18,uVar10,&local_14);
          }
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)param_2);
      }
      FUN_006ae110((byte *)puVar2);
      if (param_2 != 0) {
        local_8 = 10000;
        local_c = 0;
        local_14 = (int *)local_18[7];
        param_1 = 10000;
        local_10 = 0;
        uVar10 = param_2;
        piVar11 = local_14;
        if (0 < (int)param_2) {
          do {
            iVar9 = *piVar11;
            iVar3 = *(int *)(iVar9 + 0x101);
            iVar4 = *(short *)(iVar9 + 0x5b) - iVar3;
            if (iVar4 < local_8) {
              local_8 = iVar4;
            }
            iVar4 = iVar3 + *(short *)(iVar9 + 0x5b);
            if (local_c < iVar4) {
              local_c = iVar4;
            }
            uVar5 = *(short *)(iVar9 + 0x5d) - iVar3;
            if ((int)uVar5 < (int)param_1) {
              param_1 = uVar5;
            }
            iVar3 = *(short *)(iVar9 + 0x5d) + iVar3;
            if (local_10 < iVar3) {
              local_10 = iVar3;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 1;
          } while (uVar10 != 0);
          if (local_8 < 0) {
            local_8 = 0;
          }
        }
        iVar3 = DAT_007fb240 + -1;
        if (iVar3 < local_c) {
          local_c = iVar3;
        }
        if ((int)param_1 < 0) {
          param_1 = 0;
        }
        if (DAT_007fb242 + -1 < local_10) {
          local_10 = DAT_007fb242 + -1;
        }
        local_28 = 5;
        iVar4 = ((int)DAT_007fb240 * param_1 - (int)DAT_007fb246) + local_8;
        iVar3 = local_c;
        iVar9 = local_8;
        do {
          iVar4 = iVar4 + DAT_007fb246;
          iVar7 = iVar4 - DAT_007fb240;
          if ((int)param_1 <= local_10) {
            local_24 = (local_10 - param_1) + 1;
            do {
              iVar7 = iVar7 + DAT_007fb240;
              if (iVar9 <= iVar3) {
                iVar8 = iVar7 * 8 + -8;
                local_20 = (iVar3 - iVar9) + 1;
                do {
                  iVar8 = iVar8 + 8;
                  piVar11 = *(int **)(iVar8 + DAT_007fb248);
                  if (((piVar11 != (int *)0x0) &&
                      (((iVar3 = piVar11[8], iVar3 == 0x14 || (iVar3 == 1000)) || (iVar3 == 0x3e9)))
                      ) && ((((param_3 & 1 << ((byte)piVar11[9] & 0x1f)) != 0 &&
                             (iVar3 = (**(code **)(*piVar11 + 0xf8))(), iVar3 != 0)) &&
                            (local_1c = 0, 0 < (int)param_2)))) {
                    param_4 = local_14;
                    do {
                      iVar3 = *param_4;
                      iVar6 = (int)*(short *)((int)piVar11 + 0x5b) - (int)*(short *)(iVar3 + 0x5b);
                      iVar9 = *(int *)(iVar3 + 0x101);
                      if (iVar6 < 1) {
                        if (iVar6 < -iVar9) goto LAB_0044e4d5;
LAB_0044e508:
                        iVar3 = piVar1[piVar11[9]];
joined_r0x0044e51a:
                        if (iVar3 == 0) {
                          puVar2 = FUN_006ae290((uint *)0x0,1,2,1);
                          piVar1[piVar11[9]] = (int)puVar2;
                        }
                        FUN_006ae1c0((uint *)piVar1[piVar11[9]],(undefined4 *)((int)piVar11 + 0x32))
                        ;
                        break;
                      }
                      if (iVar6 <= iVar9) goto LAB_0044e508;
LAB_0044e4d5:
                      iVar3 = (int)*(short *)((int)piVar11 + 0x5d) - (int)*(short *)(iVar3 + 0x5d);
                      if (iVar3 < 1) {
                        if (iVar3 < -iVar9) goto LAB_0044e4ef;
                        iVar3 = piVar1[piVar11[9]];
                        goto joined_r0x0044e51a;
                      }
                      if (iVar3 <= iVar9) goto LAB_0044e508;
LAB_0044e4ef:
                      local_1c = local_1c + 1;
                      param_4 = param_4 + 1;
                    } while (local_1c < (int)param_2);
                  }
                  local_20 = local_20 + -1;
                } while (local_20 != 0);
                local_20 = 0;
                iVar3 = local_c;
                iVar9 = local_8;
              }
              local_24 = local_24 + -1;
            } while (local_24 != 0);
          }
          local_28 = local_28 + -1;
        } while (local_28 != 0);
      }
      FUN_006ae110((byte *)local_18);
    }
  }
  return;
}

