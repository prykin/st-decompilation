
undefined4 * FUN_0074d712(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;

  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    puVar3 = (undefined1 *)((int)param_2 + param_3);
    puVar4 = (undefined1 *)((int)param_1 + param_3);
    while( true ) {
      puVar4 = puVar4 + -1;
      puVar3 = puVar3 + -1;
      if (param_3 == 0) break;
      param_3 = param_3 - 1;
      *puVar4 = *puVar3;
    }
  }
  else {
    uVar2 = param_3 & 3;
    puVar5 = param_1;
    for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar5 = *param_2;
      param_2 = param_2 + 1;
      puVar5 = puVar5 + 1;
    }
    if (uVar2 != 0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
    }
  }
  return param_1;
}

