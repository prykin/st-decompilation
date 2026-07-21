
void __fastcall FUN_00567220(AnonShape_00567220_C9DD1C7D *param_1)

{
  int iVar1;
  undefined4 *puVar2;

  if (param_1->field_0F8B != 0) {
    FUN_006c1e20();
    puVar2 = (undefined4 *)&param_1->field_0xe0b;
    for (iVar1 = 0x60; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
  if ((AnonShape_006C2390_A203A467 *)param_1->field_0DF7 != (AnonShape_006C2390_A203A467 *)0x0) {
    FUN_006c2390((AnonShape_006C2390_A203A467 *)param_1->field_0DF7);
    param_1->field_0DF7 = 0;
  }
  if (param_1->field_0F8B != 0) {
    FUN_006c2050();
  }
  param_1->field_0F8B = 0;
  return;
}

