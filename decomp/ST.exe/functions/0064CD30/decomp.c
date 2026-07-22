
void __fastcall FUN_0064cd30(int param_1)

{
  AnonShape_0065D030_CB0F82F0 *pAVar1;

  if (param_1 == 0) {
    pAVar1 = (AnonShape_0065D030_CB0F82F0 *)0x0;
  }
  else {
    pAVar1 = (AnonShape_0065D030_CB0F82F0 *)(param_1 + 0x8c);
  }
  thunk_FUN_0065d030(pAVar1);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(DArrayTy **)(param_1 + 0x5b3) != (DArrayTy *)0x0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    FUN_006b5570(*(DArrayTy **)(param_1 + 0x5b3));
    *(undefined4 *)(param_1 + 0x5b3) = 0;
  }
  return;
}

