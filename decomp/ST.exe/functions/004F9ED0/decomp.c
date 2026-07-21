#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::SwitchCPanel

   [STSwitchEnumApplier] Switch target field_023F uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_023FState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4 */

void __thiscall CPanelTy::SwitchCPanel(CPanelTy *this)

{
  code *pcVar1;
  bool bVar2;
  CPanelTy *this_00;
  int iVar3;
  char *pcVar4;
  ushort *puVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  byte bVar10;
  undefined4 *puVar11;
  InternalExceptionFrame local_54;
  CPanelTy *local_10;
  int local_c;
  int local_8;

  if (DAT_00808784 == 0) {
    if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      local_54.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_54;
      local_10 = this;
      iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
      this_00 = local_10;
      if (iVar3 == 0) {
        switch(local_10->field_023F) {
        case CASE_1:
          thunk_FUN_004a9b60(local_10->field_011C,local_10->field_0120,local_10->field_0124,
                             local_10->field_0128);
          this_00->field_023F = CASE_4|CASE_2;
          if (g_prodPanel_008016E8 != (ProdPanelTy *)0x0) {
            ProdPanelTy::SetPanel(g_prodPanel_008016E8,'\0');
          }
          if (g_prodPanel_0080167C != (ProdPanelTy *)0x0) {
            ProdPanelTy::SetPanel(g_prodPanel_0080167C,'\0');
          }
          if (g_prodPanel_00801684 != (ProdPanelTy *)0x0) {
            ProdPanelTy::SetPanel(g_prodPanel_00801684,'\0');
          }
          if (g_prodPanel_00801680 != (ProdPanelTy *)0x0) {
            ProdPanelTy::SetPanel(g_prodPanel_00801680,'\0');
          }
          if (g_infocPanel_00801698 != (InfocPanelTy *)0x0) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(*(int *)g_infocPanel_00801698 + 0x1c))(0);
          }
          if (g_tradePanel_00802A44 != (TradePanelTy *)0x0) {
            thunk_FUN_00552160(g_tradePanel_00802A44,'\0','\0');
          }
          if (g_behPanel_00801678 != (BehPanelTy *)0x0) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (*(code *)g_behPanel_00801678->field_0000[2].field_0004)(0);
          }
          if (g_sAMPanel_008016EC != (SAMPanelTy *)0x0) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)&g_sAMPanel_008016EC->field_0000[1].field_0x8)(0);
          }
          if (g_upgPanel_00802A48 != (UpgPanelTy *)0x0) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(*(int *)g_upgPanel_00802A48 + 0x1c))(0);
          }
          if (g_frmPanel_0080168C != (FrmPanelTy *)0x0) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (*(code *)g_frmPanel_0080168C->field_0000->field_001C)(0);
          }
          if (g_helpPanel_00801690 != (AnonShape_GLOBAL_00801690_2AA401C1 *)0x0) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(*(int *)g_helpPanel_00801690 + 0x18))(0);
          }
          if (g_optPanel_008016DC != (OptPanelTy *)0x0) {
            OptPanelTy::SwitchOptPanelOff(g_optPanel_008016DC);
          }
          ShiftControls(this_00,0);
          if (DAT_0080731a != 0) {
            puVar7 = &this_00->field_02EC;
            puVar8 = &this_00->field_02EE;
            local_8 = 2;
            do {
              puVar11 = (undefined4 *)0x0;
              iVar6 = 0;
              iVar3 = 1;
              bVar10 = 0;
              uVar9 = 6;
              pcVar4 = thunk_FUN_00526100((undefined1 *)0x0,0);
              puVar5 = Library::Ourlib::MFRLOAD::mfRLoad
                                 (DAT_00806794,CASE_1F,pcVar4,uVar9,bVar10,iVar3,iVar6,puVar11);
              puVar8[-3] = puVar5;
              puVar7[-2] = 0;
              *puVar7 = 4;
              *puVar8 = this_00->field_0038;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
              local_8 = local_8 + -1;
            } while (local_8 != 0);
            puVar8 = &this_00->field_0D53;
            puVar7 = &this_00->field_0D47;
            local_c = 2;
            do {
              local_8 = 6;
              do {
                puVar11 = (undefined4 *)0x0;
                iVar6 = 0;
                iVar3 = 1;
                bVar10 = 0;
                uVar9 = 6;
                pcVar4 = thunk_FUN_00526100((undefined1 *)0x0,0);
                puVar5 = Library::Ourlib::MFRLOAD::mfRLoad
                                   (DAT_00806794,CASE_1F,pcVar4,uVar9,bVar10,iVar3,iVar6,puVar11);
                puVar8[-0x12] = puVar5;
                puVar7[-0xc] = 0;
                *puVar7 = 4;
                *puVar8 = this_00->field_0038;
                puVar8 = puVar8 + 1;
                puVar7 = puVar7 + 1;
                local_8 = local_8 + -1;
              } while (local_8 != 0);
              local_c = local_c + -1;
            } while (local_c != 0);
            g_currentExceptionFrame = local_54.previous;
            return;
          }
