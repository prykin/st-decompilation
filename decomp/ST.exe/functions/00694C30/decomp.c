
void __fastcall FUN_00694c30(AnonNested_0075DA80_01B6_323D7698 *param_1)

{
  if ((param_1->field_0010 != 0) || (param_1->field_0014 != 0)) {
    thunk_FUN_00694be0((AnonShape_00694BE0_C065E5E3 *)param_1);
  }
  param_1->field_0014 = param_1->field_000C;
  param_1->field_0010 = param_1->field_0008;
  param_1->field_0008 = 0;
  param_1->field_000C = 0;
  thunk_FUN_006a0150((AnonShape_006A0150_D0561BCC *)param_1);
  return;
}

