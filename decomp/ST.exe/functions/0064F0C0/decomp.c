
bool __cdecl FUN_0064f0c0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return false;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  iVar1 = 2;
  do {
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\n') {
      return false;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return *(int *)(param_1 + 0x10) != 0;
}

