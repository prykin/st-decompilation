
void __fastcall FUN_00724d90(int param_1)

{
  longlong lVar1;
  
  if (*(int *)(param_1 + 0x20) == 1) {
    *(undefined4 *)(param_1 + 0x194) = 0;
    lVar1 = Library::MSVCRT::__ftol();
    *(int *)(param_1 + 0x198) = (int)lVar1;
    return;
  }
  lVar1 = Library::MSVCRT::__ftol();
  *(int *)(param_1 + 0x194) = (int)lVar1;
  *(undefined4 *)(param_1 + 0x198) = 0;
  return;
}

