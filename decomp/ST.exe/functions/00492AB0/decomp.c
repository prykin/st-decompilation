
uint __fastcall FUN_00492ab0(AnonShape_00492AB0_63A128FD *param_1)

{
  uint uVar1;

  if ((0 < param_1->field_06F7) && (param_1->field_06F7 < 3)) {
    param_1->field_001C = param_1->field_001C * 0x41c64e6d + 0x3039;
  }
  uVar1 = param_1->field_001C * 0x41c64e6d + 0x3039;
  param_1->field_001C = uVar1;
  return (uVar1 >> 0x10) % 7;
}

