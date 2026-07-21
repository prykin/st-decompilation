
void __fastcall FUN_004c7230(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x607) != 0) {
    FreeAndNull((void **)(param_1 + 0x607));
  }
  return;
}

