
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\intercom.cpp
   IntercomPanelTy::DoneIntercomPanel */

void __thiscall IntercomPanelTy::DoneIntercomPanel(IntercomPanelTy *this)

{
  code *pcVar1;
  IntercomPanelTy *pIVar2;
  int errorCode;
  int iVar3;
  ccFntTy *extraout_ECX;
  ccFntTy *extraout_ECX_00;
  ccFntTy *extraout_ECX_01;
  ccFntTy *this_00;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  IntercomPanelTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pIVar2 = local_8;
  if (errorCode == 0) {
    this_00 = extraout_ECX;
    if ((byte *)local_8->field_0198 != (byte *)0x0) {
      FUN_006b5570((byte *)local_8->field_0198);
      pIVar2->field_0198 = 0;
      this_00 = extraout_ECX_00;
    }
    if (pIVar2->field_01A0 != 0) {
      FUN_006e56b0((void *)pIVar2->field_000C,pIVar2->field_01A0);
      this_00 = extraout_ECX_01;
    }
    pIVar2->field_01A0 = 0;
    DAT_0080169c = 0;
    if ((uint *)pIVar2->field_0180 != (uint *)0x0) {
      ccFntTy::operator(this_00,(uint *)pIVar2->field_0180);
      pIVar2->field_0180 = 0;
    }
    if (pIVar2->field_0184 != (ushort *)0x0) {
      cMf32::RecMemFree(DAT_00806790,(uint *)&pIVar2->field_0184);
    }
    if (pIVar2->field_019C != 0) {
      cMf32::RecMemFree(DAT_00806790,&pIVar2->field_019C);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_Andrey_intercom_cpp_007c401c,0x4a,0,errorCode,
                             &DAT_007a4ccc,s_IntercomPanelTy__DoneIntercomPan_007c40b0);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Andrey_intercom_cpp_007c401c,0x4a);
  return;
}

