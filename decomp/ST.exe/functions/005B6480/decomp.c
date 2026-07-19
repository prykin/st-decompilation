
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmenuobj.cpp
   MMObjTy::CloseButtons */

void __thiscall MMObjTy::CloseButtons(MMObjTy *this)

{
  code *pcVar1;
  MMObjTy *pMVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  MMObjTy *pMVar5;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  MMObjTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pMVar2 = local_8;
  if (iVar3 == 0) {
    iVar3 = 0xd;
    pMVar5 = local_8 + 0x66;
    do {
      if (*(uint *)pMVar5 != 0) {
        FUN_006e56b0(*(void **)(pMVar2 + 0xc),*(uint *)pMVar5);
      }
      *(uint *)pMVar5 = 0;
      pMVar5 = pMVar5 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Start_mmenuobj_cpp_007cca38,0x104,0,iVar3,&DAT_007a4ccc,
                             s_MMObjTy__CloseButtons_007ccae4);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Start_mmenuobj_cpp_007cca38,0x104);
  return;
}

