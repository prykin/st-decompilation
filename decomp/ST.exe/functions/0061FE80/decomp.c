
void __thiscall
FUN_0061fe80(void *this,int param_1,int param_2,uint param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  int soundId;
  SoundPosition local_10;
  
  uVar1 = *(uint *)(DAT_00802a38 + 0xe4);
  if (DAT_0080874d == param_3) {
    return;
  }
  if (*(uint *)((int)this + 0xc1) <= uVar1) {
    uVar2 = thunk_FUN_00620030(this,uVar1,param_1,param_2);
    if (((-1 < (int)uVar2) ||
        (uVar2 = thunk_FUN_00620160(this,uVar1,param_1,param_2,param_3), (int)uVar2 < 0)) &&
       (uVar2 != 2)) {
      return;
    }
    if (DAT_0080874e == '\x01') {
      if (param_5 == 0xa6) {
        soundId = 0x86;
      }
      else if (param_5 == 0xa7) {
        soundId = 0x89;
      }
      else {
        if (param_5 != 0xbd) {
          return;
        }
        soundId = 0x8c;
      }
    }
    else if (DAT_0080874e == '\x02') {
      if (param_5 == 0xa6) {
        soundId = 0x87;
      }
      else if (param_5 == 0xa7) {
        soundId = 0x8a;
      }
      else {
        if (param_5 != 0xbd) {
          return;
        }
        soundId = 0x8d;
      }
    }
    else {
      if (DAT_0080874e != '\x03') {
        return;
      }
      if (param_5 == 0xa6) {
        soundId = 0x88;
      }
      else if (param_5 == 0xa7) {
        soundId = 0x8b;
      }
      else {
        if (param_5 != 0xbd) {
          return;
        }
        soundId = 0x8e;
      }
    }
    local_10.unknown = 0;
    local_10.x = -1;
    local_10.y = -1;
    SoundClassTy::PlaySound_thunk
              ((SoundClassTy *)&g_sound,SOUND_MODE_6,(char *)0x0,soundId,&local_10,0);
    thunk_FUN_00620da0(this,param_1,param_2,0x8e);
    *(uint *)((int)this + 0xc1) = uVar1 + 0xfa;
    return;
  }
  return;
}

