
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0063DE20 -> 00568DD0 @ 0063DEAC */

void __thiscall FUN_0063de20(void *this,int soundId)

{
  int iVar1;
  short sVar2;
  SoundPosition local_10;
  
  iVar1 = *(int *)((int)this + 0x266);
  sVar2 = (short)(iVar1 >> 0x1f);
  if (iVar1 < 0) {
    local_10.x = (short)(((short)(iVar1 / 0xc9) + sVar2) -
                        (short)((longlong)iVar1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_10.x = (int)(short)(((short)(iVar1 / 0xc9) + sVar2) -
                             (short)((longlong)iVar1 * 0x28c1979 >> 0x3f));
  }
  iVar1 = *(int *)((int)this + 0x26a);
  sVar2 = (short)(iVar1 >> 0x1f);
  if (iVar1 < 0) {
    local_10.y = (short)(((short)(iVar1 / 0xc9) + sVar2) -
                        (short)((longlong)iVar1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_10.y = (int)(short)(((short)(iVar1 / 0xc9) + sVar2) -
                             (short)((longlong)iVar1 * 0x28c1979 >> 0x3f));
  }
  local_10.unknown = *(int *)((int)this + 0x18);
  SoundClassTy::PlaySound_thunk
            ((SoundClassTy *)&g_sound,SOUND_MODE_2,(char *)0x0,soundId,&local_10,0);
  return;
}

