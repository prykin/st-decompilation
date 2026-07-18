
bool __cdecl FUN_00650f90(short *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(char *)((int)param_1 + iVar1 + 0xd0) != '\b') {
      return false;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  if (*param_1 < 7) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  else if ((char)param_1[0x6b] != '\b') {
    return false;
  }
  if ((((-1 < *(int *)(param_1 + 8)) && (*(int *)(param_1 + 8) < 3)) &&
      (-1 < *(int *)(param_1 + 10))) && (-1 < *(int *)(param_1 + 0xc))) {
    return -1 < *(int *)(param_1 + 0xe);
  }
  return false;
}

