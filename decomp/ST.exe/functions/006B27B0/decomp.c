
void FUN_006b27b0(RecoveredRecord_006B27B0_FDD8E181 *param_1,uint param_2,uint *param_3,
                 uint *param_4)

{
  uint *puVar1;

  if ((param_2 < param_1->field_01A0) &&
     (puVar1 = *(uint **)(param_1->field_01B0 + param_2 * 4), (*puVar1 & 0xc000) == 0x8000)) {
    *param_3 = puVar1[0x2e];
    *param_4 = puVar1[0x2f];
  }
  return;
}

