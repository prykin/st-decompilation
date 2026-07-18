
bool __cdecl FUN_0064ec80(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return false;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  if (*(int *)(param_1 + 0x14) < 0) {
    return false;
  }
  return *(int *)(param_1 + 0x14) <= *(int *)(param_1 + 0x18);
}

