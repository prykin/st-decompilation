#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel1.cpp
   CPanelTy::Update5Panel */

void __thiscall CPanelTy::Update5Panel(CPanelTy *this)

{
  byte *puVar1;
  char cVar2;
  CPanelTy *this_00;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *puVar8;
  byte *pbVar9;
  char *pcVar10;
  byte *pbVar11;
  char *pcVar12;
  bool bVar13;
  InternalExceptionFrame local_88;
  char local_44;
  char local_43;
  char local_42;
  int local_41;
  char local_3d;
  int local_3c;
  byte local_38 [15];
  char local_29;
  char local_28;
  char local_27;
  short local_26;
  short local_24;
  short local_22;
  short local_20;
  short local_1e;
  short local_1c;
  char local_1a [14];
  CPanelTy *local_c;
  byte local_8;
  undefined3 uStack_7;

  local_88.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_88;
  local_c = this;

  iVar5 = Library::MSVCRT::__setjmp3(local_88.jumpBuffer,0);
  this_00 = local_c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_88.previous;

    iVar6 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel1.cpp",0x1c2,0,iVar5,"%s"
                               ,"CPanelTy::Update5Panel");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar5,0,"E:\\__titans\\Andrey\\cpanel1.cpp",0x1c2);
    return;
  }
  puVar1 = &local_c->field_0C51;
  puVar8 = (byte *)puVar1;
  pcVar10 = &local_44;
  memmove(pcVar10, puVar8, 0x36); /* compiler REP MOVS byte copy */
  memset((void *)puVar1, 0, 0x32); /* compiler bulk-zero initialization */
  /* ST_CALLSITE[004FFEF9]: CALL 0x004035bc; direct=004035BC STAllPlayersC::GetPanelInfo */
  STAllPlayersC::GetPanelInfo
            (g_allPlayers_007FA174,5,(RecoveredRecordView_0043BEB0_8330D129 *)puVar1);
  if (local_44 != this_00->field_0C51) {
    if (g_researchPanel_008016E8 != nullptr) {
      /* ST_CALLSITE[004FFF17]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
      ProdPanelTy::SetPanel(g_researchPanel_008016E8,'\0');
    }
    if (g_bldBoatPanel_0080167C != nullptr) {
      /* ST_CALLSITE[004FFF28]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
      ProdPanelTy::SetPanel(g_bldBoatPanel_0080167C,'\0');
    }
    if (g_infocPanel_00801698 != nullptr) {
      /* ST_CALLSITE[004FFF3B]: CALL dword ptr [EDX + 0x1c] */
      (*g_infocPanel_00801698->vtable->SetPanel)((SpecPanelTy *)g_infocPanel_00801698,'\0');
    }
    if (g_tradePanel_00802A44 != nullptr) {
      /* ST_CALLSITE[004FFF4C]: CALL 0x00404af7; direct=00404AF7 TradePanelTy::sub_00552160 */
      TradePanelTy::sub_00552160(g_tradePanel_00802A44,'\0','\0');
    }
    if (g_bldLabPanel_00801680 != nullptr) {
      /* ST_CALLSITE[004FFF5D]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
      ProdPanelTy::SetPanel(g_bldLabPanel_00801680,'\0');
    }
    /* ST_CALLSITE[004FFF66]: CALL 0x00401c44; direct=00401C44 CPanelTy::SwitchTV */
    SwitchTV(this_00,0);
    /* ST_CALLSITE[004FFF6D]: CALL 0x004034fe; direct=004034FE CPanelTy::PaintInfoObj */
    PaintInfoObj(this_00);
    g_currentExceptionFrame = local_88.previous;
    return;
  }
  if (this_00->field_0C6E != local_27) {
    if (g_researchPanel_008016E8 != nullptr) {
      /* ST_CALLSITE[004FFF9E]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
      ProdPanelTy::SetPanel(g_researchPanel_008016E8,'\0');
    }
    if (g_bldBoatPanel_0080167C != nullptr) {
      /* ST_CALLSITE[004FFFAF]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
      ProdPanelTy::SetPanel(g_bldBoatPanel_0080167C,'\0');
    }
    if (g_infocPanel_00801698 != nullptr) {
      /* ST_CALLSITE[004FFFC2]: CALL dword ptr [EDX + 0x1c] */
      (*g_infocPanel_00801698->vtable->SetPanel)((SpecPanelTy *)g_infocPanel_00801698,'\0');
    }
    if (g_tradePanel_00802A44 != nullptr) {
      /* ST_CALLSITE[004FFFD3]: CALL 0x00404af7; direct=00404AF7 TradePanelTy::sub_00552160 */
      TradePanelTy::sub_00552160(g_tradePanel_00802A44,'\0','\0');
    }
    if (g_bldLabPanel_00801680 != nullptr) {
      /* ST_CALLSITE[004FFFE4]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
      ProdPanelTy::SetPanel(g_bldLabPanel_00801680,'\0');
    }
  }
  cVar2 = this_00->field_0C51;
  if (((cVar2 == '\x01') || (cVar2 == '\x04')) || (cVar2 == '\x03')) {
    if (((local_3c != this_00->field_0C59) || (local_43 != this_00->field_0C52)) ||
       (local_42 != this_00->field_0C53)) {
      if (g_researchPanel_008016E8 != nullptr) {
        /* ST_CALLSITE[00500032]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
        ProdPanelTy::SetPanel(g_researchPanel_008016E8,'\0');
      }
      if (g_bldBoatPanel_0080167C != nullptr) {
        /* ST_CALLSITE[00500043]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
        ProdPanelTy::SetPanel(g_bldBoatPanel_0080167C,'\0');
      }
      if (g_infocPanel_00801698 != nullptr) {
        /* ST_CALLSITE[00500056]: CALL dword ptr [EAX + 0x1c] */
        (*g_infocPanel_00801698->vtable->SetPanel)((SpecPanelTy *)g_infocPanel_00801698,'\0');
      }
      if (g_tradePanel_00802A44 != nullptr) {
        /* ST_CALLSITE[00500067]: CALL 0x00404af7; direct=00404AF7 TradePanelTy::sub_00552160 */
        TradePanelTy::sub_00552160(g_tradePanel_00802A44,'\0','\0');
      }
      if (g_bldLabPanel_00801680 != nullptr) {
        /* ST_CALLSITE[00500078]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
        ProdPanelTy::SetPanel(g_bldLabPanel_00801680,'\0');
      }
      /* ST_CALLSITE[00500081]: CALL 0x00401c44; direct=00401C44 CPanelTy::SwitchTV */
      SwitchTV(this_00,0);
    }
    if ((local_41 != this_00->field_0C54) || (local_3d != this_00->field_0C58)) {

      Library::DKW::WGR::FUN_006b55f0
                ((RecoveredSourceFamily_dibcopy *)this_00->field_019C,0,1,0,
                 (RecoveredRecordView_006B84D0_87AF9D9B *)this_00->field_0B47,0,1,0,0x4e,0x20);
      /* ST_CALLSITE[005000C7]: CALL 0x004048c7; direct=004048C7 CPanelTy::PaintName */
      PaintName(this_00,0);
      if (-1 < (int)this_00->field_0148[7]) {

        Library::DKW::DDX::FUN_006b3640
                  ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[7],0xffffffff,
                   this_00->field_0058,this_00->field_00B0);
      }
    }
    pbVar11 = &this_00->field_0C5D;
    pbVar9 = local_38;
    do {
      bVar4 = *pbVar9;
      bVar13 = bVar4 < *pbVar11;
      if (bVar4 != *pbVar11) {
LAB_00500121:
        iVar7 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
        goto LAB_00500126;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar9[1];
      bVar13 = bVar4 < pbVar11[1];
      if (bVar4 != pbVar11[1]) goto LAB_00500121;
      pbVar9 = pbVar9 + 2;
      pbVar11 = pbVar11 + 2;
    } while (bVar4 != 0);
    iVar7 = 0;
LAB_00500126:
    if (iVar7 != 0) {

      Library::DKW::WGR::FUN_006b55f0
                ((RecoveredSourceFamily_dibcopy *)this_00->field_019C,0,1,0,
                 (RecoveredRecordView_006B84D0_87AF9D9B *)this_00->field_0B47,0,1,0,0x4e,0x20);
      /* ST_CALLSITE[00500151]: CALL 0x004048c7; direct=004048C7 CPanelTy::PaintName */
      PaintName(this_00,0);
      if (-1 < (int)this_00->field_0148[7]) {

        Library::DKW::DDX::FUN_006b3640
                  ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[7],0xffffffff,
                   this_00->field_0058,this_00->field_00B0);
      }
    }
    if ((((local_29 != this_00->field_0C6C) || (local_42 != this_00->field_0C53)) &&
        (iVar7 = this_00->field_0C54, iVar7 != 0xdd)) && ((iVar7 != 0xde && (iVar7 != 0xe0)))) {

      Library::DKW::WGR::FUN_006b55f0
                ((RecoveredSourceFamily_dibcopy *)this_00->field_019C,0,1,0x1f,
                 (RecoveredRecordView_006B84D0_87AF9D9B *)this_00->field_0B47,0,1,0x1f,0x4e,0x11);
      /* ST_CALLSITE[005001D6]: CALL 0x004019c4; direct=004019C4 CPanelTy::PaintLife */
      PaintLife(this_00,0);
      if (-1 < (int)this_00->field_0148[7]) {

        Library::DKW::DDX::FUN_006b3640
                  ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[7],0xffffffff,
                   this_00->field_0058,this_00->field_00B0);
      }
    }
    if (((DAT_0080874e == '\x03') && (this_00->field_0C58 == '\x03')) &&
       ((local_28 != this_00->field_0C6D &&
        (((iVar7 = this_00->field_0C54, iVar7 != 0xdd && (iVar7 != 0xde)) && (iVar7 != 0xe0)))))) {
      /* ST_CALLSITE[0050023C]: CALL 0x00402667; direct=00402667 CPanelTy::PaintEnergy */
      PaintEnergy(this_00,0);
    }
    if (((((local_26 != this_00->field_0C6F) || (local_22 != this_00->field_0C73)) ||
         ((local_1e != this_00->field_0C77 ||
          ((local_24 != this_00->field_0C71 || (local_20 != this_00->field_0C75)))))) ||
        (local_1c != this_00->field_0C79)) &&
       (((iVar7 = this_00->field_0C54, iVar7 != 0xdd && (iVar7 != 0xde)) && (iVar7 != 0xe0)))) {

      Library::DKW::WGR::FUN_006b55f0
                ((RecoveredSourceFamily_dibcopy *)this_00->field_019C,0,1,0x2f,
                 (RecoveredRecordView_006B84D0_87AF9D9B *)this_00->field_0B47,0,1,0x2f,0x4e,0x24);
      /* ST_CALLSITE[005002D1]: CALL 0x00402694; direct=00402694 CPanelTy::PaintWeap */
      PaintWeap(this_00,0);
      if (-1 < (int)this_00->field_0148[7]) {

        Library::DKW::DDX::FUN_006b3640
                  ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[7],0xffffffff,
                   this_00->field_0058,this_00->field_00B0);
      }
    }
    iVar7 = 5;
    bVar13 = true;
    pcVar10 = local_1a;
    pcVar12 = &this_00->field_0xc7b;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      bVar13 = *pcVar10 == *pcVar12;
      pcVar10 = pcVar10 + 1;
      pcVar12 = pcVar12 + 1;
    } while (bVar13);
    if ((!bVar13) || (local_42 != this_00->field_0C53)) {
      /* ST_CALLSITE[0050031E]: CALL 0x00403977; direct=00403977 CPanelTy::PaintDeep */
      PaintDeep(this_00,0);
      bVar4 = (DAT_0080874e != '\x03') + 5;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      _local_8 = CONCAT31(uStack_7,bVar4);
      if (bVar4 < 0xb) {
        if (-1 < (int)this_00->field_0148[bVar4]) {

          Library::DKW::DDX::FUN_006b3640
                    ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[bVar4],0xffffffff,
                     (&this_00->field_003C)[bVar4],(&this_00->field_0094)[bVar4]);
        }
      }
    }
  }
  g_currentExceptionFrame = local_88.previous;
  return;
}

