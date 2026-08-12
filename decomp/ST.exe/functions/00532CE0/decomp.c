#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as OptPanelTy.
   Evidence: this_call_owners=[OptPanelTy]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_01A4 uses
   /SubmarineTitans/Recovered/Enums/OptPanelTy_field_01A4State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14
    */

void __thiscall OptPanelTy::sub_00532CE0(OptPanelTy *this)

{
  uint uVar1;
  int iVar2;

  if (this->field_01A4 == CASE_E) {
    this->field_0028 = 0x20;
    iVar2 = thunk_FUN_00648a30((uint)DAT_0080874d,nullptr);
    uVar1 = this->field_01B5[3];
    this->field_002C = (short)(uint)(iVar2 != 0);
    this->field_002E = (short)((uint)(iVar2 != 0) >> 0x10);
    FUN_006e6080(this,2,uVar1,(undefined4 *)&this->field_0x18);
  }
  return;
}

