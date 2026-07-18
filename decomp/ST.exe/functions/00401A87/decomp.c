
undefined4 __fastcall thunk_FUN_004df2b0(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)((int)&DAT_008087c4 + *(int *)(param_1 + 0x24) * 0x51 + 3) == '\x01') {
    *(undefined4 *)(param_1 + 0x4d8) = 10000;
    *(undefined4 *)(param_1 + 0x4d0) = 2;
    *(undefined4 *)(param_1 + 0x4d4) = 0;
    uVar1 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    *(undefined4 *)(param_1 + 0x4e0) = 1;
    *(undefined4 *)(param_1 + 0x4dc) = uVar1;
    return 0;
  }
  *(undefined4 *)(param_1 + 0x4d0) = 2;
  *(undefined4 *)(param_1 + 0x4d8) = 0;
  *(undefined4 *)(param_1 + 0x4d4) = 0;
  uVar1 = *(undefined4 *)(DAT_00802a38 + 0xe4);
  *(undefined4 *)(param_1 + 0x4e0) = 0;
  *(undefined4 *)(param_1 + 0x4dc) = uVar1;
  return 0;
}

