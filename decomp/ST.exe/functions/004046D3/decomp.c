
undefined4 __cdecl thunk_FUN_00651c60(short *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(char *)((int)param_1 + iVar1 + 0xd0) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  if (*param_1 < 5) {
    param_1[0xc] = -1;
    param_1[0xd] = 0x3fff;
  }
  else if ((char)param_1[0x6a] != '\b') {
    return 0;
  }
  if (((-1 < *(int *)(param_1 + 8)) && (-1 < *(int *)(param_1 + 10))) &&
     (*(int *)(param_1 + 10) < 3)) {
    return 1;
  }
  return 0;
}

