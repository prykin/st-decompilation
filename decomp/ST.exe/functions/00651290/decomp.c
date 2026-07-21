
undefined4 __cdecl FUN_00651290(short *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)((int)param_1 + iVar2 + 0xd0) != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  sVar1 = *param_1;
  if (sVar1 < 5) {
    param_1[0xc] = -1;
    param_1[0xd] = 0x3fff;
  }
  else if ((char)param_1[0x6a] != '\b') {
    return 0;
  }
  if (sVar1 < 6) {
    param_1[0xe] = 1;
    param_1[0xf] = 0;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  else if (*(char *)((int)param_1 + 0xd5) != '\b') {
    return 0;
  }
  if (sVar1 < 7) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  else if ((char)param_1[0x6b] != '\b') {
    return 0;
  }
  if (sVar1 < 8) {
    param_1[0x12] = 1;
    param_1[0x13] = 0;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  else if (*(char *)((int)param_1 + 0xd7) != '\b') {
    return 0;
  }
  if (sVar1 < 9) {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  else if ((char)param_1[0x6c] != '\b') {
    return 0;
  }
  if (sVar1 < 10) {
    param_1[0x16] = 0;
    param_1[0x17] = 0;
  }
  else if ((char)param_1[0x6c] != '\b') {
    return 0;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((((-1 < *(int *)(param_1 + 8)) && (-1 < *(int *)(param_1 + 10))) &&
      (*(int *)(param_1 + 10) < 3)) &&
     ((-1 < *(int *)(param_1 + 0xe) && (-1 < *(int *)(param_1 + 0x10))))) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)(param_1 + 0x12) < 0) {
      param_1[0x12] = 1;
      param_1[0x13] = 0;
      return 1;
    }
    return 1;
  }
  return 0;
}

