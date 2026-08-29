
/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (5), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=004BEA70 @ 004C07F3 -> read as EAX on
   every CFG path | 004D8110 @ 004D8142 -> read as EAX on every CFG path | 004D8320 @ 004D833A ->
   read as EAX on every CFG path | 004D9820 @ 004D99F1 -> read as EAX on every CFG path | 004D9820 @
   004D9A16 -> read as EAX on every CFG path */

int FUN_004d8230(void)

{
  return DAT_007fa144;
}

