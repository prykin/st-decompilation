
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\pause.cpp
   PausePanelTy::DonePausePanel */

void __thiscall PausePanelTy::DonePausePanel(PausePanelTy *this)

{
  code *pcVar1;
  PausePanelTy *pPVar2;
  int errorCode;
  int iVar3;
  ccFntTy *extraout_ECX;
  ccFntTy *extraout_ECX_00;
  ccFntTy *this_00;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 local_48 [16];
  PausePanelTy *local_8;
  
  pIVar4 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar4);
  pPVar2 = local_8;
  if (errorCode == 0) {
    this_00 = extraout_ECX;
    if (*(uint *)&local_8[1].field_0xc != 0) {
      FUN_006e56b0(*(void **)&local_8->field_0xc,*(uint *)&local_8[1].field_0xc);
      this_00 = extraout_ECX_00;
    }
    *(undefined4 *)&pPVar2[1].field_0xc = 0;
    DAT_008016e0 = 0;
    if (*(uint **)&pPVar2[1].field_0x4 != (uint *)0x0) {
      ccFntTy::operator(this_00,*(uint **)&pPVar2[1].field_0x4);
      *(undefined4 *)&pPVar2[1].field_0x4 = 0;
    }
    if (*(int *)&pPVar2[1].field_0x8 != 0) {
      cMf32::RecMemFree(DAT_00806790,(uint *)&pPVar2[1].field_0x8);
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

