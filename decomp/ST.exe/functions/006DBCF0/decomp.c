#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=8, used=0), and
   decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=8;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall ST3DSMAPContext::sub_006DBCF0(ST3DSMAPContext *this)

{
  ST3DSMAPContext *this_00;

  sub_006DBAB0(this);
  this_00 = (ST3DSMAPContext *)this->field_0358;
  if (this_00 != nullptr) {
    sub_006DBCF0(this_00);
    Library::MSVCRT::FUN_0072e2b0((HoloTy *)this_00);
  }
  return;
}

