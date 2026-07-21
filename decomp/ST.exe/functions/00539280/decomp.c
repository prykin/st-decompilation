
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\pause.cpp
   PausePanelTy::InitPausePanel */

void __thiscall PausePanelTy::InitPausePanel(PausePanelTy *this)

{
  code *pcVar1;
  PausePanelTy *this_00;
  int iVar2;
  LPSTR pCVar3;
  ushort *puVar4;
  uint *extraout_EAX;
  undefined4 uVar5;
  ccFntTy *pcVar6;
  void *unaff_ESI;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  InternalExceptionFrame *pIVar12;
  undefined4 local_48 [16];
  PausePanelTy *local_8;
  
  pIVar12 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar12);
  this_00 = local_8;
  if (iVar2 == 0) {
    g_pausePanel_008016E0 = local_8;
    iVar2 = g_nWidth_00806730 + -0x1c;
    local_8->field_003C = iVar2;
    pcVar6 = (ccFntTy *)((local_8->field_0040 - iVar2) + g_nWidth_00806730);
    local_8->field_0174 = pcVar6;
    pcVar6 = (ccFntTy *)ccFntTy::operator(pcVar6,0x19d,*(int *)&PTR_00802a28->field_0x28);
    this_00->field_017C = pcVar6;
    pcVar6->field_0058 = 0;
    pcVar6->field_005C = 0;
    iVar2 = 1;
    piVar9 = (int *)0x0;
    pCVar3 = thunk_FUN_00571240(s_BKG_PAUSE_007c74d8,0);
    puVar4 = cMf32::RecGet(DAT_00806790,1,pCVar3,piVar9,iVar2);
    this_00->field_0180 = puVar4;
    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0068,0,0,'\x01',(byte *)puVar4);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x52,2,0xd1,0xc);
    iVar11 = -1;
    iVar10 = -1;
    uVar8 = 0;
    iVar7 = -1;
    iVar2 = -2;
    LoadResourceString(0x2716,HINSTANCE_00807618);
    ccFntTy::WrTxt(this_00->field_017C,extraout_EAX,iVar2,iVar7,uVar8,iVar10,iVar11);
    pCVar3 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
    uVar5 = PanelTy::CreateBut((PanelTy *)this_00,0,1,0x115,0x8b,1,0,1,pCVar3,0xbfff,0xc000,0,0,0,
                               (char *)0x0,1);
    this_00->field_0184 = uVar5;
    g_currentExceptionFrame = pIVar12;
    return;
  }
  g_currentExceptionFrame = pIVar12;
  iVar7 = ReportDebugMessage(s_E____titans_Andrey_pause_cpp_007c7490,0x28,0,iVar2,&DAT_007a4ccc,
                             s_PausePanelTy__InitPausePanel_007c74b4);
  if (iVar7 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar2,0,s_E____titans_Andrey_pause_cpp_007c7490,0x28);
  return;
}

