
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   ProdPanelTy::PreInitProdPanel */

void __thiscall ProdPanelTy::PreInitProdPanel(ProdPanelTy *this)

{
  code *pcVar1;
  ProdPanelTy *pPVar2;
  int iVar3;
  int iVar4;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar5;
  undefined4 local_48 [16];
  ProdPanelTy *local_8;
  
  pIVar5 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar5);
  pPVar2 = local_8;
  if (iVar3 == 0) {
    FUN_006b1a50(DAT_008075a8,3,(undefined4 *)0x0,(undefined4 *)&local_8->field_0x4c);
    iVar3 = pPVar2->field_0050 + pPVar2->field_0058;
    pPVar2->field_0044 = iVar3;
    pPVar2->field_0174 = (pPVar2->field_0048 - iVar3) + DAT_00806734;
    g_currentExceptionFrame = pIVar5;
    return;
  }
  g_currentExceptionFrame = pIVar5;
  iVar4 = ReportDebugMessage(s_E____titans_Andrey_specpan_cpp_007c7870,0x178,0,iVar3,&DAT_007a4ccc,
                             s_ProdPanelTy__PreInitProdPanel_007c79dc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_specpan_cpp_007c7870,0x178);
  return;
}

