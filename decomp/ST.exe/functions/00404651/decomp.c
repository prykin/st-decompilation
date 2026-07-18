
undefined4 __fastcall thunk_FUN_004ea7e0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x245);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x4d0) != 0) {
      if (*(int *)(param_1 + 0x4d0) != 1) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x261) = 1;
      return 0;
    }
  }
  else {
    if ((iVar1 != 1) && (iVar1 != 6)) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x4d0) = 0;
  }
  *(undefined4 *)(param_1 + 0x261) = 0;
  return 0;
}

