
bool __cdecl FUN_0064ec30(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return false;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  iVar1 = 4;
  do {
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\n') {
      return false;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  return *(int *)(param_1 + 0x18) != 0;
}

