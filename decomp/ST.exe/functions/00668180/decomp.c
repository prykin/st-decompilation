
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_flt_d.cpp
   Diagnostic line evidence: 42 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]
   
   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0068DC80 -> 00668180 @ 0068DE36
   
   [STPrototypeApplier] Propagated return.
   Evidence: 00668180 returns stored into global 008489C4 @ 00685E0A */

AnonShape_GLOBAL_008489C4_F7BABFAC * __cdecl
FUN_00668180(char *text,undefined2 param_2,undefined2 param_3,undefined2 param_4,undefined1 param_5)

{
  int exceptionCode;
  uint *puVar1;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar2;
  undefined4 local_48 [16];
  AnonShape_00668180_E8377840 *local_8;
  
  pIVar2 = g_currentExceptionFrame;
  local_8 = (AnonShape_00668180_E8377840 *)0x0;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  exceptionCode = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar2);
  if (exceptionCode == 0) {
    local_8 = (AnonShape_00668180_E8377840 *)Library::DKW::LIB::FUN_006aac10(0x260);
    *(undefined4 *)local_8 = 900;
    *(undefined4 *)&local_8->field_0x14 = 0x260;
    local_8->field_0x18 = 2;
    Library::MSVCRT::_strncpy(&local_8->field_0x1b,text,0x3f);
    local_8->field_0019 = param_2;
    local_8->field_005B = param_3;
    local_8->field_005F = param_4;
    local_8->field_0061 = param_5;
    local_8->field_023F = 0x3fffffff;
    if (local_8->field_01EB == 0) {
      puVar1 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x2c,10);
      local_8->field_01EB = puVar1;
    }
    if (local_8->field_0203 == 0) {
      puVar1 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x14,10);
      local_8->field_0203 = puVar1;
    }
    if (local_8->field_020F == 0) {
      puVar1 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0xc,10);
      local_8->field_020F = puVar1;
    }
    g_currentExceptionFrame = pIVar2;
    return (AnonShape_GLOBAL_008489C4_F7BABFAC *)local_8;
  }
  g_currentExceptionFrame = pIVar2;
  thunk_FUN_006686c0((int *)&local_8);
  RaiseInternalException(exceptionCode,0,s_E____titans_ai_ai_flt_d_cpp_007d2cc0,0x2a);
  return (AnonShape_GLOBAL_008489C4_F7BABFAC *)0x0;
}

