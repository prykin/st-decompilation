
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_erc.cpp
   Diagnostic line evidence: 23 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int * __cdecl FUN_0064a630(int param_1)

{
  int exceptionCode;
  InternalExceptionFrame local_4c;
  int *local_8;

  local_8 = (int *)0x0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  exceptionCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (exceptionCode == 0) {
    local_8 = Library::DKW::LIB::FUN_006aac10(0x10);
    thunk_FUN_0064a6f0(local_8,param_1);
    g_currentExceptionFrame = local_4c.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_4c.previous;
  thunk_FUN_0064a800(&local_8);
  RaiseInternalException(exceptionCode,0,s_E____titans_ai_ai_erc_cpp_007d2a04,0x17);
  return (int *)0x0;
}

