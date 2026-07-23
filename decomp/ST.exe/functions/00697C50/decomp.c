
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=4; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall CGenerate::sub_00697C50(CGenerate *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10 [2];
  undefined4 local_8;

  local_8 = 0;
  if ((((param_1 < 1) || (param_2 < 0)) || (param_3 < 0)) ||
     ((this->field_5833 <= param_2 || (this->field_5837 <= param_3)))) {
    uVar2 = 0;
  }
  else {
    thunk_FUN_006a1370(this->field_0008,param_2,param_3,param_1,local_10);
    iVar1 = thunk_FUN_006a20e0(this->field_0008,param_2,param_3,param_1,0xff);
    uVar2 = 1;
    if (iVar1 != 0) {
      return local_8;
    }
  }
  return uVar2;
}

