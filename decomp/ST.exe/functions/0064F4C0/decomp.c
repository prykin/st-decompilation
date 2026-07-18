
bool __cdecl FUN_0064f4c0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return false;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 1);
  return *(int *)(param_1 + 8) < 3;
}

