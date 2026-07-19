
void __thiscall cLoadingTy::DrawLineCR(cLoadingTy *this,uint *param_1)

{
  code *pcVar1;
  cLoadingTy *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_4c;
  cLoadingTy *pcStack_8;
  
  pcStack_8 = this;
  thunk_FUN_00555570((int)this);
  IStack_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_4c;
  iVar3 = __setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pcVar2 = pcStack_8;
  if (iVar3 == 0) {
    thunk_FUN_00555680(pcStack_8,(char *)param_1);
    FUN_006b4170(*(int *)(pcVar2 + 4),0,*(int *)(pcVar2 + 0x14) + *(int *)(pcVar2 + 0xc),
                 *(int *)(pcVar2 + 0x10) + *(int *)(pcVar2 + 0x18),*(int *)(pcVar2 + 0x1c),
                 *(int *)(pcVar2 + 0x34),0);
    ccFntTy::WrStr(*(ccFntTy **)(pcVar2 + 8),param_1,*(int *)(pcVar2 + 0xc),*(int *)(pcVar2 + 0x10),
                   *(undefined4 *)(pcVar2 + 0x24));
    FUN_006b42d0((uint)DAT_0080759c,*(int *)(pcVar2 + 0x14) + *(int *)(pcVar2 + 0xc),
                 *(int *)(pcVar2 + 0x18) + *(int *)(pcVar2 + 0x10),*(BITMAPINFO **)pcVar2,
                 (uint *)0x0,*(int *)(pcVar2 + 0x14) + *(int *)(pcVar2 + 0xc),
                 *(int *)(pcVar2 + 0x18) + *(int *)(pcVar2 + 0x10),*(DWORD *)(pcVar2 + 0x1c),
                 *(DWORD *)(pcVar2 + 0x34));
    FUN_006b4680(DAT_0080759c,*(int *)(pcVar2 + 0x14) + *(int *)(pcVar2 + 0xc),
                 *(int *)(pcVar2 + 0x10) + *(int *)(pcVar2 + 0x18),*(BITMAPINFO **)(pcVar2 + 4),
                 (uint *)0x0,*(int *)(pcVar2 + 0x14) + *(int *)(pcVar2 + 0xc),
                 *(int *)(pcVar2 + 0x10) + *(int *)(pcVar2 + 0x18),*(DWORD *)(pcVar2 + 0x1c),
                 *(DWORD *)(pcVar2 + 0x34),0);
    iVar3 = *(int *)(pcVar2 + 0x38);
    *(int *)(pcVar2 + 0x38) = iVar3 + 1;
    if (iVar3 + 1 < *(int *)(pcVar2 + 0x30)) {
      *(int *)(pcVar2 + 0x10) = *(int *)(pcVar2 + 0x10) + *(int *)(pcVar2 + 0x34);
    }
    else {
      FUN_006b55f0(*(undefined4 **)(pcVar2 + 4),0,*(int *)(pcVar2 + 0x14),*(int *)(pcVar2 + 0x18),
                   (int)*(undefined4 **)(pcVar2 + 4),0,*(int *)(pcVar2 + 0x14),
                   *(int *)(pcVar2 + 0x34) + *(int *)(pcVar2 + 0x18),*(int *)(pcVar2 + 0x1c),
                   *(int *)(pcVar2 + 0x20) - *(int *)(pcVar2 + 0x34));
      FUN_006b4170(*(int *)(pcVar2 + 4),0,*(int *)(pcVar2 + 0x14) + *(int *)(pcVar2 + 0xc),
                   *(int *)(pcVar2 + 0x10) + *(int *)(pcVar2 + 0x18),*(int *)(pcVar2 + 0x1c),
                   *(int *)(pcVar2 + 0x34),0);
      FUN_006b42d0((uint)DAT_0080759c,*(int *)(pcVar2 + 0x14),*(int *)(pcVar2 + 0x18),
                   *(BITMAPINFO **)pcVar2,(uint *)0x0,*(int *)(pcVar2 + 0x14),
                   *(int *)(pcVar2 + 0x18),*(DWORD *)(pcVar2 + 0x1c),*(DWORD *)(pcVar2 + 0x20));
      FUN_006b4680(DAT_0080759c,*(int *)(pcVar2 + 0x14),*(int *)(pcVar2 + 0x18),
                   *(BITMAPINFO **)(pcVar2 + 4),(uint *)0x0,*(int *)(pcVar2 + 0x14),
                   *(int *)(pcVar2 + 0x18),*(DWORD *)(pcVar2 + 0x1c),*(DWORD *)(pcVar2 + 0x20),0);
    }
    FUN_006bb370((int)DAT_0080759c,0,0);
    if (*(code **)(pcVar2 + 0x58) != (code *)0x0) {
      (**(code **)(pcVar2 + 0x58))(*(undefined4 *)(pcVar2 + 0x54));
    }
    g_currentExceptionFrame = IStack_4c.previous;
    return;
  }
  g_currentExceptionFrame = IStack_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_grig_loading_cpp_007c8f0c,0xf2,0,iVar3,&DAT_007a4ccc,
                             s_cLoadingTy__DrawLineCR_007c8f98);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_grig_loading_cpp_007c8f0c,0xf3);
  return;
}

