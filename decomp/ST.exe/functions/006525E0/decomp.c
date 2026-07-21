
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 00659669
   -> TEST TEST EAX,EAX */

int __cdecl FUN_006525e0(short *param_1)

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
  } while (iVar2 < 6);
  sVar1 = *param_1;
  if (sVar1 < 7) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  else if ((char)param_1[0x6b] != '\b') {
    return 0;
  }
  if (7 < sVar1) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)((int)param_1 + 0xd7) == '\b') {
      return (uint)(-1 < *(int *)(param_1 + 8));
    }
    return 0;
  }
  iVar2 = *(int *)(param_1 + 8);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return (uint)(-1 < iVar2);
}

