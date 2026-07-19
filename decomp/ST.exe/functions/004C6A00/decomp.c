
/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_BldMark.cpp
   TLOBldMark::GetMessage */

int __thiscall TLOBldMark::GetMessage(TLOBldMark *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 local_48 [16];
  TLOBldMark *local_8;
  
  pIVar4 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar4);
  if (iVar2 != 0) {
    g_currentExceptionFrame = pIVar4;
    iVar3 = ReportDebugMessage(s_E____titans_Artem_TLO_BldMark_cp_007ad2f4,0xb6,0,iVar2,
                               &DAT_007a4ccc,s_TLOBldMark__GetMessage_error_007ad344);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
    RaiseInternalException(iVar2,0,s_E____titans_Artem_TLO_BldMark_cp_007ad2f4,0xb7);
    return iVar2;
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 == 0) {
    thunk_FUN_004c61e0((int)local_8);
  }
  else {
    if (iVar2 == 2) {
      Create(local_8);
      g_currentExceptionFrame = pIVar4;
      return 0;
    }
    if (iVar2 == 3) {
      thunk_FUN_004c61a0((int)local_8);
      g_currentExceptionFrame = pIVar4;
      return 0;
    }
  }
  g_currentExceptionFrame = pIVar4;
  return 0;
}

