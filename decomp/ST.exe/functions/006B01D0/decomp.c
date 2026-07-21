
void FUN_006b01d0(int param_1,int param_2,int param_3,int param_4,uint param_5,int param_6,
                 undefined1 param_7)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;

  if ((0 < (int)param_5) && (0 < param_6)) {
    puVar2 = (undefined4 *)(param_1 + param_2 * param_4 + param_3);
    while (param_6 != 0) {
      puVar3 = puVar2;
      for (uVar1 = param_5 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = CONCAT22(CONCAT11(param_7,param_7),CONCAT11(param_7,param_7));
        puVar3 = puVar3 + 1;
      }
      for (uVar1 = param_5 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined1 *)puVar3 = param_7;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      puVar2 = (undefined4 *)((int)puVar2 + param_2);
      param_6 = param_6 + -1;
    }
  }
  return;
}

