
undefined4 __fastcall thunk_FUN_004c63f0(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 1;
  STT3DSprC::StopShow(*(STT3DSprC **)(param_1 + 0x2c),0);
  thunk_FUN_004ad310(*(int *)(param_1 + 0x2c));
  Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)(param_1 + 0x2c));
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return 0;
}

