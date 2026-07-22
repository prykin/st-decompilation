
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STMethodOwnerApplier] Structural method owner recovered as STDcResourcC.
   Evidence: this_call_owners=[STDcResourcC]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall STDcResourcC::sub_005805C0(STDcResourcC *this)

{
  undefined4 *this_00;
  char *text;
  int iVar1;
  byte bVar2;

  bVar2 = 0x1d;
  this_00 = &this->field_01D5;
  text = thunk_FUN_0057f530(this,this->field_025D);
  iVar1 = STT3DSprC::LoadSequence((STT3DSprC *)this_00,0xe,DAT_00806764,text,bVar2);
  if (iVar1 == 0) {
    iVar1 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)this_00,0xd,DAT_00806764,PTR_s_termsd_007cb0b4,0x1d);
    if (iVar1 == 0) {
      STT3DSprC::StartShow((STT3DSprC *)this_00,0xe,g_playSystem_00802A38->field_00E4);
      STT3DSprC::sub_004AD3C0
                ((STT3DSprC *)this_00,(float)(int)this->field_0245 * _DAT_007904f8 + _DAT_007904f4,
                 (float)this->field_0249 * _DAT_007904f8 + _DAT_007904f4,
                 (float)this->field_024D * _DAT_00790504 + _DAT_00790500 + _DAT_007904fc);
      FUN_006ea3e0((void *)this->field_0211,this->field_01ED,-1);
      STT3DSprC::sub_004ACF50((STT3DSprC *)this_00,'\r');
      STT3DSprC::StartShow((STT3DSprC *)this_00,0xd,g_playSystem_00802A38->field_00E4);
      return 1;
    }
  }
  return 0xffffffff;
}

