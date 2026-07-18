
undefined4 __cdecl FUN_00650760(short *param_1)

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
    param_1[10] = 1;
    param_1[0xb] = 0;
  }
  else if (*(char *)((int)param_1 + 0xd3) != '\b') {
    return 0;
  }
  if (((*(uint *)(param_1 + 8) < 0x9b) && (0 < *(int *)(param_1 + 10))) &&
     (*(int *)(param_1 + 10) <= (int)(uint)*(byte *)((int)&DAT_00798fd8 + *(uint *)(param_1 + 8))))
  {
    return 1;
  }
  return 0;
}

