
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00647A60 -> 00568DD0 @ 00647A96 */

void __thiscall FUN_00647a60(void *this,int soundId)

{
  SoundPosition local_10;

  local_10.x = *(int *)((int)this + 0x30);
  local_10.y = *(int *)((int)this + 0x34);
  local_10.unknown = *(int *)((int)this + 0x18);
  SoundClassTy::PlaySound_thunk
            ((SoundClassTy *)&g_sound,SOUND_MODE_3,(char *)0x0,soundId,&local_10,0);
  return;
}

