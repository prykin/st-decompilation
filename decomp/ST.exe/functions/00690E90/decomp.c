
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_tact_d.cpp
   Diagnostic line evidence: 33 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00690E90 -> 0072E340 @ 00690EF8 */

undefined4 * __cdecl FUN_00690e90(char *source,undefined2 param_2,undefined2 param_3)

{
  int exceptionCode;
  DArrayTy *pDVar1;
  InternalExceptionFrame local_4c;
  AnonShape_00690E90_9F986EB9 *local_8;

  local_8 = (AnonShape_00690E90_9F986EB9 *)0x0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  exceptionCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (exceptionCode == 0) {
    local_8 = (AnonShape_00690E90_9F986EB9 *)Library::DKW::LIB::FUN_006aac10(0x10c);
    *(undefined4 *)local_8 = 0x38e;
    *(undefined4 *)&local_8->field_0x14 = 0x10c;
    *(undefined1 *)((int)&local_8->field_0017 + 1) = 2;
    Library::MSVCRT::_strncpy(&local_8->field_0x1b,source,0x3f);
    local_8->field_0019 = param_2;
    *(undefined2 *)&local_8->field_0x5c = param_3;
    if (local_8->field_0085 == 0) {
      pDVar1 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,8,10);
      local_8->field_0085 = pDVar1;
    }
    g_currentExceptionFrame = local_4c.previous;
    return (undefined4 *)local_8;
  }
  g_currentExceptionFrame = local_4c.previous;
  thunk_FUN_00691540((int *)&local_8);
  RaiseInternalException(exceptionCode,0,"E:\\__titans\\ai\\ai_tact_d.cpp",0x21);
  return (undefined4 *)0x0;
}

