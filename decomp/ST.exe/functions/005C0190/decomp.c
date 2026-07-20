
void __fastcall FUN_005c0190(AnonShape_005C0190_99FBAF43 *param_1)

{
  int *piVar1;
  int local_8;
  
  local_8 = 4;
  param_1->field_0029 = 2;
  param_1->field_002D = 0x20;
  piVar1 = (int *)&param_1->field_0x8f;
  do {
    if (*piVar1 != 0) {
      param_1->field_0025 = *piVar1;
      param_1->field_0031 = 0;
      (**(code **)(*param_1->field_000C + 0x18))(&param_1->field_0x1d);
    }
    piVar1 = piVar1 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  if (param_1->field_009F != 0) {
    param_1->field_0025 = param_1->field_009F;
    param_1->field_0031 = 0;
    (**(code **)(*param_1->field_000C + 0x18))(&param_1->field_0x1d);
  }
  return;
}

