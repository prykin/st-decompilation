
/* [STMethodOwnerApplier] Structural method owner recovered as MoneyTy.
   Evidence: this_call_owners=[MoneyTy]; agreed_this_calls=2; incoming_this_accesses=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall MoneyTy::sub_0052B940(MoneyTy *this)

{
  FUN_006b5f80((int *)PTR_008075a8,this->field_0028,this->field_002C,this->field_0050,
               this->field_0054);
  PutDDX(this->field_0028,this->field_002C,'\x01',(BITMAPINFO *)this->field_007A);
  return;
}

