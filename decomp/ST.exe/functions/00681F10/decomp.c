
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00683C70 @ 00685000
   -> TEST TEST EAX,EAX */

int FUN_00681f10(void)

{
  return (uint)(0 < *(int *)(&DAT_00811ae8 + DAT_008488b0 * 0x2b14));
}

