
undefined4 FUN_004db020(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_00802a38;
  iVar2 = param_1 * 0xa62;
  if (*(int *)((int)&DAT_007f582e + iVar2) == 0) {
    *(undefined4 *)((int)&DAT_007f582e + iVar2) = 1;
    *(undefined4 *)((int)&DAT_007f5832 + iVar2) = param_2;
    *(undefined4 *)((int)&DAT_007f5836 + iVar2) = 0;
    *(undefined4 *)((int)&DAT_007f583a + iVar2) = *(undefined4 *)(iVar1 + 0xe4);
  }
  return 0;
}

