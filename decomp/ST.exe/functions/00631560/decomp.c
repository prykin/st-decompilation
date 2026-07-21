
void __fastcall FUN_00631560(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x34) != 0) {
    FreeAndNull((void **)(param_1 + 0x34));
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(DArrayTy **)(param_1 + 0x38) != (DArrayTy *)0x0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    DArrayDestroy(*(DArrayTy **)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (-1 < (int)*(uint *)(param_1 + 0x61)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    FUN_006e8ba0(PTR_00807598,*(uint *)(param_1 + 0x61));
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(DArrayTy **)(param_1 + 0x3c) != (DArrayTy *)0x0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    DArrayDestroy(*(DArrayTy **)(param_1 + 0x3c));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return;
}

