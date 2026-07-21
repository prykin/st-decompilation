
undefined4 __fastcall FUN_0074a72a(AnonShape_0074A72A_A408BA44 *param_1)

{
  FUN_0074a760((int)param_1);
  EnterCriticalSection((LPCRITICAL_SECTION)&param_1->field_0x94);
  param_1->field_00B8 = 0;
  param_1->field_0070 = 0;
  param_1->field_0074 = 0;
  param_1->field_00BC = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&param_1->field_0x94);
  return 0;
}

