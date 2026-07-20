
undefined4 __fastcall FUN_004e1310(AnonShape_004E1310_4FD56DAE *param_1)

{
  undefined4 uVar1;
  
  thunk_FUN_004e4270(param_1->field_0024,param_1->field_0518);
  uVar1 = PTR_00802a38->field_00E4;
  param_1->field_051C = param_1->field_051C + param_1->field_0518;
  param_1->field_0524 = uVar1;
  param_1->field_0518 = 0;
  if (param_1->field_0024 == (uint)*(byte *)(param_1->field_0010 + 0x112d)) {
    thunk_FUN_004d8b70((char)param_1->field_0024);
  }
  return 0;
}

