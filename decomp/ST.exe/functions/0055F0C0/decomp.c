
int * FUN_0055f0c0(int *param_1,uint param_2,uint param_3,int param_4,uint param_5,
                  undefined *param_6,undefined *param_7)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int local_6c;
  int *local_64;
  int local_60;
  int local_54;
  int local_50;
  uint local_48;
  int *local_44 [4];
  uint *local_34;
  int *local_30;
  int local_2c;
  int local_28;
  int *local_24;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_0079afc0;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff88;
  local_48 = param_2;
  if (9 < (int)param_2) {
    local_48 = 10;
  }
  local_8 = 0;
  ExceptionList = &local_14;
  Library::MSVCRT::FUN_0072da40();
  local_34 = (uint *)&stack0xffffff88;
  local_1c = &stack0xffffff88;
  Library::MSVCRT::FUN_0072da40();
  local_24 = (int *)&stack0xffffff88;
  local_1c = &stack0xffffff88;
  Library::MSVCRT::FUN_0072da40();
  local_8 = 0xffffffff;
  local_30 = (int *)&stack0xffffff88;
  local_1c = &stack0xffffff88;
  local_44[0] = (int *)Library::DKW::LIB::FUN_006aac70(param_3 * 4);
  if (param_4 < 0) {
    param_4 = 1;
  }
  local_2c = -1;
  local_60 = param_4;
  if (0 < param_4) {
    do {
      piVar4 = param_1;
      piVar7 = local_24;
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
      local_50 = 0;
      if (0 < (int)param_3) {
        local_64 = local_30;
        do {
          iVar6 = 0;
          local_28 = 0;
          iVar3 = 0;
          local_54 = 0;
          iVar5 = 0;
          piVar4 = local_24;
          if (0 < (int)param_2) {
            do {
              if ((int)local_48 <= iVar3) break;
              if (-1 < *piVar4) {
                iVar6 = iVar6 + *piVar4;
                iVar3 = iVar3 + 1;
                local_54 = iVar3;
                local_28 = iVar6;
              }
              iVar5 = iVar5 + 1;
              piVar4 = piVar4 + 1;
            } while (iVar5 < (int)param_2);
          }
          if (iVar3 < 1) break;
          if (iVar6 == 0) {
            uVar2 = iVar3 * 100;
            if (0 < iVar5) {
              puVar1 = local_34;
              iVar3 = iVar5;
              do {
                *puVar1 = (*(int *)(((int)local_24 - (int)local_34) + (int)puVar1) < 0) - 1 & 100;
                puVar1 = puVar1 + 1;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
            }
          }
          else {
            uVar2 = 0;
            if (0 < iVar5) {
              puVar1 = local_34;
              local_6c = iVar5;
              do {
                iVar6 = *(int *)((int)puVar1 + ((int)local_24 - (int)local_34));
                if (iVar6 < 0) {
                  *puVar1 = 0;
                }
                else {
                  *puVar1 = (iVar6 * iVar3 * 100) / local_28;
                  iVar3 = local_54;
                }
                uVar2 = uVar2 + *puVar1;
                puVar1 = puVar1 + 1;
                local_6c = local_6c + -1;
              } while (local_6c != 0);
            }
          }
          param_5 = param_5 * 0x41c64e6d + 0x3039;
          iVar6 = (param_5 >> 0x10) % uVar2 + 1;
          iVar3 = 0;
          puVar1 = local_34;
          if (0 < iVar5) {
            do {
              iVar6 = iVar6 - *puVar1;
              if (iVar6 < 1) break;
              iVar3 = iVar3 + 1;
              puVar1 = puVar1 + 1;
            } while (iVar3 < iVar5);
          }
          if (iVar5 <= iVar3) break;
          *local_64 = iVar3;
          local_24[iVar3] = -1;
          (*(code *)param_7)(local_30,local_50,local_24,iVar3);
          local_50 = local_50 + 1;
          local_64 = local_64 + 1;
        } while (local_50 < (int)param_3);
      }
      if (((int)param_3 <= local_50) &&
         (iVar3 = (*(code *)param_6)(local_30,param_3), local_2c < iVar3)) {
        piVar4 = local_30;
        piVar7 = local_44[0];
        for (uVar2 = param_3 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
          *piVar7 = *piVar4;
          piVar4 = piVar4 + 1;
          piVar7 = piVar7 + 1;
        }
        for (iVar5 = 0; local_2c = iVar3, iVar5 != 0; iVar5 = iVar5 + -1) {
          *(char *)piVar7 = (char)*piVar4;
          piVar4 = (int *)((int)piVar4 + 1);
          piVar7 = (int *)((int)piVar7 + 1);
        }
      }
      local_60 = local_60 + -1;
    } while (local_60 != 0);
  }
  if (local_2c < 0) {
    FUN_006ab060(local_44);
  }
  ExceptionList = local_14;
  return local_44[0];
}

