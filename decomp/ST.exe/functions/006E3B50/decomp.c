
/* Recovered from embedded debug metadata:
   E:\Ourlib\Sapp.cpp
   AppClassTy::PostNextMessage */

int __thiscall AppClassTy::PostNextMessage(AppClassTy *this,undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 local_48 [16];
  AppClassTy *local_8;
  
  pIVar4 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar4);
  if (iVar2 == 0) {
    if (*(uint **)(local_8 + 0x2c) != (uint *)0x0) {
      Library::DKW::TBL::FUN_006ae1c0(*(uint **)(local_8 + 0x2c),param_1);
    }
    g_currentExceptionFrame = pIVar4;
    return 0;
  }
  g_currentExceptionFrame = pIVar4;
  iVar3 = ReportDebugMessage(s_E__Ourlib_Sapp_cpp_007ee78c,0xba,0,iVar2,&DAT_007a4ccc,
                             s_AppClassTy__PostNextMessage_Erro_007ee880);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  RaiseInternalException(iVar2,0,s_E__Ourlib_Sapp_cpp_007ee78c,0xbb);
  return iVar2;
}

