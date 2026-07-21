
void __fastcall FUN_00724d90(AnonShape_00724D90_F568CE21 *param_1)

{
  longlong lVar1;

  if (param_1->field_0020 == 1) {
    param_1->field_0194 = 0;
    lVar1 = Library::MSVCRT::__ftol();
    param_1->field_0198 = (int)lVar1;
    return;
  }
  lVar1 = Library::MSVCRT::__ftol();
  param_1->field_0194 = (int)lVar1;
  param_1->field_0198 = 0;
  return;
}

