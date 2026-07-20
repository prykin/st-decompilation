
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_plr_d.cpp
   Diagnostic line evidence: 506 | 509 | 510 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]
   
   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0067E6B0 parameter used as this of cMf32::RecChk @ 0067E718 */

LPSTR __cdecl GetOpponentNameDB(cMf32 *param_1)

{
  code *pcVar1;
  undefined *text;
  int iVar2;
  LPSTR pCVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_48;
  
  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  iVar2 = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_48.previous;
    iVar4 = ReportDebugMessage(s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x1fd,0,iVar2,&DAT_007a4ccc,
                               s_GetOpponentNameDB_007d30c8);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      pCVar3 = (LPSTR)(*pcVar1)();
      return pCVar3;
    }
    RaiseInternalException(iVar2,0,s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x1fe);
    return (LPSTR)0x0;
  }
  if (param_1 == (cMf32 *)0x0) {
    RaiseInternalException
              (-0x34,g_overwriteContext_007ED77C,s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x1fa);
  }
  text = PTR_s_OPPONENT_0079d728;
  iVar2 = 0;
  do {
    pCVar3 = FUN_006f2c00(text,3,iVar2);
    iVar4 = cMf32::RecChk(param_1,0xc,pCVar3);
    if (iVar4 != 0) {
      g_currentExceptionFrame = local_48.previous;
      return pCVar3;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x7ffffff0);
  g_currentExceptionFrame = local_48.previous;
  return (LPSTR)0x0;
}

