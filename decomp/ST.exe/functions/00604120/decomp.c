
void __fastcall FUN_00604120(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(DArrayTy **)(param_1 + 0x215) != (DArrayTy *)0x0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    DArrayDestroy(*(DArrayTy **)(param_1 + 0x215));
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x2b3) != 0) {
    FreeAndNull((void **)(param_1 + 0x2b3));
  }
  return;
}

