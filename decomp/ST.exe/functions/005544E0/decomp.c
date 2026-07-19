
/* Recovered from embedded debug metadata:
   E:\__titans\grig\loading.cpp
   cLoadingTy::delete */

void __thiscall cLoadingTy::delete(cLoadingTy *this,uint *param_1)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  ccFntTy *this_00;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar3;
  undefined4 local_44 [16];
  
  pIVar3 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb8;
  errorCode = Library::MSVCRT::__setjmp3(local_44,0,unaff_ESI,pIVar3);
  if (errorCode == 0) {
    if (param_1 != (uint *)0x0) {
      cMf32::RecMemFree(DAT_00806780,param_1);
      if ((uint *)param_1[2] != (uint *)0x0) {
        ccFntTy::operator(this_00,(uint *)param_1[2]);
      }
      thunk_FUN_00555650((int)param_1);
      FUN_006a5e90(param_1);
    }
    g_currentExceptionFrame = pIVar3;
    return;
  }
  g_currentExceptionFrame = pIVar3;
  iVar2 = ReportDebugMessage(s_E____titans_grig_loading_cpp_007c8f0c,0x52,0,errorCode,&DAT_007a4ccc,
                             s_cLoadingTy__delete_007c8f30);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_grig_loading_cpp_007c8f0c,0x53);
  return;
}

