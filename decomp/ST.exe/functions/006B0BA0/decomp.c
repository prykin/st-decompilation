
undefined4 FUN_006b0ba0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  
  if ((param_1 != 0) && (piVar1 = *(int **)(param_1 + 0x3c), piVar1 != (int *)0x0)) {
    uVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,0,param_3,param_4,param_2);
    return uVar2;
  }
  return 0xffffffaf;
}

