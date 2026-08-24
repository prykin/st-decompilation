#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

int * FUN_0055f0c0(int *param_1,uint param_2,uint param_3,int param_4,uint param_5,
                  callback_0055F0C0_p5 *param_6,callback_0055F0C0_p6 *param_7)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint auStack_8c [4];
  undefined4 uStack_7c;
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
  byte *local_1c;
  void *local_14;
  byte *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  int *piVar4_mg0;

  puStack_c = &DAT_0079afc0;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_48 = param_2;
  if (9 < (int)param_2) {
    local_48 = 10;
  }
  uStack_7c = 0x55f112;
  local_34 = (uint *)(&stack0xffffff88 + param_2 * -4);
  auStack_8c[4 - param_2] = 0x55f126;
  local_24 = (int *)(&stack0xffffff88 + param_2 * -8);
  auStack_8c[param_2 * -2 + 4] = 0x55f144;
  local_1c = &stack0xffffff88 + param_3 * -4 + param_2 * -8;
  local_30 = (int *)(&stack0xffffff88 + param_3 * -4 + param_2 * -8);
  local_8 = 0xffffffff;
  auStack_8c[param_2 * -2 + (4 - param_3)] = param_3 * 4;
  auStack_8c[param_2 * -2 + (3 - param_3)] = 0x55f158;
  ExceptionList = &local_14;
  local_44[0] = Library::DKW::LIB::MemAlloc(auStack_8c[param_2 * -2 + (4 - param_3)]);
  if (param_4 < 0) {
    param_4 = 1;
  }
  local_2c = -1;
  local_60 = param_4;
  if (0 < param_4) {
    do {
      piVar4_mg0 = param_1;
      piVar4 = local_24;
      for (uVar2 = param_2 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
        *piVar4 = *piVar4_mg0;
        piVar4_mg0 = piVar4_mg0 + 1;
        piVar4 = piVar4 + 1;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(char *)piVar4 = (char)*piVar4_mg0;
        piVar4_mg0 = (int *)((int)piVar4_mg0 + 1);
        piVar4 = (int *)((int)piVar4 + 1);
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
                local_28 = iVar6;
                iVar3 = iVar3 + 1;
                local_54 = iVar3;
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
          piVar4 = local_24;
          local_24[iVar3] = -1;
          auStack_8c[param_2 * -2 + (4 - param_3)] = iVar3;
          auStack_8c[param_2 * -2 + (3 - param_3)] = (uint)piVar4;
          auStack_8c[param_2 * -2 + (2 - param_3)] = local_50;
          auStack_8c[param_2 * -2 + (1 - param_3)] = (uint)local_30;
          auStack_8c[param_2 * -2 - param_3] = 0x55f2ac;
          /* ST_CALLSITE[0055F2A9]: CALL dword ptr [EBP + 0x20] */
          (*param_7)(auStack_8c[param_2 * -2 + (1 - param_3)],
                     auStack_8c[param_2 * -2 + (2 - param_3)],
                     auStack_8c[param_2 * -2 + (3 - param_3)],
                     auStack_8c[param_2 * -2 + (4 - param_3)]);
          local_50 = local_50 + 1;
          local_64 = local_64 + 1;
        } while (local_50 < (int)param_3);
      }
      if ((int)param_3 <= local_50) {
        auStack_8c[param_2 * -2 + (4 - param_3)] = param_3;
        auStack_8c[param_2 * -2 + (3 - param_3)] = (uint)local_30;
        auStack_8c[param_2 * -2 + (2 - param_3)] = 0x55f2d2;
        /* ST_CALLSITE[0055F2CF]: CALL dword ptr [EBP + 0x1c] */
        iVar3 = (*param_6)(auStack_8c[param_2 * -2 + (3 - param_3)],
                           auStack_8c[param_2 * -2 + (4 - param_3)]);
        if (local_2c < iVar3) {
          local_2c = iVar3;
          piVar4 = local_30;
          piVar7 = local_44[0];
          for (uVar2 = param_3 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
            *piVar7 = *piVar4;
            piVar4 = piVar4 + 1;
            piVar7 = piVar7 + 1;
          }
          for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
            *(char *)piVar7 = (char)*piVar4;
            piVar4 = (int *)((int)piVar4 + 1);
            piVar7 = (int *)((int)piVar7 + 1);
          }
        }
      }
      local_60 = local_60 + -1;
    } while (local_60 != 0);
  }
  if (local_2c < 0) {
    auStack_8c[param_2 * -2 + (4 - param_3)] = (uint)local_44;
    auStack_8c[param_2 * -2 + (3 - param_3)] = 0x55f311;
    FreeAndNull((void *)auStack_8c[param_2 * -2 + (4 - param_3)]);
  }
  ExceptionList = local_14;
  return local_44[0];
}

