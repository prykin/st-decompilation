
undefined4 __cdecl FUN_006515b0(short *param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (*(char *)((int)param_1 + iVar2 + 0xd0) != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  sVar1 = *param_1;
  if (sVar1 < 5) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  else if ((char)param_1[0x6a] != '\b') {
    return 0;
  }
  if (sVar1 < 6) {
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  else if (*(char *)((int)param_1 + 0xd5) != '\b') {
    return 0;
  }
  if (sVar1 < 7) {
    param_1[0x10] = 0x19;
    param_1[0x11] = 0;
  }
  else if ((char)param_1[0x6b] != '\b') {
    return 0;
  }
  if (sVar1 < 8) {
    param_1[0x12] = -1;
    param_1[0x13] = -1;
  }
  else if (*(char *)((int)param_1 + 0xd7) != '\b') {
    return 0;
  }
  if (sVar1 < 9) {
    param_1[0x14] = -1;
    param_1[0x15] = -1;
  }
  else if ((char)param_1[0x6c] != '\b') {
    return 0;
  }
  if (sVar1 < 10) {
    param_1[0x16] = -1;
    param_1[0x17] = -1;
  }
  else if (*(char *)((int)param_1 + 0xd9) != '\b') {
    return 0;
  }
  if (sVar1 < 0xb) {
    param_1[0x18] = 8;
    param_1[0x19] = 0;
  }
  else if ((char)param_1[0x6d] != '\b') {
    return 0;
  }
  if (sVar1 < 0xc) {
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
  }
  else if (*(char *)((int)param_1 + 0xdb) != '\n') {
    return 0;
  }
  if (*(int *)(param_1 + 8) < 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x10) < 0) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  if (0x32 < *(int *)(param_1 + 0x10)) {
    param_1[0x10] = 0x32;
    param_1[0x11] = 0;
  }
  if (*(int *)(param_1 + 0x18) < -1) {
    param_1[0x18] = -1;
    param_1[0x19] = -1;
  }
  if (8 < *(int *)(param_1 + 0x18)) {
    param_1[0x18] = 8;
    param_1[0x19] = 0;
  }
  return 1;
}

