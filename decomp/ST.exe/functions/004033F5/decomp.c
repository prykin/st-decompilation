
void __thiscall SpecPanelTy::DonePanel(SpecPanelTy *this)

{
  code *pcVar1;
  SpecPanelTy *pSVar2;
  int errorCode;
  int iVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 auStack_48 [16];
  SpecPanelTy *pSStack_8;
  
  pIVar4 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  pSStack_8 = this;
  errorCode = __setjmp3(auStack_48,0,unaff_ESI,pIVar4);
  pSVar2 = pSStack_8;
  if (errorCode == 0) {
    if (*(uint *)(pSStack_8 + 0x17c) != 0) {
      FUN_006e56b0(*(void **)(pSStack_8 + 0xc),*(uint *)(pSStack_8 + 0x17c));
    }
    *(undefined4 *)(pSVar2 + 0x17c) = 0;
    if (*(uint **)(pSVar2 + 0x189) != (uint *)0x0) {
      FUN_00710560(*(uint **)(pSVar2 + 0x189));
      *(undefined4 *)(pSVar2 + 0x189) = 0;
    }
    if (*(int *)(pSVar2 + 0x185) != 0) {
      cMf32::RecMemFree(DAT_00806790,(uint *)(pSVar2 + 0x185));
    }
    g_currentExceptionFrame = pIVar4;
    return;
  }
  g_currentExceptionFrame = pIVar4;
  iVar3 = ReportDebugMessage(s_E____titans_Andrey_specpan_cpp_007c7870,0xfa,0,errorCode,
                             &DAT_007a4ccc,s_SpecPanelTy__DonePanel_007c7948);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Andrey_specpan_cpp_007c7870,0xfa);
  return;
}

