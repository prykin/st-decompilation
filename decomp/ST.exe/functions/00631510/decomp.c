
/* [STMethodOwnerApplier] Structural method owner recovered as STManRuinC.
   Evidence: this_call_owners=[STManRuinC]; agreed_this_calls=2; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall
STManRuinC::sub_00631510
          (STManRuinC *this,undefined4 param_1,int param_2,int param_3,int param_4,int param_5,
          int param_6)

{
  uint uVar1;

  uVar1 = this->field_0071 * 0x41c64e6d + 0x3039;
  this->field_0071 = uVar1;
  sub_006308F0(this,param_3,param_4,param_5,param_2,(uVar1 >> 0x10) % 3,param_6);
  return;
}

