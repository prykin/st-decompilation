
void __fastcall thunk_FUN_00555650(int param_1)

{
  if (*(int **)(param_1 + 0x4c) != (int *)0x0) {
    Library::MSVCRT::FUN_0072ea90(*(int **)(param_1 + 0x4c));
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  return;
}

