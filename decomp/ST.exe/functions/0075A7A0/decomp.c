
void FUN_0075a7a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = *(int *)(param_1 + 0x19a);
  if (*(int *)(param_1 + 0x136) < 2) {
    if (*(uint *)(param_1 + 0x8c) < *(int *)(param_1 + 0x12e) - 1U) {
      *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(*(int *)(param_1 + 0x13a) + 0xc);
      *(undefined4 *)(iVar1 + 0x14) = 0;
      *(undefined4 *)(iVar1 + 0x18) = 0;
      return;
    }
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x13a) + 0x48);
  }
  *(undefined4 *)(iVar1 + 0x1c) = uVar2;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  return;
}

