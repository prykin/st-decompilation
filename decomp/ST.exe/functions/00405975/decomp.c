
void __fastcall thunk_FUN_006988c0(void *param_1)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  undefined4 auStack_3c [2];
  int iStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  int iStack_24;
  uint uStack_20;
  uint uStack_1c;
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  int iStack_c;
  int *piStack_8;
  
  if (*(int *)((int)param_1 + 0x5853) != 0) {
    iVar1 = *(int *)(*(int *)((int)param_1 + 0x5853) + 0xc);
    uStack_30 = 0;
    iStack_34 = iVar1;
    if (0 < iVar1) {
      do {
        iVar6 = *(int *)((int)param_1 + 0x5853);
        if (uStack_30 < *(uint *)(iVar6 + 0xc)) {
          piStack_8 = (int *)(*(int *)(iVar6 + 8) * uStack_30 + *(int *)(iVar6 + 0x1c));
        }
        else {
          piStack_8 = (int *)0x0;
        }
        piVar5 = piStack_8;
        if (((0 < *piStack_8) && (*(int *)((int)piStack_8 + 9) == 4)) &&
           (*(int *)((int)piStack_8 + 0xd) == 2)) {
          iVar1 = thunk_FUN_00697af0(param_1,(int)piStack_8,(int *)&uStack_14,&iStack_18,
                                     (int *)&uStack_1c,&iStack_10);
          if (iVar1 != 0) {
            iStack_c = 0;
            iVar6 = *(byte *)(piVar5 + 1) - 1;
            iStack_24 = uStack_1c + 1;
            uStack_20 = iStack_10 + 1;
            iVar1 = thunk_FUN_00697c50(param_1,iVar6,uStack_14 - 1,iStack_18 + -1);
            if (iVar1 != 0) {
              iStack_c = 1;
            }
            iVar1 = thunk_FUN_00697c50(param_1,iVar6,iStack_24,uStack_20);
            if (iVar1 != 0) {
              iStack_c = iStack_c + 1;
            }
            uStack_28 = 0;
            iStack_24 = uStack_1c + 1;
            uStack_20 = iStack_18 - 1;
            iVar1 = thunk_FUN_00697c50(param_1,iVar6,uStack_14 - 1,iStack_10 + 1);
            if (iVar1 != 0) {
              uStack_28 = 1;
            }
            iVar1 = thunk_FUN_00697c50(param_1,iVar6,iStack_24,uStack_20);
            uVar2 = uStack_28;
            if (iVar1 != 0) {
              uVar2 = uStack_28 + 1;
            }
            if ((int)uVar2 < iStack_c) {
              if (0 < iStack_c) {
                thunk_FUN_006a0e30(param_1,uStack_14,iStack_18,*piVar5,-1);
                iVar1 = *piVar5;
                iVar6 = iStack_10;
LAB_00698a36:
                thunk_FUN_006a0e30(param_1,uStack_1c,iVar6,iVar1,-1);
              }
            }
            else if (0 < (int)uVar2) {
              thunk_FUN_006a0e30(param_1,uStack_14,iStack_10,*piVar5,-1);
              iVar1 = *piVar5;
              iVar6 = iStack_18;
              goto LAB_00698a36;
            }
          }
          iVar1 = iStack_34;
          if (*piVar5 <= *(int *)((int)param_1 + 0x5847) + -1) {
            iVar1 = *(int *)((int)piVar5 + 0x15);
            uVar2 = 0;
            iStack_c = 0;
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
                  iStack_c = iStack_c + 1;
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
            uStack_28 = uVar2 + 1;
            if (*(int *)((int)param_1 + 0x5847) < (int)(*piVar5 + uVar2 + 1)) {
              uStack_28 = uVar2;
            }
            iVar1 = iStack_34;
            if ((uStack_28 != 0) && (0 < iStack_c)) {
              iVar6 = *(int *)((int)piVar5 + 0x15);
              uStack_2c = 0;
              if (0 < *(int *)(iVar6 + 0xc)) {
                bVar7 = *(int *)(iVar6 + 0xc) != 0;
                do {
                  if (bVar7) {
                    pbVar3 = (byte *)(*(int *)(iVar6 + 8) * uStack_2c + *(int *)(iVar6 + 0x1c));
                  }
                  else {
                    pbVar3 = (byte *)0x0;
                  }
                  if (pbVar3[1] == 0) {
                    iStack_24 = *(int *)(pbVar3 + 2) / *(int *)((int)param_1 + 0x5833);
                    uStack_20 = *(int *)(pbVar3 + 2) % *(int *)((int)param_1 + 0x5833);
                    piVar5 = piStack_8;
                    if (((*pbVar3 & 2) != 0) &&
                       (uVar2 = FUN_0072e6c0(), piVar5 = piStack_8, (int)uVar2 % (iStack_c + 1) == 1
                       )) {
                      uVar2 = FUN_0072e6c0();
                      uVar2 = uVar2 & 0x80000001;
                      if ((int)uVar2 < 0) {
                        uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
                      }
                      uVar4 = FUN_0072e6c0();
                      iVar1 = thunk_FUN_006a1370(*(int **)((int)param_1 + 8),uStack_20,iStack_24,
                                                 uStack_28,auStack_3c);
                      piVar5 = piStack_8;
                      if ((int)((int)(short)iVar1 + uVar2 + 1) < *(int *)((int)param_1 + 0x5847)) {
                        thunk_FUN_006a0c90(uStack_20,iStack_24,*piStack_8 + 1,uVar2 + 1,0xff,0,
                                           (int)uVar4 % 6 + 1);
                        piVar5 = piStack_8;
                      }
                    }
                  }
                  iVar6 = *(int *)((int)piVar5 + 0x15);
                  uStack_2c = uStack_2c + 1;
                  bVar7 = uStack_2c < *(uint *)(iVar6 + 0xc);
                  iVar1 = iStack_34;
                } while ((int)uStack_2c < (int)*(uint *)(iVar6 + 0xc));
              }
            }
          }
        }
        uStack_30 = uStack_30 + 1;
      } while ((int)uStack_30 < iVar1);
    }
  }
  return;
}

