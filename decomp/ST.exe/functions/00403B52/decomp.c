
void __thiscall cLoadingTy::ShowScr(cLoadingTy *this,int param_1,int param_2)

{
  code *pcVar1;
  cLoadingTy *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar5;
  undefined4 auStack_44c [256];
  InternalExceptionFrame IStack_4c;
  cLoadingTy *pcStack_8;
  
  puVar5 = auStack_44c;
  pcStack_8 = this;
  for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  IStack_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_4c;
  iVar4 = Library::MSVCRT::__setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 == 0) {
    FUN_006b0a20(DAT_0080759c,(int)auStack_44c,0,0x100,0);
    FUN_006b5f80(DAT_008075a8,0,0,DAT_00806730,DAT_00806734);
    pcVar2 = pcStack_8;
    FUN_006b4640((uint)DAT_0080759c,0,0,*(BITMAPINFO **)pcStack_8,(uint *)0x0);
    Library::DKW::DDX::FUN_006bb370((int)DAT_0080759c,0,0);
    thunk_FUN_0055ddf0(DAT_0080759c,DAT_008075a8,*(int *)pcVar2,param_1,param_2);
    g_currentExceptionFrame = IStack_4c.previous;
    return;
  }
  g_currentExceptionFrame = IStack_4c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_grig_loading_cpp_007c8f0c,0x7b,0,iVar4,&DAT_007a4ccc,
                             s_cLoadingTy__ShowScr_007c8f48);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar4,0,s_E____titans_grig_loading_cpp_007c8f0c,0x7c);
  return;
}

