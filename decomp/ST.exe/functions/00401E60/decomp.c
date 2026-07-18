
bool __cdecl thunk_FUN_0064f1b0(short *param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (*(char *)((int)param_1 + iVar2 + 0xd0) != '\b') {
      return false;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  iVar2 = 3;
  do {
    if (*(char *)((int)param_1 + iVar2 + 0xd0) != '\n') {
      return false;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  sVar1 = *param_1;
  if (sVar1 < 5) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  else if ((char)param_1[0x6a] != '\b') {
    return false;
  }
  if (sVar1 < 6) {
    param_1[0xe] = 1;
    param_1[0xf] = 0;
  }
  else if (*(char *)((int)param_1 + 0xd5) != '\b') {
    return false;
  }
  if (sVar1 < 7) {
    param_1[0x10] = 2;
    param_1[0x11] = 0;
  }
  else if ((char)param_1[0x6b] != '\b') {
    return false;
  }
  if (sVar1 < 8) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  else if (*(char *)((int)param_1 + 0xd7) != '\b') {
    return false;
  }
  if (sVar1 < 9) {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  else if ((char)param_1[0x6c] != '\b') {
    return false;
  }
  if (sVar1 < 10) {
    param_1[0x16] = 0x280;
    param_1[0x17] = 0;
  }
  else if (*(char *)((int)param_1 + 0xd9) != '\b') {
    return false;
  }
  if (sVar1 < 0xb) {
    param_1[0x18] = 0x1e0;
    param_1[0x19] = 0;
  }
  else if ((char)param_1[0x6d] != '\b') {
    return false;
  }
  if (0xb < sVar1) {
    if (*(char *)((int)param_1 + 0xdb) == '\b') {
      return *(int *)(param_1 + 10) != 0;
    }
    return false;
  }
  iVar2 = *(int *)(param_1 + 10);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  return iVar2 != 0;
}

