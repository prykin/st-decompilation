
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tplaysys.cpp
   STPlaySystemC::InitSystem */

undefined4 __thiscall STPlaySystemC::InitSystem(STPlaySystemC *this,int param_1)

{
  void **ppvVar1;
  code *pcVar2;
  SystemClassTy *pSVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_54;
  void **local_10;
  void **local_c;
  SystemClassTy *local_8;
  
  *(undefined4 *)(this + 0x30) = 0;
  local_10 = (void **)0x1;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = (SystemClassTy *)this;
  iVar4 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar3 = local_8;
  if (iVar4 == 0) {
    SystemClassTy::InitSystem(local_8);
    *(undefined4 *)((int)&pSVar3[1].app + 1) = 0;
    *(undefined4 *)((int)&pSVar3[2].messages + 1) = 7;
    iVar4 = Library::DKW::LIB::FUN_006aac70(7);
    *(int *)((int)&pSVar3[1].parentSystem + 1) = iVar4;
    *(undefined4 *)((int)&pSVar3[2].objects + 3) = 0x1400;
    iVar4 = Library::DKW::LIB::FUN_006aac70(0x1400);
    *(int *)((int)&pSVar3[2].objectLock + 3) = iVar4;
    *(undefined4 *)((int)&pSVar3[2].vtable + 1) = 0;
    *(undefined4 *)((int)&pSVar3[2].nextMessages + 1) = 0;
    ppvVar1 = &pSVar3[7].messages;
    *(undefined1 *)((int)&pSVar3[2].objectLock + 1) = 0;
    *(undefined1 *)((int)&pSVar3[2].objectLock + 2) = 0;
    *(undefined4 *)((int)&pSVar3[2].app + 1) = 0;
    pSVar3[7].nextMessages = (void *)0x0;
    pSVar3[7].objectLock = (void *)0x0;
    *(undefined2 *)((int)&pSVar3[2].systemId + 3) = 0;
    pSVar3[1].nextMessages = (void *)0x0;
    pSVar3[1].objectLock = (void *)0x0;
    *ppvVar1 = (void *)0x0;
    if (DAT_00806754 != (cMf32 *)0x0) {
      local_c = ppvVar1;
      cMf32::RecGet(DAT_00806754,0xc,PTR_DAT_0079ae30,(int *)&local_c,0);
    }
    pSVar3[1].systemId = (int)*ppvVar1;
    pSVar3[1].vtable = local_10;
    *(undefined1 *)&pSVar3[1].app = 0;
    *(undefined4 *)((int)&pSVar3[3].messages + 1) = 0;
    *(undefined4 *)((int)&pSVar3[3].nextMessages + 1) = 0;
    *(undefined4 *)((int)&pSVar3[3].objectLock + 1) = 0;
    *(undefined4 *)((int)&pSVar3[3].objects + 1) = 0;
    *(undefined4 *)((int)&pSVar3[3].systemId + 1) = 0;
    *(undefined4 *)((int)&pSVar3[3].app + 1) = 0;
    *(undefined1 *)((int)&pSVar3[5].app + 3) = 0;
    *(undefined4 *)((int)&pSVar3[5].messages + 3) = 0;
    *(undefined4 *)((int)&pSVar3[5].nextMessages + 3) = 0;
    *(undefined4 *)((int)&pSVar3[5].objectLock + 3) = 0;
    *(undefined4 *)((int)&pSVar3[5].objects + 3) = 0;
    *(undefined4 *)((int)&pSVar3[5].systemId + 3) = 0;
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar5 = ReportDebugMessage(s_E____titans_Andrey_tplaysys_cpp_007c8430,0x18c,0,iVar4,&DAT_007a4ccc,
                             s_STPlaySystemC__InitSystem_007c84b8);
  if (iVar5 != 0) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return uVar6;
  }
  RaiseInternalException(iVar4,0,s_E____titans_Andrey_tplaysys_cpp_007c8430,0x18e);
  return 0xfffffffc;
}

