
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00617560 -> 00568DD0 @ 006175F6

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return */

void __thiscall FUN_00617560(void *this,int soundId)

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
  SoundClassTy::PlaySound((SoundClassTy *)&g_sound,SOUND_MODE_3,nullptr,soundId,&local_10,0);
  return;
}

