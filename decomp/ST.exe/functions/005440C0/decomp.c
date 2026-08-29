#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0, unknown=0),
   and decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as CursorClassTy.
   Evidence: this_call_owners=[CursorClassTy]; agreed_this_calls=4; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall
CursorClassTy::sub_005440C0
          (CursorClassTy *this,int param_1,undefined4 *param_2,
          RecoveredRecord_005440C0_A2D6FA40 *param_3)

{
  param_3->field_0004 = (&DAT_00807ff6)[param_1];
  param_3->field_001C = (&DAT_00808136)[param_1];

  FUN_006e6000(this,3,1,param_2);
  return;
}

