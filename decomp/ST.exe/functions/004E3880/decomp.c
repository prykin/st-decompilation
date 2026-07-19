
undefined4 __fastcall FUN_004e3880(int param_1)

{
  int exceptionCode;
  
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  *(undefined4 *)(param_1 + 0x4d4) = 0;
  *(undefined4 *)(param_1 + 0x4d8) = 0;
  *(undefined4 *)(param_1 + 0x4dc) = 0;
  *(undefined4 *)(param_1 + 0x4e0) = 0;
  *(undefined4 *)(param_1 + 0x4e4) = 5;
  *(int *)(param_1 + 0x4e8) = *(int *)(DAT_00802a38 + 0xe4) + 0x271;
  exceptionCode =
       STT3DSprC::LoadSequence
                 ((STT3DSprC *)(param_1 + 0x1d5),0xb,DAT_0080678c,(byte *)s_sha_ani1_007bfa20,0x1d);
  if (exceptionCode != 0) {
    RaiseInternalException
              (exceptionCode,DAT_007ed77c,s_E____titans_Artem_TLO_shark_cpp_007bf9f8,0x18);
  }
  return 0;
}

