
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   SpecPanelTy::DonePanel */

void __thiscall SpecPanelTy::DonePanel(SpecPanelTy *this)

{
  code *pcVar1;
  SpecPanelTy *pSVar2;
  int errorCode;
  int iVar3;
  ccFntTy *extraout_ECX;
  ccFntTy *extraout_ECX_00;
  ccFntTy *this_00;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 local_48 [16];
  SpecPanelTy *local_8;
  
  pIVar4 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar4);
  pSVar2 = local_8;
  if (errorCode == 0) {
    this_00 = extraout_ECX;
    if (local_8->field_017C != 0) {
      StartSystemTy::sub_006E56B0(local_8->field_000C,local_8->field_017C);
      this_00 = extraout_ECX_00;
    }
    pSVar2->field_017C = 0;
    if (pSVar2->field_0189 != (ccFntTy *)0x0) {
      ccFntTy::operator(this_00,(uint *)pSVar2->field_0189);
      pSVar2->field_0189 = (ccFntTy *)0x0;
    }
    if (pSVar2->field_0185 != (ushort *)0x0) {
      cMf32::RecMemFree(DAT_00806790,(uint *)&pSVar2->field_0185);
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

