
/* [STPrototypeApplier] Propagated return.
   Evidence: 0070B650 returns used as parameter 4 of DibPut @ 004F1905 | 0070B650 returns used as
   parameter 4 of DibPut @ 004F1976 | 0070B650 returns used as parameter 4 of DibPut @ 004F1CE2 */

byte * __cdecl FUN_0070b650(short *param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *param_1)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    return *(byte **)((int)param_1 + param_2 * 4 + 0x11);
  }
  return (byte *)0x0;
}

