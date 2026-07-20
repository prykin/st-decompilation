
undefined4 FUN_00747822(AnonShape_00747822_A1E67AF6 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1->field_000C + 0x14))();
  param_1->field_0010 = uVar1;
  uVar1 = (**(code **)(*param_1->field_000C + 0x18))();
  param_1->field_0004 = 0;
  param_1->field_0008 = uVar1;
  FUN_0074de91(&param_1[1].field_0004);
  return 0;
}

