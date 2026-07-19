
/* Recovered from embedded debug metadata:
   E:\__titans\tsystem.cpp
   DebugSystemC::CreateSystemObjects */

undefined4 __thiscall DebugSystemC::CreateSystemObjects(DebugSystemC *this)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  undefined4 uVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 local_48 [16];
  DebugSystemC *local_8;
  
  pIVar4 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar4);
  if (errorCode == 0) {
    (*local_8->vtable->slot_0C)(0x8100,&DAT_007fb228,0,0);
    g_currentExceptionFrame = pIVar4;
    return 0;
  }
  g_currentExceptionFrame = pIVar4;
  iVar2 = ReportDebugMessage(s_E____titans_tsystem_cpp_007cab5c,0x1df,0,errorCode,&DAT_007a4ccc,
                             s_DebugSystemC__CreateSystemObject_007cac88);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  RaiseInternalException(errorCode,0,s_E____titans_tsystem_cpp_007cab5c,0x1e0);
  return 0xffffffff;
}

