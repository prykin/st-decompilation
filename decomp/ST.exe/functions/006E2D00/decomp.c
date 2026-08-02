
/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=2;
   incoming_ecx_receiver_callers=2; attributed_named_callers=1; owner_evidence_coverage=adequate */

ushort __thiscall ST3DSMAPContext::sub_006E2D00(ST3DSMAPContext *this,int param_1,int param_2)

{
  if ((((-1 < param_1) && (param_1 < this->field_0028)) && (-1 < param_2)) &&
     (param_2 < this->field_002C)) {
    return this->field_0014[this->field_0028 * param_2 + param_1];
  }
  return 0xffff;
}

