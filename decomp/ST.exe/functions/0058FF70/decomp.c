
/* [STMethodOwnerApplier] Structural method owner recovered as STSharkC.
   Evidence: this_call_owners=[STSharkC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_0257 uses
   /SubmarineTitans/Recovered/Enums/STSharkC_field_0257State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7 */

int __thiscall STSharkC::sub_0058FF70(STSharkC *this)

{
  uint uVar1;
  uint uVar2;

  uVar2 = g_playSystem_00802A38->field_00E4;
  switch(this->field_0257) {
  case CASE_0:
    uVar1 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar1;
    return uVar2 + 1 + (uVar1 >> 0x10) % 5;
  case CASE_6:
    uVar1 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar1;
    uVar2 = uVar2 + 0xf + (uVar1 >> 0x10 & 0xf);
  }
  return uVar2;
}

