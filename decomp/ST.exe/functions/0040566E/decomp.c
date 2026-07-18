
bool __cdecl thunk_FUN_00652030(short *param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (*(char *)((int)param_1 + iVar2 + 0xd0) != '\b') {
      return false;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 9);
  sVar1 = *param_1;
  if (sVar1 < 10) {
    param_1[0x16] = 0;
    param_1[0x17] = 0;
  }
  else if (*(char *)((int)param_1 + 0xd9) != '\b') {
    return false;
  }
  if (sVar1 < 0xb) {
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  else if ((char)param_1[0x6d] != '\b') {
    return false;
  }
  if (sVar1 < 0xc) {
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
  }
  else if (*(char *)((int)param_1 + 0xdb) != '\b') {
    return false;
  }
  if (*(int *)(param_1 + 8) < 0) {
    return false;
  }
  if (*(int *)(param_1 + 0x10) < 0) {
    return false;
  }
  if (-1 < *(int *)(param_1 + 0x12)) {
    return -1 < *(int *)(param_1 + 0x14);
  }
  return false;
}

