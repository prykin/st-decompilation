
void __thiscall FUN_00585890(void *this,int param_1,int param_2,uint param_3)

{
  short sVar1;
  int soundId;
  SoundPosition local_10;
  
  if (DAT_0080874d == param_3) {
    if (DAT_0080874e == '\x01') {
      soundId = 0xa7;
    }
    else if (DAT_0080874e == '\x02') {
      soundId = 0xa8;
    }
    else if (DAT_0080874e == '\x03') {
      soundId = 0xa9;
    }
    else {
      soundId = 0;
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

