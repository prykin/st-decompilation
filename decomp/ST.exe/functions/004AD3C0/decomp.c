
/* [STMethodOwnerApplier] Structural method owner recovered as STT3DSprC.
   Evidence: this_call_owners=[STT3DSprC]; agreed_this_calls=1; incoming_this_accesses=5;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STT3DSprC::sub_004AD3C0(STT3DSprC *this,float param_1,float param_2,float param_3)

{
  this->field_0024 = param_1;
  this->field_0028 = param_2;
  this->field_002C = param_3;
  FUN_006ea960(this->field_003C,this->field_0018,param_1,param_2,param_3);
  return;
}

