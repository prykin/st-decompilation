
int FUN_006b11d0(uint *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  while ((param_1[4] <= param_2 || (param_1[4] <= param_1[3]))) {
    iVar1 = FUN_006ae230(param_1);
    if (iVar1 != 0) {
      FUN_006a5e40(iVar1,DAT_007ed77c,0x7edaa8,0xf);
      return iVar1;
    }
  }
  if (param_2 < param_1[3]) {
    uVar4 = param_1[2];
    puVar2 = (undefined4 *)(uVar4 * param_2 + param_1[7]);
    FUN_0072da70((undefined4 *)(uVar4 + (int)puVar2),puVar2,(param_1[3] - param_2) * uVar4);
    param_1[3] = param_1[3] + 1;
    if (param_2 < param_1[1]) {
      param_1[1] = param_1[1] + 1;
    }
  }
  else {
    param_1[3] = param_2 + 1;
  }
  uVar4 = param_1[2];
  puVar2 = (undefined4 *)(uVar4 * param_2 + param_1[7]);
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)param_3;
    param_3 = (undefined4 *)((int)param_3 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  return 0;
}

