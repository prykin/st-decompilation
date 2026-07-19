
LPSTR __cdecl FUN_0067e4a0(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  LPSTR pCVar3;
  int iVar4;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar5;
  undefined4 local_44 [16];
  
  pIVar5 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb8;
  iVar2 = __setjmp3(local_44,0,unaff_ESI,pIVar5);
  if (iVar2 == 0) {
    iVar2 = 3;
    pCVar3 = FUN_006f2c00(PTR_s_STRATEG_0079d72c,1,param_1);
    pCVar3 = FUN_006f2c00(pCVar3,iVar2,param_2);
    g_currentExceptionFrame = pIVar5;
    return pCVar3;
  }
  g_currentExceptionFrame = pIVar5;
  iVar4 = ReportDebugMessage(s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x1d9,0,iVar2,&DAT_007a4ccc,
                             s_GetStrategName_007d309c);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    pCVar3 = (LPSTR)(*pcVar1)();
    return pCVar3;
  }
  RaiseInternalException(iVar2,0,s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x1da);
  return (LPSTR)0x0;
}

