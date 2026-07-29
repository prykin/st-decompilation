
/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=10;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=1;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall
ST3DSMAPContext::sub_006E6400
          (ST3DSMAPContext *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4)

{
  *(undefined4 *)&this->field_0x3dc = param_3;
  *(undefined4 *)&this->field_0x424 = param_3;
  *(undefined4 *)&this->field_0x43e = param_2;
  this->field_0418 = 0xffffffff;
  *(undefined4 *)&this->field_0x3e4 = param_4;
  *(undefined4 *)&this->field_0x3e0 = 1;
  if (param_1 != (undefined4 *)0x0) {
    *(undefined4 *)&this->field_0x428 = *param_1;
    *(undefined4 *)&this->field_0x42c = param_1[1];
    *(undefined4 *)&this->field_0x430 = param_1[2];
    *(undefined4 *)&this->field_0x434 = param_1[3];
  }
  return;
}

