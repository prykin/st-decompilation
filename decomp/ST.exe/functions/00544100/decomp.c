#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 00544100 returns return of FUN_006e6000 @ 00544137

   [STMethodOwnerApplier] Structural method owner recovered as CursorClassTy.
   Evidence: this_call_owners=[CursorClassTy]; agreed_this_calls=2; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

int __thiscall
CursorClassTy::sub_00544100
          (CursorClassTy *this,int param_1,undefined4 *param_2,
          RecoveredRecordView_00544100_1AA291CA *param_3)

{
  int iVar1;

  param_3->field_0004 = *(uint *)(&DAT_00808276 + param_1 * 4);
  param_3->field_001C = *(uint *)(&DAT_008082ee + param_1 * 4);
  param_3->field_003C = *(uint *)(&DAT_00808366 + param_1 * 4);

  iVar1 = FUN_006e6000(this,3,1,param_2);
  return iVar1;
}

