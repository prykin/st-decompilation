
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\upginfo.cpp
   UpgPanelTy::InitUpgPanel */

void __thiscall UpgPanelTy::InitUpgPanel(UpgPanelTy *this)

{
  code *pcVar1;
  UpgPanelTy *this_00;
  int iVar2;
  LPSTR pCVar3;
  ushort *puVar4;
  void *unaff_ESI;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  UINT UVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  InternalExceptionFrame *pIVar14;
  undefined4 local_48 [16];
  UpgPanelTy *local_8;
  
  pIVar14 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar14);
  this_00 = local_8;
  if (iVar2 == 0) {
    uVar12 = 0x77;
    uVar11 = 0xc9;
    UVar10 = 0x36c1;
    iVar9 = 0xc;
    iVar2 = 0xc6;
    uVar6 = 2;
    uVar5 = 0x31;
    DAT_00802a48 = local_8;
    pCVar3 = thunk_FUN_00571240(s_BKG_UPDATESW_007c8800,0);
    SpecPanelTy::InitPanel
              ((SpecPanelTy *)this_00,pCVar3,uVar5,uVar6,iVar2,iVar9,UVar10,uVar11,uVar12);
    puVar4 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,&DAT_007c20a0,0xffffffff,0,1,0,(undefined4 *)0x0);
    this_00->field_03EB = puVar4;
    puVar4 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,&DAT_007c38c8,0xffffffff,0,1,0,(undefined4 *)0x0);
    this_00->field_03EF = puVar4;
    puVar13 = (undefined4 *)0x0;
    iVar9 = 0;
    iVar2 = 1;
    bVar8 = 0;
    uVar7 = 0xffffffff;
    pCVar3 = thunk_FUN_00571240(s_FRAMES_007c205c,0);
    puVar4 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,pCVar3,uVar7,bVar8,iVar2,iVar9,puVar13);
    this_00->field_03F3 = puVar4;
    g_currentExceptionFrame = pIVar14;
    return;
  }
  g_currentExceptionFrame = pIVar14;
  iVar9 = ReportDebugMessage(s_E____titans_Andrey_upginfo_cpp_007c87b8,0x1d,0,iVar2,&DAT_007a4ccc,
                             s_UpgPanelTy__InitUpgPanel_007c87e0);
  if (iVar9 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar2,0,s_E____titans_Andrey_upginfo_cpp_007c87b8,0x1d);
  return;
}

