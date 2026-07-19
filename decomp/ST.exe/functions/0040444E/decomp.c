
void thunk_FUN_00576ce0(void)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar3;
  undefined4 auStack_44 [16];
  
  pIVar3 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb8;
  errorCode = Library::MSVCRT::__setjmp3(auStack_44,0,unaff_ESI,pIVar3);
  if (errorCode == 0) {
    if (DAT_00811638 != (int *)0x0) {
      if (DAT_00811638[8] == 1) {
        FUN_006e4b80(&DAT_00807620,(int)DAT_00811638);
      }
      (**(code **)(*DAT_00811638 + 4))();
      Library::MSVCRT::FUN_0072e2b0(DAT_00811638);
      DAT_00811638 = (int *)0x0;
    }
    g_currentExceptionFrame = pIVar3;
    return;
  }
  g_currentExceptionFrame = pIVar3;
  iVar2 = ReportDebugMessage(s_E____titans_tsystem_cpp_007cab5c,0x4f,0,errorCode,&DAT_007a4ccc,
                             s_DestroyBaseSystem_007cabb4);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_tsystem_cpp_007cab5c,0x50);
  return;
}

