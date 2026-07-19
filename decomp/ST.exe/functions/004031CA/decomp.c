
void __thiscall IntercomPanelTy::PreInitIntercomPanel(IntercomPanelTy *this)

{
  code *pcVar1;
  IntercomPanelTy *pIVar2;
  int iVar3;
  int iVar4;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar5;
  undefined4 auStack_48 [16];
  IntercomPanelTy *pIStack_8;
  
  pIVar5 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  pIStack_8 = this;
  iVar3 = __setjmp3(auStack_48,0,unaff_ESI,pIVar5);
  pIVar2 = pIStack_8;
  if (iVar3 == 0) {
    FUN_006b1a50(DAT_008075a8,3,(undefined4 *)0x0,(undefined4 *)(pIStack_8 + 0x188));
    iVar3 = *(int *)(pIVar2 + 0x18c) - *(int *)(pIVar2 + 0x48);
    *(int *)(pIVar2 + 0x44) = iVar3;
    *(int *)(pIVar2 + 0x174) = iVar3 + *(int *)(pIVar2 + 0x48);
    g_currentExceptionFrame = pIVar5;
    return;
  }
  g_currentExceptionFrame = pIVar5;
  iVar4 = ReportDebugMessage(s_E____titans_Andrey_intercom_cpp_007c401c,0x22,0,iVar3,&DAT_007a4ccc,
                             s_IntercomPanelTy__PreInitIntercom_007c4044);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_intercom_cpp_007c401c,0x22);
  return;
}

