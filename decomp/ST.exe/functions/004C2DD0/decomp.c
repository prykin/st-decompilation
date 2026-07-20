
undefined4 __fastcall FUN_004c2dd0(AnonShape_004C2DD0_4C038B03 *param_1)

{
  param_1->field_0408 = 0;
  param_1->field_040C = 0;
  if (((param_1->field_0231 == 1) || (param_1->field_0231 == 3)) &&
     (*(int *)(&DAT_00794e9c + param_1->field_0235 * 4) != 0)) {
    thunk_FUN_004c2c10((AnonShape_004C2C10_59B6D93C *)param_1);
  }
  return 0;
}

