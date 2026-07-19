
/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_embryo.cpp
   TLOBaseTy::SetActivity */

void __thiscall TLOBaseTy::SetActivity(TLOBaseTy *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 local_48 [16];
  TLOBaseTy *local_8;
  
  local_8 = this;
  iVar2 = (*this->vtable->slot_F8)();
  pIVar4 = g_currentExceptionFrame;
  if (iVar2 != 0) {
    g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
    iVar2 = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar4);
    if (iVar2 == 0) {
      thunk_FUN_0041dd00(local_8,param_1);
      g_currentExceptionFrame = pIVar4;
      return;
    }
    g_currentExceptionFrame = pIVar4;
    iVar3 = ReportDebugMessage(s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0x52d,0,iVar2,
                               &DAT_007a4ccc,s_TLOBaseTy__SetActivity_007ac8d0);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar2,0,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0x52e);
  }
  return;
}

