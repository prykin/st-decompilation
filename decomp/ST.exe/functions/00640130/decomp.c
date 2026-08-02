
void __fastcall FUN_00640130(AnonShape_00640130_D1AC047E *param_1)

{
  uint uVar1;

  if (param_1->field_037F != nullptr) {
    uVar1 = *param_1->field_037F;
    if (-1 < (int)uVar1) {
      Library::Ourlib::ST3DSMAP::SprClose(param_1->field_0211,uVar1);
    }
    FreeAndNull(&param_1->field_037F);
  }
  return;
}

