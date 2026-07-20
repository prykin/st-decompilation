
void __fastcall FUN_00694be0(AnonShape_00694BE0_C065E5E3 *param_1)

{
  if (param_1->field_0010 != 0) {
    FUN_006f07e0(&param_1->field_0010);
  }
  if (param_1->field_0014 != 0) {
    Library::Ourlib::MFSTMAP::mfTMapErase(&param_1->field_0014);
  }
  param_1->field_0010 = 0;
  param_1->field_0014 = 0;
  return;
}

