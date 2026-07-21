
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_plr_d.cpp
   Diagnostic line evidence: 40 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0067CF30 -> 0072E340 @ 0067CF98 */

undefined4 * __cdecl FUN_0067cf30(char *source,undefined2 param_2,char *param_3,undefined4 param_4)

{
  int exceptionCode;
  uint *puVar1;
  undefined4 *puVar2;
  char *_Source;
  InternalExceptionFrame local_4c;
  AnonShape_0067CF30_CDCAC01F *local_8;

  local_8 = (AnonShape_0067CF30_CDCAC01F *)0x0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  exceptionCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (exceptionCode != 0) {
    g_currentExceptionFrame = local_4c.previous;
    thunk_FUN_0067d160((int *)&local_8);
    RaiseInternalException(exceptionCode,0,"E:\\__titans\\ai\\ai_plr_d.cpp",0x28);
    return (undefined4 *)0x0;
  }
  local_8 = (AnonShape_0067CF30_CDCAC01F *)Library::DKW::LIB::FUN_006aac10(299);
  *(undefined4 *)local_8 = 0x38e;
  *(undefined4 *)&local_8->field_0x14 = 299;
  local_8->field_0x18 = 2;
  Library::MSVCRT::_strncpy(&local_8->field_0x1b,source,0x3f);
  _Source = source;
  if (param_3 != (char *)0x0) {
    _Source = param_3;
  }
  Library::MSVCRT::_strncpy(&local_8->field_0x5b,_Source,0xb);
  local_8->field_0019 = param_2;
  local_8->field_006D = 0xff;
  puVar1 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,5,0x10,5);
  local_8->field_00C2 = puVar1;
  puVar2 = thunk_FUN_0065c9e0(source);
  local_8->field_0106 = puVar2;
  local_8->field_010A = param_4;
  g_currentExceptionFrame = local_4c.previous;
  return (undefined4 *)local_8;
}

