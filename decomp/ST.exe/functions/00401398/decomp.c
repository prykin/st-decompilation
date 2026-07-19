
void __thiscall HelpPanelTy::DoneHelpPanel(HelpPanelTy *this)

{
  code *pcVar1;
  HelpPanelTy *pHVar2;
  int errorCode;
  int iVar3;
  ccFntTy *extraout_ECX;
  ccFntTy *extraout_ECX_00;
  ccFntTy *extraout_ECX_01;
  ccFntTy *extraout_ECX_02;
  ccFntTy *extraout_ECX_03;
  ccFntTy *extraout_ECX_04;
  ccFntTy *extraout_ECX_05;
  ccFntTy *extraout_ECX_06;
  ccFntTy *extraout_ECX_07;
  ccFntTy *extraout_ECX_08;
  ccFntTy *extraout_ECX_09;
  ccFntTy *extraout_ECX_10;
  ccFntTy *this_00;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  HelpPanelTy *pHVar4;
  InternalExceptionFrame IStack_50;
  HelpPanelTy *pHStack_c;
  int iStack_8;
  
  IStack_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_50;
  pHStack_c = this;
  errorCode = Library::MSVCRT::__setjmp3(IStack_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pHVar2 = pHStack_c;
  if (errorCode == 0) {
    this_00 = extraout_ECX;
    if (*(uint *)(pHStack_c + 0x17c) != 0) {
      FUN_006e56b0(*(void **)(pHStack_c + 0xc),*(uint *)(pHStack_c + 0x17c));
      this_00 = extraout_ECX_00;
    }
    *(undefined4 *)(pHVar2 + 0x17c) = 0;
    pHVar4 = pHVar2 + 0x180;
    iStack_8 = 7;
    do {
      if (*(uint *)pHVar4 != 0) {
        FUN_006e56b0(*(void **)(pHVar2 + 0xc),*(uint *)pHVar4);
        *(uint *)pHVar4 = 0;
        this_00 = extraout_ECX_01;
      }
      pHVar4 = pHVar4 + 4;
      iStack_8 = iStack_8 + -1;
    } while (iStack_8 != 0);
    if (*(uint *)(pHVar2 + 0x19c) != 0) {
      FUN_006e56b0(*(void **)(pHVar2 + 0xc),*(uint *)(pHVar2 + 0x19c));
      this_00 = extraout_ECX_02;
    }
    *(undefined4 *)(pHVar2 + 0x19c) = 0;
    if (*(byte **)(pHVar2 + 0x1b3) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(pHVar2 + 0x1b3));
      this_00 = extraout_ECX_03;
    }
    *(undefined4 *)(pHVar2 + 0x1b3) = 0;
    if (*(byte **)(pHVar2 + 0x1bb) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(pHVar2 + 0x1bb));
      this_00 = extraout_ECX_04;
    }
    *(undefined4 *)(pHVar2 + 0x1bb) = 0;
    if (*(byte **)(pHVar2 + 0x1cb) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(pHVar2 + 0x1cb));
      this_00 = extraout_ECX_05;
    }
    *(undefined4 *)(pHVar2 + 0x1cb) = 0;
    if (*(byte **)(pHVar2 + 0x1d7) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(pHVar2 + 0x1d7));
      this_00 = extraout_ECX_06;
    }
    *(undefined4 *)(pHVar2 + 0x1d7) = 0;
    if (*(byte **)(pHVar2 + 0x1d3) != (byte *)0x0) {
      FUN_006b5570(*(byte **)(pHVar2 + 0x1d3));
      this_00 = extraout_ECX_07;
    }
    *(undefined4 *)(pHVar2 + 0x1d3) = 0;
    pHVar4 = pHVar2 + 0x1f0;
    iStack_8 = 10;
    do {
      if (*(int *)pHVar4 != 0) {
        cMf32::RecMemFree(DAT_00806790,(uint *)pHVar4);
        this_00 = extraout_ECX_08;
      }
      pHVar4 = pHVar4 + 4;
      iStack_8 = iStack_8 + -1;
    } while (iStack_8 != 0);
    *(undefined4 *)(pHVar2 + 0x238) = 0;
    *(undefined4 *)(pHVar2 + 0x248) = 0;
    *(undefined4 *)(pHVar2 + 0x22c) = 0;
    *(undefined4 *)(pHVar2 + 0x228) = 0;
    *(undefined4 *)(pHVar2 + 0x234) = 0;
    *(undefined4 *)(pHVar2 + 0x230) = 0;
    *(undefined4 *)(pHVar2 + 0x224) = 0;
    *(undefined4 *)(pHVar2 + 0x220) = 0;
    *(undefined4 *)(pHVar2 + 0x244) = 0;
    *(undefined4 *)(pHVar2 + 0x240) = 0;
    *(undefined4 *)(pHVar2 + 0x23c) = 0;
    if (*(uint **)(pHVar2 + 0x1e0) != (uint *)0x0) {
      ccFntTy::operator(this_00,*(uint **)(pHVar2 + 0x1e0));
      *(undefined4 *)(pHVar2 + 0x1e0) = 0;
      this_00 = extraout_ECX_09;
    }
    if (*(uint **)(pHVar2 + 0x1e4) != (uint *)0x0) {
      ccFntTy::operator(this_00,*(uint **)(pHVar2 + 0x1e4));
      *(undefined4 *)(pHVar2 + 0x1e4) = 0;
      this_00 = extraout_ECX_10;
    }
    if (*(uint **)(pHVar2 + 0x1e8) != (uint *)0x0) {
      ccFntTy::operator(this_00,*(uint **)(pHVar2 + 0x1e8));
      *(undefined4 *)(pHVar2 + 0x1e8) = 0;
    }
    if (*(int *)(pHVar2 + 0x218) != 0) {
      FUN_006ab060((undefined4 *)(pHVar2 + 0x218));
    }
    if (*(int *)(pHVar2 + 0x1ec) != 0) {
      FUN_006ab060((undefined4 *)(pHVar2 + 0x1ec));
    }
    if (*(int *)(pHVar2 + 0x24c) != 0) {
      cMf32::RecMemFree(DAT_00806790,(uint *)(pHVar2 + 0x24c));
    }
    if (*(int *)(pHVar2 + 0x1dc) != 0) {
      cMf32::RecMemFree(DAT_00806790,(uint *)(pHVar2 + 0x1dc));
    }
    if (*(int *)(pHVar2 + 0x21c) != 0) {
      cMf32::RecMemFree(DAT_00806790,(uint *)(pHVar2 + 0x21c));
    }
    DAT_00801690 = 0;
    g_currentExceptionFrame = IStack_50.previous;
    return;
  }
  g_currentExceptionFrame = IStack_50.previous;
  iVar3 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0xcf,0,errorCode,
                             &DAT_007a4ccc,s_HelpPanelTy__DoneHelpPanel_007c3918);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Andrey_helppan_cpp_007c383c,0xcf);
  return;
}

