
undefined4 __fastcall FUN_004dc660(AnonShape_004DC660_217FA9F0 *param_1)

{
  uint uVar1;

  if (*(char *)((int)&DAT_008087c4 + param_1->field_0024 * 0x51 + 3) == '\x01') {
    param_1->field_04D0 = 2;
    param_1->field_04D8 = 0;
    param_1->field_04D4 = 0;
    uVar1 = PTR_00802a38->field_00E4;
    param_1->field_04E0 = 1;
    param_1->field_04DC = uVar1;
    return 0;
  }
  param_1->field_04D0 = 2;
  param_1->field_04D8 = 0;
  param_1->field_04D4 = 0;
  uVar1 = PTR_00802a38->field_00E4;
  param_1->field_04E0 = 0;
  param_1->field_04DC = uVar1;
  return 0;
}

