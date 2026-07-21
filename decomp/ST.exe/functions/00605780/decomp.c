
void __fastcall FUN_00605780(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(STT3DSprC **)(param_1 + 0x2af) != (STT3DSprC *)0x0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    thunk_FUN_004ad310(*(STT3DSprC **)(param_1 + 0x2af));
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)(param_1 + 0x2af));
    *(undefined4 *)(param_1 + 0x2af) = 0;
  }
  return;
}

