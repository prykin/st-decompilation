#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STBHEShellC.
   Evidence: this_call_owners=[STBHEShellC]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall STBHEShellC::sub_005F3470(STBHEShellC *this)

{
  uint local_24 [3];
  uint local_18;
  uint local_14;
  uint local_10;
  local_10 = this->field_0008;
  local_18 = 0;
  local_14 = 10;
  sub_006E60A0(this,local_24);
  return;
}

