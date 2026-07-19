
int FUN_006e40e0(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 local_4c [16];
  void *local_c;
  int local_8;
  
  pIVar4 = g_currentExceptionFrame;
  local_8 = 0;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb0;
  iVar2 = __setjmp3(local_4c,0,unaff_ESI,pIVar4);
  if (iVar2 != 0) {
    g_currentExceptionFrame = pIVar4;
    iVar3 = ReportDebugMessage(s_E__Ourlib_Sapp_cpp_007ee78c,0x135,0,iVar2,&DAT_007a4ccc,
                               s_AppClassTy__SendMessageToAllChil_007ee8f8);
    if (iVar3 == 0) {
      RaiseInternalException(iVar2,0,s_E__Ourlib_Sapp_cpp_007ee78c,0x136);
      return 0xffff;
    }
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  iVar2 = FUN_006e45a0(local_c,param_1);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 8) != 0)) {
    iVar2 = FUN_006e3bf0(*(int *)(iVar2 + 8),param_2);
    local_8 = 0;
    if (iVar2 != 0) {
      local_8 = iVar2;
      RaiseInternalException(iVar2,DAT_007ed77c,s_E__Ourlib_Sapp_cpp_007ee78c,0x132);
      g_currentExceptionFrame = pIVar4;
      return iVar2;
    }
  }
  g_currentExceptionFrame = pIVar4;
  return local_8;
}

