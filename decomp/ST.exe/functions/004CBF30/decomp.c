
void __fastcall FUN_004cbf30(int param_1)

{
  if (*(int *)(param_1 + 0x5ff) != 0) {
    thunk_FUN_004ad310(*(int *)(param_1 + 0x5ff));
    Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)(param_1 + 0x5ff));
    *(undefined4 *)(param_1 + 0x5ff) = 0;
  }
  return;
}

