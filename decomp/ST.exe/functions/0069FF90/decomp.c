#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=9; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=36, used=0), and
   decompilation contains no value return */

void __thiscall CGenerate::sub_0069FF90(CGenerate *this)

{
  code *pcVar1;

  pcVar1 = *(code **)&(this->aggregate_001C).field_0x22e;
  if (pcVar1 != nullptr) {
    /* ST_CALLSITE[0069FF9C]: CALL EAX */
    (*pcVar1)(0);
  }
  return;
}

