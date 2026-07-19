
void __thiscall BehPanelTy::DoneBehPanel(BehPanelTy *this)

{
  code *pcVar1;
  BehPanelTy *pBVar2;
  int errorCode;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_4c;
  BehPanelTy *pBStack_8;
  
  IStack_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_4c;
  pBStack_8 = this;
  errorCode = __setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pBVar2 = pBStack_8;
  if (errorCode == 0) {
    if (*(uint *)(pBStack_8 + 0x1be) != 0) {
      FUN_006e56b0(*(void **)(pBStack_8 + 0xc),*(uint *)(pBStack_8 + 0x1be));
    }
    *(undefined4 *)(pBVar2 + 0x1be) = 0;
    if (*(uint *)(pBVar2 + 0x1c2) != 0) {
      FUN_006e56b0(*(void **)(pBVar2 + 0xc),*(uint *)(pBVar2 + 0x1c2));
    }
    *(undefined4 *)(pBVar2 + 0x1c2) = 0;
    if (*(uint *)(pBVar2 + 0x1c6) != 0) {
      FUN_006e56b0(*(void **)(pBVar2 + 0xc),*(uint *)(pBVar2 + 0x1c6));
    }
    *(undefined4 *)(pBVar2 + 0x1c6) = 0;
    if (*(uint *)(pBVar2 + 0x1ca) != 0) {
      FUN_006e56b0(*(void **)(pBVar2 + 0xc),*(uint *)(pBVar2 + 0x1ca));
    }
    *(undefined4 *)(pBVar2 + 0x1ca) = 0;
    *(undefined4 *)(pBVar2 + 0x2b8) = 0;
    DAT_00801678 = 0;
    g_currentExceptionFrame = IStack_4c.previous;
    return;
  }
  g_currentExceptionFrame = IStack_4c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_Andrey_behpanel_cpp_007c1694,0x77,0,errorCode,
                             &DAT_007a4ccc,s_BehPanelTy__DoneBehPanel_007c1718);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Andrey_behpanel_cpp_007c1694,0x77);
  return;
}

