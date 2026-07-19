
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\panel.cpp
   PanelTy::GetMessage */

undefined4 __thiscall PanelTy::GetMessage(PanelTy *this,int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  PanelTy *local_8;
  
  local_8 = this;
  uVar2 = FUN_006e51b0(*(int *)(this + 0x10));
  *(undefined4 *)(this + 0x38) = uVar2;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x10);
    if (iVar3 == 2) {
      InitPanel(local_8);
    }
    else if (iVar3 == 3) {
      DonePanel(local_8);
    }
    else if (iVar3 == 5) {
      Library::DKW::DDX::FUN_006b3640
                (DAT_008075a8,*(uint *)(local_8 + 0x60),0xffffffff,*(uint *)(local_8 + 0x3c),
                 *(uint *)(local_8 + 0x44));
    }
    g_currentExceptionFrame = local_4c.previous;
    uVar2 = FUN_006e5fd0();
    return uVar2;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Andrey_panel_cpp_007c7390,0x52,0,iVar3,&DAT_007a4ccc,
                             s_PanelTy__GetMessage_007c73e4);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_panel_cpp_007c7390,0x52);
  return 0xffff;
}

