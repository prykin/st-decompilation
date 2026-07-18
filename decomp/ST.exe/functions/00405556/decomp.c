
undefined4
thunk_FUN_004d7480(char param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6,
                  int param_7)

{
  int iVar1;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  uStack_18 = param_3;
  iStack_8 = param_7;
  iStack_c = param_6;
  iStack_10 = param_5;
  iStack_14 = param_4;
  iVar1 = param_2 * 0x44 + param_1 * 0xa62;
  FUN_006ae1c0((uint *)(&DAT_007f560e + iVar1),&uStack_18);
  *(int *)(&DAT_007f562e + iVar1) = *(int *)(&DAT_007f562e + iVar1) + param_4;
  *(int *)(&DAT_007f5632 + iVar1) = *(int *)(&DAT_007f5632 + iVar1) + param_5;
  *(int *)(&DAT_007f5636 + iVar1) = *(int *)(&DAT_007f5636 + iVar1) + param_6;
  *(int *)(&DAT_007f563a + iVar1) = *(int *)(&DAT_007f563a + iVar1) + param_7;
  thunk_FUN_004d78e0(param_1);
  return 0;
}

