
undefined4 FUN_006b1940(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1d0);
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  return uVar1;
}

