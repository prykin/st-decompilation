#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/ComboTy.cpp

// 005943F0 ComboTy::sub_005943F0
#line 4 "decomp/ST.exe/functions/005943F0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as ComboTy.
   Evidence: this_call_owners=[ComboTy]; agreed_this_calls=2; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated return.
   Evidence: 005943F0 returns return of sub_006E60A0 @ 00594429 */

int __thiscall st::fn_005943F0(ComboTy *this)

{
  int iVar1;

  memset(&this->field_0x18, 0, 0x20); /* compiler bulk-zero initialization */
  this->field_0020 = this->field_000C->field_0014;
  this->field_0024 = 0;
  this->field_0028 = 10;
  this->field_002C = (ComboTy *)this->field_0008;
  iVar1 = st::fn_006E60A0(this,reinterpret_cast<undefined4 *>(&this->field_0x18));
  return iVar1;
}
