
bool __cdecl FUN_0064ef90(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return false;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  iVar1 = 3;
  do {
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\n') {
      return false;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  if ((-1 < *(int *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x10) < 0x100)) {
    return *(int *)(param_1 + 0x14) != 0;
  }
  return false;
}

