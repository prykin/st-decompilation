
/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (7), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=004B76D0 @ 004B76DF -> read as EAX on
   every CFG path | 004B7710 @ 004B771F -> read as EAX on every CFG path | 004B7750 @ 004B7811 ->
   read as EAX on every CFG path | 004C84C0 @ 004C886B -> read as EAX on every CFG path | 004DDD50 @
   004DDE49 -> read as EAX on every CFG path | 004E2340 @ 004E23B3 -> read as EAX on every CFG path
   | 004E2340 @ 004E2436 -> read as EAX on every CFG path */

int FUN_004b72e0(char param_1,int param_2)

{
  byte bVar1;
  int iVar2;

  iVar2 = 0;
  if ((0x31 < param_2) && (param_2 < 0x74)) {
    /* ST_CALLSITE[004B72FD]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    bVar1 = LookupRecordByte(param_1);
    return *(int *)(&DAT_007e0c04 + ((uint)bVar1 + param_2 * 3) * 4);
  }
  if (param_2 == 0x78) {
    iVar2 = 2;
  }
  return iVar2;
}

