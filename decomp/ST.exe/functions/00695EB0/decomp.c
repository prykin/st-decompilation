
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=2; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall CGenerate::sub_00695EB0(CGenerate *this)

{
  if (this->field_584B != nullptr) {
    FreeAndNull(&this->field_584B);
  }
  this->field_584B = nullptr;
  if (this->field_584F != nullptr) {
    FreeAndNull(&this->field_584F);
  }
  this->field_584F = nullptr;
  sub_00695F20(this);
  return;
}

