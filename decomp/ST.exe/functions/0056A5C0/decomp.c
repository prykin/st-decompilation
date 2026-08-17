
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=0056ADC0 @ 0056AE04
   -> TEST TEST EAX,EAX */

int FUN_0056a5c0(void)

{
  /* ST_CALLSITE[0056A5C5]: CALL dword ptr [0x0085bc78] */
  InterlockedIncrement(&DAT_0085e000);
  return (uint)(0 < DAT_0085e000);
}

