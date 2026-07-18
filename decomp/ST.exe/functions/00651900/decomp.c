
bool __cdecl FUN_00651900(short *param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (*(char *)((int)param_1 + iVar2 + 0xd0) != '\b') {
      return false;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  sVar1 = *param_1;
  if (sVar1 < 5) {
    param_1[0xc] = 0x32;
    param_1[0xd] = 0;
  }
  else if ((char)param_1[0x6a] != '\b') {
    return false;
  }
  if (sVar1 < 6) {
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  else if (*(char *)((int)param_1 + 0xd5) != '\b') {
    return false;
  }
  if (sVar1 < 7) {
    param_1[0x10] = 1;
    param_1[0x11] = 0;
  }
  else if ((char)param_1[0x6b] != '\b') {
    return false;
  }
  if (sVar1 < 8) {
    param_1[0x12] = -1;
    param_1[0x13] = 0x3fff;
  }
  else if (*(char *)((int)param_1 + 0xd7) != '\b') {
    return false;
  }
  if (((-1 < *(int *)(param_1 + 8)) && (-1 < *(int *)(param_1 + 10))) &&
     (*(int *)(param_1 + 10) < 3)) {
    if (99 < *(int *)(param_1 + 0xc)) {
      param_1[0xc] = 99;
      param_1[0xd] = 0;
    }
    return -1 < *(int *)(param_1 + 0xe);
  }
  return false;
}

