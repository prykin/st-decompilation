
undefined4 thunk_FUN_004b79c0(char param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int aiStack_10 [3];
  
  iVar1 = thunk_FUN_004b72b0(param_1);
  iVar2 = thunk_FUN_004b71c0(param_1);
  if (iVar1 <= iVar2) {
    return 1;
  }
  uVar3 = 0;
  iVar1 = *(int *)(&DAT_007f57b2 + param_1 * 0xa62);
  if (*(int *)(iVar1 + 0xc) != 0) {
    do {
      FUN_006acc70(iVar1,uVar3,aiStack_10);
      if (aiStack_10[0] == param_2) {
        return 1;
      }
      iVar1 = *(int *)(&DAT_007f57b2 + param_1 * 0xa62);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(iVar1 + 0xc));
  }
  return 0;
}

