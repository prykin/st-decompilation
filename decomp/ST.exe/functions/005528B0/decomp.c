#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\upginfo.cpp
   UpgPanelTy::InitUpgPanel */

void __thiscall UpgPanelTy::InitUpgPanel(UpgPanelTy *this)

{
  UpgPanelTy *this_00;
  int iVar2;
  LPSTR pCVar2;
  ushort *puVar3;
  int iVar6;
  int iVar4;
  uint uVar5;
  int iVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  UINT UVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  InternalExceptionFrame local_4c;
  UpgPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 == 0) {
    uVar13 = 0x77;
    uVar12 = 0xc9;
    UVar11 = 0x36c1;
    iVar10 = 0xc;
    iVar7 = 0xc6;
    uVar5 = 2;
    iVar4 = 0x31;
    g_upgPanel_00802A48 = local_8;
    /* ST_CALLSITE[00552909]: CALL 0x0040577c; direct=0040577C thunk_FUN_00571240; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SpecPanelTy; source view only; no Ghidra override */
    pCVar2 = thunk_FUN_00571240("BKG_UPDATESW",0);
    /* ST_CALLSITE[00552914]: CALL 0x00403800; direct=00403800 SpecPanelTy::InitPanel */
    SpecPanelTy::InitPanel
              ((SpecPanelTy *)this_00,pCVar2,iVar4,uVar5,iVar7,iVar10,UVar11,uVar12,uVar13);
    puVar3 = Library::Ourlib::MFRLOAD::mfRLoad
                       (PTR_00806794,CASE_B,&DAT_007c20a0,0xffffffff,0,1,0,nullptr);
    this_00->field_03EB = puVar3;
    puVar3 = Library::Ourlib::MFRLOAD::mfRLoad
                       (PTR_00806794,CASE_B,&DAT_007c38c8,0xffffffff,0,1,0,nullptr);
    this_00->field_03EF = puVar3;
    puVar14 = nullptr;
    iVar7 = 0;
    iVar4 = 1;
    bVar9 = 0;
    uVar8 = 0xffffffff;
    /* ST_CALLSITE[00552972]: CALL 0x0040577c; direct=0040577C thunk_FUN_00571240; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/char; source view only; no Ghidra override */
    pCVar2 = thunk_FUN_00571240("FRAMES",0);
    puVar3 = Library::Ourlib::MFRLOAD::mfRLoad
                       (PTR_00806794,CASE_B,pCVar2,uVar8,bVar9,iVar4,iVar7,puVar14);
    this_00->field_03F3 = puVar3;
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

