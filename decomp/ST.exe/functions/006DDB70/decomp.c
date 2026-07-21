
void __fastcall FUN_006ddb70(AnonShape_006DDB70_C8239555 *param_1)

{
  int iVar1;

  if (0 < param_1->field_0174) {
    param_1->field_0144 = 1;
    param_1->field_02D8 = 1;
    iVar1 = Library::DKW::LIB::FUN_006acf50
                      (param_1->field_001C,param_1->field_0028 * param_1->field_0174);
    param_1->field_001C = iVar1;
  }
  return;
}

