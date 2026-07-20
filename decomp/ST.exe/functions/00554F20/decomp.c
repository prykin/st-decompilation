
/* Recovered from embedded debug metadata:
   E:\__titans\grig\loading.cpp
   cLoadingTy::SetProcess
   
   [STPrototypeRepairApplier] Propagated parameter 2.
   Evidence: 0052AB40 -> 00554F20 @ 0052ABA6 */

void __thiscall cLoadingTy::SetProcess(cLoadingTy *this,undefined4 param_1,char *text,int param_3)

{
  code *pcVar1;
  cLoadingTy *this_00;
  int errorCode;
  DWORD DVar2;
  int iVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 local_48 [16];
  cLoadingTy *local_8;
  
  local_8 = this;
  sub_00555570(this);
  pIVar4 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  errorCode = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar4);
  this_00 = local_8;
  if (errorCode == 0) {
    if (-1 < (int)local_8->field_003C) {
      SetState(local_8,CASE_2,0,(char *)0x0);
    }
    this_00->field_003C = param_1;
    DVar2 = timeGetTime();
    this_00->field_0044 = DVar2;
    this_00->field_0040 = param_3;
    if (param_3 == 0) {
      this_00->field_0040 = 1;
    }
    this_00->field_0050 = 0xffffffff;
    DrawLineCR(this_00,(uint *)text);
    g_currentExceptionFrame = pIVar4;
    return;
  }
  g_currentExceptionFrame = pIVar4;
  iVar3 = ReportDebugMessage(s_E____titans_grig_loading_cpp_007c8f0c,0x109,0,errorCode,&DAT_007a4ccc
                             ,s_cLoadingTy__SetProcess_007c8fb4);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_grig_loading_cpp_007c8f0c,0x10a);
  return;
}

