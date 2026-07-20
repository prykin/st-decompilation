
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0041C380 -> 00568DD0 @ 0041C3BA
   
   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0041C380 -> 00568DD0 @ 0041C3BA */

void __thiscall FUN_0041c380(void *this,SoundPlayMode mode,int soundId)

{
  SoundPosition local_10;
  
  local_10.x = (int)*(short *)((int)this + 0x47);
  local_10.y = (int)*(short *)((int)this + 0x49);
  local_10.unknown = *(int *)((int)this + 8);
  SoundClassTy::PlaySound_thunk((SoundClassTy *)&g_sound,mode,(char *)0x0,soundId,&local_10,0);
  return;
}

