
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00652810 -> 004357F0 @ 00653049 | 00652810 -> 004357F0 @ 00653192 | 00652810 ->
   004357F0 @ 00656668 | 00652810 -> 004357F0 @ 0065689D | 00652810 -> 004357F0 @ 00656950 |
   00652810 -> 004357F0 @ 006569FA | 00652810 -> 004357F0 @ 00656D9B | 00652810 -> 004357F0 @
   00656E60 | 00661CA0 -> 004357F0 @ 00661CE6 */

undefined4 FUN_004357f0(char objPtr)

{
  return *(undefined4 *)&g_playerRuntime[objPtr].field_0x1;
}

