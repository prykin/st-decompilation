
void __fastcall FUN_00615390(AnonShape_00615390_8FE15FE8 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar1 = param_1->field_01F7;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      param_1->field_0214 = 3;
      return;
    }
    if (iVar1 != 2) {
      return;
    }
  }
  iVar1 = (int)param_1->field_02CF - (int)param_1->field_01ED;
  iVar2 = (int)param_1->field_02CD - (int)param_1->field_01EB;
  iVar3 = (int)param_1->field_02CB - (int)param_1->field_01E9;
  if (iVar3 * iVar3 + iVar2 * iVar2 + iVar1 * iVar1 < 0x13c06) {
    param_1->field_0214 = 1;
    return;
  }
  param_1->field_0214 = 2;
  return;
}

