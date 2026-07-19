
void __thiscall TradePanelTy::SetModeControls(TradePanelTy *this,char param_1)

{
  code *pcVar1;
  TradePanelTy *pTVar2;
  int iVar3;
  LPSTR pCVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  InternalExceptionFrame IStack_4c;
  TradePanelTy *pTStack_8;
  
  if (this[0x1bb] != (TradePanelTy)param_1) {
    this[0x1bb] = (TradePanelTy)param_1;
    IStack_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &IStack_4c;
    pTStack_8 = this;
    iVar3 = Library::MSVCRT::__setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    pTVar2 = pTStack_8;
    if (iVar3 == 0) {
      Library::DKW::WGR::FUN_006b55f0
                (*(undefined4 **)(pTStack_8 + 0x68),0,0xa6,0x31,*(int *)(pTStack_8 + 0x185),0,0xa6,
                 0x31,0x77,0x39);
      if (*(uint *)(pTVar2 + 0x1c8) != 0) {
        FUN_006e56b0(*(void **)(pTVar2 + 0xc),*(uint *)(pTVar2 + 0x1c8));
      }
      *(int *)(pTVar2 + 0x1c8) = 0;
      if (*(uint *)(pTVar2 + 0x1cc) != 0) {
        FUN_006e56b0(*(void **)(pTVar2 + 0xc),*(uint *)(pTVar2 + 0x1cc));
      }
      iVar3 = *(int *)pTVar2;
      uVar12 = 1;
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar7 = 0xb200;
      uVar6 = 0xb1ff;
      *(int *)(pTVar2 + 0x1cc) = 0;
      if (pTVar2[0x1bb] == (TradePanelTy)0x0) {
        pCVar4 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
        iVar5 = (**(code **)(iVar3 + 4))
                          (0,1,0xac,0x57,0,1,1,pCVar4,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
        uVar12 = 1;
        iVar3 = *(int *)pTVar2;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 0;
        uVar7 = 0xb202;
        uVar6 = 0xb201;
        *(int *)(pTVar2 + 0x1c8) = iVar5;
        pCVar4 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
        iVar3 = (**(code **)(iVar3 + 4))
                          (0,1,0xe5,0x57,0,1,1,pCVar4,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
        *(int *)(pTVar2 + 0x1cc) = iVar3;
      }
      else {
        pCVar4 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
        iVar3 = (**(code **)(iVar3 + 4))(0,1,0xca,0x57,0,1,1,pCVar4);
        *(int *)(pTVar2 + 0x1c8) = iVar3;
      }
      thunk_FUN_00551b10(pTVar2);
      g_currentExceptionFrame = IStack_4c.previous;
      return;
    }
    g_currentExceptionFrame = IStack_4c.previous;
    iVar5 = ReportDebugMessage(s_E____titans_Andrey_tradecen_cpp_007c8624,0x81,0,iVar3,&DAT_007a4ccc
                               ,s_TradePanelTy__SetModeControls_007c86b8);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Andrey_tradecen_cpp_007c8624,0x81);
  }
  return;
}

