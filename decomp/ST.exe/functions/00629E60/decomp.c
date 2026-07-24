
/* [STMethodOwnerApplier] Structural method owner recovered as STParticleC.
   Evidence: this_call_owners=[STParticleC]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_00C2 uses
   /SubmarineTitans/Recovered/Enums/STParticleC_field_00C2State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4

   [STSwitchEnumApplier] Switch target field_00C2 uses
   /SubmarineTitans/Recovered/Enums/STParticleC_field_00C2State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_8=8;CASE_10=16;CASE_20=32;CASE_40=64;CASE_80=128
    */

int __thiscall STParticleC::sub_00629E60(STParticleC *this,int param_1)

{
  uint uVar1;
  int iVar2;

  iVar2 = -1;
  if (param_1 != 0) {
    this->field_0040 = 1;
    uVar1 = sub_0062B4A0(this);
    this->field_00D6 = (char)uVar1;
  }
  if (this->field_00D6 != '\0') {
    switch(this->field_00C2) {
    case CASE_1:
    case CASE_2:
      iVar2 = InitVisibelFlight(this,1);
      break;
    case CASE_3:
    case CASE_4:
      if (this->field_00EB != (AnonPointee_STParticleC_00EB *)0x0) {
        sub_00629F20(this);
      }
      iVar2 = InitVisibelDeton(this,1);
      break;
    default:
      goto switchD_00629e96_default;
    }
    if (-1 < iVar2) {
      this->field_00D6 = 1;
    }
  }
switchD_00629e96_default:
  return iVar2;
}

