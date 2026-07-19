
void __thiscall FUN_006404b0(void *this,int param_1,int param_2,uint param_3)

{
  short sVar1;
  int soundId;
  SoundPosition local_10;
  
  soundId = 0;
  if (DAT_0080874d == param_3) {
    if (*(uint *)((int)this + 0x245) < 2) {
      if (DAT_0080874e == '\x01') {
        soundId = 0xa1;
      }
      else if (DAT_0080874e == '\x02') {
        soundId = 0xa2;
      }
      else if (DAT_0080874e == '\x03') {
        soundId = 0xa3;
      }
      else {
        soundId = 0;
      }
    }
    else if (*(uint *)((int)this + 0x245) == 2) {
      if (DAT_0080874e == '\x01') {
        soundId = 0xa4;
      }
      else if (DAT_0080874e == '\x02') {
        soundId = 0xa5;
      }
      else if (DAT_0080874e == '\x03') {
        soundId = 0xa6;
      }
    }
    sVar1 = (short)(param_1 >> 0x1f);
    if (param_1 < 0) {
      local_10.x = (short)(((short)(param_1 / 0xc9) + sVar1) -
                          (short)((longlong)param_1 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      local_10.x = (int)(short)(((short)(param_1 / 0xc9) + sVar1) -
                               (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
    }
    sVar1 = (short)(param_2 >> 0x1f);
    if (param_2 < 0) {
      local_10.y = (short)(((short)(param_2 / 0xc9) + sVar1) -
                          (short)((longlong)param_2 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      local_10.y = (int)(short)(((short)(param_2 / 0xc9) + sVar1) -
                               (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
    }
    local_10.unknown = *(int *)((int)this + 0x18);
    if (soundId != 0) {
      SoundClassTy::PlaySound_thunk
                ((SoundClassTy *)&g_sound,SOUND_MODE_6,(char *)0x0,soundId,&local_10,0);
    }
  }
  return;
}

