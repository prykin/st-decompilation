
undefined4 __fastcall thunk_FUN_0060d340(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((*(int *)(param_1 + 0x244) != 0) && (*(int *)(param_1 + 0x20d) == 5)) &&
     (*(int *)(param_1 + 0x248) == 1)) {
    uVar1 = 1;
    *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(DAT_00802a38 + 0xe4);
  }
  return uVar1;
}

