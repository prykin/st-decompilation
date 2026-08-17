
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void FUN_00550830(int param_1)

{
  uint uVar1;
  int soundId;

  if (param_1 != 0) {
    /* ST_CALLSITE[0055084A]: CALL dword ptr [0x0085bde8] */
    wsprintfA((LPSTR)&DAT_0080f33a,s__s>__s_007c40dc,param_1,param_1 + 0x40);
    if (g_popUp_008016D8 != nullptr) {
      if (((byte *)param_1)[0x450] == 0xff) {
        uVar1 = 8;
      }
      else {
        uVar1 = (uint)((byte *)param_1)[0x450];
      }
      thunk_FUN_0052d320(g_popUp_008016D8,(char *)&DAT_0080f33a,uVar1);
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

