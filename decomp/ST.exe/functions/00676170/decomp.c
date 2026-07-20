
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_mdef.cpp
   Diagnostic line evidence: 293 | 294 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

uint * __cdecl _GetStaffGrpExch(uint param_1)

{
  code *pcVar1;
  int errorCode;
  STGroupBoatC *this;
  uint *puVar2;
  int iVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 local_48 [16];
  uint *local_8;
  
  pIVar4 = g_currentExceptionFrame;
  local_8 = (uint *)0x0;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  errorCode = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar4);
  if (errorCode != 0) {
    g_currentExceptionFrame = pIVar4;
    iVar3 = ReportDebugMessage(s_E____titans_ai_ai_mdef_cpp_007d2d58,0x125,0,errorCode,&DAT_007a4ccc
                               ,s__GetStaffGrpExch_007d2da0);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      puVar2 = (uint *)(*pcVar1)();
      return puVar2;
    }
    RaiseInternalException(errorCode,0,s_E____titans_ai_ai_mdef_cpp_007d2d58,0x126);
    return (uint *)0x0;
  }
  if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
    this = (STGroupBoatC *)0x0;
  }
  else {
    this = thunk_FUN_0042b760(param_1,0);
  }
  if (this != (STGroupBoatC *)0x0) {
    puVar2 = STGroupC::GetGroupContent((STGroupC *)this,(int)unaff_ESI);
    g_currentExceptionFrame = pIVar4;
    return puVar2;
  }
  g_currentExceptionFrame = pIVar4;
  return local_8;
}

