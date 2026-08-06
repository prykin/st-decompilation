#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as AiFltClassTy.
   Evidence: this_call_owners=[AiFltClassTy]; agreed_this_calls=2; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006618E0 -> 0065DA10 @ 00661991 */

uint * __fastcall AiFltClassTy::sub_0065DA10(AiFltClassTy *param_1,undefined4 param_2)

{
  STGroupBoatC *this;
  uint *puVar1;

  if ((param_1->field_007D != 0xfffe) && (g_allPlayers_007FA174 != nullptr)) {
    this = thunk_FUN_0042b760(*(char *)&param_1->field_0024,param_1->field_007D);
    if (this != nullptr) {
      puVar1 = STGroupC::GetGroupContent((STGroupC *)this);
      return puVar1;
    }
  }
  return nullptr;
}

