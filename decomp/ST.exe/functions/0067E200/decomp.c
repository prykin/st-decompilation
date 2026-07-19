
uint * __cdecl FUN_0067e200(int param_1,int param_2,uint param_3)

{
  code *pcVar1;
  int errorCode;
  LPSTR pCVar2;
  uint *puVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  byte *local_8;
  
  local_8 = (byte *)0x0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  errorCode = __setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (errorCode == 0) {
    if (((param_1 == 0) || (param_2 < 0)) || (7 < param_2)) {
      RaiseInternalException(-0x34,DAT_007ed77c,s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x1ad);
    }
    pCVar2 = FUN_006f2c00(PTR_s_AIPLAYER_0079d71c,2,param_2);
    puVar3 = thunk_FUN_0067dc20(param_1,0,pCVar2,param_3);
    g_currentExceptionFrame = local_4c.previous;
    return puVar3;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x1b0,0,errorCode,&DAT_007a4ccc,
                             s_CreateSaveStrategList_007d306c);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    puVar3 = (uint *)(*pcVar1)();
    return puVar3;
  }
  FUN_006ae110(local_8);
  RaiseInternalException(errorCode,0,s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x1b2);
  return (uint *)0x0;
}

