
undefined4 __fastcall FUN_004b7aa0(TLOBaseTy *param_1)

{
  int iVar1;

  iVar1 = thunk_FUN_004ac910(&param_1->field_01D5,'\x0e');
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (iVar1 == *(int *)(param_1->field_01F5 + 0x20c)) {
    if (param_1->field_04D0 == 1) {
      param_1->field_04D0 = 2;
      TLOBaseTy::RotateSpr(param_1,0);
    }
    else if (param_1->field_04D0 == 3) {
      param_1->field_04D0 = 0;
      TLOBaseTy::RotateSpr(param_1,0);
      return 0;
    }
  }
  return 0;
}

