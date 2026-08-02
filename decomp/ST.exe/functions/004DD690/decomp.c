
/* [STPrototypeApplier] Propagated return.
   Evidence: 004DD690 returns zeroed full register at 004DD6A9 @ 004DD6AB */

uint __fastcall FUN_004dd690(int param_1)

{
  if (g_manRub3_008117A4 != nullptr) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    thunk_FUN_0062e520(g_manRub3_008117A4,*(int *)(param_1 + 0x24),*(int *)(param_1 + 0x18));
  }
  return 0;
}

