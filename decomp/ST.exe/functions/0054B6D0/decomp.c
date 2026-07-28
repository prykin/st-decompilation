
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004F5690 -> 0054B6D0 @ 004F6B6E | 004FB060 -> 0054B6D0 @ 004FB3AF | 004FB060 ->
   0054B6D0 @ 004FB591

   [STMethodOwnerApplier] Structural method owner recovered as CursorClassTy.
   Evidence: this_call_owners=[CursorClassTy]; agreed_this_calls=3; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall CursorClassTy::sub_0054B6D0(CursorClassTy *this)

{
  if (g_cPanel_00801688 != (CPanelTy *)0x0) {
    this->field_04BE = (g_cPanel_00801688->field_0094 - this->field_04B6) + 1;
  }
  return;
}

