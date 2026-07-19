
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cp_sup.cpp
   CPanelTy::OutProc */

void __thiscall
CPanelTy::OutProc(CPanelTy *this,int param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 int param_5,undefined4 param_6,undefined4 param_7,int param_8)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar3;
  undefined4 local_44 [16];
  
  pIVar3 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb8;
  errorCode = __setjmp3(local_44,0,unaff_ESI,pIVar3);
  if (errorCode == 0) {
    FUN_006b48e0(param_1,param_4,param_5,param_8,0,0,0,*(uint *)(param_8 + 4),*(int *)(param_8 + 8),
                 DAT_008032b4,0,0x10000ff);
    g_currentExceptionFrame = pIVar3;
    return;
  }
  g_currentExceptionFrame = pIVar3;
  iVar2 = ReportDebugMessage(s_E____titans_Andrey_cp_sup_cpp_007c1a4c,0x1f,0,errorCode,&DAT_007a4ccc
                             ,s_CPanelTy__OutProc_007c1a70);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Andrey_cp_sup_cpp_007c1a4c,0x1f);
  return;
}

