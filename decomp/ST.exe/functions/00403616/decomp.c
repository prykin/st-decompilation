
undefined4 __fastcall thunk_FUN_004cbf70(int param_1)

{
  if (*(STT3DSprC **)(param_1 + 0x5ff) != (STT3DSprC *)0x0) {
    STT3DSprC::StopShow(*(STT3DSprC **)(param_1 + 0x5ff),0xe);
    STT3DSprC::StopShow(*(STT3DSprC **)(param_1 + 0x5ff),0xc);
    thunk_FUN_004ad430(*(int *)(param_1 + 0x5ff));
  }
  return 0;
}

