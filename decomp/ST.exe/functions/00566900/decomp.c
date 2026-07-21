
void __fastcall FUN_00566900(AnonShape_00566900_A2478973 *param_1)

{
  cMf32 *this;

  thunk_FUN_00568940(&g_sound,CASE_B);
  if ((cMf32 *)param_1->field_0018 != (cMf32 *)0x0) {
    cMf32::delete(this,(cMf32 *)param_1->field_0018);
  }
  param_1->field_0018 = 0;
  param_1->field_0028 = 0;
  param_1->field_002C = 0;
  param_1->field_0030 = 0;
  param_1->field_0034 = 0;
  param_1->field_0039 = 0xffffffff;
  return;
}

