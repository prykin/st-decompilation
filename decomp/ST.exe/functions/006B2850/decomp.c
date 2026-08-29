
uint FUN_006b2850(RecoveredRecord_006B2850_44647229 *param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;

  uVar3 = 1;
  if (param_2 < param_1->field_01A0) {
    puVar1 = *(uint **)(param_1->field_01B0 + param_2 * 4);
    uVar2 = *puVar1;
    if ((uVar2 & 0xc000) == 0xc000) {
      uVar3 = ~uVar2 >> 0x11 & 1;
      *puVar1 = uVar2 & 0xfffdffff;
      if (param_3 == 0) {
        *puVar1 = uVar2 & 0xfffdffff | 0x20000;
      }
      FUN_006b23e0((RecoveredRecord_006B23E0_5A2050A1 *)param_1,puVar1);
    }
  }
  return uVar3;
}

