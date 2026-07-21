
void __fastcall FUN_00631f90(AnonShape_00631F90_0DA5B9BC *param_1)

{
  if ((DArrayTy *)param_1->field_0069 != (DArrayTy *)0x0) {
    DArrayDestroy((DArrayTy *)param_1->field_0069);
    param_1->field_0069 = 0;
  }
  if ((DArrayTy *)param_1->field_006D != (DArrayTy *)0x0) {
    DArrayDestroy((DArrayTy *)param_1->field_006D);
    param_1->field_006D = 0;
  }
  return;
}

