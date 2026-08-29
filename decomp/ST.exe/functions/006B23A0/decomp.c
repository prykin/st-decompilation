
void FUN_006b23a0(RecoveredRecord_006B23A0_6D204B14 *param_1,uint param_2,uint param_3)

{
  uint *puVar1;

  if ((param_2 < param_1->field_01A0) &&
     (puVar1 = *(uint **)(param_1->field_01B0 + param_2 * 4), (*puVar1 & 0xc000) == 0xc000)) {
    puVar1[0x33] = param_3;
    FUN_006b23e0((RecoveredRecord_006B23E0_5A2050A1 *)param_1,puVar1);
  }
  return;
}

