
void __fastcall FUN_006988c0(void *param_1)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  undefined4 local_3c [2];
  int local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  if (*(int *)((int)param_1 + 0x5853) != 0) {
    iVar1 = *(int *)(*(int *)((int)param_1 + 0x5853) + 0xc);
    local_30 = 0;
    local_34 = iVar1;
    if (0 < iVar1) {
      do {
        iVar6 = *(int *)((int)param_1 + 0x5853);
        if (local_30 < *(uint *)(iVar6 + 0xc)) {
          local_8 = (int *)(*(int *)(iVar6 + 8) * local_30 + *(int *)(iVar6 + 0x1c));
        }
        else {
          local_8 = (int *)0x0;
        }
        piVar5 = local_8;
        if (((0 < *local_8) && (*(int *)((int)local_8 + 9) == 4)) &&
           (*(int *)((int)local_8 + 0xd) == 2)) {
          iVar1 = thunk_FUN_00697af0(param_1,(int)local_8,(int *)&local_14,&local_18,
                                     (int *)&local_1c,&local_10);
          if (iVar1 != 0) {
            local_c = 0;
            iVar6 = *(byte *)(piVar5 + 1) - 1;
            local_24 = local_1c + 1;
            local_20 = local_10 + 1;
            iVar1 = thunk_FUN_00697c50(param_1,iVar6,local_14 - 1,local_18 + -1);
            if (iVar1 != 0) {
              local_c = 1;
            }
            iVar1 = thunk_FUN_00697c50(param_1,iVar6,local_24,local_20);
            if (iVar1 != 0) {
              local_c = local_c + 1;
            }
            local_28 = 0;
            local_24 = local_1c + 1;
            local_20 = local_18 - 1;
            iVar1 = thunk_FUN_00697c50(param_1,iVar6,local_14 - 1,local_10 + 1);
            if (iVar1 != 0) {
              local_28 = 1;
            }
            iVar1 = thunk_FUN_00697c50(param_1,iVar6,local_24,local_20);
            uVar2 = local_28;
            if (iVar1 != 0) {
              uVar2 = local_28 + 1;
            }
            if ((int)uVar2 < local_c) {
              if (0 < local_c) {
                thunk_FUN_006a0e30(param_1,local_14,local_18,*piVar5,-1);
                iVar1 = *piVar5;
                iVar6 = local_10;
LAB_00698a36:
                thunk_FUN_006a0e30(param_1,local_1c,iVar6,iVar1,-1);
              }
            }
            else if (0 < (int)uVar2) {
              thunk_FUN_006a0e30(param_1,local_14,local_10,*piVar5,-1);
              iVar1 = *piVar5;
              iVar6 = local_18;
              goto LAB_00698a36;
            }
          }
          iVar1 = local_34;
          if (*piVar5 <= *(int *)((int)param_1 + 0x5847) + -1) {
            iVar1 = *(int *)((int)piVar5 + 0x15);
            uVar2 = 0;
            local_c = 0;
            if ((iVar1 != 0) && (uVar4 = *(uint *)(iVar1 + 0xc), 0 < (int)uVar4)) {
              bVar7 = uVar4 != 0;
              do {
                if (bVar7) {
                  pbVar3 = (byte *)(*(int *)(iVar1 + 8) * uVar2 + *(int *)(iVar1 + 0x1c));
                }
                else {
                  pbVar3 = (byte *)0x0;
                }
                if ((pbVar3[1] == 0) && ((*pbVar3 & 2) != 0)) {
                  local_c = local_c + 1;
                }
                uVar2 = uVar2 + 1;
                bVar7 = uVar2 < uVar4;
              } while ((int)uVar2 < (int)uVar4);
            }
            uVar2 = FUN_0072e6c0();
            uVar2 = uVar2 & 0x80000001;
            if ((int)uVar2 < 0) {
              uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
            }
            local_28 = uVar2 + 1;
            if (*(int *)((int)param_1 + 0x5847) < (int)(*piVar5 + uVar2 + 1)) {
              local_28 = uVar2;
            }
            iVar1 = local_34;
            if ((local_28 != 0) && (0 < local_c)) {
              iVar6 = *(int *)((int)piVar5 + 0x15);
              local_2c = 0;
              if (0 < *(int *)(iVar6 + 0xc)) {
                bVar7 = *(int *)(iVar6 + 0xc) != 0;
                do {
                  if (bVar7) {
                    pbVar3 = (byte *)(*(int *)(iVar6 + 8) * local_2c + *(int *)(iVar6 + 0x1c));
                  }
                  else {
                    pbVar3 = (byte *)0x0;
                  }
                  if (pbVar3[1] == 0) {
                    local_24 = *(int *)(pbVar3 + 2) / *(int *)((int)param_1 + 0x5833);
                    local_20 = *(int *)(pbVar3 + 2) % *(int *)((int)param_1 + 0x5833);
                    piVar5 = local_8;
                    if (((*pbVar3 & 2) != 0) &&
                       (uVar2 = FUN_0072e6c0(), piVar5 = local_8, (int)uVar2 % (local_c + 1) == 1))
                    {
                      uVar2 = FUN_0072e6c0();
                      uVar2 = uVar2 & 0x80000001;
                      if ((int)uVar2 < 0) {
                        uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
                      }
                      uVar4 = FUN_0072e6c0();
                      iVar1 = thunk_FUN_006a1370(*(int **)((int)param_1 + 8),local_20,local_24,
                                                 local_28,local_3c);
                      piVar5 = local_8;
                      if ((int)((int)(short)iVar1 + uVar2 + 1) < *(int *)((int)param_1 + 0x5847)) {
                        thunk_FUN_006a0c90(local_20,local_24,*local_8 + 1,uVar2 + 1,0xff,0,
                                           (int)uVar4 % 6 + 1);
                        piVar5 = local_8;
                      }
                    }
                  }
                  iVar6 = *(int *)((int)piVar5 + 0x15);
                  local_2c = local_2c + 1;
                  bVar7 = local_2c < *(uint *)(iVar6 + 0xc);
                  iVar1 = local_34;
                } while ((int)local_2c < (int)*(uint *)(iVar6 + 0xc));
              }
            }
          }
        }
        local_30 = local_30 + 1;
      } while ((int)local_30 < iVar1);
    }
  }
  return;
}

