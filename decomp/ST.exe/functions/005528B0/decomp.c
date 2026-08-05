#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\upginfo.cpp
   UpgPanelTy::InitUpgPanel */

void __thiscall UpgPanelTy::InitUpgPanel(UpgPanelTy *this)

{
  UpgPanelTy *this_00;
  int iVar2;
  LPSTR pCVar3;
  ushort *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  UINT UVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  InternalExceptionFrame local_4c;
  UpgPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 == 0) {
    uVar12 = 0x77;
    uVar11 = 0xc9;
    UVar10 = 0x36c1;
    iVar9 = 0xc;
    iVar6 = 0xc6;
    uVar5 = 2;
    iVar2 = 0x31;
    g_upgPanel_00802A48 = local_8;
    pCVar3 = thunk_FUN_00571240("BKG_UPDATESW",0);
    SpecPanelTy::InitPanel
              ((SpecPanelTy *)this_00,pCVar3,iVar2,uVar5,iVar6,iVar9,UVar10,uVar11,uVar12);
    puVar4 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,&DAT_007c20a0,0xffffffff,0,1,0,nullptr);
    this_00->field_03EB = puVar4;
    puVar4 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,&DAT_007c38c8,0xffffffff,0,1,0,nullptr);
    this_00->field_03EF = puVar4;
    puVar13 = nullptr;
    iVar6 = 0;
    iVar2 = 1;
    bVar8 = 0;
    uVar7 = 0xffffffff;
    pCVar3 = thunk_FUN_00571240("FRAMES",0);
    puVar4 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,pCVar3,uVar7,bVar8,iVar2,iVar6,puVar13);
    this_00->field_03F3 = puVar4;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar6 = ReportDebugMessage("E:\\__titans\\Andrey\\upginfo.cpp",0x1d,0,iVar2,"%s",
                             "UpgPanelTy::InitUpgPanel");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\Andrey\\upginfo.cpp",0x1d);
  return;
}

