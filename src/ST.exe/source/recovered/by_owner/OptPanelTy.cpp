#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/OptPanelTy.cpp

// 00532CE0 OptPanelTy::sub_00532CE0
#line 4 "decomp/ST.exe/functions/00532CE0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as OptPanelTy.
   Evidence: this_call_owners=[OptPanelTy]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_00532CE0(OptPanelTy *this)

{
  uint uVar1;
  int iVar2;

  if (this->field_01A4 == CASE_E) {
    this->field_0028 = 0x20;
    iVar2 = st::fn_0040522C((uint)DAT_0080874d,nullptr);
    uVar1 = this->field_01B5[3];
    *(uint *)&this->field_0x2c = (uint)(iVar2 != 0);
    st::fn_006E6080(this,2,uVar1,(undefined4 *)&this->field_0x18);
  }
  return;
}

