
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 00658D2A
   -> TEST TEST EAX,EAX */

int __cdecl FUN_00652030(short *param_1)

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
  } while (iVar2 < 9);
  sVar1 = *param_1;
  if (sVar1 < 10) {
    param_1[0x16] = 0;
    param_1[0x17] = 0;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  else if (*(char *)((int)param_1 + 0xd9) != '\b') {
    return 0;
  }
  if (sVar1 < 0xb) {
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  else if ((char)param_1[0x6d] != '\b') {
    return 0;
  }
  if (sVar1 < 0xc) {
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  else if (*(char *)((int)param_1 + 0xdb) != '\b') {
    return 0;
  }
  if (*(int *)(param_1 + 8) < 0) {
    return 0;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x10) < 0) {
    return 0;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (-1 < *(int *)(param_1 + 0x12)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    return (uint)(-1 < *(int *)(param_1 + 0x14));
  }
  return 0;
}

