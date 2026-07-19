
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_plr_d.cpp
   Diagnostic line evidence: 363 | 366 | 368 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

uint * __cdecl CreateAssistantList(int param_1,int param_2,uint param_3)

{
  code *pcVar1;
  int errorCode;
  uint *puVar2;
  int iVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 local_48 [16];
  byte *local_8;
  
  pIVar4 = g_currentExceptionFrame;
  local_8 = (byte *)0x0;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  errorCode = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar4);
  if (errorCode == 0) {
    if (param_1 == 0) {
      RaiseInternalException(-0x34,DAT_007ed77c,s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x16b);
    }
    puVar2 = _CreateStgListByRoot(param_1,param_2,PTR_s_ASSISTANT_0079d724,param_3);
    g_currentExceptionFrame = pIVar4;
    return puVar2;
  }
  g_currentExceptionFrame = pIVar4;
  iVar3 = ReportDebugMessage(s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x16e,0,errorCode,&DAT_007a4ccc,
                             s_CreateAssistantList_007d3024);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    puVar2 = (uint *)(*pcVar1)();
    return puVar2;
  }
  FUN_006ae110(local_8);
  RaiseInternalException(errorCode,0,s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x170);
  return (uint *)0x0;
}

