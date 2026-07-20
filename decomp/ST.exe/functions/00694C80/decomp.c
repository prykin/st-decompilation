
void __fastcall FUN_00694c80(AnonShape_00694C80_7D3552BD *param_1)

{
  if ((param_1->field_0010 != 0) && (param_1->field_0014 != 0)) {
    thunk_FUN_00694b90((AnonShape_00694B90_ACA70D4F *)param_1);
    param_1->field_0008 = param_1->field_0010;
    param_1->field_000C = param_1->field_0014;
    param_1->field_0010 = 0;
    param_1->field_0014 = 0;
  }
  return;
}

