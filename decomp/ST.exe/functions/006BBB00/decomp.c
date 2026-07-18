
undefined4 FUN_006bbb00(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x498);
  *(undefined4 *)(param_1 + 0x498) = param_2;
  return uVar1;
}

