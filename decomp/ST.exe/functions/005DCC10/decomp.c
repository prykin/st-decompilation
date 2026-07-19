
/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::InitSystem */

undefined4 __thiscall StartSystemTy::InitSystem(StartSystemTy *this)

{
  code *pcVar1;
  int iVar2;
  LPSTR pCVar3;
  int iVar4;
  undefined4 uVar5;
  void *unaff_ESI;
  StartSystemTy *this_00;
  InternalExceptionFrame *in_stack_ffffff70;
  InternalExceptionFrame *pIVar6;
  undefined4 local_8c [16];
  InternalExceptionFrame local_4c;
  StartSystemTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_ESI,in_stack_ffffff70);
  this_00 = local_8;
  if (iVar2 == 0) {
    SystemClassTy::InitSystem((SystemClassTy *)local_8);
    pIVar6 = g_currentExceptionFrame;
    if (this_00->field_0028 != 0) {
      g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffff70;
      iVar2 = Library::MSVCRT::__setjmp3(local_8c,0,unaff_ESI,pIVar6);
      if (iVar2 == 0) {
        pCVar3 = FUN_006f2c00(s_MM_FLC_007cc938,2,0);
        iVar2 = cMf32::RecChk(DAT_00806780,0,pCVar3);
        g_currentExceptionFrame = pIVar6;
        this_00 = local_8;
        if (iVar2 != 0) {
          local_8->field_0028 = 0;
        }
      }
      else {
        g_currentExceptionFrame = pIVar6;
        local_8->field_0028 = 0;
        this_00 = local_8;
      }
    }
    thunk_FUN_005da7a0();
    LoadGraph(this_00);
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Start_startsys_cpp_007cd718,0x283,0,iVar2,&DAT_007a4ccc,
                             s_StartSystemTy__InitSystem_007cd82c);
  if (iVar4 == 0) {
    RaiseInternalException(iVar2,0,s_E____titans_Start_startsys_cpp_007cd718,0x283);
    return 0xfffffffc;
  }
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}

