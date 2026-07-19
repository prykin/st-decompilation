
void __thiscall PausePanelTy::DonePausePanel(PausePanelTy *this)

{
  code *pcVar1;
  PausePanelTy *pPVar2;
  int errorCode;
  int iVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 auStack_48 [16];
  PausePanelTy *pPStack_8;
  
  pIVar4 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  pPStack_8 = this;
  errorCode = __setjmp3(auStack_48,0,unaff_ESI,pIVar4);
  pPVar2 = pPStack_8;
  if (errorCode == 0) {
    if (*(uint *)(pPStack_8 + 0x184) != 0) {
      FUN_006e56b0(*(void **)(pPStack_8 + 0xc),*(uint *)(pPStack_8 + 0x184));
    }
    *(undefined4 *)(pPVar2 + 0x184) = 0;
    DAT_008016e0 = 0;
    if (*(uint **)(pPVar2 + 0x17c) != (uint *)0x0) {
      FUN_00710560(*(uint **)(pPVar2 + 0x17c));
      *(undefined4 *)(pPVar2 + 0x17c) = 0;
    }
    if (*(int *)(pPVar2 + 0x180) != 0) {
      cMf32::RecMemFree(DAT_00806790,(uint *)(pPVar2 + 0x180));
    }
    g_currentExceptionFrame = pIVar4;
    return;
  }
  g_currentExceptionFrame = pIVar4;
  iVar3 = ReportDebugMessage(s_E____titans_Andrey_pause_cpp_007c7490,0x3b,0,errorCode,&DAT_007a4ccc,
                             s_PausePanelTy__DonePausePanel_007c74e4);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Andrey_pause_cpp_007c7490,0x3b);
  return;
}

