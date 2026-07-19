
LPSTR __cdecl FUN_0067e6b0(int param_1)

{
  code *pcVar1;
  undefined *puVar2;
  int iVar3;
  LPSTR pCVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_48;
  
  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  iVar3 = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_48.previous;
    iVar5 = ReportDebugMessage(s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x1fd,0,iVar3,&DAT_007a4ccc,
                               s_GetOpponentNameDB_007d30c8);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      pCVar4 = (LPSTR)(*pcVar1)();
      return pCVar4;
    }
    RaiseInternalException(iVar3,0,s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x1fe);
    return (LPSTR)0x0;
  }
  if (param_1 == 0) {
    RaiseInternalException(-0x34,DAT_007ed77c,s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x1fa);
  }
  puVar2 = PTR_s_OPPONENT_0079d728;
  iVar3 = 0;
  do {
    pCVar4 = FUN_006f2c00(puVar2,3,iVar3);
    iVar5 = cMf32::RecChk((cMf32 *)param_1,0xc,pCVar4);
    if (iVar5 != 0) {
      g_currentExceptionFrame = local_48.previous;
      return pCVar4;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x7ffffff0);
  g_currentExceptionFrame = local_48.previous;
  return (LPSTR)0x0;
}

