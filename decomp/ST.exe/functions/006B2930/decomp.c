
undefined4 *
FUN_006b2930(int *param_1,uint param_2,uint param_3,undefined4 *param_4,int *param_5,uint param_6,
            uint param_7,uint param_8)

{
  short sVar1;
  bool bVar2;
  uint *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined4 unaff_ESI;
  int *piVar8;
  uint *puVar9;
  void *unaff_EDI;
  int iVar10;
  undefined4 local_108;
  undefined4 local_104;
  uint local_100;
  uint local_fc;
  undefined4 local_8c;
  undefined4 local_88 [16];
  uint local_48;
  uint local_44;
  int local_40;
  int local_3c;
  short local_38;
  int *local_34;
  uint *local_30;
  int *local_2c;
  undefined4 *local_28;
  int *local_24;
  undefined4 *local_20;
  int *local_1c;
  undefined4 *local_18;
  int *local_14;
  uint *local_10;
  uint local_c;
  int *local_8;
  
  local_28 = (undefined4 *)0x0;
  local_8 = param_1;
  if (param_5 == (int *)0x0) {
    return (undefined4 *)0x0;
  }
  if ((uint)param_1[0x68] <= param_2) goto LAB_006b2fe2;
  puVar9 = *(uint **)(param_1[0x6c] + param_2 * 4);
  local_10 = puVar9;
  if ((*puVar9 & 0xc000) != 0x8000) goto LAB_006b2fe2;
  if ((*puVar9 & 0x80000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
  }
  local_44 = puVar9[0xe];
  local_48 = puVar9[0xf];
  if ((param_6 & 0x60000000) == 0) {
    if ((param_6 & 0x4000000) != 0) {
      if ((param_3 == 1) && (-1 < (short)param_5[1])) {
        param_6 = param_6 & 0xfbffffff | 0x1000000;
      }
      else {
        local_30 = (uint *)0x0;
        local_24 = (undefined4 *)0x0;
        local_8c = DAT_00858df8;
        DAT_00858df8 = &local_8c;
        local_20 = (undefined4 *)__setjmp3(local_88,0,unaff_EDI,unaff_ESI);
        if (local_20 != (undefined4 *)0x0) {
          DAT_00858df8 = (undefined4 *)local_8c;
          FUN_006a5e90(local_24);
          puVar3 = local_30;
          if (local_30 == (uint *)0x0) {
            local_28 = local_20;
            puVar9 = local_10;
          }
          else {
            puVar9 = local_30;
            if (0 < (int)param_3) {
              do {
                if (-1 < (int)*puVar9) {
                  FUN_006b3bb0(param_1,*puVar9);
                }
                param_3 = param_3 - 1;
                puVar9 = puVar9 + 1;
              } while (param_3 != 0);
            }
            puVar9 = *(uint **)(local_8[0x6c] + param_2 * 4);
            local_10 = puVar9;
            FUN_006a5e90(puVar3);
            local_28 = local_20;
          }
          goto LAB_006b2f8b;
        }
        if ((*local_10 & 0x4000000) == 0) {
          local_18 = (undefined4 *)0x0;
          local_14 = (int *)0x0;
        }
        else {
          local_18 = (undefined4 *)local_10[0x34];
          local_14 = (int *)local_10[0x30];
        }
        local_1c = (int *)0x0;
        puVar9 = local_10;
        if (0 < (int)param_3) {
          local_34 = (int *)((int)param_5 + 6);
          do {
            piVar5 = local_8;
            piVar8 = local_1c;
            iVar10 = (int)*(short *)((int)local_34 + -2);
            if (iVar10 < 0) {
              if (local_30 == (uint *)0x0) {
                local_30 = (uint *)FUN_006aac70(param_3 * 4);
                puVar9 = local_30;
                for (uVar6 = param_3 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
                  *puVar9 = 0xffffffff;
                  puVar9 = puVar9 + 1;
                }
                for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
                  *(undefined1 *)puVar9 = 0xff;
                  puVar9 = (uint *)((int)puVar9 + 1);
                }
              }
              local_24 = (int *)FUN_006aac70((int)param_4 * 4);
              if (0 < (int)param_4) {
                local_20 = param_4;
                piVar8 = local_34;
                local_2c = local_24;
                do {
                  if (*(short *)((int)piVar8 + -2) != iVar10) {
                    FUN_006a5e40(-5,DAT_007ed77c,0x7edac0,0x4ef);
                  }
                  iVar7 = *piVar8;
                  piVar8 = (int *)((int)piVar8 + param_3 * 10);
                  *local_2c = iVar7;
                  local_2c = local_2c + 1;
                  local_20 = (undefined4 *)((int)local_20 + -1);
                } while (local_20 != (undefined4 *)0x0);
              }
              piVar5 = local_8;
              piVar8 = local_1c;
              if (((local_18 == (undefined4 *)0x0) || ((int)local_14 <= (int)local_1c)) ||
                 (local_c = local_18[(int)local_1c], (int)local_c < 0)) {
                FUN_006b1d50((uint)param_1,&local_c,-iVar10,(uint)param_4,local_24,0xa000000,param_7
                             ,param_8,0,1);
                puVar9 = *(uint **)(local_8[0x6c] + param_2 * 4);
                uVar6 = *puVar9;
                local_10 = puVar9;
                if ((uVar6 & 0x1000) == 0) {
                  if ((uVar6 & 0x2000) != 0) {
                    FUN_006b2560(local_8,local_c,uVar6 >> 8 & 1,puVar9[0x17],puVar9[0x18]);
                  }
                }
                else {
                  FUN_006b2590(local_8,local_c,1,puVar9[0x16]);
                }
                piVar5 = local_8;
                FUN_006b1b10((int)local_8,local_c,puVar9[0x13]);
                FUN_006b2710((int)piVar5,local_c,puVar9[0x2e],puVar9[0x2f]);
              }
              else {
                FUN_006b2930(local_8,local_c,1,param_4,local_24,0xa000000,param_7,param_8);
                FUN_006b3020((int)piVar5,local_c,-iVar10);
                puVar9 = *(uint **)(piVar5[0x6c] + param_2 * 4);
                local_10 = puVar9;
              }
              local_24 = (undefined4 *)0x0;
              local_30[(int)piVar8] = local_c;
            }
            else if (((local_18 != (undefined4 *)0x0) && ((int)local_1c < (int)local_14)) &&
                    (local_c = local_18[(int)local_1c], -1 < (int)local_c)) {
              FUN_006b3bb0(local_8,local_c);
              puVar9 = *(uint **)(piVar5[0x6c] + param_2 * 4);
              local_10 = puVar9;
            }
            local_1c = (int *)((int)piVar8 + 1);
            local_34 = (int *)((int)local_34 + 10);
          } while ((int)local_1c < (int)param_3);
        }
        puVar4 = local_18;
        if (local_18 != (undefined4 *)0x0) {
          if ((int)local_1c < (int)local_14) {
            iVar10 = (int)local_14 - (int)local_1c;
            puVar9 = local_18 + (int)local_1c;
            do {
              if (-1 < (int)*puVar9) {
                FUN_006b3bb0(param_1,*puVar9);
              }
              puVar9 = puVar9 + 1;
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
          }
          puVar9 = *(uint **)(local_8[0x6c] + param_2 * 4);
          local_10 = puVar9;
        }
        FUN_006a5e90(puVar4);
        puVar9[0x34] = (uint)local_30;
        local_1c = param_5;
        DAT_00858df8 = (undefined4 *)local_8c;
        if (0 < (int)param_4) {
          local_18 = param_4;
          do {
            if (0 < (int)(param_3 - 1)) {
              local_14 = local_1c + 1;
              local_2c = (int *)0x1;
              do {
                if ((-1 < (short)*local_14) && ((int)local_2c < (int)param_3)) {
                  local_20 = (undefined4 *)(param_3 - (int)local_2c);
                  piVar8 = local_14;
                  do {
                    sVar1 = *(short *)((int)piVar8 + 10);
                    if ((-1 < sVar1) &&
                       ((*(int *)((int)local_14 + 2) == 0 ||
                        ((piVar8[3] != 0 && ((short)*local_14 < sVar1)))))) {
                      local_40 = local_14[-1];
                      local_3c = *local_14;
                      local_38 = (short)local_14[1];
                      local_14[-1] = *(int *)((int)piVar8 + 6);
                      *local_14 = *(int *)((int)piVar8 + 10);
                      *(short *)(local_14 + 1) = *(short *)((int)piVar8 + 0xe);
                      *(int *)((int)piVar8 + 6) = local_40;
                      *(int *)((int)piVar8 + 10) = local_3c;
                      *(short *)((int)piVar8 + 0xe) = local_38;
                    }
                    local_20 = (undefined4 *)((int)local_20 + -1);
                    piVar8 = (int *)((int)piVar8 + 10);
                  } while (local_20 != (undefined4 *)0x0);
                }
                piVar8 = (int *)((int)local_2c + 1);
                local_14 = (int *)((int)local_14 + 10);
                bVar2 = (int)local_2c < (int)(param_3 - 1);
                local_2c = piVar8;
              } while (bVar2);
            }
            local_1c = (int *)((int)local_1c + param_3 * 10);
            local_18 = (undefined4 *)((int)local_18 + -1);
          } while (local_18 != (undefined4 *)0x0);
        }
        puVar9[0x30] = param_3;
      }
    }
LAB_006b2a2e:
    if ((*puVar9 & 0x6000000) != 0) {
      if (((param_6 & 0x4000000) == 0) && (puVar9[0x34] != 0)) {
        iVar10 = 0;
        if (0 < (int)puVar9[0x30]) {
          do {
            uVar6 = *(uint *)(puVar9[0x34] + iVar10 * 4);
            if (-1 < (int)uVar6) {
              FUN_006b3bb0(param_1,uVar6);
              puVar9 = *(uint **)(local_8[0x6c] + param_2 * 4);
              local_10 = puVar9;
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < (int)puVar9[0x30]);
        }
        FUN_006ab060(puVar9 + 0x34);
      }
      if ((*puVar9 & 0x2000000) != 0) {
        FUN_006a5e90((undefined4 *)puVar9[0x33]);
      }
    }
    *puVar9 = (*puVar9 ^ param_6) & 0xffffff ^ param_6;
    puVar9[0x32] = (uint)param_4;
    puVar9[0x33] = (uint)param_5;
    if ((param_6 & 0x1000000) != 0) {
      puVar9[0x30] = param_3;
    }
    if (((int)param_7 < 1) || ((int)param_8 < 1)) {
      FUN_006cfbe0(puVar9);
    }
    else {
      puVar9[0xe] = param_7;
      puVar9[0xf] = param_8;
    }
    if ((*puVar9 & 0x20) == 0) {
      puVar9[0x31] = 0;
      puVar9[5] = 0;
    }
    else {
      local_28 = (undefined4 *)FUN_006b3640(local_8,param_2,puVar9[0x31],puVar9[6],puVar9[7]);
    }
  }
  else {
    if ((param_6 & 0x40000000) != 0) {
      local_fc = param_5[1];
      local_100 = param_5[2];
LAB_006b29ff:
      puVar9[0xe] = local_fc;
      puVar9[0xc] = local_fc;
      puVar9[8] = local_fc;
      uVar6 = local_100 / (uint)param_4;
      puVar9[0xf] = uVar6;
      puVar9[0xd] = uVar6;
      puVar9[9] = uVar6;
      goto LAB_006b2a2e;
    }
    local_108 = 0x7c;
    local_104 = 6;
    local_28 = (undefined4 *)(**(code **)(*param_5 + 0x58))(param_5,&local_108);
    if (local_28 == (undefined4 *)0x0) goto LAB_006b29ff;
  }
LAB_006b2f8b:
  if ((*puVar9 & 0x80000) != 0) {
    if ((local_28 == (undefined4 *)0x0) &&
       ((int)(local_48 * local_44) < (int)(puVar9[0xf] * puVar9[0xe]))) {
      uVar6 = FUN_006bfb50((undefined4 *)puVar9[0x30],puVar9[0xf] * puVar9[0xe]);
      puVar9[0x30] = uVar6;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(*local_8 + 0x4f0));
    if (puVar9[0x30] == 0) {
      local_28 = (undefined4 *)0xfffffffe;
    }
  }
LAB_006b2fe2:
  puVar4 = local_28;
  if (local_28 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  FUN_006a5e40((int)local_28,DAT_007ed77c,0x7edac0,0x578);
  return puVar4;
}

