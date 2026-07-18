
undefined4 FUN_006eb540(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x44);
  (**(code **)(*piVar1 + 0x80))(piVar1,0);
  FUN_006bb980(*(int *)(param_1 + 4));
  return 0;
}

