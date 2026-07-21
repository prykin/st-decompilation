
void __fastcall FUN_0067a2d0(AnonShape_0067A2D0_742706D4 *param_1)

{
  uint uVar1;

  uVar1 = param_1->field_00A4 * 0x41c64e6d + 0x3039;
  param_1->field_00A4 = uVar1;
  param_1->field_0650 = (uVar1 >> 0x10 & 7) + 8;
  uVar1 = param_1->field_00A4 * 0x41c64e6d + 0x3039;
  param_1->field_00A4 = uVar1;
  param_1->field_066E = (uVar1 >> 0x10) % 0x1a + 0x19;
  uVar1 = param_1->field_00A4 * 0x41c64e6d + 0x3039;
  param_1->field_00A4 = uVar1;
  param_1->field_0681 = (uVar1 >> 0x10) % 0x1a + 0x32;
  thunk_FUN_00679600((AnonShape_00679600_B8E418A8 *)param_1);
  return;
}

