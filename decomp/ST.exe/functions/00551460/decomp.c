
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tradecen.cpp
   TradePanelTy::SetModeControls */

void __thiscall TradePanelTy::SetModeControls(TradePanelTy *this,char param_1)

{
  char cVar1;
  code *pcVar2;
  TradePanelTy *pTVar3;
  int iVar4;
  LPSTR pCVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  InternalExceptionFrame local_4c;
  TradePanelTy *local_8;
  
  if (this->field_01BB != param_1) {
    this->field_01BB = param_1;
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    pTVar3 = local_8;
    if (iVar4 == 0) {
      Library::DKW::WGR::FUN_006b55f0
                (*(undefined4 **)&local_8->field_0x68,0,0xa6,0x31,*(int *)&local_8->field_0x185,0,
                 0xa6,0x31,0x77,0x39);
      if (*(uint *)&pTVar3[1].field_0xc != 0) {
        FUN_006e56b0(*(void **)&pTVar3->field_0xc,*(uint *)&pTVar3[1].field_0xc);
      }
      *(undefined4 *)&pTVar3[1].field_0xc = 0;
      if (*(uint *)&pTVar3[1].field_0x10 != 0) {
        FUN_006e56b0(*(void **)&pTVar3->field_0xc,*(uint *)&pTVar3[1].field_0x10);
      }
      cVar1 = pTVar3->field_01BB;
      iVar4 = *(int *)pTVar3;
      uVar14 = 1;
      uVar13 = 0;
      uVar12 = 0;
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0xb200;
      uVar8 = 0xb1ff;
      *(undefined4 *)&pTVar3[1].field_0x10 = 0;
      if (cVar1 == '\0') {
        pCVar5 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
        uVar8 = (**(code **)(iVar4 + 4))
                          (0,1,0xac,0x57,0,1,1,pCVar5,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,uVar14
                          );
        uVar7 = 1;
        iVar4 = *(int *)pTVar3;
        uVar14 = 0;
        uVar13 = 0;
        uVar12 = 0;
        uVar11 = 0;
        uVar10 = 0xb202;
        uVar9 = 0xb201;
        *(undefined4 *)&pTVar3[1].field_0xc = uVar8;
        pCVar5 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
        uVar8 = (**(code **)(iVar4 + 4))
                          (0,1,0xe5,0x57,0,1,1,pCVar5,uVar9,uVar10,uVar11,uVar12,uVar13,uVar14,uVar7
                          );
        *(undefined4 *)&pTVar3[1].field_0x10 = uVar8;
      }
      else {
        pCVar5 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
        uVar8 = (**(code **)(iVar4 + 4))(0,1,0xca,0x57,0,1,1,pCVar5);
        *(undefined4 *)&pTVar3[1].field_0xc = uVar8;
      }
      thunk_FUN_00551b10(pTVar3);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Andrey_tradecen_cpp_007c8624,0x81,0,iVar4,&DAT_007a4ccc
                               ,s_TradePanelTy__SetModeControls_007c86b8);
    if (iVar6 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Andrey_tradecen_cpp_007c8624,0x81);
  }
  return;
}

