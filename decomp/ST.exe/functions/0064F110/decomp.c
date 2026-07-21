
undefined4 __cdecl FUN_0064f110(short *param_1)

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
    param_1[10] = -1;
    param_1[0xb] = -1;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  else if (*(char *)((int)param_1 + 0xd3) != '\b') {
    return 0;
  }
  return 1;
}

