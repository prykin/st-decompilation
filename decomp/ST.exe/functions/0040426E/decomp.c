
undefined4 __cdecl thunk_FUN_00650f50(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  if ((-1 < *(int *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x10) < 3)) {
    return 1;
  }
  return 0;
}

