
void FUN_004ea6e0(uint param_1,int param_2,int param_3,undefined4 param_4)

{
  int uVar1;
  uint uVar2;
  int iVar3;

  uVar1 = LookupRecordByte(DAT_0080874d);
  uVar2 = uVar1 & 0xff;
  if (uVar2 == 1) {
    iVar3 = thunk_FUN_004e60d0((uint)DAT_0080874d,0x40);
  }
  else if (uVar2 == 2) {
    iVar3 = thunk_FUN_004e60d0((uint)DAT_0080874d,0x8f);
  }
  else {
    if (uVar2 != 3) {
      return;
    }
    iVar3 = thunk_FUN_004e60d0((uint)DAT_0080874d,0x4d);
  }
  if ((iVar3 != 0) && (DAT_00811798 != (void *)0x0)) {
    thunk_FUN_006202b0(DAT_00811798,param_2,param_3,param_4,param_1);
  }
  return;
}

