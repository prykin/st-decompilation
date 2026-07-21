#include "../../pseudocode_runtime.h"


void FUN_004e7230(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;

  iVar4 = param_2;
  iVar2 = param_1;
  memset(param_3, 0, 0x1c); /* compiler bulk-zero initialization */
  iVar5 = 0;
  memset(param_4, 0, 0x1c); /* compiler bulk-zero initialization */
  if ((((-1 < param_1) && (param_1 < 8)) && (-1 < param_2)) && (param_2 < 3)) {
    uVar3 = GetPlayerRaceId((char)param_1);
    param_1 = 0;
    param_2 = 0;
    iVar4 = iVar4 + ((uVar3 & 0xff) - 1) * 3;
    if (0 < *(int *)(&DAT_007995bc + iVar4 * 0x195)) {
      puVar6 = (uint *)(&DAT_007995bc + iVar4 * 0x195);
      iVar4 = (int)param_3 - (int)param_4;
      do {
        if (0x50 < param_1) {
          return;
        }
        iVar5 = thunk_FUN_004e60d0(iVar2,*puVar6);
        if (((iVar5 < (int)(uint)(byte)puVar6[1]) &&
            (iVar5 = thunk_FUN_004e5910(iVar2,*puVar6), iVar5 != 0)) &&
           (iVar5 = thunk_FUN_004e5f90(iVar2,*puVar6), iVar5 == 0)) {
          *(uint *)(iVar4 + (int)param_4) = *puVar6;
          *param_4 = (uint)(byte)puVar6[1];
          param_2 = param_2 + 1;
          param_4 = param_4 + 1;
          if (6 < param_2) {
            return;
          }
        }
        piVar1 = (int *)((int)puVar6 + 5);
        puVar6 = (uint *)((int)puVar6 + 5);
        param_1 = param_1 + 1;
      } while (0 < *piVar1);
    }
  }
  return;
}

