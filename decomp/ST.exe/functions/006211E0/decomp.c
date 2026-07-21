
void __thiscall FUN_006211e0(void *this,int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int soundId;
  SoundPosition local_10;

  uVar1 = PTR_00802a38->field_00E4;
  if (DAT_0080874d != param_3) {
    return;
  }
  if (*(uint *)((int)this + 0xfd) <= uVar1) {
    uVar2 = thunk_FUN_00621300(this,uVar1,param_1,param_2);
    if (((-1 < (int)uVar2) ||
        (uVar2 = thunk_FUN_00621430(this,uVar1,param_1,param_2,param_3), (int)uVar2 < 0)) &&
       (uVar2 != 2)) {
      return;
    }
    if (DAT_0080874e == '\x01') {
      soundId = 0xaa;
    }
    else if (DAT_0080874e == '\x02') {
      soundId = 0xab;
    }
    else {
      if (DAT_0080874e != '\x03') {
        return;
      }
      soundId = 0xac;
    }
    local_10.x = -1;
    local_10.y = -1;
    local_10.unknown = 0;
    SoundClassTy::PlaySound_thunk
              ((SoundClassTy *)&g_sound,SOUND_MODE_6,(char *)0x0,soundId,&local_10,0);
    thunk_FUN_00620da0(this,param_1,param_2,0x8e);
    *(uint *)((int)this + 0xfd) = uVar1 + 0xfa;
    return;
  }
  return;
}

