
undefined4 __cdecl thunk_FUN_00650940(short *param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (*(char *)((int)param_1 + iVar2 + 0xd0) != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  sVar1 = *param_1;
  if (sVar1 < 4) {
    param_1[10] = 1;
    param_1[0xb] = 0;
  }
  else if (*(char *)((int)param_1 + 0xd3) != '\b') {
    return 0;
  }
  if (sVar1 < 5) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  else if ((char)param_1[0x6a] != '\b') {
    return 0;
  }
  if (((*(uint *)(param_1 + 8) < 0x9b) && (0 < *(int *)(param_1 + 10))) &&
     (*(int *)(param_1 + 10) <= (int)(uint)*(byte *)((int)&DAT_00798fd8 + *(uint *)(param_1 + 8))))
  {
    return 1;
  }
  return 0;
}

