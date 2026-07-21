
void __fastcall FUN_00747bb4(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(HoloTy **)(param_1 + 0x14) != (HoloTy *)0x0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)(param_1 + 0x14));
  }
  FUN_0074b916(param_1 + 0x1c);
  FUN_0074b777();
  return;
}

