
void FUN_005df930(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = (undefined4 *)(param_1 + param_2 * 0x9e);
  puVar4 = puVar3;
  for (uVar2 = (param_3 * 0x4f & 0x7fffffffU) >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (uVar2 = param_3 * 0x9e & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  if (param_2 < param_2 + param_3) {
    puVar3 = puVar3 + 1;
    iVar1 = (param_2 + param_3) - param_2;
    do {
      *puVar3 = 0xffffffff;
      puVar3 = (undefined4 *)((int)puVar3 + 0x9e);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

