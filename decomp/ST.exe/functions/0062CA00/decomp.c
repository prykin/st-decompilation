
/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=0060D390 @ 0060D40E -> read as EAX on
   every CFG path | 0060D660 @ 0060D692 -> read as EAX on every CFG path */

int FUN_0062ca00(void)

{
  return 0x6d;
}

