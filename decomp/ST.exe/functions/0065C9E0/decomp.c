
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_event_d.cpp
   Diagnostic line evidence: 33 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]
   
   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0065C9E0 -> 0072E340 @ 0065CA3B */

undefined4 * __cdecl FUN_0065c9e0(char *source)

{
  int exceptionCode;
  uint *puVar1;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar2;
  undefined4 local_48 [16];
  AnonShape_0065C9E0_147DDF60 *local_8;
  
  pIVar2 = g_currentExceptionFrame;
  local_8 = (AnonShape_0065C9E0_147DDF60 *)0x0;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  exceptionCode = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar2);
  if (exceptionCode == 0) {
    local_8 = (AnonShape_0065C9E0_147DDF60 *)Library::DKW::LIB::FUN_006aac10(0x49f);
    local_8->field_0001 = 0x49f;
    local_8->field_0005 = 2;
    Library::MSVCRT::_strncpy(&local_8->field_0x6,source,0x3f);
    puVar1 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,5,5);
    local_8->field_0456 = puVar1;
    puVar1 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,5,0x1b,5);
    local_8->field_0462 = puVar1;
    thunk_FUN_0064a6f0((int *)&local_8[1].field_0x6,10);
    g_currentExceptionFrame = pIVar2;
    return (undefined4 *)local_8;
  }
  g_currentExceptionFrame = pIVar2;
  thunk_FUN_0065d0f0((int *)&local_8);
  RaiseInternalException(exceptionCode,0,s_E____titans_ai_ai_event_d_cpp_007d2b4c,0x21);
  return (undefined4 *)0x0;
}

