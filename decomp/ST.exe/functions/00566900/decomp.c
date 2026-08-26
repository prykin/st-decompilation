#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as SoundManagerTy.
   Evidence: this_call_owners=[SoundManagerTy]; agreed_this_calls=1; incoming_this_accesses=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall SoundManagerTy::sub_00566900(SoundManagerTy *this)

{
  SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00568940::thunk_FUN_00568940
            ((AnonReceiver_00568940 *)&g_sound,CASE_B);
  if (this->field_0018 != nullptr) {
    cMf32::delete(this->field_0018);
  }
  this->field_0018 = nullptr;
  this->field_0028 = 0;
  this->field_002C = 0;
  this->field_0030 = 0;
  this->field_0034 = 0;
  this->field_0039 = -1;
  return;
}

