
void __fastcall thunk_FUN_0048a840(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x6f7);
  *(undefined4 *)(param_1 + 0x79a) = *(undefined4 *)(&DAT_007a8b18 + iVar3 * 4);
  uVar1 = *(undefined4 *)(&DAT_007a8bb8 + iVar3 * 4);
  *(undefined4 *)(param_1 + 0x79e) = uVar1;
  *(undefined4 *)(param_1 + 0x7a2) = uVar1;
  iVar2 = *(int *)(&DAT_007a8c58 + iVar3 * 4);
  *(int *)(param_1 + 0x7aa) = iVar2;
  *(int *)(param_1 + 0x7a6) = iVar2;
  *(int *)(param_1 + 0x7b2) = iVar2 * 2;
  *(int *)(param_1 + 0x7ae) = iVar2 * 2 * *(int *)(param_1 + 0x79e);
  *(undefined4 *)(param_1 + 0x7b6) = *(undefined4 *)(&DAT_007a8cf8 + iVar3 * 4);
  uVar1 = *(undefined4 *)(&DAT_007a8d98 + iVar3 * 4);
  *(undefined4 *)(param_1 + 0x7ba) = uVar1;
  *(undefined4 *)(param_1 + 0x7be) = uVar1;
  if (iVar3 == 0x21) {
    iVar3 = thunk_FUN_004e60d0(*(int *)(param_1 + 0x24),0x74);
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x7be) = 0;
    }
  }
  return;
}

