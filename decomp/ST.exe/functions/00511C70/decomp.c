
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::ShiftControls */

void __thiscall HelpPanelTy::ShiftControls(HelpPanelTy *this,int param_1)

{
  code *pcVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  HelpPanelTy *pHVar5;
  HelpPanelTy *pHVar6;
  InternalExceptionFrame local_4c;
  HelpPanelTy *local_8;
  
  if (param_1 != *(int *)(this + 0x5c)) {
    *(int *)(this + 0x5c) = param_1;
    pHVar6 = this + 0x18;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pHVar6 = 0;
      pHVar6 = pHVar6 + 4;
    }
    sVar2 = (short)*(undefined4 *)(this + 0x174);
    *(undefined4 *)(this + 0x28) = 0x24;
    if (param_1 == 0) {
      sVar2 = -sVar2;
    }
    *(short *)(this + 0x2e) = sVar2;
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    pHVar6 = local_8;
    if (iVar4 == 0) {
      if (*(int *)(local_8 + 0x17c) != 0) {
        FUN_006e6080(local_8,2,*(int *)(local_8 + 0x17c),(undefined4 *)(local_8 + 0x18));
      }
      pHVar5 = pHVar6 + 0x180;
      iVar4 = 7;
      do {
        if (*(int *)pHVar5 != 0) {
          FUN_006e6080(pHVar6,2,*(int *)pHVar5,(undefined4 *)(pHVar6 + 0x18));
        }
        pHVar5 = pHVar5 + 4;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      if (*(int *)(pHVar6 + 0x19c) != 0) {
        FUN_006e6080(pHVar6,2,*(int *)(pHVar6 + 0x19c),(undefined4 *)(pHVar6 + 0x18));
        pHVar6 = pHVar6 + 0x18;
        for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined4 *)pHVar6 = 0;
          pHVar6 = pHVar6 + 4;
        }
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0xf2,0,iVar4,&DAT_007a4ccc,
                               s_HelpPanelTy__ShiftControls_007c3958);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Andrey_helppan_cpp_007c383c,0xf2);
  }
  return;
}

