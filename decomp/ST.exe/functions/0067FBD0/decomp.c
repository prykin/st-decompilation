
/* [STPrototypeApplier] Propagated return.
   Evidence: 0067FBD0 returns used as parameter 1 of FUN_0067fd20 @ 0068A4D6 */

char * FUN_0067fbd0(void)

{
  DAT_00848a40 = DAT_00848a40 + 1;
  /* ST_CALLSITE[0067FBE7]: CALL dword ptr [0x0085bde8] */
  wsprintfA(&DAT_0084854c,PTR_s___EXPAR___03d_0079d740,DAT_00848a40);
  return &DAT_0084854c;
}

