
void __thiscall FUN_0041c380(void *this,SoundPlayMode param_1,int param_2)

{
  SoundPosition local_10;
  
  local_10.x = (int)*(short *)((int)this + 0x47);
  local_10.y = (int)*(short *)((int)this + 0x49);
  local_10.unknown = *(int *)((int)this + 8);
  SoundClassTy::PlaySound_thunk((SoundClassTy *)&g_sound,param_1,(char *)0x0,param_2,&local_10,0);
  return;
}

