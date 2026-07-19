
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   SpecPanelTy::DonePanel */

void __thiscall SpecPanelTy::DonePanel(SpecPanelTy *this)

{
  uint *puVar1;
  code *pcVar2;
  SpecPanelTy *pSVar3;
  int errorCode;
  int iVar4;
  ccFntTy *extraout_ECX;
  ccFntTy *extraout_ECX_00;
  ccFntTy *this_00;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar5;
  undefined4 local_48 [16];
  SpecPanelTy *local_8;
  
  pIVar5 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar5);
  pSVar3 = local_8;
  if (errorCode == 0) {
    this_00 = extraout_ECX;
    if (*(uint *)&local_8->field_0x17c != 0) {
      FUN_006e56b0(*(void **)&local_8->field_0xc,*(uint *)&local_8->field_0x17c);
      this_00 = extraout_ECX_00;
    }
    puVar1 = *(uint **)&pSVar3[1].field_0x4;
    *(undefined4 *)&pSVar3->field_0x17c = 0;
    if (puVar1 != (uint *)0x0) {
      ccFntTy::operator(this_00,puVar1);
      *(undefined4 *)&pSVar3[1].field_0x4 = 0;
    }
    if (*(int *)(pSVar3 + 1) != 0) {
      cMf32::RecMemFree(DAT_00806790,(uint *)(pSVar3 + 1));
    }
    g_currentExceptionFrame = pIVar5;
    return;
  }
  g_currentExceptionFrame = pIVar5;
  iVar4 = ReportDebugMessage(s_E____titans_Andrey_specpan_cpp_007c7870,0xfa,0,errorCode,
                             &DAT_007a4ccc,s_SpecPanelTy__DonePanel_007c7948);
  if (iVar4 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Andrey_specpan_cpp_007c7870,0xfa);
  return;
}

