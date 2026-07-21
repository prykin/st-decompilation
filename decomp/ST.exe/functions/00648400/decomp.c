
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_boss_d.cpp
   Diagnostic line evidence: 32 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00649EB0 -> 00648400 @ 00649EF8 */

undefined4 * __cdecl FUN_00648400(char *text,undefined4 param_2)

{
  int exceptionCode;
  undefined4 *puVar1;
  InternalExceptionFrame local_4c;
  AnonShape_00648400_5C076F88 *local_8;

  local_8 = (AnonShape_00648400_5C076F88 *)0x0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  exceptionCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (exceptionCode == 0) {
    local_8 = (AnonShape_00648400_5C076F88 *)Library::DKW::LIB::FUN_006aac10(0x85);
    local_8->field_0001 = 0x85;
    local_8->field_0005 = 2;
    Library::MSVCRT::_strncpy(&local_8->field_0x6,text,0x3f);
    puVar1 = thunk_FUN_0065c9e0(text);
    local_8->field_004E = puVar1;
    local_8->field_0052 = param_2;
    g_currentExceptionFrame = local_4c.previous;
    return (undefined4 *)local_8;
  }
  g_currentExceptionFrame = local_4c.previous;
  thunk_FUN_006484f0((int *)&local_8);
  RaiseInternalException(exceptionCode,0,"E:\\__titans\\ai\\ai_boss_d.cpp",0x20);
  return (undefined4 *)0x0;
}

