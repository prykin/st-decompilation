
void __thiscall FUN_00617560(void *this,int param_1)

{
  short sVar1;
  SoundPosition local_10;
  
  sVar1 = *(short *)((int)this + 0x25a);
  if (sVar1 < 0) {
    local_10.x = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                        (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_10.x = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                             (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
  }
  sVar1 = *(short *)((int)this + 0x25c);
  if (sVar1 < 0) {
    local_10.y = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                        (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_10.y = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                             (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
  }
  local_10.unknown = *(int *)((int)this + 0x18);
  SoundClassTy::PlaySound_thunk
            ((SoundClassTy *)&g_sound,SOUND_MODE_3,(char *)0x0,param_1,&local_10,0);
  return;
}

