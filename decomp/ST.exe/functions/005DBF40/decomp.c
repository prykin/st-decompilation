
/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::OutBmpProc */

void __thiscall
StartSystemTy::OutBmpProc
          (StartSystemTy *this,int param_1,undefined4 param_2,undefined4 param_3,int param_4,
          int param_5,undefined4 param_6,undefined4 param_7,int param_8)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar3;
  undefined4 local_44 [16];
  
  pIVar3 = g_currentExceptionFrame;
  if (param_8 != 0) {
    g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb8;
    errorCode = Library::MSVCRT::__setjmp3(local_44,0,unaff_ESI,pIVar3);
    if (errorCode == 0) {
      Library::DKW::DDX::FUN_006b48e0
                (param_1,param_4,param_5,param_8,0,0,0,*(uint *)(param_8 + 4),*(int *)(param_8 + 8),
                 (int)&PTR_0081176c->field_0x144,0,0x10000ff);
      g_currentExceptionFrame = pIVar3;
      return;
    }
    g_currentExceptionFrame = pIVar3;
    iVar2 = ReportDebugMessage(s_E____titans_Start_startsys_cpp_007cd718,0x1c2,0,errorCode,
                               &DAT_007a4ccc,s_StartSystemTy__OutBmpProc_007cd110);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(errorCode,0,s_E____titans_Start_startsys_cpp_007cd718,0x1c2);
  }
  return;
}

