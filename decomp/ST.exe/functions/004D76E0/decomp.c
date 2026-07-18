
undefined4
FUN_004d76e0(char param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  iVar1 = param_2 * 0x44 + param_1 * 0xa62;
  *(undefined4 *)(&DAT_007f5612 + iVar1) = 0;
  while (uVar2 = *(uint *)(&DAT_007f5612 + iVar1), uVar2 < *(uint *)(&DAT_007f561a + iVar1)) {
    piVar3 = (int *)(*(int *)(&DAT_007f5616 + iVar1) * uVar2 + *(int *)(&DAT_007f562a + iVar1));
    *(uint *)(&DAT_007f5612 + iVar1) = uVar2 + 1;
    if (piVar3 == (int *)0x0) break;
    if (*piVar3 == param_3) {
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
      piVar3[2] = param_5;
      piVar3[3] = param_6;
      piVar3[1] = param_4;
      piVar3[4] = param_7;
      *(int *)(&DAT_007f562e + iVar1) = *(int *)(&DAT_007f562e + iVar1) + param_4;
      *(int *)(&DAT_007f5632 + iVar1) = *(int *)(&DAT_007f5632 + iVar1) + piVar3[2];
      *(int *)(&DAT_007f5636 + iVar1) = *(int *)(&DAT_007f5636 + iVar1) + piVar3[3];
      *(int *)(&DAT_007f563a + iVar1) = *(int *)(&DAT_007f563a + iVar1) + piVar3[4];
      thunk_FUN_004d78e0(param_1);
      return 0;
    }
  }
  thunk_FUN_004d7480(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return 0;
}

