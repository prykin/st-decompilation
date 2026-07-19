
void __thiscall thunk_FUN_00620e40(void *this,int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int soundId;
  SoundPosition SStack_10;
  
  uVar1 = *(uint *)(DAT_00802a38 + 0xe4);
  if (DAT_0080874d == param_3) {
    return;
  }
  if (*(uint *)((int)this + 0xf1) <= uVar1) {
    uVar2 = thunk_FUN_00620f60(this,uVar1,param_1,param_2);
    if (((-1 < (int)uVar2) ||
        (uVar2 = thunk_FUN_00621090(this,uVar1,param_1,param_2,param_3), (int)uVar2 < 0)) &&
       (uVar2 != 2)) {
      return;
    }
    if (DAT_0080874e == '\x01') {
      soundId = 0x8f;
    }
    else if (DAT_0080874e == '\x02') {
      soundId = 0x90;
    }
    else {
      if (DAT_0080874e != '\x03') {
        return;
      }
      soundId = 0x91;
    }
    SStack_10.unknown = 0;
    SStack_10.x = -1;
    SStack_10.y = -1;
    SoundClassTy::PlaySound_thunk
              ((SoundClassTy *)&g_sound,SOUND_MODE_6,(char *)0x0,soundId,&SStack_10,0);
    thunk_FUN_00620da0(this,param_1,param_2,0x28);
    *(uint *)((int)this + 0xf1) = uVar1 + 0xfa;
    return;
  }
  return;
}

