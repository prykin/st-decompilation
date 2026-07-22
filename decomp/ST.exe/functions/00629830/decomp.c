
/* [STMethodOwnerApplier] Structural method owner recovered as STParticleC.
   Evidence: this_call_owners=[STParticleC]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STParticleC::sub_00629830(STParticleC *this)

{
  this->field_00B2 = 0;
  this->field_00BF = 1;
  if (*(byte *)&this->field_0014 < 4) {
    this->field_00BA = 0x25;
  }
  else {
    this->field_00BA = 0x23;
  }
  if (-1 < this->field_00C6) {
    SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::FUN_006e9520
              ((AnonReceiver_004248D0 *)PTR_00807598,this->field_00C6,0,0,0);
  }
  return;
}

