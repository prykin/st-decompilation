
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::ShiftControls */

undefined4 __thiscall CPanelTy::ShiftControls(CPanelTy *this,int param_1)

{
  code *pcVar1;
  CPanelTy *this_00;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  CPanelTy *pCVar5;
  InternalExceptionFrame local_4c;
  CPanelTy *local_8;
  
  if (param_1 == *(int *)(this + 0x130)) {
    return 0;
  }
  *(int *)(this + 0x130) = param_1;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar2 == 0) {
    ShiftControls(local_8,1,param_1);
    ShiftControls(this_00,0,param_1);
    pCVar5 = this_00 + 0x9a4;
    iVar2 = 7;
    do {
      if (*(int *)pCVar5 != 0) {
        FUN_006e6080(this_00,2,*(int *)pCVar5,(undefined4 *)(this_00 + 0x18));
      }
      pCVar5 = pCVar5 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    pCVar5 = this_00 + 0x9c0;
    iVar2 = 2;
    do {
      if (*(int *)pCVar5 != 0) {
        FUN_006e6080(this_00,2,*(int *)pCVar5,(undefined4 *)(this_00 + 0x18));
      }
      pCVar5 = pCVar5 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    g_currentExceptionFrame = local_4c.previous;
    return 1;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x42b,0,iVar2,&DAT_007a4ccc,
                             s_CPanelTy__ShiftControls_007c22a0);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  RaiseInternalException(iVar2,0,s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x42b);
  return 1;
}

