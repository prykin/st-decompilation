
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00683C70 @ 006858E2
   -> TEST TEST EAX,EAX */

int FUN_00680e50(void)

{
  int iVar1;

  iVar1 = DAT_008488b0;
  if (*(int *)(&DAT_00811c7c + DAT_008488b0 * 0x2b14) < 4) {
    return 0;
  }
  if (*(int *)(&DAT_00811c7c + DAT_008488b0 * 0x2b14) < 5) {
    (&DAT_00811c90)[DAT_008488b0 * 0xac5] = 0;
  }
  if ((int)(&DAT_00811c84)[iVar1 * 0xac5] < 0) {
    return 0;
  }
  if ((int)(&DAT_00811c88)[iVar1 * 0xac5] < 0) {
    return 0;
  }
  return (uint)(-1 < (int)(&DAT_00811c8c)[iVar1 * 0xac5]);
}

