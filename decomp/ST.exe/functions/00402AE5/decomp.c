
bool __cdecl thunk_FUN_0064f470(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return false;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  if (2 < *(int *)(param_1 + 0x10)) {
    return false;
  }
  return *(int *)(param_1 + 0x14) < 3;
}

