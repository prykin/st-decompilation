
void FUN_006affc0(uint *param_1,uint *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;

  uVar3 = param_1[3] * param_1[2];
  if (param_3 != (int *)0x0) {
    *param_3 = uVar3 + 0x1c;
  }
  puVar4 = param_1;
  puVar5 = param_2;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  param_2[6] = 0;
  *param_2 = *param_2 & 0xfffffef7;
  puVar4 = (uint *)param_1[7];
  puVar5 = param_2 + 7;
  for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(char *)puVar5 = (char)*puVar4;
    puVar4 = (uint *)((int)puVar4 + 1);
    puVar5 = (uint *)((int)puVar5 + 1);
  }
  return;
}

