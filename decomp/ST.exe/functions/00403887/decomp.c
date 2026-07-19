
void __thiscall OptPanelTy::DoneOptPanel(OptPanelTy *this)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  ccFntTy *extraout_ECX;
  ccFntTy *extraout_ECX_00;
  ccFntTy *extraout_ECX_01;
  ccFntTy *extraout_ECX_02;
  ccFntTy *extraout_ECX_03;
  ccFntTy *extraout_ECX_04;
  ccFntTy *extraout_ECX_05;
  ccFntTy *this_00;
  undefined4 unaff_ESI;
  OptPanelTy *pOVar4;
  void *unaff_EDI;
  OptPanelTy *pOVar5;
  InternalExceptionFrame IStack_4c;
  OptPanelTy *pOStack_8;
  
  IStack_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_4c;
  pOStack_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pOVar4 = pOStack_8;
  if (iVar2 == 0) {
    if (*(byte **)(pOStack_8 + 0x1e9) != (byte *)0x0) {
      FUN_006b5570(*(byte **)(pOStack_8 + 0x1e9));
      *(undefined4 *)(pOVar4 + 0x1e9) = 0;
    }
    if (*(byte **)(pOVar4 + 0x1ed) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(pOVar4 + 0x1ed));
      *(undefined4 *)(pOVar4 + 0x1ed) = 0;
    }
    if (*(byte **)(pOVar4 + 0x1f1) != (byte *)0x0) {
      FUN_006b5570(*(byte **)(pOVar4 + 0x1f1));
      *(undefined4 *)(pOVar4 + 0x1f1) = 0;
    }
    this_00 = (ccFntTy *)0x0;
    if (*(int *)(pOVar4 + 0x1e5) != 0) {
      FUN_006ab060((undefined4 *)(pOVar4 + 0x1e5));
      this_00 = extraout_ECX;
    }
    if (*(byte **)(pOVar4 + 0x2f9) != (byte *)0x0) {
      FUN_006b5570(*(byte **)(pOVar4 + 0x2f9));
      this_00 = extraout_ECX_00;
    }
    *(undefined4 *)(pOVar4 + 0x2f9) = 0;
    if (*(byte **)(pOVar4 + 0x2fd) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(pOVar4 + 0x2fd));
      this_00 = extraout_ECX_01;
    }
    *(undefined4 *)(pOVar4 + 0x2fd) = 0;
    if (*(HANDLE *)(pOVar4 + 0x1dd) != (HANDLE)0x0) {
      FindCloseChangeNotification(*(HANDLE *)(pOVar4 + 0x1dd));
      *(undefined4 *)(pOVar4 + 0x1dd) = 0;
      this_00 = extraout_ECX_02;
    }
    pOVar5 = pOVar4 + 0x1b5;
    iVar2 = 10;
    do {
      if (*(uint *)pOVar5 != 0) {
        FUN_006e56b0(*(void **)(pOVar4 + 0xc),*(uint *)pOVar5);
        this_00 = extraout_ECX_03;
      }
      *(uint *)pOVar5 = 0;
      pOVar5 = pOVar5 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    pOVar5 = pOVar4 + 0x1ad;
    iVar2 = 2;
    do {
      if (*(uint *)pOVar5 != 0) {
        FUN_006e56b0(*(void **)(pOVar4 + 0xc),*(uint *)pOVar5);
        this_00 = extraout_ECX_04;
      }
      *(uint *)pOVar5 = 0;
      pOVar5 = pOVar5 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    DAT_008016dc = 0;
    if (*(uint **)(pOVar4 + 0x17c) != (uint *)0x0) {
      ccFntTy::operator(this_00,*(uint **)(pOVar4 + 0x17c));
      *(undefined4 *)(pOVar4 + 0x17c) = 0;
      this_00 = extraout_ECX_05;
    }
    if (*(uint **)(pOVar4 + 0x180) != (uint *)0x0) {
      ccFntTy::operator(this_00,*(uint **)(pOVar4 + 0x180));
      *(undefined4 *)(pOVar4 + 0x180) = 0;
    }
    *(undefined4 *)(pOVar4 + 0x198) = 0;
    pOVar4 = pOVar4 + 0x184;
    iVar2 = 5;
    do {
      if (*(int *)pOVar4 != 0) {
        cMf32::RecMemFree(DAT_00806790,(uint *)pOVar4);
      }
      pOVar4 = pOVar4 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    g_currentExceptionFrame = IStack_4c.previous;
    return;
  }
  g_currentExceptionFrame = IStack_4c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_Andrey_optpanel_cpp_007c70a0,0x79,0,iVar2,&DAT_007a4ccc,
                             s_OptPanelTy__DoneOptPanel_007c714c);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar2,0,s_E____titans_Andrey_optpanel_cpp_007c70a0,0x79);
  return;
}

