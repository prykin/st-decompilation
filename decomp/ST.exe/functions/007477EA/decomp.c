
undefined4 FUN_007477ea(int param_1,uint param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  
  bVar1 = FUN_00747e4e(param_1);
  if (CONCAT31(extraout_var,bVar1) == 1) {
    uVar2 = 0x80040203;
  }
  else if ((uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) < param_2) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    *(uint *)(param_1 + 4) = param_2 + *(int *)(param_1 + 4);
  }
  return uVar2;
}

