
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   ProdPanelTy::ShiftControls */

void __thiscall ProdPanelTy::ShiftControls(ProdPanelTy *this,int param_1)

{
  code *pcVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  ProdPanelTy *pPVar6;
  ProdPanelTy *pPVar7;
  InternalExceptionFrame local_4c;
  ProdPanelTy *local_8;
  
  if (param_1 != *(int *)(this + 0x5c)) {
    *(int *)(this + 0x5c) = param_1;
    pPVar6 = this + 0x18;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pPVar6 = 0;
      pPVar6 = pPVar6 + 4;
    }
    sVar2 = (short)*(undefined4 *)(this + 0x174);
    *(undefined4 *)(this + 0x28) = 0x24;
    if (param_1 != 0) {
      sVar2 = -sVar2;
    }
    *(short *)(this + 0x2e) = sVar2;
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    iVar5 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    pPVar6 = local_8;
    if (iVar5 == 0) {
      if (*(int *)(local_8 + 0x180) != 0) {
        FUN_006e6080(local_8,2,*(int *)(local_8 + 0x180),(undefined4 *)(local_8 + 0x18));
      }
      if (*(int *)(pPVar6 + 0x19d) != 0) {
        FUN_006e6080(pPVar6,2,*(int *)(pPVar6 + 0x19d),(undefined4 *)(pPVar6 + 0x18));
      }
      pPVar7 = pPVar6 + 0x1a1;
      iVar5 = 5;
      do {
        if (*(int *)pPVar7 != 0) {
          FUN_006e6080(pPVar6,2,*(int *)pPVar7,(undefined4 *)(pPVar6 + 0x18));
        }
        pPVar7 = pPVar7 + 4;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      if ((param_1 == 0) || (uVar3 = 0x55, DAT_0080734c == '\0')) {
        uVar3 = 0x56;
      }
      *(undefined4 *)(pPVar6 + 0x28) = uVar3;
      if (*(int *)(pPVar6 + 0x19d) != 0) {
        FUN_006e6080(pPVar6,2,*(int *)(pPVar6 + 0x19d),(undefined4 *)(pPVar6 + 0x18));
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = ReportDebugMessage(s_E____titans_Andrey_specpan_cpp_007c7870,0x1ff,0,iVar5,&DAT_007a4ccc
                               ,s_ProdPanelTy__ShiftControls_007c7a7c);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar5,0,s_E____titans_Andrey_specpan_cpp_007c7870,0x1ff);
  }
  return;
}

