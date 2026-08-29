#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as CursorClassTy.
   Evidence: this_call_owners=[CursorClassTy]; agreed_this_calls=2; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall
CursorClassTy::sub_00544150
          (CursorClassTy *this,int param_1,undefined4 *param_2,
          RecoveredRecord_00544150_A51B387C *param_3)

{
  param_3->field_0004 = *(undefined4 *)(&DAT_008083de + param_1 * 4);
  param_3->field_001C = param_1 + 0xa6ff;
  if (*(int *)(&DAT_008083de + param_1 * 4) != 0) {

    FUN_006e6000(this,3,1,param_2);
  }
  return;
}

