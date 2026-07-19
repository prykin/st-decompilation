
undefined4 __fastcall FUN_004cc330(int param_1)

{
  if (*(int *)(param_1 + 0x603) != 0) {
    thunk_FUN_004ad310(*(int *)(param_1 + 0x603));
    Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)(param_1 + 0x603));
    *(undefined4 *)(param_1 + 0x603) = 0;
  }
  return 0;
}

