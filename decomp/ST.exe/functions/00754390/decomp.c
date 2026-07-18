
undefined4 FUN_00754390(int param_1,ushort *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00755970(param_1,param_2,1);
  if (0 < iVar1) {
    iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x44 + *(int *)(*(int *)(param_1 + 0xc) + 0x1c) * 8)
            + *(int *)(*(int *)(param_1 + 8) + 0x34);
    iVar1 = *(int *)(param_1 + 0x10);
    *param_4 = *(undefined4 *)(iVar2 + 0x10 + iVar1);
    *param_3 = *(undefined4 *)(iVar2 + iVar1 + 0x14);
    return 0;
  }
  return 0xfffffffc;
}

