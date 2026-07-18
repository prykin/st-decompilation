
undefined4 __fastcall thunk_FUN_004b7aa0(int param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_004ac910((void *)(param_1 + 0x1d5),'\x0e');
  if (iVar1 == *(int *)(*(int *)(param_1 + 0x1f5) + 0x20c)) {
    if (*(int *)(param_1 + 0x4d0) == 1) {
      *(undefined4 *)(param_1 + 0x4d0) = 2;
      thunk_FUN_004cabb0(0);
    }
    else if (*(int *)(param_1 + 0x4d0) == 3) {
      *(undefined4 *)(param_1 + 0x4d0) = 0;
      thunk_FUN_004cabb0(0);
      return 0;
    }
  }
  return 0;
}

