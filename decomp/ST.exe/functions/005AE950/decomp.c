
void __fastcall FUN_005ae950(AnonShape_005AE950_3AC49809 *param_1)

{
  param_1->field_1A60 = 0;
  param_1->field_0029 = 2;
  param_1->field_002D = 0x20;
  if (param_1->field_1C83 != 0) {
    param_1->field_0025 = param_1->field_1C83;
    param_1->field_0031 = 0;
    (**(code **)(*param_1->field_000C + 0x18))(&param_1->field_0x1d);
  }
  if (param_1->field_1A6C != 0) {
    param_1->field_0025 = param_1->field_1A6C;
    param_1->field_0031 = 0;
    (**(code **)(*param_1->field_000C + 0x18))(&param_1->field_0x1d);
  }
  if (PTR_0081176c->field_0389 != 0) {
    param_1->field_0025 = PTR_0081176c->field_0389;
    param_1->field_002D = 0x20;
    param_1->field_0031 = 0;
    (**(code **)(*param_1->field_000C + 0x18))(&param_1->field_0x1d);
  }
  if (PTR_0081176c->field_054C != 0) {
    param_1->field_002D = 0x20;
    param_1->field_0031 = 0;
    FUN_006e6080(param_1,2,PTR_0081176c->field_054C,(undefined4 *)&param_1->field_0x1d);
    param_1->field_002D = 0x29;
    param_1->field_0031 = 0x19;
    FUN_006e6080(param_1,2,PTR_0081176c->field_054C,(undefined4 *)&param_1->field_0x1d);
  }
  if (PTR_0081176c->field_0550 != 0) {
    param_1->field_002D = 0x20;
    param_1->field_0031 = 0;
    FUN_006e6080(param_1,2,PTR_0081176c->field_0550,(undefined4 *)&param_1->field_0x1d);
  }
  return;
}

