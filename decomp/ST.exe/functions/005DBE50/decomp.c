
/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::OutBmpProc */

void __thiscall
StartSystemTy::OutBmpProc
          (StartSystemTy *this,int *param_1,undefined4 param_2,undefined4 param_3,int param_4,
          int param_5,DWORD param_6,DWORD param_7,BITMAPINFO *param_8)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar3;
  undefined4 local_44 [16];
  
  pIVar3 = g_currentExceptionFrame;
  if (param_8 != (BITMAPINFO *)0x0) {
    g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb8;
    errorCode = __setjmp3(local_44,0,unaff_ESI,pIVar3);
    if (errorCode == 0) {
      FUN_006b4680(param_1,param_4,param_5,param_8,(uint *)0x0,0,0,param_6,param_7,0x10000ff);
      g_currentExceptionFrame = pIVar3;
      return;
    }
    g_currentExceptionFrame = pIVar3;
    iVar2 = ReportDebugMessage(s_E____titans_Start_startsys_cpp_007cd718,0x1b7,0,errorCode,
                               &DAT_007a4ccc,s_StartSystemTy__OutBmpProc_007cd110);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(errorCode,0,s_E____titans_Start_startsys_cpp_007cd718,0x1b7);
  }
  return;
}

