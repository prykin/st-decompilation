
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=9; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=36, used=0), and
   decompilation contains no value return */

void __thiscall CGenerate::sub_0069FF90(CGenerate *this)

{
  if (this->field_024A != (code *)0x0) {
    (*this->field_024A)(0);
  }
  return;
}

