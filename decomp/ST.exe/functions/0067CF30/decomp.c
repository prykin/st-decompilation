
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
  void *unaff_ESI;
  char *_Source;
  InternalExceptionFrame *pIVar3;
  undefined4 local_48 [16];
  AnonShape_0067CF30_CDCAC01F *local_8;
  
  pIVar3 = g_currentExceptionFrame;
  local_8 = (AnonShape_0067CF30_CDCAC01F *)0x0;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  exceptionCode = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar3);
  if (exceptionCode != 0) {
    g_currentExceptionFrame = pIVar3;
    thunk_FUN_0067d160((int *)&local_8);
    RaiseInternalException(exceptionCode,0,s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x28);
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
  g_currentExceptionFrame = pIVar3;
  return (undefined4 *)local_8;
}

