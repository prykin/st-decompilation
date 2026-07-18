
bool __cdecl FUN_006525e0(short *param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (*(char *)((int)param_1 + iVar2 + 0xd0) != '\b') {
      return false;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  sVar1 = *param_1;
  if (sVar1 < 7) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  else if ((char)param_1[0x6b] != '\b') {
    return false;
  }
  if (7 < sVar1) {
    if (*(char *)((int)param_1 + 0xd7) == '\b') {
      return -1 < *(int *)(param_1 + 8);
    }
    return false;
  }
  iVar2 = *(int *)(param_1 + 8);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return -1 < iVar2;
}

