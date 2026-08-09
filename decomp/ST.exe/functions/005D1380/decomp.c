#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as SettMapMTy.
   Evidence: this_call_owners=[SettMapMTy]; agreed_this_calls=3; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=3; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall SettMapMTy::sub_005D1380(SettMapMTy *this)

{
  SettMapMTy_field_1F84DArray *pSVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  bool bVar5;

  DAT_0080874d = -1;
  pSVar1 = this->field_1F84;
  if (pSVar1 != nullptr) {
    uVar2 = pSVar1->count;
    uVar4 = 0;
    if (0 < (int)uVar2) {
      bVar5 = uVar2 != 0;
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
      while ((((!bVar5 ||
               (pcVar3 = &pSVar1->data->field_0000 + pSVar1->elementSize * uVar4,
               pcVar3 == nullptr)) || (pcVar3[4] != '\x02')) ||
             (*(int *)(pcVar3 + 6) != DAT_0080877f))) {
        uVar4 = uVar4 + 1;
        bVar5 = uVar4 < uVar2;
        if ((int)uVar2 <= (int)uVar4) {
          return;
        }
      }
      DAT_0080874d = pcVar3[2];
      DAT_0080874e = pcVar3[3];
    }
  }
  return;
}

