
void __fastcall FUN_00605780(int param_1)

{
  if (*(STT3DSprC **)(param_1 + 0x2af) != (STT3DSprC *)0x0) {
    thunk_FUN_004ad310(*(STT3DSprC **)(param_1 + 0x2af));
    Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)(param_1 + 0x2af));
    *(undefined4 *)(param_1 + 0x2af) = 0;
  }
  return;
}

