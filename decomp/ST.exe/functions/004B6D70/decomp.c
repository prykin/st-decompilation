
undefined4 __fastcall FUN_004b6d70(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 extraout_EDX;
  
  if (*(int *)(param_1 + 0x24) != *(int *)(param_1 + 0x23d)) {
    uVar2 = thunk_FUN_004406c0((char)*(int *)(param_1 + 0x23d));
    iVar1 = *(int *)(param_1 + 0x235);
    uVar3 = thunk_FUN_004406c0(*(char *)(param_1 + 0x24));
    param_2 = extraout_EDX;
    if ((&DAT_007e1984)[(uVar3 & 0xff) + (iVar1 * 3 + (uVar2 & 0xff)) * 3] == '\0') {
      return 0;
    }
  }
  thunk_FUN_004b70d0(CONCAT31((int3)((uint)param_2 >> 8),*(undefined1 *)(param_1 + 0x24)),0x28);
  if (*(uint *)(param_1 + 0x24) == (uint)*(byte *)(*(int *)(param_1 + 0x10) + 0x112d)) {
    thunk_FUN_004d8b70((char)*(uint *)(param_1 + 0x24));
  }
  return 0;
}

