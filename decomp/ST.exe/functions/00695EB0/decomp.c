
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=2; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall CGenerate::sub_00695EB0(CGenerate *this)

{
  if (this->field_584B != (byte *)0x0) {
    FreeAndNull(&this->field_584B);
  }
  this->field_584B = (byte *)0x0;
  if (this->field_584F != (ushort *)0x0) {
    FreeAndNull(&this->field_584F);
  }
  this->field_584F = (ushort *)0x0;
  sub_00695F20(this);
  return;
}

