
void FUN_006827a0(void)

{
  int exceptionCode;
  
  do {
    exceptionCode = thunk_FUN_006736f0();
    if (exceptionCode < 0) {
      RaiseInternalException
                (exceptionCode,DAT_007ed77c,s_E____titans_ai_ai_script_cpp_007d5604,0x1b5);
    }
    if (DAT_007d2d18 == 0x1c) {
      RaiseInternalException(-0x6f,DAT_007ed77c,s_E____titans_ai_ai_script_cpp_007d5604,0x1b6);
    }
  } while (DAT_007d2d18 == 0x1d);
  return;
}

