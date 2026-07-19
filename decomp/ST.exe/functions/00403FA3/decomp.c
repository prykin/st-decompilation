
void thunk_FUN_00542d80(void)

{
  code *pcVar1;
  int errorCode;
  void *this;
  int iVar2;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar3;
  undefined4 auStack_64 [16];
  undefined1 auStack_24 [16];
  undefined4 uStack_14;
  
  pIVar3 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffff98;
  errorCode = __setjmp3(auStack_64,0,unaff_ESI,pIVar3);
  if (errorCode == 0) {
    this = (void *)FUN_0072e530(0x34);
    if (this == (void *)0x0) {
      DAT_00802a28 = (InterSystemC *)0x0;
    }
    else {
      DAT_00802a28 = (InterSystemC *)thunk_FUN_00542440(this,DAT_00806728);
    }
    *(int *)(DAT_00802a28 + 0x20) = 0;
    (*(code *)**(undefined4 **)DAT_00802a28)();
    FUN_006e4960(DAT_0081163c,(int *)DAT_00802a28,0);
    InterSystemC::CreateInterfObjects(DAT_00802a28);
    uStack_14 = 5;
    (**(code **)(*(int *)DAT_00802a28 + 0x20))(auStack_24);
    *(int *)(DAT_00802a28 + 0x20) = 1;
    g_currentExceptionFrame = pIVar3;
    return;
  }
  g_currentExceptionFrame = pIVar3;
  iVar2 = ReportDebugMessage(s_E____titans_Andrey_tintersys_cpp_007c7be8,0xca,0,errorCode,
                             &DAT_007a4ccc,s_CreateInterSystem_007c7c58);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Andrey_tintersys_cpp_007c7be8,0xca);
  return;
}

