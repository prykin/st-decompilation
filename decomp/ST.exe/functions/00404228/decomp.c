
int __fastcall thunk_FUN_0067bef0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x68d) + 1;
  *(int *)(param_1 + 0x68d) = iVar1;
  if ((0xff < iVar1) && (iVar1 < 0x401)) {
    return iVar1;
  }
  *(undefined4 *)(param_1 + 0x68d) = 0x100;
  return CONCAT22((short)((uint)iVar1 >> 0x10),0x100);
}

