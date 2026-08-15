#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STArtiafactC.
   Evidence: this_call_owners=[STArtiafactC]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall STArtiafactC::sub_005F0D00(STArtiafactC *this)

{
  int iVar1;
  STMessage *pSVar2;
  STMessage local_24;

  if (g_aiBossClass_008117BC != nullptr) {
    pSVar2 = &local_24;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      pSVar2->unknown_00 = 0;
      pSVar2 = (STMessage *)&pSVar2->unknown_04;
    }
    local_24.arg0.words.high = this->field_0032;
    if ((this->field_030D == '\0') || (this->field_030E == 0xff)) {
      local_24.arg1.words.low = 0xff;
    }
    else {
      local_24.arg1.words.high = this->field_030F;
      local_24.arg1.words.low = (word)(byte)this->field_030E;
    }
    local_24.id = 0x5ddc;
    g_aiBossClass_008117BC->GetMessage(&local_24);
  }
  return;
}

