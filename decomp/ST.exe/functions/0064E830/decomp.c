
undefined4 __cdecl FUN_0064e830(short *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(char *)((int)param_1 + iVar1 + 0xd0) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  if (*param_1 < 4) {
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_1 + 8);
  }
  else if (*(char *)((int)param_1 + 0xd3) != '\b') {
    return 0;
  }
  if (*param_1 < 5) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  else if ((char)param_1[0x6a] != '\b') {
    return 0;
  }
  if (*(int *)(param_1 + 10) < *(int *)(param_1 + 8)) {
    *(int *)(param_1 + 10) = *(int *)(param_1 + 8);
  }
  return 1;
}

