#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as AiTactClassTy.
   Evidence: this_call_owners=[AiTactClassTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall AiTactClassTy::sub_006902B0(AiTactClassTy *this,short param_1,uint *param_2)

{
  AiFltClassTy *this_00;
  undefined1 *puVar1;
  AiTactClassTy_field_00A5DArray *pAVar2;
  uint uVar3;
  bool bVar4;

  uVar3 = 0;
  pAVar2 = this->field_00A5;
  if (0 < (int)pAVar2->count) {
    bVar4 = pAVar2->count != 0;
    do {
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
      if ((((bVar4) &&
           (puVar1 = (undefined1 *)((int)&pAVar2->data->field_0000 + pAVar2->elementSize * uVar3),
           (undefined4 *)puVar1 != (undefined4 *)0x0)) &&
          (this_00 = *(AiFltClassTy **)(puVar1 + 4), this_00 != (AiFltClassTy *)0x0)) &&
         (this_00->field_007B == param_1)) {
        AiFltClassTy::GetAiMess(this_00,param_2);
      }
      pAVar2 = this->field_00A5;
      uVar3 = uVar3 + 1;
      bVar4 = uVar3 < pAVar2->count;
    } while ((int)uVar3 < (int)pAVar2->count);
  }
  return;
}

