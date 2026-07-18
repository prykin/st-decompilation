
undefined4 FUN_006c6450(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x4a4);
  *(undefined4 *)(param_1 + 0x4a4) = param_2;
  return uVar1;
}

