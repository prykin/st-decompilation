
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=8, used=0), and
   decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=3; incoming_this_accesses=13;
   incoming_edx_uses=0; incoming_stack_parameter_uses=20; direct_non_thunk_callers=9;
   incoming_ecx_receiver_callers=1; attributed_named_callers=3; owner_evidence_coverage=adequate */

void __thiscall
ST3DSMAPContext::sub_006DD530(ST3DSMAPContext *this,float *param_1,float *param_2,float *param_3)

{
  float fVar1;

  *param_3 = (float)this->field_0080;
  fVar1 = (float)((float10)this->field_0080 * (float10)_DAT_0079df60);
  switch(this->field_00A8 & 0xfffffff7) {
  case CASE_0:
    *param_1 = fVar1 + (float)this->field_0098;
    *param_2 = fVar1 + (float)this->field_00A0;
    return;
  case CASE_1:
    *param_1 = (float)this->field_0098 - fVar1;
    *param_2 = fVar1 + (float)this->field_00A0;
    return;
  case CASE_2:
    *param_1 = (float)this->field_0098 - fVar1;
    *param_2 = (float)this->field_00A0 - fVar1;
    return;
  case CASE_3:
    *param_1 = fVar1 + (float)this->field_0098;
    *param_2 = (float)this->field_00A0 - fVar1;
    return;
  default:
    *param_1 = (float)this->field_0098;
    *param_2 = (float)this->field_00A0;
    return;
  }
}

