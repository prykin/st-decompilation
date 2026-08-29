#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 007140E0 -> 00710790 @ 00714523

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=49, used=0, unknown=0),
   and decompilation contains no value return */

void __cdecl FUN_00710790(RecoveredRecordView_00710790_7768A573 *param_1)

{
  RecoveredRecordView_00710790_7768A573 *pRVar1;
  RecoveredRecordView_00710790_7768A573 *pRVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;

  if (((param_1 != nullptr) && (*(int *)(param_1 + 1) != 0)) &&
     (iVar3 = *(int *)&param_1[1].field_0x8, iVar3 != 0)) {
    iVar6 = 0;
    param_1->field_009A = STField<undefined4>(iVar3,0x9A);
    if (0 < **(short **)(iVar3 + 0x9a)) {
      iVar5 = 4;
      do {
        if ((iVar5 < 4) || (0x43 < iVar5)) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined4 *)(iVar5 + iVar3);
        }
        *(undefined4 *)(&param_1->field_0x0 + iVar5) = uVar4;
        iVar3 = *(int *)&param_1[1].field_0x8;
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar6 < **(short **)(iVar3 + 0x9a));
    }
    pRVar1 = *(RecoveredRecordView_00710790_7768A573 **)&param_1[1].field_0x8;
    if (*(int *)(pRVar1 + 1) != 0) {
      FUN_00710790(pRVar1);
    }
    pRVar2 = *(RecoveredRecordView_00710790_7768A573 **)&param_1[1].field_0x8;
    param_1->field_008A = pRVar1->field_008A;
    if (*(int *)(pRVar2 + 1) != 0) {
      FUN_00710790(pRVar2);
    }
    pRVar1 = *(RecoveredRecordView_00710790_7768A573 **)&param_1[1].field_0x8;
    param_1->field_0086 = pRVar2->field_0086;
    if (*(int *)(pRVar1 + 1) != 0) {
      FUN_00710790(pRVar1);
    }
    pRVar2 = *(RecoveredRecordView_00710790_7768A573 **)&param_1[1].field_0x8;
    param_1->field_0092 = pRVar1->field_0092;
    if (*(int *)(pRVar2 + 1) != 0) {
      FUN_00710790(pRVar2);
    }
    iVar3 = *(int *)&param_1[1].field_0x8;
    param_1->field_008E = pRVar2->field_008E;
    *(undefined4 *)&param_1[1].field_0xc = STField<undefined4>(iVar3,0xAC);
  }
  return;
}

