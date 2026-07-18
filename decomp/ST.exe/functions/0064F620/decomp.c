
undefined4 __cdecl FUN_0064f620(short *param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (*(char *)((int)param_1 + iVar2 + 0xd0) != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 1);
  sVar1 = *param_1;
  if (sVar1 < 2) {
    param_1[6] = 0;
    param_1[7] = 0;
  }
  else if (*(char *)((int)param_1 + 0xd1) != '\b') {
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
    param_1[10] = -1;
    param_1[0xb] = -1;
  }
  else if (*(char *)((int)param_1 + 0xd3) != '\b') {
    return 0;
  }
  if (4 < sVar1) {
    if ((char)param_1[0x6a] != '\b') {
      return 0;
    }
    return 1;
  }
  param_1[0xc] = -1;
  param_1[0xd] = -1;
  return 1;
}

