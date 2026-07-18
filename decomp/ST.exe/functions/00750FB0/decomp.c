
void FUN_00750fb0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x50);
  *(int *)(param_1 + 0xc) = iVar2;
  *(undefined4 *)(iVar2 + 0xc) = param_2;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x10) = param_3;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x40) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x1c) = 0;
  iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x34) + *(int *)(*(int *)(param_1 + 0xc) + 0x24);
  iVar1 = FUN_00753c80(param_1,(int)*(short *)(iVar2 + 8));
  if (-1 < iVar1) {
    iVar1 = FUN_00753c80(param_1,(int)*(short *)(iVar2 + 8));
    for (iVar1 = *(int *)(iVar1 + 0x10 + iVar2); iVar1 != -1; iVar1 = *(int *)(iVar1 + 0x10 + iVar2)
        ) {
      *(int *)(*(int *)(param_1 + 0xc) + 0x1c) = *(int *)(*(int *)(param_1 + 0xc) + 0x1c) + 1;
      iVar2 = FUN_00753b80(param_1,iVar1,*(int *)(*(int *)(param_1 + 0xc) + 0x1c));
      iVar1 = FUN_00753c80(param_1,(int)*(short *)(iVar2 + 8));
    }
  }
  *(int *)(*(int *)(param_1 + 0xc) + 0x44 + *(int *)(*(int *)(param_1 + 0xc) + 0x1c) * 8) =
       (int)*(short *)(iVar2 + 8);
  return;
}

