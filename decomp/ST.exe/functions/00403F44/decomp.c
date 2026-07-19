
uint * __cdecl thunk_FUN_0067dfd0(int param_1,int param_2,uint param_3)

{
  code *pcVar1;
  int errorCode;
  uint *puVar2;
  int iVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 auStack_48 [16];
  byte *pbStack_8;
  
  pIVar4 = g_currentExceptionFrame;
  pbStack_8 = (byte *)0x0;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  errorCode = __setjmp3(auStack_48,0,unaff_ESI,pIVar4);
  if (errorCode == 0) {
    if (param_1 == 0) {
      RaiseInternalException(-0x34,DAT_007ed77c,s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x181);
    }
    puVar2 = thunk_FUN_0067dc20(param_1,param_2,PTR_s_OPPONENT_0079d728,param_3);
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
  FUN_006ae110(pbStack_8);
  RaiseInternalException(errorCode,0,s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x186);
  return (uint *)0x0;
}

