
/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=10;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=1;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall
ST3DSMAPContext::sub_006E6400
          (ST3DSMAPContext *this,undefined4 *param_1,undefined4 param_2,int param_3,
          undefined4 param_4)

{
  this->field_03DC = param_3;
  this->field_0424 = param_3;
  this->field_043E = param_2;
  this->field_0418 = 0xffffffff;
  this->field_03E4 = param_4;
  this->field_03E0 = 1;
  if (param_1 != nullptr) {
    this->field_0428 = *param_1;
    this->field_042C = param_1[1];
    this->field_0430 = param_1[2];
    this->field_0434 = param_1[3];
  }
  return;
}

