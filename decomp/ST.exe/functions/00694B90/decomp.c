
void __fastcall FUN_00694b90(AnonShape_00694B90_ACA70D4F *param_1)

{
  if (param_1->field_0008 != 0) {
    FUN_006f07e0(&param_1->field_0008);
  }
  if (param_1->field_000C != 0) {
    Library::Ourlib::MFSTMAP::mfTMapErase(&param_1->field_000C);
  }
  param_1->field_0008 = 0;
  param_1->field_000C = 0;
  return;
}

