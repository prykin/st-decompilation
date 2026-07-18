
undefined4 __cdecl thunk_FUN_006501a0(short *param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (*(char *)((int)param_1 + iVar2 + 0xd0) != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  sVar1 = *param_1;
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
  else if ((char)param_1[0x6b] != '\n') {
    return 0;
  }
  if (sVar1 < 8) {
    param_1[0x12] = 1;
    param_1[0x13] = 0;
  }
  else if (*(char *)((int)param_1 + 0xd7) != '\b') {
    return 0;
  }
  if ((-1 < *(int *)(param_1 + 6)) && (*(int *)(param_1 + 6) < 8)) {
    return 1;
  }
  return 0;
}

