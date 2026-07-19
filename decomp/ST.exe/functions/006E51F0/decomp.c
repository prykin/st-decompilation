
/* Recovered from embedded debug metadata:
   E:\Ourlib\Sapp.cpp
   SystemClassTy::InitSystem */

int __thiscall SystemClassTy::InitSystem(SystemClassTy *this)

{
  code *pcVar1;
  SystemClassTy *pSVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar6;
  undefined4 local_48 [16];
  SystemClassTy *local_8;
  
  pIVar6 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar6);
  if (iVar3 == 0) {
    puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x14,8,0x14);
    pSVar2 = local_8;
    local_8->objects = puVar4;
    puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x14,0x20,10);
    pSVar2->messages = puVar4;
    puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x14,0x20,10);
    pSVar2->nextMessages = puVar4;
    iVar3 = (*pSVar2->vtable[5])();
    if (iVar3 != 0) {
      RaiseInternalException(iVar3,DAT_007ed77c,s_E__Ourlib_Sapp_cpp_007ee78c,0x364);
    }
    g_currentExceptionFrame = pIVar6;
    return 0;
  }
  g_currentExceptionFrame = pIVar6;
  iVar5 = ReportDebugMessage(s_E__Ourlib_Sapp_cpp_007ee78c,0x366,0,iVar3,&DAT_007a4ccc,
                             s_SystemClassTy__InitSystem_Error___007eea7c);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  RaiseInternalException(iVar3,0,s_E__Ourlib_Sapp_cpp_007ee78c,0x367);
  return iVar3;
}

