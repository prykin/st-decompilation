
undefined4 __cdecl FUN_0064fb00(short *param_1)

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
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  else if (*(char *)((int)param_1 + 0xd7) != '\n') {
    return 0;
  }
  if (8 < sVar1) {
    if ((char)param_1[0x6c] != '\b') {
      return 0;
    }
    return 1;
  }
  param_1[0x14] = 1;
  param_1[0x15] = 0;
  return 1;
}

