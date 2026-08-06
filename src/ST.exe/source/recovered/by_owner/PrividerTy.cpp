#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/PrividerTy.cpp

// 005BB9F0 PrividerTy::sub_005BB9F0
#line 4 "decomp/ST.exe/functions/005BB9F0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as PrividerTy.
   Evidence: this_call_owners=[PrividerTy]; agreed_this_calls=1; incoming_this_accesses=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_005BB9F0(PrividerTy *this)

{
  this->field_1A65 = 1;
  this->field_0029 = 2;
  this->field_002D = 0x20;
  if (this->field_1A73 != 0) {
    this->field_0025 = this->field_1A73;
    this->field_0031 = 1;
    (*this->field_000C->vtable->vfunc_18)((short)&this->field_0x1d);
  }
  return;
}

