
/* [STMethodOwnerApplier] Structural method owner recovered as MoneyTy.
   Evidence: this_call_owners=[MoneyTy]; agreed_this_calls=1; incoming_this_accesses=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall MoneyTy::sub_0052BBE0(MoneyTy *this)

{
  FUN_006b5f80((int *)PTR_008075a8,this->field_0038,this->field_003C,this->field_0060,
               this->field_0064);
  PutDDX(this->field_0038,this->field_003C,'\x01',(BITMAPINFO *)this->field_007E);
  return;
}

