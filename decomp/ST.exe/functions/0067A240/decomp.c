#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as AiPlrClassTy.
   Evidence: this_call_owners=[AiPlrClassTy]; agreed_this_calls=2; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STPrototypeRepairApplier] Propagated parameter 2.
   Evidence: 0067C180 -> 0067A240 @ 0067C248 | 0067C180 -> 0067A240 @ 0067C4CC

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall AiPlrClassTy::sub_0067A240(AiPlrClassTy *this,undefined *param_1,DArrayTy *param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  DArrayTy *pDVar4;
  uint uVar5;

  pDVar4 = this->field_0695;
  if (pDVar4 != nullptr) {
    uVar1 = pDVar4->count;
    uVar5 = 0;
    if (0 < (int)uVar1) {
      do {
        if (((pDVar4 != nullptr) && (-1 < (int)uVar5)) && ((int)uVar5 < (int)uVar1)) {
          if (uVar5 < uVar1) {
            puVar2 = DArrayAt<undefined4>(pDVar4, uVar5);
          }
          else {
            puVar2 = nullptr;
          }
          if (((puVar2[1] != 0) && ((void *)*puVar2 != nullptr)) &&
             (iVar3 = thunk_FUN_006904d0((void *)*puVar2,param_1,param_2), iVar3 != 0)) {
            return;
          }
        }
        pDVar4 = this->field_0695;
        uVar5 = uVar5 + 1;
        uVar1 = pDVar4->count;
      } while ((int)uVar5 < (int)uVar1);
    }
  }
  return;
}

