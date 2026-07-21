
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00683C70 @ 0068559A
   -> TEST TEST EAX,EAX */

int FUN_00680d00(void)

{
  return (uint)(*(int *)(&DAT_00811c7c + DAT_008488b0 * 0x2b14) == 1);
}

