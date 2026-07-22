
undefined4 __fastcall FUN_004e4b10(AnonShape_004E4B10_C52B4B94 *param_1)

{
  if ((param_1->field_0245 == 0) && (param_1->field_04D4 < 0x28)) {
    if (param_1->field_04D8 + 0x1c <= g_playSystem_00802A38->field_00E4) {
      param_1->field_04D8 = g_playSystem_00802A38->field_00E4;
      param_1->field_04D4 = param_1->field_04D4 + 1;
    }
  }
  return 0;
}

