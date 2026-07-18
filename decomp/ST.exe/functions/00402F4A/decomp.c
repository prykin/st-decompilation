
undefined4 __cdecl thunk_FUN_0064fd80(short *param_1)

{
  short sVar1;
  
  sVar1 = *param_1;
  if (sVar1 < 1) {
    param_1[4] = 0;
    param_1[5] = 0;
  }
  else if ((char)param_1[0x68] != '\b') {
    return 0;
  }
  if (sVar1 < 2) {
    param_1[6] = 0;
    param_1[7] = 0;
  }
  else if (*(char *)((int)param_1 + 0xd1) != '\n') {
    return 0;
  }
  if (sVar1 < 3) {
    param_1[8] = 0;
    param_1[9] = 0;
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
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  else if ((char)param_1[0x6a] != '\b') {
    return 0;
  }
  if (sVar1 < 6) {
    param_1[0xe] = -1;
    param_1[0xf] = -1;
  }
  else if (*(char *)((int)param_1 + 0xd5) != '\b') {
    return 0;
  }
  if (sVar1 < 7) {
    param_1[0x10] = -1;
    param_1[0x11] = -1;
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
    param_1[0x14] = 1;
    param_1[0x15] = 0;
  }
  else if ((char)param_1[0x6c] != '\b') {
    return 0;
  }
  return 1;
}

