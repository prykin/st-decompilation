
void __thiscall StartSystemTy::PaintBinDesc(StartSystemTy *this,int param_1)

{
  code *pcVar1;
  StartSystemTy *pSVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  undefined4 unaff_ESI;
  uint uVar7;
  void *unaff_EDI;
  InternalExceptionFrame IStack_54;
  StartSystemTy *pSStack_10;
  int iStack_c;
  int iStack_8;
  
  if ((((*(int *)(this + 0x544) != 0) && (*(int *)(this + 0x548) != 0)) &&
      (-1 < *(int *)(this + 0x540))) &&
     ((param_1 != 0 && (iStack_c = *(int *)(param_1 + 0x1c), iStack_c != 0)))) {
    iVar3 = *(int *)(this + 0x34);
    pSStack_10 = this;
    if (*(int *)(iVar3 + 0xa0) != 0) {
      FUN_00710790(iVar3);
    }
    iStack_8 = *(int *)(iVar3 + 0x8a);
    IStack_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &IStack_54;
    iVar3 = Library::MSVCRT::__setjmp3(IStack_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
    pSVar2 = pSStack_10;
    if (iVar3 == 0) {
      iVar3 = *(int *)(pSStack_10 + 0x544);
      FUN_006b4170(iVar3,0,0,0,*(int *)(iVar3 + 4),*(int *)(iVar3 + 8),0xff);
      uVar4 = (uint)*(ushort *)(param_1 + 0x16);
      uVar7 = uVar4;
      if ((int)uVar4 < (int)(*(int *)(iStack_c + 0x1e0) + uVar4)) {
        do {
          if ((int)uVar7 < *(int *)(*(int *)(pSVar2 + 0x548) + 8)) {
            puVar6 = *(uint **)(*(int *)(*(int *)(pSVar2 + 0x548) + 0x14) + uVar7 * 4);
          }
          else {
            puVar6 = (uint *)0x0;
          }
          if (puVar6 != (uint *)0x0) {
            ccFntTy::SetSurf(*(ccFntTy **)(pSVar2 + 0x34),*(int *)(pSVar2 + 0x544),0,0,
                             (uVar7 - uVar4) * iStack_8,*(int *)(*(int *)(pSVar2 + 0x544) + 4),
                             iStack_8);
            ccFntTy::WrStr(*(ccFntTy **)(pSVar2 + 0x34),puVar6,0,-1,0);
          }
          uVar7 = uVar7 + 1;
          uVar4 = (uint)*(ushort *)(param_1 + 0x16);
        } while ((int)uVar7 < (int)(*(int *)(iStack_c + 0x1e0) + uVar4));
      }
      FUN_006b35d0(DAT_008075a8,*(uint *)(pSVar2 + 0x540));
      g_currentExceptionFrame = IStack_54.previous;
      return;
    }
    g_currentExceptionFrame = IStack_54.previous;
    iVar5 = ReportDebugMessage(s_E____titans_Start_startsys_cpp_007cd718,0x3cb,0,iVar3,&DAT_007a4ccc
                               ,s_StartSystemTy__PaintBinDesc_007cd8e0);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Start_startsys_cpp_007cd718,0x3cb);
  }
  return;
}

