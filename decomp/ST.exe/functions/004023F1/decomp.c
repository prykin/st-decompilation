
undefined4 __cdecl thunk_FUN_0064eaa0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 1);
  iVar1 = 1;
  do {
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\n') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  iVar1 = 2;
  do {
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  if ((-1 < *(int *)(param_1 + 8)) && (*(int *)(param_1 + 8) < 4)) {
    return 1;
  }
  return 0;
}

