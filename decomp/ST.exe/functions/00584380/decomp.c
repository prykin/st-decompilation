
/* [STMethodOwnerApplier] Structural method owner recovered as STJellyGunC.
   Evidence: this_call_owners=[STJellyGunC]; agreed_this_calls=2; incoming_this_accesses=3;
   incoming_edx_uses=0 */

undefined4 __thiscall STJellyGunC::sub_00584380(STJellyGunC *this)

{
  undefined4 *this_00;
  int iVar1;
  undefined4 uVar2;
  
  this_00 = &this->field_01D5;
  iVar1 = STT3DSprC::LoadSequence((STT3DSprC *)this_00,8,DAT_00806774,s_Expb11_007cb3f8,0x1d);
  if (iVar1 == 0) {
    STT3DSprC::StartShow((STT3DSprC *)this_00,8,*(undefined4 *)(DAT_00802a38 + 0xe4));
    STT3DSprC::LoadSequence((STT3DSprC *)this_00,10,DAT_00806774,s_expmask3_007cb400,0x1d);
    thunk_FUN_004acfe0(this_00,'\n');
    thunk_FUN_004acf20(this_00,DAT_008032b8,0x10);
    STT3DSprC::StartShow((STT3DSprC *)this_00,10,*(undefined4 *)(DAT_00802a38 + 0xe4));
    (*this->vtable->vfunc_D8)();
    iVar1 = STT3DSprC::LoadSequence((STT3DSprC *)this_00,9,DAT_00806764,s_bulb_n5_007cb40c,0x1d);
    if (iVar1 == 0) {
      thunk_FUN_004ad070(this_00,9);
      uVar2 = thunk_FUN_004acd30(this_00,'\t');
      this->field_024F = (char)uVar2;
      this->field_0250 = DAT_007cb414;
      this->field_0251 = 0;
    }
    this->field_0239 = 100;
    return 0;
  }
  return 0xffffffff;
}

