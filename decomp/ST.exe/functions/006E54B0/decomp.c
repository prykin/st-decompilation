
/* Recovered from embedded debug metadata:
   E:\Ourlib\Sapp.cpp
   SystemClassTy::_CreateObject */

int __thiscall
SystemClassTy::_CreateObject
          (SystemClassTy *this,int param_1,undefined4 *param_2,int *param_3,undefined4 param_4)

{
  code *pcVar1;
  SystemClassTy *pSVar2;
  int iVar3;
  int iVar4;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar5;
  undefined4 local_50 [16];
  undefined4 local_10;
  int local_c;
  SystemClassTy *local_8;
  
  pIVar5 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffac;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50,0,unaff_ESI,pIVar5);
  pSVar2 = local_8;
  if (iVar3 == 0) {
    local_10 = param_4;
    local_c = AppClassTy::CreateObject(local_8->app,param_1,param_4);
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(local_c + 8);
    }
    if (param_3 != (int *)0x0) {
      *param_3 = local_c;
    }
    *(SystemClassTy **)(local_c + 0xc) = pSVar2;
    Library::DKW::TBL::FUN_006ae1c0(pSVar2->objects,&local_10);
    g_currentExceptionFrame = pIVar5;
    return local_c;
  }
  g_currentExceptionFrame = pIVar5;
  iVar4 = ReportDebugMessage(s_E__Ourlib_Sapp_cpp_007ee78c,0x3b3,0,iVar3,
                             s_SystemClassTy___CreateObject_err_007eeac8,param_1,param_1);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  RaiseInternalException(iVar3,0,s_E__Ourlib_Sapp_cpp_007ee78c,0x3b4);
  return 0;
}

