
undefined4 __fastcall thunk_FUN_004cc900(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (((*(int *)(param_1 + 0x603) != 0) && (*(int *)(param_1 + 0x444) != 0)) &&
     (*(int *)(param_1 + 0x448) != 0)) {
    *(undefined4 *)(param_1 + 0x448) = 0;
    thunk_FUN_004ac410(0xe);
    thunk_FUN_004ad430(*(int *)(param_1 + 0x603));
    uVar2 = thunk_FUN_004ad650(*(int *)(param_1 + 0x603));
    FUN_006ea2f0(*(void **)(param_1 + 0x211),uVar2);
    thunk_FUN_004abb30(0xe);
    *(undefined4 *)(param_1 + 0x44c) = 0xffffffff;
    uVar1 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    *(undefined4 *)(param_1 + 0x43c) = 0;
    *(undefined4 *)(param_1 + 0x450) = uVar1;
  }
  return 0;
}

