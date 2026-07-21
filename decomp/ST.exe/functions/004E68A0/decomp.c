#include "../../pseudocode_runtime.h"


void FUN_004e68a0(int param_1,undefined1 *param_2,uint param_3,undefined4 *param_4)

{
  byte bVar1;
  int *piVar2;
  undefined *puVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  int iVar7;
  int iVar8;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var_00;
  int iVar9;
  undefined1 *puVar10;
  int *piVar11;

  memset(param_4, 0, 0x1e); /* compiler bulk-zero initialization */
  uVar6 = GetPlayerRaceId((char)param_1);
  iVar9 = (uVar6 & 0xff) - 1;
  bVar4 = thunk_FUN_004e5c40(param_1,(uint)param_2);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  if (CONCAT31(extraout_var,bVar4) == 0) {
    piVar2 = (int *)(&PTR_DAT_007c0dc8)[iVar9];
    puVar10 = (undefined1 *)*piVar2;
    if (puVar10 != (undefined1 *)0x0) {
      iVar7 = 0;
      piVar11 = piVar2;
      while ((puVar10 != param_2 || (*(byte *)(piVar11 + 1) != param_3))) {
        puVar10 = *(undefined1 **)((int)piVar11 + 0x19);
        piVar11 = (int *)((int)piVar11 + 0x19);
        iVar7 = iVar7 + 1;
        if (puVar10 == (undefined1 *)0x0) {
          return;
        }
      }
      param_3 = 0;
      if (*(int *)(iVar7 * 0x19 + 5 + (int)piVar2) != 0) {
        param_2 = (undefined1 *)((int)param_4 + 5);
        iVar7 = iVar7 * 0x19 + 5;
        do {
          if (3 < (int)param_3) {
            return;
          }
          puVar3 = (&PTR_DAT_007c0dc8)[iVar9];
          bVar1 = puVar3[iVar7 + 4];
          iVar8 = thunk_FUN_004e60d0(param_1,*(int *)(puVar3 + iVar7));
          if (iVar8 < (int)(uint)bVar1) {
            *(uint *)(param_2 + -5) = (uint)CONCAT12(bVar1,*(undefined2 *)(puVar3 + iVar7));
            iVar8 = GetPlayerRaceId((char)param_1);
            param_2[-1] = (char)iVar8;
            bVar4 = thunk_FUN_004e5c40(param_1,*(uint *)((&PTR_DAT_007c0dc8)[iVar9] + iVar7));
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            if ((CONCAT31(extraout_var_00,bVar4) == 0) ||
               (iVar8 = thunk_FUN_004e60d0(param_1,*(int *)((&PTR_DAT_007c0dc8)[iVar9] + iVar7)),
               iVar8 != (byte)(&PTR_DAT_007c0dc8)[iVar9][iVar7 + 4] - 1)) {
              uVar5 = 0;
            }
            else {
              uVar5 = 1;
            }
            *param_2 = uVar5;
            param_2 = param_2 + 6;
          }
          iVar7 = iVar7 + 5;
          param_3 = param_3 + 1;
        } while (*(int *)((&PTR_DAT_007c0dc8)[iVar9] + iVar7) != 0);
      }
    }
  }
  return;
}

