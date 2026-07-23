
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=8;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall CGenerate::sub_00694C80(CGenerate *this)

{
  if ((this->field_0010 != 0) && (this->field_0014 != 0)) {
    sub_00694B90(this);
    this->field_0008 = (int *)this->field_0010;
    this->field_000C = (byte *)this->field_0014;
    this->field_0010 = 0;
    this->field_0014 = 0;
  }
  return;
}

