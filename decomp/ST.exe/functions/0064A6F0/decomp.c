
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_erc.cpp
   Diagnostic line evidence: 37 | 42 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int __cdecl FUN_0064a6f0(int *param_1,int param_2)

{
  int exceptionCode;
  void *pvVar1;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  exceptionCode = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0);
  if (exceptionCode == 0) {
    if (param_1 == nullptr) {
      RaiseInternalException
                (-0x34,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_erc.cpp",0x25);
    }
    thunk_FUN_0064a7c0(param_1);
    if (param_2 < 1) {
      param_2 = 10;
    }
    *param_1 = param_2;
    pvVar1 = Library::DKW::LIB::MemAllocClear(param_2 * 5);
    param_1[2] = (int)pvVar1;
    g_currentExceptionFrame = local_48.previous;
    return 0;
  }
  g_currentExceptionFrame = local_48.previous;
  RaiseInternalException(exceptionCode,0,"E:\\__titans\\ai\\ai_erc.cpp",0x2a);
  return exceptionCode;
}

