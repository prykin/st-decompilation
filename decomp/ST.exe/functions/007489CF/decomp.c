
/* [STVTableApplier] Virtual slot 0079DCBC+0x38

   [STVTableApplier] Virtual slot 007A1510+0x38 */

uint __fastcall FUN_007489cf(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(*(int *)(param_1 + 0x70) + 0x14) == 0) {
    return 0x80040227;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(char *)(param_1 + 0xa1) != '\0') {
    return 1;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return -(uint)(*(int *)(param_1 + 0x6c) != 0) & 0x8004020b;
}

