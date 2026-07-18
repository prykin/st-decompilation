
undefined4 FUN_00759120(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18e) == 0) {
    iVar1 = FUN_00757d90(param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x1a6) + 0x58);
  if (*(int *)(param_1 + 0x18e) == iVar1 + 0xd0) {
    *(undefined4 *)(param_1 + 0x18e) = 0;
  }
  else {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x10) + 0x14))(param_1,iVar1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  *(uint *)(*(int *)(param_1 + 0x1a6) + 0x58) = *(int *)(*(int *)(param_1 + 0x1a6) + 0x58) + 1U & 7;
  return 1;
}

