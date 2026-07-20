
undefined4 FUN_006bb690(AnonShape_006BB690_EB7315D1 *param_1)

{
  undefined4 uVar1;
  
  if ((param_1->field_000C & 0x100) != 0) {
    return 0;
  }
  uVar1 = (**(code **)(*param_1->field_0030 + 0x28))(param_1->field_0030);
  return uVar1;
}

