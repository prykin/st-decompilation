
void __thiscall InfocPanelTy::DoneInfocPanel(InfocPanelTy *this)

{
  code *pcVar1;
  InfocPanelTy *pIVar2;
  int errorCode;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_4c;
  InfocPanelTy *pIStack_8;
  
  IStack_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_4c;
  pIStack_8 = this;
  errorCode = __setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pIVar2 = pIStack_8;
  if (errorCode == 0) {
    if (*(uint *)(pIStack_8 + 0x3d0) != 0) {
      FUN_006e56b0(*(void **)(pIStack_8 + 0xc),*(uint *)(pIStack_8 + 0x3d0));
    }
    *(undefined4 *)(pIVar2 + 0x3d0) = 0;
    if (*(uint **)(pIVar2 + 0x3d5) != (uint *)0x0) {
      FUN_00710560(*(uint **)(pIVar2 + 0x3d5));
      *(undefined4 *)(pIVar2 + 0x3d5) = 0;
    }
    *(undefined4 *)(pIVar2 + 0x3cc) = 0;
    *(undefined4 *)(pIVar2 + 0x3c8) = 0;
    *(undefined4 *)(pIVar2 + 0x3c4) = 0;
    DAT_00801698 = 0;
    g_currentExceptionFrame = IStack_4c.previous;
    return;
  }
  g_currentExceptionFrame = IStack_4c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_Andrey_infocen_cpp_007c3eb0,0x4f,0,errorCode,
                             &DAT_007a4ccc,s_InfocPanelTy__DoneInfocPanel_007c3f2c);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Andrey_infocen_cpp_007c3eb0,0x4f);
  return;
}

