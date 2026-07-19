
void thunk_FUN_00576bb0(void)

{
  code *pcVar1;
  int errorCode;
  void *this;
  int iVar2;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar3;
  undefined4 auStack_44 [16];
  
  pIVar3 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb8;
  errorCode = __setjmp3(auStack_44,0,unaff_ESI,pIVar3);
  if (errorCode == 0) {
    this = (void *)FUN_0072e530(0x24);
    if (this == (void *)0x0) {
      DAT_00811638 = (int *)0x0;
    }
    else {
      DAT_00811638 = thunk_FUN_00576aa0(this,DAT_00806728);
    }
    if (DAT_00811638 == (int *)0x0) {
      RaiseInternalException(-1,DAT_007ed77c,s_E____titans_tsystem_cpp_007cab5c,0x38);
    }
    DAT_00811638[8] = 0;
    (**(code **)*DAT_00811638)();
    FUN_006e4650(DAT_00811638,0);
    DAT_00811638[8] = 1;
    g_currentExceptionFrame = pIVar3;
    return;
  }
  g_currentExceptionFrame = pIVar3;
  iVar2 = ReportDebugMessage(s_E____titans_tsystem_cpp_007cab5c,0x40,0,errorCode,&DAT_007a4ccc,
                             s_CreateBaseSystem_007caba0);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_tsystem_cpp_007cab5c,0x41);
  return;
}

