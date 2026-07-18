
undefined4 __cdecl thunk_FUN_0064f040(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return 1;
}

