
/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00676D80 @ 00676DDF -> read as EAX on
   every CFG path | 0067C180 @ 0067C2C7 -> read as EAX on every CFG path | 0067C180 @ 0067C50B ->
   read as EAX on every CFG path */

int FUN_0042a990(char param_1)

{
  return (int)g_packedRecords_A62x8[param_1].field3_0x9;
}

