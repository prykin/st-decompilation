
void __thiscall thunk_FUN_0063de20(void *this,int param_1)

{
  int iVar1;
  short sVar2;
  SoundPosition SStack_10;
  
  iVar1 = *(int *)((int)this + 0x266);
  sVar2 = (short)(iVar1 >> 0x1f);
  if (iVar1 < 0) {
    SStack_10.x = (short)(((short)(iVar1 / 0xc9) + sVar2) -
                         (short)((longlong)iVar1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    SStack_10.x = (int)(short)(((short)(iVar1 / 0xc9) + sVar2) -
                              (short)((longlong)iVar1 * 0x28c1979 >> 0x3f));
  }
  iVar1 = *(int *)((int)this + 0x26a);
  sVar2 = (short)(iVar1 >> 0x1f);
  if (iVar1 < 0) {
    SStack_10.y = (short)(((short)(iVar1 / 0xc9) + sVar2) -
                         (short)((longlong)iVar1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    SStack_10.y = (int)(short)(((short)(iVar1 / 0xc9) + sVar2) -
                              (short)((longlong)iVar1 * 0x28c1979 >> 0x3f));
  }
  SStack_10.unknown = *(int *)((int)this + 0x18);
  SoundClassTy::PlaySound_thunk
            ((SoundClassTy *)&g_sound,SOUND_MODE_2,(char *)0x0,param_1,&SStack_10,0);
  return;
}

