
int * thunk_FUN_0055f0c0(int *param_1,uint param_2,uint param_3,int param_4,uint param_5,
                        undefined *param_6,undefined *param_7)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iStack_6c;
  int *piStack_64;
  int iStack_60;
  int iStack_54;
  int iStack_50;
  uint uStack_48;
  int *apiStack_44 [4];
  uint *puStack_34;
  int *piStack_30;
  int iStack_2c;
  int iStack_28;
  int *piStack_24;
  undefined1 *puStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_0079afc0;
  puStack_10 = &LAB_0072d964;
  pvStack_14 = ExceptionList;
  puStack_1c = &stack0xffffff88;
  uStack_48 = param_2;
  if (9 < (int)param_2) {
    uStack_48 = 10;
  }
  uStack_8 = 0;
  ExceptionList = &pvStack_14;
  FUN_0072da40();
  puStack_34 = (uint *)&stack0xffffff88;
  puStack_1c = &stack0xffffff88;
  FUN_0072da40();
  piStack_24 = (int *)&stack0xffffff88;
  puStack_1c = &stack0xffffff88;
  FUN_0072da40();
  uStack_8 = 0xffffffff;
  piStack_30 = (int *)&stack0xffffff88;
  puStack_1c = &stack0xffffff88;
  apiStack_44[0] = (int *)FUN_006aac70(param_3 * 4);
  if (param_4 < 0) {
    param_4 = 1;
  }
  iStack_2c = -1;
  iStack_60 = param_4;
  if (0 < param_4) {
    do {
      piVar4 = param_1;
      piVar7 = piStack_24;
      for (uVar2 = param_2 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
        *piVar7 = *piVar4;
        piVar4 = piVar4 + 1;
        piVar7 = piVar7 + 1;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(char *)piVar7 = (char)*piVar4;
        piVar4 = (int *)((int)piVar4 + 1);
        piVar7 = (int *)((int)piVar7 + 1);
      }
      iStack_50 = 0;
      if (0 < (int)param_3) {
        piStack_64 = piStack_30;
        do {
          iVar6 = 0;
          iStack_28 = 0;
          iVar3 = 0;
          iStack_54 = 0;
          iVar5 = 0;
          piVar4 = piStack_24;
          if (0 < (int)param_2) {
            do {
              if ((int)uStack_48 <= iVar3) break;
              if (-1 < *piVar4) {
                iVar6 = iVar6 + *piVar4;
                iVar3 = iVar3 + 1;
                iStack_54 = iVar3;
                iStack_28 = iVar6;
              }
              iVar5 = iVar5 + 1;
              piVar4 = piVar4 + 1;
            } while (iVar5 < (int)param_2);
          }
          if (iVar3 < 1) break;
          if (iVar6 == 0) {
            uVar2 = iVar3 * 100;
            if (0 < iVar5) {
              puVar1 = puStack_34;
              iVar3 = iVar5;
              do {
                *puVar1 = (*(int *)(((int)piStack_24 - (int)puStack_34) + (int)puVar1) < 0) - 1 &
                          100;
                puVar1 = puVar1 + 1;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
            }
          }
          else {
            uVar2 = 0;
            if (0 < iVar5) {
              puVar1 = puStack_34;
              iStack_6c = iVar5;
              do {
                iVar6 = *(int *)((int)puVar1 + ((int)piStack_24 - (int)puStack_34));
                if (iVar6 < 0) {
                  *puVar1 = 0;
                }
                else {
                  *puVar1 = (iVar6 * iVar3 * 100) / iStack_28;
                  iVar3 = iStack_54;
                }
                uVar2 = uVar2 + *puVar1;
                puVar1 = puVar1 + 1;
                iStack_6c = iStack_6c + -1;
              } while (iStack_6c != 0);
            }
          }
          param_5 = param_5 * 0x41c64e6d + 0x3039;
          iVar6 = (param_5 >> 0x10) % uVar2 + 1;
          iVar3 = 0;
          puVar1 = puStack_34;
          if (0 < iVar5) {
            do {
              iVar6 = iVar6 - *puVar1;
              if (iVar6 < 1) break;
              iVar3 = iVar3 + 1;
              puVar1 = puVar1 + 1;
            } while (iVar3 < iVar5);
          }
          if (iVar5 <= iVar3) break;
          *piStack_64 = iVar3;
          piStack_24[iVar3] = -1;
          (*(code *)param_7)(piStack_30,iStack_50,piStack_24,iVar3);
          iStack_50 = iStack_50 + 1;
          piStack_64 = piStack_64 + 1;
        } while (iStack_50 < (int)param_3);
      }
      if (((int)param_3 <= iStack_50) &&
         (iVar3 = (*(code *)param_6)(piStack_30,param_3), iStack_2c < iVar3)) {
        piVar4 = piStack_30;
        piVar7 = apiStack_44[0];
        for (uVar2 = param_3 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
          *piVar7 = *piVar4;
          piVar4 = piVar4 + 1;
          piVar7 = piVar7 + 1;
        }
        for (iVar5 = 0; iStack_2c = iVar3, iVar5 != 0; iVar5 = iVar5 + -1) {
          *(char *)piVar7 = (char)*piVar4;
          piVar4 = (int *)((int)piVar4 + 1);
          piVar7 = (int *)((int)piVar7 + 1);
        }
      }
      iStack_60 = iStack_60 + -1;
    } while (iStack_60 != 0);
  }
  if (iStack_2c < 0) {
    FUN_006ab060(apiStack_44);
  }
  ExceptionList = pvStack_14;
  return apiStack_44[0];
}

