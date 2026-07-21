
undefined4 __fastcall FUN_004cbf70(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(STT3DSprC **)(param_1 + 0x5ff) != (STT3DSprC *)0x0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    STT3DSprC::StopShow(*(STT3DSprC **)(param_1 + 0x5ff),0xe);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    STT3DSprC::StopShow(*(STT3DSprC **)(param_1 + 0x5ff),0xc);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    thunk_FUN_004ad430(*(int *)(param_1 + 0x5ff));
  }
  return 0;
}

