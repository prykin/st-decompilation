#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall CGenerate::sub_00694B90(CGenerate *this)

{
  if (this->field_0008 != nullptr) {
    FUN_006f07e0((int *)&this->field_0008);
  }
  if (this->field_000C != nullptr) {
    Library::Ourlib::MFSTMAP::mfTMapErase((int *)&this->field_000C);
  }
  this->field_0008 = nullptr;
  this->field_000C = nullptr;
  return;
}

