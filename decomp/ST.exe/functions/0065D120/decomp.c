
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_event_d.cpp
   Diagnostic line evidence: 183 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated return.
   Evidence: 0065D120 returns stored into global 008489CC @ 00685EC8 */

AnonShape_GLOBAL_008489CC_CDF8C3F4 * FUN_0065d120(void)

{
  int exceptionCode;
  DArrayTy *pDVar1;
  InternalExceptionFrame local_4c;
  AnonShape_GLOBAL_008489CC_CDF8C3F4 *local_8;

  local_8 = (AnonShape_GLOBAL_008489CC_CDF8C3F4 *)0x0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  exceptionCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (exceptionCode == 0) {
    local_8 = (AnonShape_GLOBAL_008489CC_CDF8C3F4 *)Library::DKW::LIB::FUN_006aac10(0x1b);
    *(undefined1 *)local_8 = 0;
    local_8->field_0009 = 0xffff;
    pDVar1 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,5,2,5);
    local_8->field_000F = pDVar1;
    g_currentExceptionFrame = local_4c.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_4c.previous;
  thunk_FUN_0065d1f0((int *)&local_8);
  RaiseInternalException(exceptionCode,0,"E:\\__titans\\ai\\ai_event_d.cpp",0xb7);
  return (AnonShape_GLOBAL_008489CC_CDF8C3F4 *)0x0;
}

