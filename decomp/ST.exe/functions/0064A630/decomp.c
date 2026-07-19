
int * __cdecl FUN_0064a630(int param_1)

{
  int exceptionCode;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar1;
  undefined4 local_48 [16];
  int *local_8;
  
  pIVar1 = g_currentExceptionFrame;
  local_8 = (int *)0x0;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  exceptionCode = __setjmp3(local_48,0,unaff_ESI,pIVar1);
  if (exceptionCode == 0) {
    local_8 = FUN_006aac10(0x10);
    thunk_FUN_0064a6f0(local_8,param_1);
    g_currentExceptionFrame = pIVar1;
    return local_8;
  }
  g_currentExceptionFrame = pIVar1;
  thunk_FUN_0064a800(&local_8);
  RaiseInternalException(exceptionCode,0,s_E____titans_ai_ai_erc_cpp_007d2a04,0x17);
  return (int *)0x0;
}

