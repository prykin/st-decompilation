
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\pause.cpp
   PausePanelTy::InitPausePanel */

void __thiscall PausePanelTy::InitPausePanel(PausePanelTy *this)

{
  code *pcVar1;
  PausePanelTy *this_00;
  int iVar2;
  undefined4 *puVar3;
  LPSTR pCVar4;
  ushort *puVar5;
  uint *puVar6;
  ccFntTy *this_01;
  void *unaff_ESI;
  int iVar7;
  undefined4 uVar8;
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
    DAT_008016e0 = local_8;
    iVar2 = DAT_00806730 + -0x1c;
    *(int *)&local_8->field_0x3c = iVar2;
    this_01 = (ccFntTy *)((*(int *)&local_8->field_0x40 - iVar2) + DAT_00806730);
    local_8->field_0174 = this_01;
    puVar3 = ccFntTy::operator(this_01,0x19d,*(int *)(DAT_00802a28 + 0x28));
    *(undefined4 **)&this_00[1].field_0x4 = puVar3;
    puVar3[0x16] = 0;
    puVar3[0x17] = 0;
    iVar2 = 1;
    piVar9 = (int *)0x0;
    pCVar4 = thunk_FUN_00571240(s_BKG_PAUSE_007c74d8,0);
    puVar5 = cMf32::RecGet(DAT_00806790,1,pCVar4,piVar9,iVar2);
    puVar3 = *(undefined4 **)&this_00->field_0x68;
    *(ushort **)&this_00[1].field_0x8 = puVar5;
    thunk_FUN_00540760(puVar3,0,0,'\x01',(byte *)puVar5);
    ccFntTy::SetSurf(*(ccFntTy **)&this_00[1].field_0x4,*(int *)&this_00->field_0x68,0,0x52,2,0xd1,
                     0xc);
    iVar11 = -1;
    iVar10 = -1;
    uVar8 = 0;
    iVar7 = -1;
    iVar2 = -2;
    puVar6 = (uint *)FUN_006b0140(0x2716,DAT_00807618);
    ccFntTy::WrTxt(*(ccFntTy **)&this_00[1].field_0x4,puVar6,iVar2,iVar7,uVar8,iVar10,iVar11);
    pCVar4 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
    uVar8 = PanelTy::CreateBut((PanelTy *)this_00,0,1,0x115,0x8b,1,0,1,pCVar4,0xbfff,0xc000,0,0,0,
                               (char *)0x0,1);
    *(undefined4 *)&this_00[1].field_0xc = uVar8;
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

