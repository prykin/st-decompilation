
void __fastcall FUN_00631f90(AnonShape_00631F90_0DA5B9BC *param_1)

{
  if ((DArrayTy *)param_1->field_0069 != nullptr) {
    DArrayDestroy((DArrayTy *)param_1->field_0069);
    param_1->field_0069 = 0;
  }
  if ((DArrayTy *)param_1->field_006D != nullptr) {
    DArrayDestroy((DArrayTy *)param_1->field_006D);
    param_1->field_006D = 0;
  }
  return;
}

