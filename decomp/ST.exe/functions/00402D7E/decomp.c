
undefined4 __cdecl thunk_FUN_0064f950(short *param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (*(char *)((int)param_1 + iVar2 + 0xd0) != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  sVar1 = *param_1;
  if (sVar1 < 3) {
    param_1[8] = -1;
    param_1[9] = 0x3fff;
  }
  else if ((char)param_1[0x69] != '\b') {
    return 0;
  }
  if (sVar1 < 4) {
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  else if (*(char *)((int)param_1 + 0xd3) != '\b') {
    return 0;
  }
  if (sVar1 < 5) {
    param_1[0xc] = -1;
    param_1[0xd] = -1;
  }
  else if ((char)param_1[0x6a] != '\b') {
    return 0;
  }
  if (sVar1 < 6) {
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  else if (*(char *)((int)param_1 + 0xd5) != '\n') {
    return 0;
  }
  if (sVar1 < 7) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  else if ((char)param_1[0x6b] != '\b') {
    return 0;
  }
  if (sVar1 < 8) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  else if (*(char *)((int)param_1 + 0xd7) != '\b') {
    return 0;
  }
  if (sVar1 < 9) {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
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
    param_1[0x18] = -1;
    param_1[0x19] = -1;
  }
  else if ((char)param_1[0x6d] != '\b') {
    return 0;
  }
  if (sVar1 < 0xc) {
    param_1[0x1a] = -1;
    param_1[0x1b] = -1;
  }
  else if (*(char *)((int)param_1 + 0xdb) != '\b') {
    return 0;
  }
  if (sVar1 < 0xd) {
    param_1[0x1c] = 1;
    param_1[0x1d] = 0;
  }
  else if ((char)param_1[0x6e] != '\b') {
    return 0;
  }
  return 1;
}

