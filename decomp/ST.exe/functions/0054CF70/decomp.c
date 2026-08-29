#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=14, used=0, unknown=0),
   and decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as STPlaySystemC.
   Evidence: this_call_owners=[STPlaySystemC]; agreed_this_calls=14; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=8; owner_evidence_coverage=adequate */

void __thiscall STPlaySystemC::sub_0054CF70(STPlaySystemC *this,uint param_1)

{
  thunk_FUN_0054cdb0();
  StartSystemTy::sub_006E56B0((StartSystemTy *)this,param_1);
  return;
}

