
uint FUN_006b1c80(RecoveredRecord_006B1C80_53649120 *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;

  uVar2 = 0xfffffffe;
  if ((param_2 < param_1->field_01A0) &&
     (puVar1 = *(uint **)(param_1->field_01B0 + param_2 * 4), (*puVar1 & 0x8000) != 0)) {
    uVar2 = puVar1[0x13];
  }
  return uVar2;
}

