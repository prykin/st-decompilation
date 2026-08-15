#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004E68A0 -> 004E5C40 @ 004E69AF */

void FUN_004e68a0(byte *param_1,undefined1 *param_2,uint param_3,undefined4 *param_4)

{
  int *piVar1;
  undefined *puVar2;
  byte bVar3;
  bool bVar4;
  undefined1 uVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  int iVar6;
  int iVar7;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var_00;
  int iVar8;
  undefined1 *puVar9;
  int *piVar10;

  memset(param_4, 0, 0x1e); /* compiler bulk-zero initialization */
  bVar3 = LookupRecordByte((char)param_1);
  iVar8 = bVar3 - 1;
  bVar4 = thunk_FUN_004e5c40(param_1,(uint)param_2);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  if (CONCAT31(extraout_var,bVar4) == 0) {
    piVar1 = (int *)(&PTR_DAT_007c0dc8)[iVar8];
    puVar9 = (undefined1 *)*piVar1;
    if (puVar9 != nullptr) {
      iVar6 = 0;
      piVar10 = piVar1;
      while ((puVar9 != param_2 || (*(byte *)(piVar10 + 1) != param_3))) {
        puVar9 = STField<undefined1 *>(piVar10,0x19);
        piVar10 = (int *)((int)piVar10 + 0x19);
        iVar6 = iVar6 + 1;
        if (puVar9 == nullptr) {
          return;
        }
      }
      param_3 = 0;
      if (*(int *)(iVar6 * 0x19 + 5 + (int)piVar1) != 0) {
        param_2 = (undefined1 *)((int)param_4 + 5);
        iVar6 = iVar6 * 0x19 + 5;
        do {
          if (3 < (int)param_3) {
            return;
          }
          puVar2 = (&PTR_DAT_007c0dc8)[iVar8];
          bVar3 = puVar2[iVar6 + 4];
          iVar7 = thunk_FUN_004e60d0((int)param_1,*(int *)(puVar2 + iVar6));
          if (iVar7 < (int)(uint)bVar3) {
            *(uint *)(param_2 + -5) = (uint)CONCAT12(bVar3,*(undefined2 *)(puVar2 + iVar6));
            bVar3 = LookupRecordByte((char)param_1);
            param_2[-1] = bVar3;
            bVar4 = thunk_FUN_004e5c40(param_1,*(uint *)((&PTR_DAT_007c0dc8)[iVar8] + iVar6));
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            if ((CONCAT31(extraout_var_00,bVar4) == 0) ||
               (iVar7 = thunk_FUN_004e60d0((int)param_1,*(int *)((&PTR_DAT_007c0dc8)[iVar8] + iVar6)
                                          ),
               iVar7 != (byte)(&PTR_DAT_007c0dc8)[iVar8][iVar6 + 4] - 1)) {
              uVar5 = 0;
            }
            else {
              uVar5 = 1;
            }
            *param_2 = uVar5;
            param_2 = param_2 + 6;
          }
          iVar6 = iVar6 + 5;
          param_3 = param_3 + 1;
        } while (*(int *)((&PTR_DAT_007c0dc8)[iVar8] + iVar6) != 0);
      }
    }
  }
  return;
}

