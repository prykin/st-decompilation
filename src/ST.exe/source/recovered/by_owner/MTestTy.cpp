#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/MTestTy.cpp

// 005E5F60 MTestTy::sub_005E5F60
#line 1 "decomp/ST.exe/functions/005E5F60/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as MTestTy.
   Evidence: this_call_owners=[MTestTy]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated return.
   Evidence: 005E5F60 returns return of sub_006E60A0 @ 005E5F99 */

int __thiscall st::fn_005E5F60(MTestTy *this)

{
  int iVar1;

  memset(&this->field_0x61, 0, 0x20); /* compiler bulk-zero initialization */
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  this->field_0069 = *(undefined4 *)(this->field_000C + 0x14);
  this->field_006D = 0;
  this->field_0071 = 10;
  this->field_0075 = this->field_0008;
  iVar1 = st::fn_006E60A0(this,(undefined4 *)&this->field_0x61);
  return iVar1;
}

