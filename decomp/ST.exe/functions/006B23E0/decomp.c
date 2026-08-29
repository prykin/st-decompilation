
void FUN_006b23e0(RecoveredRecord_006B23E0_5A2050A1 *param_1,uint *param_2)

{
  if (((byte)*param_2 & 0x21) == 0x21) {
    *param_2 = *param_2 | 6;
    param_1->field_01B4 = 1;
  }
  return;
}

