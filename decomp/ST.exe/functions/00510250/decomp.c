
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\frmpanel.cpp
   FrmPanelTy::DoneFrmPanel */

void __thiscall FrmPanelTy::DoneFrmPanel(FrmPanelTy *this)

{
  code *pcVar1;
  FrmPanelTy *pFVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  FrmPanelTy *pFVar5;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  FrmPanelTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pFVar2 = local_8;
  if (iVar3 == 0) {
    iVar3 = 8;
    pFVar5 = local_8 + 0x1b3;
    do {
      if (*(uint *)pFVar5 != 0) {
        FUN_006e56b0(*(void **)(pFVar2 + 0xc),*(uint *)pFVar5);
        *(uint *)pFVar5 = 0;
      }
      pFVar5 = pFVar5 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    pFVar5 = pFVar2 + 0x1d3;
    iVar3 = 4;
    do {
      if (*(uint *)pFVar5 != 0) {
        FUN_006e56b0(*(void **)(pFVar2 + 0xc),*(uint *)pFVar5);
        *(uint *)pFVar5 = 0;
      }
      pFVar5 = pFVar5 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    DAT_0080168c = 0;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Andrey_frmpanel_cpp_007c2958,0x4f,0,iVar3,&DAT_007a4ccc,
                             s_FrmPanelTy__DoneFrmPanel_007c2a6c);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_frmpanel_cpp_007c2958,0x4f);
  return;
}

