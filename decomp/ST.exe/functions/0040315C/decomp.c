
undefined4 __fastcall thunk_FUN_004d9790(int param_1)

{
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  *(undefined4 *)(param_1 + 0x4d4) = *(undefined4 *)(DAT_00802a38 + 0xe4);
  uVar2 = *(int *)(param_1 + 0x1c) * 0x41c64e6d + 0x3039;
  *(uint *)(param_1 + 0x1c) = uVar2;
  iVar1 = *(int *)(DAT_00802a38 + 0xe4);
  *(undefined4 *)(param_1 + 0x4dc) = 0;
  *(undefined4 *)(param_1 + 0x4e0) = 0;
  *(undefined4 *)(param_1 + 0x4e4) = 0;
  *(uint *)(param_1 + 0x4d8) = (uVar2 >> 0x10) % 0x4c + iVar1;
  return 0;
}

