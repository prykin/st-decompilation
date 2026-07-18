
void FUN_00423e30(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (param_2 < param_3 + param_2) {
    uVar1 = (param_3 + param_2) - param_2;
    puVar3 = (undefined4 *)(param_1 + param_2 * 2);
    for (uVar2 = uVar1 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = 0xffffffff;
      puVar3 = puVar3 + 1;
    }
    for (uVar1 = (uint)((uVar1 & 1) != 0); uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined2 *)puVar3 = 0xffff;
      puVar3 = (undefined4 *)((int)puVar3 + 2);
    }
  }
  return;
}

