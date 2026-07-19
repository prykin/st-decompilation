
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\upginfo.cpp
   UpgPanelTy::DoneUpgPanel */

void __thiscall UpgPanelTy::DoneUpgPanel(UpgPanelTy *this)

{
  code *pcVar1;
  InternalExceptionFrame *pIVar2;
  int errorCode;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_48 [16];
  UpgPanelTy *local_8;
  
  pIVar2 = g_currentExceptionFrame;
  local_8 = this;
  errorCode = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (errorCode == 0) {
    *(undefined4 *)(local_8 + 0x3f3) = 0;
    *(undefined4 *)(local_8 + 0x3ef) = 0;
    *(undefined4 *)(local_8 + 0x3eb) = 0;
    DAT_00802a48 = 0;
    g_currentExceptionFrame = pIVar2;
    return;
  }
  g_currentExceptionFrame = pIVar2;
  iVar3 = ReportDebugMessage(s_E____titans_Andrey_upginfo_cpp_007c87b8,0x2a,0,errorCode,
                             &DAT_007a4ccc,s_UpgPanelTy__DoneUpgPanel_007c8810);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Andrey_upginfo_cpp_007c87b8,0x2a);
  return;
}

