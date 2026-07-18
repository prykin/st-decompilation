
undefined4 FUN_0074dec2(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *param_1;
  uVar2 = 0;
  if (iVar1 != 0) {
    *param_1 = *(int *)(iVar1 + 4);
    uVar2 = *(undefined4 *)(iVar1 + 8);
  }
  return uVar2;
}

