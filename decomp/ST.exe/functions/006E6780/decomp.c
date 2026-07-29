
/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=6; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=9;
   incoming_ecx_receiver_callers=0; attributed_named_callers=5; owner_evidence_coverage=adequate */

void __thiscall ST3DSMAPContext::sub_006E6780(ST3DSMAPContext *this,int param_1)

{
  int *piVar1;

  piVar1 = *(int **)&this->field_0x44e;
  if (piVar1 != (int *)0x0) {
    while (piVar1[1] != param_1) {
      piVar1 = (int *)*piVar1;
      if (piVar1 == (int *)0x0) {
        return;
      }
    }
    if (piVar1 != (int *)0x0) {
      FUN_006b98c0((int *)&this->field_0x44e,piVar1);
      FUN_006a5e90((short *)piVar1);
    }
  }
  return;
}

