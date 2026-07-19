
void __thiscall IntercomPanelTy::SwitchIntercomPanel(IntercomPanelTy *this,IntercomPanelTy param_1)

{
  short sVar1;
  code *pcVar2;
  IntercomPanelTy *pIVar3;
  int iVar4;
  int iVar5;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar6;
  undefined4 auStack_48 [16];
  IntercomPanelTy *pIStack_8;
  
  pIVar6 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  pIStack_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(auStack_48,0,unaff_ESI,pIVar6);
  pIVar3 = pIStack_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = pIVar6;
    iVar5 = ReportDebugMessage(s_E____titans_Andrey_intercom_cpp_007c401c,0x13b,0,iVar4,
                               &DAT_007a4ccc,s_IntercomPanelTy__SwitchIntercomP_007c4174);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Andrey_intercom_cpp_007c401c,0x13b);
    return;
  }
  sVar1 = *(short *)(pIStack_8 + 0x172);
  if (sVar1 != 1) {
    if (sVar1 == 2) {
      *(undefined2 *)(pIStack_8 + 0x172) = 3;
      pIStack_8[0x1a4] = param_1;
      iVar4 = 0xaf;
      goto LAB_00522dd6;
    }
    if (sVar1 != 3) {
      g_currentExceptionFrame = pIVar6;
      return;
    }
  }
  *(undefined2 *)(pIStack_8 + 0x172) = 4;
  if (*(uint *)(pIStack_8 + 0x1a0) != 0) {
    FUN_006e56b0(*(void **)(pIStack_8 + 0xc),*(uint *)(pIStack_8 + 0x1a0));
  }
  *(undefined4 *)(pIVar3 + 0x1a0) = 0;
  iVar4 = 0xb0;
LAB_00522dd6:
  thunk_FUN_005252c0(iVar4);
  g_currentExceptionFrame = pIVar6;
  return;
}

