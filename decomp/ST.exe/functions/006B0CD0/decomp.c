
undefined4 FUN_006b0cd0(int param_1,uint param_2,uint param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if ((param_2 < *(uint *)(param_1 + 0xc)) && (param_3 < *(uint *)(param_1 + 0xc))) {
    iVar6 = *(int *)(param_1 + 8);
    if (iVar6 == 4) {
      iVar6 = *(int *)(param_1 + 0x1c);
      uVar2 = *(undefined4 *)(iVar6 + param_2 * 4);
      *(undefined4 *)(iVar6 + param_2 * 4) = *(undefined4 *)(iVar6 + param_3 * 4);
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + param_3 * 4) = uVar2;
      return 0;
    }
    iVar4 = iVar6 * param_2;
    iVar5 = iVar6 * param_3;
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      iVar3 = *(int *)(param_1 + 0x1c);
      iVar4 = iVar4 + 1;
      uVar1 = *(undefined1 *)(iVar3 + -1 + iVar4);
      *(undefined1 *)(iVar3 + -1 + iVar4) = *(undefined1 *)(iVar3 + iVar5);
      *(undefined1 *)(*(int *)(param_1 + 0x1c) + iVar5) = uVar1;
      iVar5 = iVar5 + 1;
    }
    return 0;
  }
  return 0xfffffffc;
}

