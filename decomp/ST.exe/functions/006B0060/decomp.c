
void FUN_006b0060(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  puVar1 = FUN_006ae290(param_1,param_2[4],param_2[2],param_2[5]);
  if (puVar1 == (uint *)0x0) {
    return;
  }
  *puVar1 = *puVar1 | *param_2;
  uVar2 = puVar1[2] * param_2[3];
  puVar1[3] = param_2[3];
  puVar4 = param_2 + 7;
  puVar1 = (uint *)puVar1[7];
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = puVar1 + 1;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(char *)puVar1 = (char)*puVar4;
    puVar4 = (uint *)((int)puVar4 + 1);
    puVar1 = (uint *)((int)puVar1 + 1);
  }
  return;
}

