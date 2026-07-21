
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 006535D7
   -> TEST TEST EAX,EAX */

int __cdecl FUN_0064ec30(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  iVar1 = 4;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\n') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return (uint)(*(int *)(param_1 + 0x18) != 0);
}

