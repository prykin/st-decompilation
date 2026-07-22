
undefined4 __fastcall FUN_004d9790(AnonShape_004D9790_FC54D6B0 *param_1)

{
  uint uVar1;
  uint uVar2;

  param_1->field_04D0 = 0;
  param_1->field_04D4 = g_playSystem_00802A38->field_00E4;
  uVar2 = param_1->field_001C * 0x41c64e6d + 0x3039;
  param_1->field_001C = uVar2;
  uVar1 = g_playSystem_00802A38->field_00E4;
  param_1->field_04DC = 0;
  param_1->field_04E0 = 0;
  param_1->field_04E4 = 0;
  param_1->field_04D8 = (uVar2 >> 0x10) % 0x4c + uVar1;
  return 0;
}

