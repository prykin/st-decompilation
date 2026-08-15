#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

int __thiscall
FUN_0069b530(void *this,undefined4 param_1,int param_2,int param_3,int param_4,int param_5,
            int *param_6,int *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *local_98;
  int *local_94;
  int local_90;
  int local_80;
  int local_34;
  int local_2c;
  int local_24;

  local_2c = 0;
  local_80 = 0;
  iVar3 = (param_4 - param_2) + 1;
  iVar9 = (param_5 - param_3) + 1;
  iVar6 = iVar9 * iVar3;
  iVar2 = STField<int>(this,0x5847) * iVar6 * -4;
  local_34 = 0;
  if (0 < STField<int>(this,0x5847)) {
    local_90 = 0;
    do {
      iVar10 = STField<int>(this,0x582f);
      if (param_5 < iVar9) {
        local_94 = (int *)(&stack0xffffff5c + (iVar6 * param_5 + local_90) * 4 + iVar2);
        iVar8 = param_5;
        do {
          if (0 < iVar3) {
            iVar4 = ((iVar8 + param_3) * STField<int>(this,0x5833) + local_34 * iVar10 + param_2)
                    * 2;
            piVar5 = local_94;
            iVar7 = iVar3;
            do {
              *piVar5 = (int)*(short *)(iVar4 + STField<int>(this,0x584f));
              iVar4 = iVar4 + 2;
              piVar5 = piVar5 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          iVar8 = iVar8 + 1;
          local_94 = local_94 + iVar6;
        } while (iVar8 < iVar9);
      }
      local_34 = local_34 + 1;
      local_90 = local_90 + iVar6;
    } while (local_34 < STField<int>(this,0x5847));
  }
  if (local_34 < STField<int>(this,0x5847)) {
    do {
      iVar9 = local_34 * iVar6;
      local_24 = iVar9;
      for (iVar10 = param_3; iVar10 <= param_5; iVar10 = iVar10 + 1) {
        if (param_3 != iVar10) {
          iVar9 = iVar9 + iVar3;
          local_24 = iVar9;
        }
        if (param_2 <= param_4) {
          iVar7 = 0;
          local_98 = (int *)(&stack0xffffff5c + iVar9 * 4 + iVar2);
          iVar8 = param_2;
          do {
            iVar4 = STField<int>(this,0x5833);
            if ((((iVar8 < iVar4) && (iVar8 + 1 < iVar4)) && (iVar10 < iVar4)) &&
               (iVar10 + 1 < iVar4)) {
              iVar1 = iVar7 + 1 + iVar9;
              iVar4 = iVar7 + iVar3 + iVar9;
              iVar9 = iVar7 + 1 + iVar3 + iVar9;
              if (*local_98 == 1) {
                if (((*(int *)(&stack0xffffff5c + iVar1 * 4 + iVar2) == 1) &&
                    (*(int *)(&stack0xffffff5c + iVar4 * 4 + iVar2) == 1)) &&
                   (*(int *)(&stack0xffffff5c + iVar9 * 4 + iVar2) == 1)) {
                  *local_98 = 4;
                  *(undefined4 *)(&stack0xffffff5c + iVar1 * 4 + iVar2) = 4;
                  *(undefined4 *)(&stack0xffffff5c + iVar4 * 4 + iVar2) = 4;
                  *(undefined4 *)(&stack0xffffff5c + iVar9 * 4 + iVar2) = 4;
                  local_80 = local_80 + 1;
                }
                else {
                  local_2c = local_2c + 1;
                }
              }
            }
            iVar8 = iVar8 + 1;
            local_98 = local_98 + -1;
            iVar7 = iVar7 + -1;
            iVar9 = local_24;
          } while (iVar8 <= param_4);
        }
      }
      if (local_34 == 0) {
        *param_6 = local_2c;
        *param_7 = local_80;
      }
      else {
        param_6[local_34] = local_2c - param_6[local_34 + -1];
        param_7[local_34] = local_80 - param_7[local_34 + -1];
      }
      local_34 = local_34 + 1;
    } while (local_34 < STField<int>(this,0x5847));
  }
  return local_80 + local_2c;
}

