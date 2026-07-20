
undefined4 __fastcall FUN_004e03e0(AnonShape_004E03E0_57EF73A1 *param_1)

{
  AnonShape_00580570_1EF0F1E6 *this;
  
  if (((param_1->field_0245 == 1) || (param_1->field_0245 == 6)) && (param_1->field_04D4 != 0)) {
    this = thunk_FUN_004d85e0(param_1->field_05B0,param_1->field_05B4,param_1->field_05B8);
    if (this != (AnonShape_00580570_1EF0F1E6 *)0x0) {
      STResourceC::SetResource((STResourceC *)this,param_1->field_04E0,1);
      param_1->field_04E0 = 0;
      thunk_FUN_00580570(this);
      param_1->field_04D4 = 0;
    }
  }
  if (param_1->field_05AC == 0x61) {
    thunk_FUN_004e4100(param_1->field_0024);
  }
  return 0;
}

