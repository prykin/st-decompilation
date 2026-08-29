
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void FUN_00550830(RecoveredRecord_00550830_31BFDEFC *param_1)

{
  uint uVar1;
  int soundId;

  if (param_1 != nullptr) {
    /* ST_CALLSITE[0055084A]: CALL dword ptr [0x0085bde8] */
    wsprintfA((LPSTR)&DAT_0080f33a,s__s>__s_007c40dc,param_1,&param_1->field_0x40);
    if (g_popUp_008016D8 != nullptr) {
      if (param_1->field_0450 == 0xff) {
        uVar1 = 8;
      }
      else {
        uVar1 = (uint)param_1->field_0450;
      }
      /* ST_CALLSITE[00550879]: CALL 0x004014d8; direct=004014D8 PopUpTy::sub_0052D320 */
      PopUpTy::sub_0052D320(g_popUp_008016D8,(char *)&DAT_0080f33a,uVar1);
    }
    if (DAT_0080874e == '\x01') {
      soundId = 0x38;
    }
    else if (DAT_0080874e == '\x02') {
      soundId = 0x39;
    }
    else {
      if (DAT_0080874e != '\x03') {
        return;
      }
      soundId = 0x3a;
    }
    /* ST_CALLSITE[005508AF]: CALL 0x00404bd8; direct=00404BD8 SoundClassTy::PlaySound */
    SoundClassTy::PlaySound
              ((SoundClassTy *)&g_sound,SOUND_MODE_5,nullptr,soundId,nullptr,0);
  }
  return;
}

