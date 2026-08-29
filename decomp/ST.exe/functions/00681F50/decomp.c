
/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00683C70 @ 006876C1 -> read as EAX on
   every CFG path | 00683C70 @ 00687714 -> read as EAX on every CFG path */

int FUN_00681f50(void)

{
  return 1;
}

