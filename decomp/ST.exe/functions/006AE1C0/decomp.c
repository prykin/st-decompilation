
uint FUN_006ae1c0(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (param_1[4] <= param_1[3]) {
    uVar1 = FUN_006ae230(param_1);
    if (uVar1 != 0) {
      FUN_006a5e40(uVar1,DAT_007ed77c,0x7eda2c,0xe);
      return uVar1;
    }
  }
  uVar1 = param_1[2];
  puVar3 = (undefined4 *)(param_1[3] * uVar1 + param_1[7]);
  for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  uVar1 = param_1[3];
  param_1[3] = uVar1 + 1;
  return uVar1;
}

