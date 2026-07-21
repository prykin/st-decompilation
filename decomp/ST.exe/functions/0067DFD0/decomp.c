
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_plr_d.cpp
   Diagnostic line evidence: 385 | 388 | 390 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]
   
   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0056EBE0 -> 0067DFD0 @ 0056ECE7 | 0056EBE0 -> 0067DFD0 @ 0056ECFF | 0056EBE0 ->
   0067DFD0 @ 0056ED16 */

uint * __cdecl CreateOpponentList(cMf32 *param_1,int param_2,uint param_3)

{
  code *pcVar1;
  int errorCode;
  uint *puVar2;
  int iVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 local_48 [16];
  DArrayTy *local_8;
  
  pIVar4 = g_currentExceptionFrame;
  local_8 = (DArrayTy *)0x0;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  errorCode = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar4);
  if (errorCode == 0) {
    if (param_1 == (cMf32 *)0x0) {
      RaiseInternalException
                (-0x34,g_overwriteContext_007ED77C,s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x181);
    }
    puVar2 = _CreateStgListByRoot(param_1,param_2,PTR_s_OPPONENT_0079d728,param_3);
    g_currentExceptionFrame = pIVar4;
    return puVar2;
  }
  g_currentExceptionFrame = pIVar4;
  iVar3 = ReportDebugMessage(s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x184,0,errorCode,&DAT_007a4ccc,
                             s_CreateOpponentList_007d303c);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    puVar2 = (uint *)(*pcVar1)();
    return puVar2;
  }
  DArrayDestroy(local_8);
  RaiseInternalException(errorCode,0,s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x186);
  return (uint *)0x0;
}

