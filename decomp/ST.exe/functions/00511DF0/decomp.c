
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::SwitchOptPanel */

void __thiscall HelpPanelTy::SwitchOptPanel(HelpPanelTy *this,int param_1)

{
  short sVar1;
  code *pcVar2;
  HelpPanelTy *this_00;
  int errorCode;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  HelpPanelTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (errorCode != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x10f,0,errorCode,
                               &DAT_007a4ccc,s_HelpPanelTy__SwitchOptPanel_007c3978);
    if (iVar3 == 0) {
      RaiseInternalException(errorCode,0,s_E____titans_Andrey_helppan_cpp_007c383c,0x10f);
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
      *(undefined4 *)(local_8 + 0x28) = 0x4202;
      *(undefined2 *)(local_8 + 0x2c) = 0;
      *(undefined2 *)(local_8 + 0x2e) = 2;
      *(int *)(local_8 + 0x30) = *(int *)(local_8 + 0x178);
      if (DAT_00802a30 != (undefined4 *)0x0) {
        (**(code **)*DAT_00802a30)(local_8 + 0x18);
      }
    }
    ShiftControls(this_00,0);
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
      CPanelTy::ShiftControls(DAT_00801688,0);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    if (sVar1 != 3) {
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
  }
  if (param_1 == 0) {
    *(undefined2 *)(this_00 + 0x172) = 4;
    thunk_FUN_005252c0(0xb0);
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

