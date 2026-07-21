
void __fastcall FUN_00690a40(AnonShape_00690A40_CA73153C *param_1)

{
  uint uVar1;

  uVar1 = param_1->field_001C * 0x41c64e6d + 0x3039;
  param_1->field_001C = uVar1;
  param_1->field_0089 = (uVar1 >> 0x10 & 7) + 8;
  uVar1 = param_1->field_001C * 0x41c64e6d + 0x3039;
  param_1->field_001C = uVar1;
  param_1->field_0091 = (uVar1 >> 0x10 & 7) + 8;
  return;
}

