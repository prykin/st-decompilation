
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall TLOBaseTy::sub_004B98E0(TLOBaseTy *this,int param_1)

{
  if (this->field_0255 != 0) {
    this->field_0259 = param_1;
    RotateSpr(this,1);
  }
  return 0;
}

