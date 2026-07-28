
/* [STMethodOwnerApplier] Structural method owner recovered as CursorClassTy.
   Evidence: this_call_owners=[CursorClassTy]; agreed_this_calls=3; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=3; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void __thiscall CursorClassTy::sub_00544940(CursorClassTy *this)

{
  this->field_04DA = 0;
  FUN_006b2800(g_ddxContext_008075A8,this->field_04D6,0,0);
  FUN_006b3af0((int *)g_ddxContext_008075A8,this->field_04D6);
  return;
}

