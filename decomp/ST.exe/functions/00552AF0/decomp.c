
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\upginfo.cpp
   UpgPanelTy::ShiftControls */

void __thiscall UpgPanelTy::ShiftControls(UpgPanelTy *this,int param_1)

{
  code *pcVar1;
  InternalExceptionFrame *pIVar2;
  short sVar3;
  int errorCode;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_44 [16];
  
  if (param_1 != *(int *)(this + 0x5c)) {
    SpecPanelTy::ShiftControls((SpecPanelTy *)this,param_1);
    sVar3 = (short)*(undefined4 *)(this + 0x174);
    *(undefined4 *)(this + 0x28) = 0x24;
    if (param_1 != 0) {
      sVar3 = -sVar3;
    }
    *(short *)(this + 0x2e) = sVar3;
    pIVar2 = g_currentExceptionFrame;
    errorCode = __setjmp3(local_44,0,unaff_EDI,unaff_ESI);
    if (errorCode == 0) {
      g_currentExceptionFrame = pIVar2;
      return;
    }
    g_currentExceptionFrame = pIVar2;
    iVar4 = ReportDebugMessage(s_E____titans_Andrey_upginfo_cpp_007c87b8,0x36,0,errorCode,
                               &DAT_007a4ccc,s_UpgPanelTy__ShiftControls_007c8830);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(errorCode,0,s_E____titans_Andrey_upginfo_cpp_007c87b8,0x36);
  }
  return;
}

