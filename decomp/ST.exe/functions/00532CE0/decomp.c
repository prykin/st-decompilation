#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as OptPanelTy.
   Evidence: this_call_owners=[OptPanelTy]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall OptPanelTy::sub_00532CE0(OptPanelTy *this)

{
  uint uVar1;
  int iVar2;

  if (this->field_01A4 == CASE_E) {
    this->field_0028 = 0x20;
    iVar2 = thunk_FUN_00648a30((uint)DAT_0080874d,nullptr);
    uVar1 = this->field_01B5[3];
    *(uint *)&this->field_0x2c = (uint)(iVar2 != 0);
    FUN_006e6080(this,2,uVar1,(undefined4 *)&this->field_0x18);
  }
  return;
}

