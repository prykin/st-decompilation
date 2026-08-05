
void FUN_004ea6e0(uint param_1,int param_2,int param_3,undefined4 param_4)

{
  int uVar1;
  int iVar1;

  uVar1 = LookupRecordByte(DAT_0080874d);
  uVar1 = (int)(byte)uVar1;
  if (uVar1 == 1) {
    iVar1 = thunk_FUN_004e60d0((uint)DAT_0080874d,0x40);
  }
  else if (uVar1 == 2) {
    iVar1 = thunk_FUN_004e60d0((uint)DAT_0080874d,0x8f);
  }
  else {
    if (uVar1 != 3) {
      return;
    }
    iVar1 = thunk_FUN_004e60d0((uint)DAT_0080874d,0x4d);
  }
  if ((iVar1 != 0) && (DAT_00811798 != nullptr)) {
    thunk_FUN_006202b0(DAT_00811798,param_2,param_3,param_4,param_1);
  }
  return;
}

