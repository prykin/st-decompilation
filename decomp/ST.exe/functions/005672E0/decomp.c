
void __fastcall FUN_005672e0(AnonShape_005672E0_9A0A2ED1 *param_1)

{
  thunk_FUN_00567490((int)param_1);
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

