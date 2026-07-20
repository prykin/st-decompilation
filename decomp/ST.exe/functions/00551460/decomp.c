
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tradecen.cpp
   TradePanelTy::SetModeControls */

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
  undefined4 uVar13;
  InternalExceptionFrame local_4c;
  TradePanelTy *local_8;
  
  if (this->field_01BB != param_1) {
    this->field_01BB = param_1;
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    pTVar2 = local_8;
    if (iVar3 == 0) {
      Library::DKW::WGR::FUN_006b55f0
                ((undefined4 *)local_8->field_0068,0,0xa6,0x31,(byte *)local_8->field_0185,0,0xa6,
                 0x31,0x77,0x39);
      if (pTVar2->field_01C8 != 0) {
        StartSystemTy::sub_006E56B0(pTVar2->field_000C,pTVar2->field_01C8);
      }
      pTVar2->field_01C8 = 0;
      if (pTVar2->field_01CC != 0) {
        StartSystemTy::sub_006E56B0(pTVar2->field_000C,pTVar2->field_01CC);
      }
      iVar3 = pTVar2->field_0000;
      uVar13 = 1;
      uVar12 = 0;
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0xb200;
      uVar7 = 0xb1ff;
      pTVar2->field_01CC = 0;
      if (pTVar2->field_01BB == '\0') {
        pCVar4 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
        uVar7 = (**(code **)(iVar3 + 4))
                          (0,1,0xac,0x57,0,1,1,pCVar4,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13)
        ;
        uVar6 = 1;
        iVar3 = pTVar2->field_0000;
        uVar13 = 0;
        uVar12 = 0;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0xb202;
        uVar8 = 0xb201;
        pTVar2->field_01C8 = uVar7;
        pCVar4 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
        uVar7 = (**(code **)(iVar3 + 4))
                          (0,1,0xe5,0x57,0,1,1,pCVar4,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,uVar6)
        ;
        pTVar2->field_01CC = uVar7;
      }
      else {
        pCVar4 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
        uVar7 = (**(code **)(iVar3 + 4))(0,1,0xca,0x57,0,1,1,pCVar4);
        pTVar2->field_01C8 = uVar7;
      }
      thunk_FUN_00551b10((AnonShape_00551B10_03263458 *)pTVar2);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
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

