
void FUN_004ea6e0(uint param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = GetPlayerRaceId(DAT_0080874d);
  uVar1 = uVar1 & 0xff;
  if (uVar1 == 1) {
    iVar2 = thunk_FUN_004e60d0((uint)DAT_0080874d,0x40);
  }
  else if (uVar1 == 2) {
    iVar2 = thunk_FUN_004e60d0((uint)DAT_0080874d,0x8f);
  }
  else {
    if (uVar1 != 3) {
      return;
    }
    iVar2 = thunk_FUN_004e60d0((uint)DAT_0080874d,0x4d);
  }
  if ((iVar2 != 0) && (DAT_00811798 != (void *)0x0)) {
    thunk_FUN_006202b0(DAT_00811798,param_2,param_3,param_4,param_1);
  }
  return;
}

