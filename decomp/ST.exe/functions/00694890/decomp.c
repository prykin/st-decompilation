
void __fastcall FUN_00694890(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
    Library::MSVCRT::thunk_FUN_006a4950(*(undefined4 **)(param_1 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

