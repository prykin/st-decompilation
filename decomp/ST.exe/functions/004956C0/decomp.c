#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as STGameObjC.
   Evidence: this_call_owners=[STGameObjC]; agreed_this_calls=2; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate;
   unique_primary_physical_vtable=true */

void __thiscall STGameObjC::sub_004956C0(STGameObjC *this,undefined4 param_1)

{
  if (this->field_06F7 == 0x17) {
    *(undefined4 *)&this->field_0x7e2 = param_1;
  }
  return;
}

