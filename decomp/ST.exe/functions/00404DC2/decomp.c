
void thunk_FUN_004e7eb0(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(int *)(DAT_00802a38 + 0xe4) + param_3;
  iVar1 = param_2 * 4 + param_1 * 0xa62;
  if (*(uint *)((int)&DAT_007f5842 + iVar1) < uVar2) {
    *(uint *)((int)&DAT_007f5842 + iVar1) = uVar2;
    *(undefined4 *)((int)&DAT_007f5862 + iVar1) = 0;
  }
  return;
}

