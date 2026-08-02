
/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=1;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

uint __thiscall ST3DSMAPContext::sub_006EB310(ST3DSMAPContext *this,uint param_1)

{
  if ((param_1 < (uint)this->field_0310) &&
     ((*(uint *)(this->field_031C + param_1 * 0x114) & 0x8000) != 0)) {
    return *(uint *)(this->field_031C + param_1 * 0x114) & 1;
  }
  return 0;
}

