
void __fastcall FUN_0068e910(int param_1)

{
  DArrayTy *pDVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(DArrayTy **)(param_1 + 0xbd) != (DArrayTy *)0x0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    DArrayDestroy(*(DArrayTy **)(param_1 + 0xbd));
    pDVar1 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,0x4a,10);
    *(DArrayTy **)(param_1 + 0xbd) = pDVar1;
  }
  return;
}

