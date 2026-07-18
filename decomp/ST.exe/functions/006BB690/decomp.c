
undefined4 FUN_006bb690(int param_1)

{
  undefined4 uVar1;
  
  if ((*(uint *)(param_1 + 0xc) & 0x100) != 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(int **)(param_1 + 0x30) + 0x28))(*(int **)(param_1 + 0x30));
  return uVar1;
}

