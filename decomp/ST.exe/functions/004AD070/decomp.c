
/* [STMethodOwnerApplier] Structural method owner recovered as STT3DSprC.
   Evidence: this_call_owners=[STT3DSprC]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STT3DSprC::sub_004AD070(STT3DSprC *this,byte param_1)

{
  byte *pbVar1;

  if (((-1 < (char)param_1) && ((char)param_1 < ' ')) &&
     ((1 << (param_1 & 0x1f) & this->field_001C) != 0)) {
    pbVar1 = &this->field_0020->field_0xe + (char)param_1 * 0x24;
    *pbVar1 = *pbVar1 | 8;
    FUN_006e9e60(this->field_003C,(uint *)this->field_0018,(int)(char)param_1);
  }
  return;
}

