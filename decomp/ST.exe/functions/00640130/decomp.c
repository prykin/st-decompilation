
void __fastcall FUN_00640130(AnonShape_00640130_D1AC047E *param_1)

{
  uint uVar1;
  
  if (param_1->field_037F != (uint *)0x0) {
    uVar1 = *param_1->field_037F;
    if (-1 < (int)uVar1) {
      FUN_006e8ba0(param_1->field_0211,uVar1);
    }
    FUN_006ab060(&param_1->field_037F);
  }
  return;
}

