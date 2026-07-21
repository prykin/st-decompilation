
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 006581A0
   -> TEST TEST EAX,EAX */

int __cdecl FUN_00651900(short *param_1)

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
    param_1[0xc] = 0x32;
    param_1[0xd] = 0;
  }
  else if ((char)param_1[0x6a] != '\b') {
    return 0;
  }
  if (sVar1 < 6) {
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  else if (*(char *)((int)param_1 + 0xd5) != '\b') {
    return 0;
  }
  if (sVar1 < 7) {
    param_1[0x10] = 1;
    param_1[0x11] = 0;
  }
  else if ((char)param_1[0x6b] != '\b') {
    return 0;
  }
  if (sVar1 < 8) {
    param_1[0x12] = -1;
    param_1[0x13] = 0x3fff;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  else if (*(char *)((int)param_1 + 0xd7) != '\b') {
    return 0;
  }
  if (((-1 < *(int *)(param_1 + 8)) && (-1 < *(int *)(param_1 + 10))) &&
     (*(int *)(param_1 + 10) < 3)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (99 < *(int *)(param_1 + 0xc)) {
      param_1[0xc] = 99;
      param_1[0xd] = 0;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    return (uint)(-1 < *(int *)(param_1 + 0xe));
  }
  return 0;
}

