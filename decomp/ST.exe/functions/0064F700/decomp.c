
undefined4 __cdecl FUN_0064f700(short *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(char *)((int)param_1 + iVar1 + 0xd0) != '\n') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 1);
  iVar1 = 1;
  do {
    if (*(char *)((int)param_1 + iVar1 + 0xd0) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  if (*param_1 < 5) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  else if ((char)param_1[0x6a] != '\b') {
    return 0;
  }
  if ((-1 < *(int *)(param_1 + 0xc)) && (*(int *)(param_1 + 0xc) < 3)) {
    return 1;
  }
  return 0;
}

