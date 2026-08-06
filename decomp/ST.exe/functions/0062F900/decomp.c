#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STRubbishC.
   Evidence: this_call_owners=[STRubbishC]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated return.
   Evidence: 0062F900 returns return of sub_006E60A0 @ 0062F926 */

int __thiscall STRubbishC::sub_0062F900(STRubbishC *this)

{
  int iVar1;
  undefined4 local_24 [3];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;

  local_10 = this->field_0008;
  local_18 = 0;
  local_14 = 10;
  iVar1 = sub_006E60A0(this,local_24);
  return iVar1;
}

