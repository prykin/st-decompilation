#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STManRuinC.
   Evidence: this_call_owners=[STManRuinC]; agreed_this_calls=1; incoming_this_accesses=5;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall STManRuinC::sub_00631450(STManRuinC *this)

{
  STManRuinC_field_0038DArray *pSVar1;
  ushort *puVar2;
  uint index;
  STManRuinC_field_0038Element *element_0038;

  if ((this->field_0038 != nullptr) &&
     (index = this->field_0038->count - 1, -1 < (int)index)) {
    do {
      pSVar1 = this->field_0038;
      if (index < pSVar1->count) {
        element_0038 = DArrayAt<STManRuinC_field_0038Element>(pSVar1, index);
      }
      else {
        element_0038 = nullptr;
      }
      sub_00630BB0(this,element_0038->field_0000,element_0038->field_0002,element_0038->field_0004,element_0038->field_0008,(int)element_0038->field_0006,
                   element_0038->field_0014);
      puVar2 = sub_00630C50(this,this->field_0040,this->field_004C,0,1,element_0038->field_0014);
      element_0038->field_0010 = puVar2;
      if (puVar2 == nullptr) {
        DArrayRemoveAt((DArrayTy *)this->field_0038,index);
      }
      index = index - 1;
    } while (-1 < (int)index);
    return 0;
  }
  return 0;
}

