
undefined4 FUN_006d5df0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x58) == 0) {
    return 0x80040209;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x58) + 0x44);
  if ((*(uint *)(param_2 + 4) != 0) && (*(uint *)(param_2 + 4) < *(uint *)(iVar1 + 0x44))) {
    return 0x80070057;
  }
  if (0 < *(int *)(param_2 + 0xc)) {
    return 0x80070057;
  }
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(iVar1 + 0x44);
  return 0;
}

