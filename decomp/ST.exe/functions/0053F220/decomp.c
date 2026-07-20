
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   ProdPanelTy::DoneProdPanel */

void __thiscall ProdPanelTy::DoneProdPanel(ProdPanelTy *this)

{
  code *pcVar1;
  ProdPanelTy *pPVar2;
  int iVar3;
  int iVar4;
  ccFntTy *extraout_ECX;
  ccFntTy *extraout_ECX_00;
  ccFntTy *extraout_ECX_01;
  ccFntTy *extraout_ECX_02;
  ccFntTy *this_00;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar5;
  InternalExceptionFrame local_4c;
  ProdPanelTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pPVar2 = local_8;
  if (iVar3 == 0) {
    this_00 = extraout_ECX;
    if (local_8->field_0180 != 0) {
      StartSystemTy::sub_006E56B0(local_8->field_000C,local_8->field_0180);
      this_00 = extraout_ECX_00;
    }
    pPVar2->field_0180 = 0;
    if (pPVar2->field_019D != 0) {
      StartSystemTy::sub_006E56B0(pPVar2->field_000C,pPVar2->field_019D);
      this_00 = extraout_ECX_01;
    }
    pPVar2->field_019D = 0;
    puVar5 = &pPVar2->field_01A1;
    iVar3 = 5;
    do {
      if (*puVar5 != 0) {
        StartSystemTy::sub_006E56B0(pPVar2->field_000C,*puVar5);
        *puVar5 = 0;
        this_00 = extraout_ECX_02;
      }
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (pPVar2->field_017C != (ccFntTy *)0x0) {
      ccFntTy::operator(this_00,(uint *)pPVar2->field_017C);
      pPVar2->field_017C = (ccFntTy *)0x0;
    }
    if (pPVar2->field_0184 != 0) {
      cMf32::RecMemFree(DAT_00806790,&pPVar2->field_0184);
    }
    pPVar2->field_0190 = 0;
    pPVar2->field_0188 = 0;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Andrey_specpan_cpp_007c7870,0x1a6,0,iVar3,&DAT_007a4ccc,
                             s_ProdPanelTy__DoneProdPanel_007c7a20);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_specpan_cpp_007c7870,0x1a6);
  return;
}

