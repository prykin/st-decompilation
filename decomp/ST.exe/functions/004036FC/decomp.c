
void __thiscall thunk_FUN_00647a60(void *this,int param_1)

{
  SoundPosition SStack_10;
  
  SStack_10.x = *(int *)((int)this + 0x30);
  SStack_10.y = *(int *)((int)this + 0x34);
  SStack_10.unknown = *(int *)((int)this + 0x18);
  SoundClassTy::PlaySound_thunk
            ((SoundClassTy *)&g_sound,SOUND_MODE_3,(char *)0x0,param_1,&SStack_10,0);
  return;
}

