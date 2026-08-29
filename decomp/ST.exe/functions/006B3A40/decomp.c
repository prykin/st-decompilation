
void FUN_006b3a40(RecoveredRecord_006B3A40_EC4AA6D4 *param_1,uint param_2,uint *param_3)

{
  uint *puVar1;

  param_3[3] = 0;
  param_3[2] = 0;
  param_3[1] = 0;
  *param_3 = 0;
  if ((param_2 < param_1->field_01A0) &&
     (puVar1 = *(uint **)(param_1->field_01B0 + param_2 * 4), (*puVar1 & 0x8020) == 0x8020)) {
    FUN_006cf950(puVar1);
    *param_3 = puVar1[6];
    param_3[1] = puVar1[7];
    param_3[2] = puVar1[8];
    param_3[3] = puVar1[9];
  }
  return;
}