switchD_004f9f52_caseD_3:
          this_00->field_023F = CASE_4;
          thunk_FUN_005252c0(CASE_B0);
          g_currentExceptionFrame = local_54.previous;
          return;
        case CASE_2:
        case CASE_4:
          local_10->field_023F = CASE_3;
          thunk_FUN_005252c0(CASE_AF);
          if (g_prodPanel_008016E8 != (ProdPanelTy *)0x0) {
            ProdPanelTy::SetPanel(g_prodPanel_008016E8,'\0');
          }
          if (g_prodPanel_0080167C != (ProdPanelTy *)0x0) {
            ProdPanelTy::SetPanel(g_prodPanel_0080167C,'\0');
          }
          if (g_prodPanel_00801684 != (ProdPanelTy *)0x0) {
            ProdPanelTy::SetPanel(g_prodPanel_00801684,'\0');
          }
          if (g_prodPanel_00801680 != (ProdPanelTy *)0x0) {
            ProdPanelTy::SetPanel(g_prodPanel_00801680,'\0');
          }
          if (g_infocPanel_00801698 != (InfocPanelTy *)0x0) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(*(int *)g_infocPanel_00801698 + 0x1c))(0);
          }
          if (g_tradePanel_00802A44 != (TradePanelTy *)0x0) {
            thunk_FUN_00552160(g_tradePanel_00802A44,'\0','\0');
          }
          if (g_behPanel_00801678 != (BehPanelTy *)0x0) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (*(code *)g_behPanel_00801678->field_0000[2].field_0004)(0);
          }
          if (g_sAMPanel_008016EC != (SAMPanelTy *)0x0) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)&g_sAMPanel_008016EC->field_0000[1].field_0x8)(0);
          }
          if (g_upgPanel_00802A48 != (UpgPanelTy *)0x0) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(*(int *)g_upgPanel_00802A48 + 0x1c))(0);
          }
          if (g_frmPanel_0080168C != (FrmPanelTy *)0x0) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (*(code *)g_frmPanel_0080168C->field_0000->field_001C)(0);
          }
          if (g_helpPanel_00801690 != (AnonShape_GLOBAL_00801690_2AA401C1 *)0x0) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(*(int *)g_helpPanel_00801690 + 0x18))(0);
          }
          if (g_optPanel_008016DC != (OptPanelTy *)0x0) {
            OptPanelTy::SwitchOptPanelOff(g_optPanel_008016DC);
          }
        default:
          g_currentExceptionFrame = local_54.previous;
          return;
        case CASE_3:
          goto switchD_004f9f52_caseD_3;
        }
      }
      g_currentExceptionFrame = local_54.previous;
      iVar6 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel.cpp",0x40f,0,iVar3,
                                 "%s","CPanelTy::SwitchCPanel");
      if (iVar6 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\cpanel.cpp",0x40f);
    }
  }
  return;
}

