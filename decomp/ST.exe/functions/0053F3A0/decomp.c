
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   ProdPanelTy::SwitchPanel */

void __thiscall ProdPanelTy::SwitchPanel(ProdPanelTy *this,int param_1)

{
  short sVar1;
  code *pcVar2;
  ProdPanelTy *pPVar3;
  int errorCode;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  ProdPanelTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pPVar3 = local_8;
  if (errorCode != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = ReportDebugMessage(s_E____titans_Andrey_specpan_cpp_007c7870,0x1bf,0,errorCode,
                               &DAT_007a4ccc,s_ProdPanelTy__SwitchPanel_007c7a40);
    if (iVar4 == 0) {
      RaiseInternalException(errorCode,0,s_E____titans_Andrey_specpan_cpp_007c7870,0x1bf);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  sVar1 = *(short *)(local_8 + 0x172);
  if (sVar1 == 1) {
    if (param_1 != 0) {
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    (**(code **)(*(int *)local_8 + 0x18))(0);
  }
  else {
    if (sVar1 == 2) {
      if (param_1 == 0) {
        g_currentExceptionFrame = local_4c.previous;
        return;
      }
      *(undefined2 *)(local_8 + 0x172) = 3;
      thunk_FUN_005252c0(0xaf);
      if (DAT_00801688 == (CPanelTy *)0x0) {
        g_currentExceptionFrame = local_4c.previous;
        return;
      }
      CPanelTy::ShiftControls(DAT_00801688,*(int *)(pPVar3 + 0x195),0);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    if (sVar1 != 3) {
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
  }
  if (param_1 == 0) {
    *(undefined2 *)(pPVar3 + 0x172) = 4;
    thunk_FUN_005252c0(0xb0);
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

