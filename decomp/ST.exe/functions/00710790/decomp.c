
void __cdecl FUN_00710790(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0xa0) != 0)) &&
     (iVar1 = *(int *)(param_1 + 0xa8), iVar1 != 0)) {
    iVar4 = 0;
    *(undefined4 *)(param_1 + 0x9a) = *(undefined4 *)(iVar1 + 0x9a);
    if (0 < **(short **)(iVar1 + 0x9a)) {
      iVar3 = 4;
      do {
        if ((iVar3 < 4) || (0x43 < iVar3)) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined4 *)(iVar3 + iVar1);
        }
        *(undefined4 *)(iVar3 + param_1) = uVar2;
        iVar1 = *(int *)(param_1 + 0xa8);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar4 < **(short **)(iVar1 + 0x9a));
    }
    iVar1 = *(int *)(param_1 + 0xa8);
    if (*(int *)(iVar1 + 0xa0) != 0) {
      FUN_00710790(iVar1);
    }
    iVar4 = *(int *)(param_1 + 0xa8);
    *(undefined4 *)(param_1 + 0x8a) = *(undefined4 *)(iVar1 + 0x8a);
    if (*(int *)(iVar4 + 0xa0) != 0) {
      FUN_00710790(iVar4);
    }
    iVar1 = *(int *)(param_1 + 0xa8);
    *(undefined4 *)(param_1 + 0x86) = *(undefined4 *)(iVar4 + 0x86);
    if (*(int *)(iVar1 + 0xa0) != 0) {
      FUN_00710790(iVar1);
    }
    iVar4 = *(int *)(param_1 + 0xa8);
    *(undefined4 *)(param_1 + 0x92) = *(undefined4 *)(iVar1 + 0x92);
    if (*(int *)(iVar4 + 0xa0) != 0) {
      FUN_00710790(iVar4);
    }
    *(undefined4 *)(param_1 + 0x8e) = *(undefined4 *)(iVar4 + 0x8e);
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(*(int *)(param_1 + 0xa8) + 0xac);
  }
  return;
}

