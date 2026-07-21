
void __thiscall FUN_006202b0(void *this,int param_1,int param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  SoundPosition local_10;

  uVar1 = PTR_00802a38->field_00E4;
  if (DAT_0080874d == param_4) {
    return;
  }
  if (uVar1 < *(uint *)((int)this + 0xcd)) {
    return;
  }
  if (DAT_0080874e == '\x01') {
    iVar3 = 0x40;
  }
  else if (DAT_0080874e == '\x02') {
    iVar3 = 0x8f;
  }
  else {
    if (DAT_0080874e != '\x03') goto LAB_0062030e;
    iVar3 = 0x4d;
  }
  thunk_FUN_004e60d0((uint)DAT_0080874d,iVar3);
LAB_0062030e:
  uVar2 = thunk_FUN_006203f0(this,uVar1,param_1,param_2);
  if (((-1 < (int)uVar2) ||
      (uVar2 = thunk_FUN_00620520(this,uVar1,param_1,param_2,param_4), (int)uVar2 < 0)) &&
     (uVar2 != 2)) {
    return;
  }
  if (DAT_0080874e == '\x01') {
    iVar3 = 0x80;
  }
  else if (DAT_0080874e == '\x02') {
    iVar3 = 0x81;
  }
  else {
    if (DAT_0080874e != '\x03') {
      return;
    }
    iVar3 = 0x82;
  }
  local_10.unknown = 0;
  local_10.x = -1;
  local_10.y = -1;
  SoundClassTy::PlaySound_thunk((SoundClassTy *)&g_sound,SOUND_MODE_6,(char *)0x0,iVar3,&local_10,0)
  ;
  thunk_FUN_00620da0(this,param_1,param_2,0x28);
  *(uint *)((int)this + 0xc1) = uVar1 + 0xfa;
  return;
}

