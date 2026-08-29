#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_event_d.cpp
   Diagnostic line evidence: 33 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0065C9E0 -> 0072E340 @ 0065CA3B

   [STPrototypeApplier] Propagated return.
   Evidence: 0065C9E0 returns stored into global 008489BC @ 00686295 */

AllocationRecord_0065CD10 * __cdecl FUN_0065c9e0(char *source)

{
  int exceptionCode;
  DArrayTy *pDVar1;
  InternalExceptionFrame local_4c;
  AnonShape_0065C9E0_147DDF60 *local_8;

  local_8 = nullptr;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;

  exceptionCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (exceptionCode == 0) {

    local_8 = Library::DKW::LIB::MemAllocClear(0x49f);
    local_8->field_0001 = 0x49f;
    local_8->field_0005 = 2;
    Library::MSVCRT::_strncpy(&local_8->field_0x6,source,0x3f);
    /* ST_CALLSITE[0065CA48]: CALL 0x006b54f0; direct=006B54F0 Library::DKW::TBL::SArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/uint; source view only; no Ghidra override */
    pDVar1 = Library::DKW::TBL::SArrayCreate(nullptr,5,5);
    local_8->field_0456 = &pDVar1->flags;
    /* ST_CALLSITE[0065CA5D]: CALL 0x006ae290; direct=006AE290 Library::DKW::TBL::DArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/uint; source view only; no Ghidra override */
    pDVar1 = Library::DKW::TBL::DArrayCreate(nullptr,5,0x1b,5);
    local_8->field_0462 = &pDVar1->flags;

    thunk_FUN_0064a6f0((int *)&local_8[1].field_0x6,10);
    g_currentExceptionFrame = local_4c.previous;
    return (AllocationRecord_0065CD10 *)local_8;
  }
  g_currentExceptionFrame = local_4c.previous;
  thunk_FUN_0065d0f0((int *)&local_8);
  RaiseInternalException(exceptionCode,0,"E:\\__titans\\ai\\ai_event_d.cpp",0x21);
  return nullptr;
}

