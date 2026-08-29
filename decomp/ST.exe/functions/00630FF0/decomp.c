
/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00630430 @ 006305E9 -> read as EAX on
   every CFG path | 00631010 @ 006310CB -> read as EAX on every CFG path */

int FUN_00630ff0(void)

{
  return 1;
}

