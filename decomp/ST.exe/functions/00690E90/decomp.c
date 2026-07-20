
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_tact_d.cpp
   Diagnostic line evidence: 33 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]
   
   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00690E90 -> 0072E340 @ 00690EF8 */

undefined4 * __cdecl FUN_00690e90(char *source,undefined2 param_2,undefined2 param_3)

{
  int exceptionCode;
  uint *puVar1;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar2;
  undefined4 local_48 [16];
  undefined4 *local_8;
  
  pIVar2 = g_currentExceptionFrame;
  local_8 = (undefined4 *)0x0;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  exceptionCode = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar2);
  if (exceptionCode == 0) {
    local_8 = Library::DKW::LIB::FUN_006aac10(0x10c);
    *local_8 = 0x38e;
    local_8[5] = 0x10c;
    *(undefined1 *)(local_8 + 6) = 2;
    Library::MSVCRT::_strncpy((char *)((int)local_8 + 0x1b),source,0x3f);
    *(undefined2 *)((int)local_8 + 0x19) = param_2;
    *(undefined2 *)(local_8 + 0x17) = param_3;
    if (*(int *)((int)local_8 + 0x85) == 0) {
      puVar1 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,8,10);
      *(uint **)((int)local_8 + 0x85) = puVar1;
    }
    g_currentExceptionFrame = pIVar2;
    return local_8;
  }
  g_currentExceptionFrame = pIVar2;
  thunk_FUN_00691540((int *)&local_8);
  RaiseInternalException(exceptionCode,0,s_E____titans_ai_ai_tact_d_cpp_007d58fc,0x21);
  return (undefined4 *)0x0;
}

