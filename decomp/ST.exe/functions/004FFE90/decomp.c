#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel1.cpp
   CPanelTy::Update5Panel */

void __thiscall CPanelTy::Update5Panel(CPanelTy *this)

{
  undefined1 *puVar1;
  char cVar2;
  code *pcVar3;
  CPanelTy *this_00;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  char *pcVar9;
  byte *pbVar10;
  char *pcVar11;
  bool bVar12;
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
  puVar7 = (undefined4 *)puVar1;
  pcVar9 = &local_44;
  for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pcVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    pcVar9 = pcVar9 + 4;
  }
  *(undefined2 *)pcVar9 = *(undefined2 *)puVar7;
  memset((void *)puVar1, 0, 0x32); /* compiler bulk-zero initialization */
  STAllPlayersC::GetPanelInfo(g_sTAllPlayers_007FA174,5,(AnonShape_0043BEB0_1C00EC12 *)puVar1);
  if (local_44 != this_00->field_0C51) {
    if (g_prodPanel_008016E8 != (ProdPanelTy *)0x0) {
      ProdPanelTy::SetPanel(g_prodPanel_008016E8,'\0');
    }
    if (g_prodPanel_0080167C != (ProdPanelTy *)0x0) {
      ProdPanelTy::SetPanel(g_prodPanel_0080167C,'\0');
    }
    if (g_infocPanel_00801698 != (InfocPanelTy *)0x0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)g_infocPanel_00801698 + 0x1c))(0);
    }
    if (g_tradePanel_00802A44 != (TradePanelTy *)0x0) {
      thunk_FUN_00552160(g_tradePanel_00802A44,'\0','\0');
    }
    if (g_prodPanel_00801680 != (ProdPanelTy *)0x0) {
      ProdPanelTy::SetPanel(g_prodPanel_00801680,'\0');
    }
    SwitchTV(this_00,0);
    PaintInfoObj(this_00);
    g_currentExceptionFrame = local_88.previous;
    return;
  }
  if (this_00->field_0C6E != local_27) {
    if (g_prodPanel_008016E8 != (ProdPanelTy *)0x0) {
      ProdPanelTy::SetPanel(g_prodPanel_008016E8,'\0');
    }
    if (g_prodPanel_0080167C != (ProdPanelTy *)0x0) {
      ProdPanelTy::SetPanel(g_prodPanel_0080167C,'\0');
    }
    if (g_infocPanel_00801698 != (InfocPanelTy *)0x0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)g_infocPanel_00801698 + 0x1c))(0);
    }
    if (g_tradePanel_00802A44 != (TradePanelTy *)0x0) {
      thunk_FUN_00552160(g_tradePanel_00802A44,'\0','\0');
    }
    if (g_prodPanel_00801680 != (ProdPanelTy *)0x0) {
      ProdPanelTy::SetPanel(g_prodPanel_00801680,'\0');
    }
  }
  cVar2 = this_00->field_0C51;
  if (((cVar2 == '\x01') || (cVar2 == '\x04')) || (cVar2 == '\x03')) {
    if (((local_3c != this_00->field_0C59) || (local_43 != this_00->field_0C52)) ||
       (local_42 != this_00->field_0C53)) {
      if (g_prodPanel_008016E8 != (ProdPanelTy *)0x0) {
        ProdPanelTy::SetPanel(g_prodPanel_008016E8,'\0');
      }
      if (g_prodPanel_0080167C != (ProdPanelTy *)0x0) {
        ProdPanelTy::SetPanel(g_prodPanel_0080167C,'\0');
      }
      if (g_infocPanel_00801698 != (InfocPanelTy *)0x0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*(int *)g_infocPanel_00801698 + 0x1c))(0);
      }
      if (g_tradePanel_00802A44 != (TradePanelTy *)0x0) {
        thunk_FUN_00552160(g_tradePanel_00802A44,'\0','\0');
      }
      if (g_prodPanel_00801680 != (ProdPanelTy *)0x0) {
        ProdPanelTy::SetPanel(g_prodPanel_00801680,'\0');
      }
      SwitchTV(this_00,0);
    }
    if ((local_41 != this_00->field_0C54) || (local_3d != this_00->field_0C58)) {
      Library::DKW::WGR::FUN_006b55f0
                ((AnonShape_006B5B10_E0D06CF1 *)this_00->field_019C,0,1,0,
                 (byte *)this_00->field_0B47,0,1,0,0x4e,0x20);
      PaintName(this_00,0);
      if (-1 < this_00->field_0164) {
        Library::DKW::DDX::FUN_006b3640
                  ((int *)PTR_008075a8,this_00->field_0164,0xffffffff,this_00->field_0058,
                   this_00->field_00B0);
      }
    }
    pbVar10 = &this_00->field_0C5D;
    pbVar8 = local_38;
    do {
      bVar4 = *pbVar8;
      bVar12 = bVar4 < *pbVar10;
      if (bVar4 != *pbVar10) {
LAB_00500121:
        iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        goto LAB_00500126;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar8[1];
      bVar12 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_00500121;
      pbVar8 = pbVar8 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar5 = 0;
LAB_00500126:
    if (iVar5 != 0) {
      Library::DKW::WGR::FUN_006b55f0
                ((AnonShape_006B5B10_E0D06CF1 *)this_00->field_019C,0,1,0,
                 (byte *)this_00->field_0B47,0,1,0,0x4e,0x20);
      PaintName(this_00,0);
      if (-1 < this_00->field_0164) {
        Library::DKW::DDX::FUN_006b3640
                  ((int *)PTR_008075a8,this_00->field_0164,0xffffffff,this_00->field_0058,
                   this_00->field_00B0);
      }
    }
    if ((((local_29 != this_00->field_0C6C) || (local_42 != this_00->field_0C53)) &&
        (iVar5 = this_00->field_0C54, iVar5 != 0xdd)) && ((iVar5 != 0xde && (iVar5 != 0xe0)))) {
      Library::DKW::WGR::FUN_006b55f0
                ((AnonShape_006B5B10_E0D06CF1 *)this_00->field_019C,0,1,0x1f,
                 (byte *)this_00->field_0B47,0,1,0x1f,0x4e,0x11);
      PaintLife(this_00,0);
      if (-1 < this_00->field_0164) {
        Library::DKW::DDX::FUN_006b3640
                  ((int *)PTR_008075a8,this_00->field_0164,0xffffffff,this_00->field_0058,
                   this_00->field_00B0);
      }
    }
    if (((DAT_0080874e == '\x03') && (this_00->field_0C58 == '\x03')) &&
       ((local_28 != this_00->field_0C6D &&
        (((iVar5 = this_00->field_0C54, iVar5 != 0xdd && (iVar5 != 0xde)) && (iVar5 != 0xe0)))))) {
      PaintEnergy(this_00,0);
    }
    if (((((local_26 != this_00->field_0C6F) || (local_22 != this_00->field_0C73)) ||
         ((local_1e != this_00->field_0C77 ||
          ((local_24 != this_00->field_0C71 || (local_20 != this_00->field_0C75)))))) ||
        (local_1c != this_00->field_0C79)) &&
       (((iVar5 = this_00->field_0C54, iVar5 != 0xdd && (iVar5 != 0xde)) && (iVar5 != 0xe0)))) {
      Library::DKW::WGR::FUN_006b55f0
                ((AnonShape_006B5B10_E0D06CF1 *)this_00->field_019C,0,1,0x2f,
                 (byte *)this_00->field_0B47,0,1,0x2f,0x4e,0x24);
      PaintWeap(this_00,0);
      if (-1 < this_00->field_0164) {
        Library::DKW::DDX::FUN_006b3640
                  ((int *)PTR_008075a8,this_00->field_0164,0xffffffff,this_00->field_0058,
                   this_00->field_00B0);
      }
    }
    iVar5 = 5;
    bVar12 = true;
    pcVar9 = local_1a;
    pcVar11 = &this_00->field_0xc7b;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar12 = *pcVar9 == *pcVar11;
      pcVar9 = pcVar9 + 1;
      pcVar11 = pcVar11 + 1;
    } while (bVar12);
    if ((!bVar12) || (local_42 != this_00->field_0C53)) {
      PaintDeep(this_00,0);
      bVar4 = (DAT_0080874e != '\x03') + 5;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      _local_8 = CONCAT31(uStack_7,bVar4);
      if (bVar4 < 0xb) {
        if (-1 < (&this_00->field_0148)[bVar4]) {
          Library::DKW::DDX::FUN_006b3640
                    ((int *)PTR_008075a8,(&this_00->field_0148)[bVar4],0xffffffff,
                     (&this_00->field_003C)[bVar4],(&this_00->field_0094)[bVar4]);
        }
      }
    }
  }
  g_currentExceptionFrame = local_88.previous;
  return;
}

