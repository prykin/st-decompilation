
void __thiscall ProdPanelTy::PreInitProdPanel(ProdPanelTy *this)

{
  code *pcVar1;
  ProdPanelTy *pPVar2;
  int errorCode;
  int iVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 auStack_48 [16];
  ProdPanelTy *pPStack_8;
  
  pIVar4 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  pPStack_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(auStack_48,0,unaff_ESI,pIVar4);
  pPVar2 = pPStack_8;
  if (errorCode == 0) {
    FUN_006b1a50(DAT_008075a8,3,(undefined4 *)0x0,(undefined4 *)(pPStack_8 + 0x4c));
    *(int *)(pPVar2 + 0x44) = *(int *)(pPVar2 + 0x50) + *(int *)(pPVar2 + 0x58);
    *(int *)(pPVar2 + 0x174) =
         (*(int *)(pPVar2 + 0x48) - (*(int *)(pPVar2 + 0x50) + *(int *)(pPVar2 + 0x58))) +
         DAT_00806734;
    g_currentExceptionFrame = pIVar4;
    return;
  }
  g_currentExceptionFrame = pIVar4;
  iVar3 = ReportDebugMessage(s_E____titans_Andrey_specpan_cpp_007c7870,0x178,0,errorCode,
                             &DAT_007a4ccc,s_ProdPanelTy__PreInitProdPanel_007c79dc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Andrey_specpan_cpp_007c7870,0x178);
  return;
}

