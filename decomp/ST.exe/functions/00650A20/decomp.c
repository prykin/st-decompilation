
undefined4 __cdecl FUN_00650a20(short *param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)((int)param_1 + iVar1 + 0xd0) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  if (*param_1 < 4) {
    param_1[10] = 0x32;
    param_1[0xb] = 0;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  else if (*(char *)((int)param_1 + 0xd3) != '\b') {
    return 0;
  }
  if ((-1 < *(int *)(param_1 + 8)) && (*(int *)(param_1 + 8) < 3)) {
    return 1;
  }
  return 0;
}

