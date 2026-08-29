
/* [STAbiConsistencyApplier] narrow_accumulator_return target=return:-1: return=/byte Evidence: all
   resolved direct callers consume only AL or kill the result; narrow_uses=2, ignored=0, full=0,
   unknown=0; reverse CFG traversal from every RET finds the same exact low-accumulator definition
   width on every path; sites=00420340 @ 004203B3 -> read as AL on every CFG path | 00420AE0 @
   00420B57 -> read as AL on every CFG path */

byte FUN_004ab030(void)

{
  return (byte)DAT_0080743c;
}

