
undefined4 __cdecl thunk_FUN_00651010(short *param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (*(char *)((int)param_1 + iVar2 + 0xd0) != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  iVar2 = 2;
  do {
    if (*(char *)((int)param_1 + iVar2 + 0xd0) != '\n') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  iVar2 = 3;
  do {
    if (*(char *)((int)param_1 + iVar2 + 0xd0) != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  if (*(int *)(param_1 + 8) != 0) {
    sVar1 = *param_1;
    if (sVar1 < 6) {
      param_1[0xe] = 10;
      param_1[0xf] = 0;
    }
    else if (*(char *)((int)param_1 + 0xd5) != '\b') {
      return 0;
    }
    if (sVar1 < 7) {
      param_1[0x10] = -1;
      param_1[0x11] = -1;
    }
    else if ((char)param_1[0x6b] != '\b') {
      return 0;
    }
    if (sVar1 < 8) {
      param_1[0x12] = -1;
      param_1[0x13] = -1;
    }
    else if (*(char *)((int)param_1 + 0xd7) != '\b') {
      return 0;
    }
    if ((0 < *(int *)(param_1 + 10)) && (*(int *)(param_1 + 10) < 4)) {
      if (*(int *)(param_1 + 0xe) < 0) {
        param_1[0xe] = 0;
        param_1[0xf] = 0;
      }
      if (0x13 < *(int *)(param_1 + 0xe)) {
        param_1[0xe] = 0x14;
        param_1[0xf] = 0;
      }
      return 1;
    }
  }
  return 0;
}

