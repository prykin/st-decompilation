
int FUN_006e5f00(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 local_48 [16];
  void *local_8;
  
  pIVar4 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  iVar2 = __setjmp3(local_48,0,unaff_ESI,pIVar4);
  if (iVar2 == 0) {
    if ((*(int *)(param_1 + 0x10) == 10) && (*(uint *)(param_1 + 0x14) != 0)) {
      FUN_006e56b0(local_8,*(uint *)(param_1 + 0x14));
    }
    g_currentExceptionFrame = pIVar4;
    return 0;
  }
  g_currentExceptionFrame = pIVar4;
  iVar3 = ReportDebugMessage(s_E__Ourlib_Sapp_cpp_007ee78c,0x4a5,0,iVar2,&DAT_007a4ccc,
                             s_SystemClassTy__GetMessage_Error___007eebd4);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  RaiseInternalException(iVar2,0,s_E__Ourlib_Sapp_cpp_007ee78c,0x4a6);
  return iVar2;
}

