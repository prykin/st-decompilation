#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __cdecl FUN_00691480(RecoveredRecordView_00691480_8BF19534 *param_1)

{
  RecoveredRecordView_00691480_8BF19534 *pRVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  bool bVar5;

  pRVar1 = param_1;
  if (param_1->field_0018 != '\0') {
    if (param_1->field_0018 == '\x02') {
      iVar2 = param_1->field_0085;
      uVar3 = 0;
      if (0 < STField<int>(iVar2,0xC)) {
        bVar5 = STField<int>(iVar2,0xC) != 0;
        do {
          if (bVar5) {
            iVar2 = STField<int>(iVar2,0x8) * uVar3 + STField<int>(iVar2,0x1C);
          }
          else {
            iVar2 = 0;
          }
          if (STField<int>(iVar2,0x4) == 0) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_1 = nullptr;
          }
          else {
            param_1 = (RecoveredRecordView_00691480_8BF19534 *)(STField<int>(iVar2,0x4) + 0x20);
          }
          thunk_FUN_006686c0((int *)&param_1);
          iVar2 = pRVar1->field_0085;
          uVar3 = uVar3 + 1;
          bVar5 = uVar3 < STField<uint>(iVar2,0xC);
        } while ((int)uVar3 < (int)STField<uint>(iVar2,0xC));
      }
    }
    piVar4 = &pRVar1->field_0085;
    iVar2 = 8;
    do {
      if ((DArrayTy *)*piVar4 != nullptr) {
        DArrayDestroy((DArrayTy *)*piVar4);
        *piVar4 = 0;
      }
      piVar4 = piVar4 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

