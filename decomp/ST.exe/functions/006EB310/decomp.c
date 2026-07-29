
/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=1;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

uint __thiscall ST3DSMAPContext::sub_006EB310(ST3DSMAPContext *this,uint param_1)

{
  uint uVar1;

  if ((param_1 < *(uint *)&this->field_0x310) &&
     (uVar1 = *(uint *)(*(int *)&this->field_0x31c + param_1 * 0x114), (uVar1 & 0x8000) != 0)) {
    return uVar1 & 1;
  }
  return 0;
}

