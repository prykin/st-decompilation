
/* Recovered from embedded debug metadata:
   E:\Ourlib\Sapp.cpp
   AppClassTy::AddDecodeMessage */

int __thiscall AppClassTy::AddDecodeMessage(AppClassTy *this,undefined4 *param_1)

{
  code *pcVar1;
  AppClassTy *pAVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar6;
  undefined4 local_4c [16];
  int local_c;
  AppClassTy *local_8;
  
  pIVar6 = g_currentExceptionFrame;
  local_c = 0;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb0;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c,0,unaff_ESI,pIVar6);
  pAVar2 = local_8;
  if (iVar3 == 0) {
    if (*(int *)(local_8 + 0x14) == 0) {
      puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x10,10);
      *(uint **)(pAVar2 + 0x14) = puVar4;
    }
    Library::DKW::TBL::FUN_006ae1c0(*(uint **)(pAVar2 + 0x14),param_1);
    g_currentExceptionFrame = pIVar6;
    return local_c;
  }
  g_currentExceptionFrame = pIVar6;
  iVar5 = ReportDebugMessage(s_E__Ourlib_Sapp_cpp_007ee78c,0x142,0,iVar3,&DAT_007a4ccc,
                             s_AppClassTy__AddDecodeMessage_Err_007ee924);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  RaiseInternalException(iVar3,0,s_E__Ourlib_Sapp_cpp_007ee78c,0x143);
  return iVar3;
}

