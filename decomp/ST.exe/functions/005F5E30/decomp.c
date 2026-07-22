
/* [STMethodOwnerApplier] Structural method owner recovered as STBHEShellC.
   Evidence: this_call_owners=[STBHEShellC]; agreed_this_calls=1; incoming_this_accesses=19;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall
STBHEShellC::sub_005F5E30(STBHEShellC *this,int param_1,int param_2,undefined4 param_3)

{
  this->field_009F = this->field_0093;
  this->field_00A3 = this->field_0097;
  this->field_0093 = param_1;
  this->field_0097 = param_2;
  this->field_00A7 = this->field_009B;
  this->field_0087 = 3;
  this->field_009B = param_3;
  this->field_00AF = 0x1e;
  this->field_00B3 = 0xb;
  this->field_00BC = 0x14;
  this->field_00B7 = 0;
  this->field_00C0 = 0;
  this->field_00AB = 0;
  if (this->field_0103 != '\0') {
    sub_005F35F0(this,3);
  }
  thunk_FUN_005f5c40(this,this->field_0093,this->field_0097,0x48a);
  return;
}

