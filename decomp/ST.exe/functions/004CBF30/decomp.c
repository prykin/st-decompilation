
void __fastcall FUN_004cbf30(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(STT3DSprC **)(param_1 + 0x5ff) != (STT3DSprC *)0x0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    thunk_FUN_004ad310(*(STT3DSprC **)(param_1 + 0x5ff));
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)(param_1 + 0x5ff));
    *(undefined4 *)(param_1 + 0x5ff) = 0;
  }
  return;
}

