
/* Recovered from embedded debug metadata:
   E:\__titans\Start\hologram.cpp
   HoloTy::Done */

void __thiscall HoloTy::Done(HoloTy *this)

{
  code *pcVar1;
  HoloTy *pHVar2;
  int errorCode;
  int iVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 local_48 [16];
  HoloTy *local_8;
  
  pIVar4 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar4);
  pHVar2 = local_8;
  if (errorCode == 0) {
    if (-1 < (int)local_8->field_0003) {
      FUN_006b3bb0(DAT_008075a8,local_8->field_0003);
    }
    pHVar2->field_0003 = 0xffffffff;
    if (pHVar2->field_000B != 0) {
      FUN_006ab060(&pHVar2->field_000B);
    }
    if (pHVar2->field_0007 != 0) {
      FUN_006ab060(&pHVar2->field_0007);
    }
    g_currentExceptionFrame = pIVar4;
    return;
  }
  g_currentExceptionFrame = pIVar4;
  iVar3 = ReportDebugMessage(s_E____titans_Start_hologram_cpp_007cc674,0xaa,0,errorCode,
                             &DAT_007a4ccc,s_HoloTy__Done_007cc6e0);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Start_hologram_cpp_007cc674,0xaa);
  return;
}

