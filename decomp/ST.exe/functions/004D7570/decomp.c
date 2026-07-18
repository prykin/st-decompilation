
undefined4 FUN_004d7570(char param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  iVar1 = param_2 * 0x44 + param_1 * 0xa62;
  *(undefined4 *)(&DAT_007f5612 + iVar1) = 0;
  do {
    uVar2 = *(uint *)(&DAT_007f5612 + iVar1);
    if (*(uint *)(&DAT_007f561a + iVar1) <= uVar2) goto LAB_004d766d;
    piVar3 = (int *)(*(int *)(&DAT_007f5616 + iVar1) * uVar2 + *(int *)(&DAT_007f562a + iVar1));
    *(uint *)(&DAT_007f5612 + iVar1) = uVar2 + 1;
    if (piVar3 == (int *)0x0) goto LAB_004d766d;
  } while (*piVar3 != param_3);
  *(int *)(&DAT_007f562e + iVar1) = *(int *)(&DAT_007f562e + iVar1) - piVar3[1];
  *(int *)(&DAT_007f5632 + iVar1) = *(int *)(&DAT_007f5632 + iVar1) - piVar3[2];
  *(int *)(&DAT_007f5636 + iVar1) = *(int *)(&DAT_007f5636 + iVar1) - piVar3[3];
  *(int *)(&DAT_007f563a + iVar1) = *(int *)(&DAT_007f563a + iVar1) - piVar3[4];
  if (*(int *)(&DAT_007f562e + iVar1) < 0) {
    *(undefined4 *)(&DAT_007f562e + iVar1) = 0;
  }
  if (*(int *)(&DAT_007f5632 + iVar1) < 0) {
    *(undefined4 *)(&DAT_007f5632 + iVar1) = 0;
  }
  if (*(int *)(&DAT_007f5636 + iVar1) < 0) {
    *(undefined4 *)(&DAT_007f5636 + iVar1) = 0;
  }
  if (*(int *)(&DAT_007f563a + iVar1) < 0) {
    *(undefined4 *)(&DAT_007f563a + iVar1) = 0;
  }
  FUN_006b0c70((int)(&DAT_007f560e + iVar1),*(int *)(&DAT_007f5612 + iVar1) - 1);
LAB_004d766d:
  thunk_FUN_004d78e0(param_1);
  return 0;
}

