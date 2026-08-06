#include "../../pseudocode_runtime.h"


void FUN_004e7230(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int local_EAX_197;
  int iVar6;
  uint *puVar7;

  iVar4 = param_2;
  iVar2 = param_1;
  memset(param_3, 0, 0x1c); /* compiler bulk-zero initialization */
  iVar6 = 0;
  memset(param_4, 0, 0x1c); /* compiler bulk-zero initialization */
  if ((((-1 < param_1) && (param_1 < 8)) && (-1 < param_2)) && (param_2 < 3)) {
    bVar3 = LookupRecordByte((char)param_1);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = 0;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = 0;
    iVar4 = iVar4 + (bVar3 - 1) * 3;
    if (0 < *(int *)(&DAT_007995bc + iVar4 * 0x195)) {
      puVar7 = (uint *)(&DAT_007995bc + iVar4 * 0x195);
      iVar4 = (int)param_3 - (int)param_4;
      do {
        if (0x50 < param_1) {
          return;
        }
        iVar6 = thunk_FUN_004e60d0(iVar2,*puVar7);
        if (((iVar6 < (int)(uint)(byte)puVar7[1]) &&
            (iVar5 = thunk_FUN_004e5910(iVar2,*puVar7), iVar5 != 0)) &&
           (local_EAX_197 = thunk_FUN_004e5f90(iVar2,*puVar7), local_EAX_197 == 0)) {
          *(uint *)(iVar4 + (int)param_4) = *puVar7;
          *param_4 = (uint)(byte)puVar7[1];
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = param_2 + 1;
          param_4 = param_4 + 1;
          if (6 < param_2) {
            return;
          }
        }
        piVar1 = (int *)((int)puVar7 + 5);
        puVar7 = (uint *)((int)puVar7 + 5);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = param_1 + 1;
      } while (0 < *piVar1);
    }
  }
  return;
}

