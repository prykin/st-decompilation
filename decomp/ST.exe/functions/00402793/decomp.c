
undefined4 thunk_FUN_004d7e50(char param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  
  uVar3 = 0;
  iVar1 = param_2 * 0x44 + param_1 * 0xa62;
  if (param_4 <= *(int *)(&DAT_007f5606 + iVar1)) {
    *(undefined4 *)(&DAT_007f5612 + iVar1) = 0;
    do {
      uVar2 = *(uint *)(&DAT_007f5612 + iVar1);
      if (*(uint *)(&DAT_007f561a + iVar1) <= uVar2) {
        return 0;
      }
      piVar4 = (int *)(*(int *)(&DAT_007f5616 + iVar1) * uVar2 + *(int *)(&DAT_007f562a + iVar1));
      *(uint *)(&DAT_007f5612 + iVar1) = uVar2 + 1;
      if (piVar4 == (int *)0x0) {
        return 0;
      }
    } while (*piVar4 != param_3);
    thunk_FUN_004d8a80(param_1,param_4);
    *(int *)(&DAT_007f5606 + iVar1) = *(int *)(&DAT_007f5606 + iVar1) - param_4;
    *(int *)(&DAT_007f5636 + iVar1) = *(int *)(&DAT_007f5636 + iVar1) - param_4;
    piVar4[3] = piVar4[3] - param_4;
    uVar3 = 1;
    if (*(int *)(&DAT_007f5606 + iVar1) == 0) {
      thunk_FUN_004d78e0(param_1);
    }
  }
  return uVar3;
}

