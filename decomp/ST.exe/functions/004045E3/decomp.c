
void thunk_FUN_00550830(int param_1)

{
  uint uVar1;
  int soundId;
  
  if (param_1 != 0) {
    wsprintfA((LPSTR)&DAT_0080f33a,s__s>__s_007c40dc,param_1,param_1 + 0x40);
    if (DAT_008016d8 != (void *)0x0) {
      if (*(byte *)(param_1 + 0x450) == 0xff) {
        uVar1 = 8;
      }
      else {
        uVar1 = (uint)*(byte *)(param_1 + 0x450);
      }
      thunk_FUN_0052d320(DAT_008016d8,(char *)&DAT_0080f33a,uVar1);
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
    SoundClassTy::PlaySound_thunk
              ((SoundClassTy *)&g_sound,SOUND_MODE_5,(char *)0x0,soundId,(SoundPosition *)0x0,0);
  }
  return;
}

