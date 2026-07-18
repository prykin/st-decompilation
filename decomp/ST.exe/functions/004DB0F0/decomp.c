
undefined4 FUN_004db0f0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_00802a38;
  iVar2 = param_1 * 0xa62;
  if (*(int *)((int)&DAT_007f582e + iVar2) == 2) {
    *(undefined4 *)((int)&DAT_007f582e + iVar2) = 3;
    *(undefined4 *)((int)&DAT_007f583a + iVar2) = *(undefined4 *)(iVar1 + 0xe4);
  }
  return 0;
}

