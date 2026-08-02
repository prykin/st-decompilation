
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=2;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall ST3DSMAPContext::sub_006E91D0(ST3DSMAPContext *this,int *param_1)

{
  int iVar1;

  iVar1 = sub_006E8EA0(this,(AnonShape_006E8EA0_96B71903 *)param_1);
  if (iVar1 != 0) {
    this->field_0134 = 1;
  }
  FUN_006b98c0(&this->field_0294,param_1);
  FUN_006a5e90((short *)param_1);
  return;
}

