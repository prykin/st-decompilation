
undefined4 __cdecl thunk_FUN_0064fef0(short *param_1)

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
    param_1[0xc] = 10000;
    param_1[0xd] = 0;
  }
  else if ((char)param_1[0x6a] != '\b') {
    return 0;
  }
  if (5 < sVar1) {
    if (*(char *)((int)param_1 + 0xd5) != '\b') {
      return 0;
    }
    return 1;
  }
  param_1[0xe] = 1;
  param_1[0xf] = 0;
  return 1;
}

