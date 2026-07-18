
undefined4 __cdecl thunk_FUN_00652700(short *param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (*(char *)((int)param_1 + iVar2 + 0xd0) != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 7);
  sVar1 = *param_1;
  if (sVar1 < 8) {
    param_1[0x12] = 100;
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
    param_1[0x16] = 0;
    param_1[0x17] = 0;
  }
  else if (*(char *)((int)param_1 + 0xd9) != '\b') {
    return 0;
  }
  if (*(int *)(param_1 + 8) < 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x12) < 0) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  if (100 < *(int *)(param_1 + 0x12)) {
    param_1[0x12] = 100;
    param_1[0x13] = 0;
  }
  return 1;
}

