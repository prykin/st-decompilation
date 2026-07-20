
undefined4 __cdecl FUN_0070b3e0(AnonShape_0070B3E0_DA0C9F15 *param_1)

{
  param_1->field_0029 = param_1->field_0029 + 1;
  if (param_1->field_0029 < param_1->field_0023) {
    return *(undefined4 *)(&param_1[1].field_0x4 + param_1->field_0029 * 4);
  }
  return 0;
}

