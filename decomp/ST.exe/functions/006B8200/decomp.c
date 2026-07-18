
undefined4 FUN_006b8200(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_2 < *(uint *)(param_1 + 8)) && (param_3 < *(uint *)(param_1 + 8))) {
    iVar1 = *(int *)(param_1 + 0x14);
    uVar2 = *(undefined4 *)(iVar1 + param_2 * 4);
    *(undefined4 *)(iVar1 + param_2 * 4) = *(undefined4 *)(iVar1 + param_3 * 4);
    *(undefined4 *)(*(int *)(param_1 + 0x14) + param_3 * 4) = uVar2;
    return 0;
  }
  return 0xfffffffc;
}

