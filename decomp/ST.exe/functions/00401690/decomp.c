
undefined4 __fastcall thunk_FUN_004e1310(int param_1)

{
  undefined4 uVar1;
  
  thunk_FUN_004e4270(*(int *)(param_1 + 0x24),*(int *)(param_1 + 0x518));
  uVar1 = *(undefined4 *)(DAT_00802a38 + 0xe4);
  *(int *)(param_1 + 0x51c) = *(int *)(param_1 + 0x51c) + *(int *)(param_1 + 0x518);
  *(undefined4 *)(param_1 + 0x524) = uVar1;
  *(undefined4 *)(param_1 + 0x518) = 0;
  if (*(uint *)(param_1 + 0x24) == (uint)*(byte *)(*(int *)(param_1 + 0x10) + 0x112d)) {
    thunk_FUN_004d8b70((char)*(uint *)(param_1 + 0x24));
  }
  return 0;
}

