
/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=004B8C80 @ 004B931E -> read as EAX on
   every CFG path | 004C9770 @ 004C9BBA -> read as EAX on every CFG path | 004CABB0 @ 004CAD3C ->
   read as EAX on every CFG path */

int FUN_004cba10(void)

{
  return 1;
}

