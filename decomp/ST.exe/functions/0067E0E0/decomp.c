
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_plr_d.cpp
   Diagnostic line evidence: 407 | 410 | 412 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

uint * __cdecl CreateStrategList(int param_1,int param_2,uint param_3)

{
  code *pcVar1;
  int errorCode;
  LPSTR pCVar2;
  uint *puVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  DArrayTy *local_8;
  
  local_8 = (DArrayTy *)0x0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (errorCode == 0) {
    if (((param_1 == 0) || (param_2 < 0)) || (7 < param_2)) {
      RaiseInternalException
                (-0x34,g_overwriteContext_007ED77C,s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x197);
    }
    pCVar2 = FUN_006f2c00(PTR_s_STRATEG_0079d72c,1,param_2);
    puVar3 = _CreateStgListByRoot((cMf32 *)param_1,0,pCVar2,param_3);
    g_currentExceptionFrame = local_4c.previous;
    return puVar3;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x19a,0,errorCode,&DAT_007a4ccc,
                             s_CreateStrategList_007d3054);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    puVar3 = (uint *)(*pcVar1)();
    return puVar3;
  }
  DArrayDestroy(local_8);
  RaiseInternalException(errorCode,0,s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x19c);
  return (uint *)0x0;
}

