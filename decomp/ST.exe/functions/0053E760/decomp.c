
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   SpecPanelTy::SwitchPanel */

void __thiscall SpecPanelTy::SwitchPanel(SpecPanelTy *this,int param_1)

{
  short sVar1;
  code *pcVar2;
  SpecPanelTy *pSVar3;
  int errorCode;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  SpecPanelTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar3 = local_8;
  if (errorCode != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = ReportDebugMessage(s_E____titans_Andrey_specpan_cpp_007c7870,0x113,0,errorCode,
                               &DAT_007a4ccc,s_SpecPanelTy__SwitchPanel_007c7964);
    if (iVar4 == 0) {
      RaiseInternalException(errorCode,0,s_E____titans_Andrey_specpan_cpp_007c7870,0x113);
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
    if (*(int *)(local_8 + 0x178) != 0) {
      *(int *)(local_8 + 0x28) = 0x4202;
      *(undefined2 *)(local_8 + 0x2c) = 0;
      *(undefined2 *)(local_8 + 0x2e) = 2;
      *(int *)(local_8 + 0x30) = *(int *)(local_8 + 0x178);
      if (DAT_00802a30 != (undefined4 *)0x0) {
        (**(code **)*DAT_00802a30)(local_8 + 0x18);
      }
    }
    (**(code **)(*(int *)pSVar3 + 0x18))(0);
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
      CPanelTy::ShiftControls(DAT_00801688,*(int *)(pSVar3 + 0x180),0);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    if (sVar1 != 3) {
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
  }
  if (param_1 == 0) {
    *(undefined2 *)(pSVar3 + 0x172) = 4;
    thunk_FUN_005252c0(0xb0);
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

