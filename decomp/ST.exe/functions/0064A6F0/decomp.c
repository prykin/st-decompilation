
int __cdecl FUN_0064a6f0(int *param_1,int param_2)

{
  int exceptionCode;
  undefined4 *puVar1;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar2;
  undefined4 local_44 [16];
  
  pIVar2 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb8;
  exceptionCode = Library::MSVCRT::__setjmp3(local_44,0,unaff_ESI,pIVar2);
  if (exceptionCode == 0) {
    if (param_1 == (int *)0x0) {
      RaiseInternalException(-0x34,DAT_007ed77c,s_E____titans_ai_ai_erc_cpp_007d2a04,0x25);
    }
    thunk_FUN_0064a7c0(param_1);
    if (param_2 < 1) {
      param_2 = 10;
    }
    *param_1 = param_2;
    puVar1 = Library::DKW::LIB::FUN_006aac10(param_2 * 5);
    param_1[2] = (int)puVar1;
    g_currentExceptionFrame = pIVar2;
    return 0;
  }
  g_currentExceptionFrame = pIVar2;
  RaiseInternalException(exceptionCode,0,s_E____titans_ai_ai_erc_cpp_007d2a04,0x2a);
  return exceptionCode;
}

