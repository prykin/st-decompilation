
undefined4 FUN_0074dca1(short *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    iVar2 = FUN_0074d664(param_1);
    uVar5 = iVar2 * 2 + 2;
    puVar3 = CoTaskMemAlloc(uVar5);
    *param_2 = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      uVar1 = 0x8007000e;
    }
    else {
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar3 = *(undefined4 *)param_1;
        param_1 = param_1 + 2;
        puVar3 = puVar3 + 1;
      }
      uVar1 = 0;
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(char *)puVar3 = (char)*param_1;
        param_1 = (short *)((int)param_1 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
    }
  }
  return uVar1;
}

