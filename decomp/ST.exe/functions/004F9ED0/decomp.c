#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::SwitchCPanel

   [STSwitchEnumApplier] Switch target field_023F uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_023FState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4

   [STSwitchEnumApplier] Switch target field_023F uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_023FState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6 */

void __thiscall CPanelTy::SwitchCPanel(CPanelTy *this)

{
  bool bVar2;
  CPanelTy *this_00;
  int iVar3;
  char *pcVar4;
  ushort *puVar5;
  int iVar6;
  byte *puVar7;
  int *piVar8;
  uint uVar9;
  byte bVar10;
  uint *puVar11;
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
          this_00->field_023F = CASE_6;
          if (g_researchPanel_008016E8 != nullptr) {
            /* ST_CALLSITE[004F9F95]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
            ProdPanelTy::SetPanel(g_researchPanel_008016E8,'\0');
          }
          if (g_bldBoatPanel_0080167C != nullptr) {
            /* ST_CALLSITE[004F9FA6]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
            ProdPanelTy::SetPanel(g_bldBoatPanel_0080167C,'\0');
          }
          if (g_bldObjPanel_00801684 != nullptr) {
            /* ST_CALLSITE[004F9FB7]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
            ProdPanelTy::SetPanel(g_bldObjPanel_00801684,'\0');
          }
          if (g_bldLabPanel_00801680 != nullptr) {
            /* ST_CALLSITE[004F9FC8]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
            ProdPanelTy::SetPanel(g_bldLabPanel_00801680,'\0');
          }
          if (g_infocPanel_00801698 != nullptr) {
            /* ST_CALLSITE[004F9FDB]: CALL dword ptr [EDX + 0x1c] */
            (*g_infocPanel_00801698->vtable->SetPanel)((SpecPanelTy *)g_infocPanel_00801698,'\0');
          }
          if (g_tradePanel_00802A44 != nullptr) {
            /* ST_CALLSITE[004F9FEC]: CALL 0x00404af7; direct=00404AF7 TradePanelTy::sub_00552160 */
            TradePanelTy::sub_00552160(g_tradePanel_00802A44,'\0','\0');
          }
          if (g_behPanel_00801678 != nullptr) {
            /* ST_CALLSITE[004F9FFF]: CALL dword ptr [EAX + 0x1c] */
            (*g_behPanel_00801678->vtable->SetPanel)((SpecPanelTy *)g_behPanel_00801678,'\0');
          }
          if (g_sAMPanel_008016EC != nullptr) {
            /* ST_CALLSITE[004FA010]: CALL dword ptr [EDX + 0x1c] */
            (*g_sAMPanel_008016EC->vtable->SetPanel)((SpecPanelTy *)g_sAMPanel_008016EC,'\0');
          }
          if (g_upgPanel_00802A48 != nullptr) {
            /* ST_CALLSITE[004FA021]: CALL dword ptr [EAX + 0x1c] */
            (*g_upgPanel_00802A48->vtable->SetPanel)((SpecPanelTy *)g_upgPanel_00802A48,'\0');
          }
          if (g_frmPanel_0080168C != nullptr) {
            /* ST_CALLSITE[004FA032]: CALL dword ptr [EDX + 0x1c] */
            (*g_frmPanel_0080168C->vtable->SetPanel)((SpecPanelTy *)g_frmPanel_0080168C,'\0');
          }
          if (g_helpPanel_00801690 != nullptr) {
            /* ST_CALLSITE[004FA043]: CALL dword ptr [EAX + 0x18] */
            g_helpPanel_00801690->SetPanel('\0');
          }
          if (g_optPanel_008016DC != nullptr) {
            /* ST_CALLSITE[004FA050]: CALL 0x00402630; direct=00402630 OptPanelTy::SwitchOptPanelOff */
            OptPanelTy::SwitchOptPanelOff(g_optPanel_008016DC);
          }
          /* ST_CALLSITE[004FA059]: CALL 0x00402ed2; direct=00402ED2 CPanelTy::ShiftControls */
          ShiftControls(this_00,0);
          if (DAT_0080731a != 0) {
            puVar7 = &this_00->field_02EC;
            piVar8 = &this_00->field_02EE;
            local_8 = 2;
            do {
              puVar11 = nullptr;
              iVar6 = 0;
              iVar3 = 1;
              bVar10 = 0;
              uVar9 = 6;
              pcVar4 = thunk_FUN_00526100(nullptr,0);
              puVar5 = Library::Ourlib::MFRLOAD::mfRLoad
                                 (PTR_00806794,CASE_1F,pcVar4,uVar9,bVar10,iVar3,iVar6,puVar11);
              piVar8[-3] = (int)puVar5;
              puVar7[-2] = 0;
              *puVar7 = 4;
              *piVar8 = this_00->field_0038;
              puVar7 = puVar7 + 1;
              piVar8 = piVar8 + 1;
              local_8 = local_8 + -1;
            } while (local_8 != 0);
            piVar8 = &this_00->field_0D53;
            puVar7 = &this_00->field_0D47;
            local_c = 2;
            do {
              local_8 = 6;
              do {
                puVar11 = nullptr;
                iVar6 = 0;
                iVar3 = 1;
                bVar10 = 0;
                uVar9 = 6;
                pcVar4 = thunk_FUN_00526100(nullptr,0);
                puVar5 = Library::Ourlib::MFRLOAD::mfRLoad
                                   (PTR_00806794,CASE_1F,pcVar4,uVar9,bVar10,iVar3,iVar6,puVar11);
                piVar8[-0x12] = (int)puVar5;
                puVar7[-0xc] = 0;
                *puVar7 = 4;
                *piVar8 = this_00->field_0038;
                piVar8 = piVar8 + 1;
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
          if (g_researchPanel_008016E8 != nullptr) {
            /* ST_CALLSITE[004FA180]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
            ProdPanelTy::SetPanel(g_researchPanel_008016E8,'\0');
          }
          if (g_bldBoatPanel_0080167C != nullptr) {
            /* ST_CALLSITE[004FA191]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
            ProdPanelTy::SetPanel(g_bldBoatPanel_0080167C,'\0');
          }
          if (g_bldObjPanel_00801684 != nullptr) {
            /* ST_CALLSITE[004FA1A2]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
            ProdPanelTy::SetPanel(g_bldObjPanel_00801684,'\0');
          }
          if (g_bldLabPanel_00801680 != nullptr) {
            /* ST_CALLSITE[004FA1B3]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
            ProdPanelTy::SetPanel(g_bldLabPanel_00801680,'\0');
          }
          if (g_infocPanel_00801698 != nullptr) {
            /* ST_CALLSITE[004FA1C6]: CALL dword ptr [EDX + 0x1c] */
            (*g_infocPanel_00801698->vtable->SetPanel)((SpecPanelTy *)g_infocPanel_00801698,'\0');
          }
          if (g_tradePanel_00802A44 != nullptr) {
            /* ST_CALLSITE[004FA1D7]: CALL 0x00404af7; direct=00404AF7 TradePanelTy::sub_00552160 */
            TradePanelTy::sub_00552160(g_tradePanel_00802A44,'\0','\0');
          }
          if (g_behPanel_00801678 != nullptr) {
            /* ST_CALLSITE[004FA1EA]: CALL dword ptr [EAX + 0x1c] */
            (*g_behPanel_00801678->vtable->SetPanel)((SpecPanelTy *)g_behPanel_00801678,'\0');
          }
          if (g_sAMPanel_008016EC != nullptr) {
            /* ST_CALLSITE[004FA1FB]: CALL dword ptr [EDX + 0x1c] */
            (*g_sAMPanel_008016EC->vtable->SetPanel)((SpecPanelTy *)g_sAMPanel_008016EC,'\0');
          }
          if (g_upgPanel_00802A48 != nullptr) {
            /* ST_CALLSITE[004FA20C]: CALL dword ptr [EAX + 0x1c] */
            (*g_upgPanel_00802A48->vtable->SetPanel)((SpecPanelTy *)g_upgPanel_00802A48,'\0');
          }
          if (g_frmPanel_0080168C != nullptr) {
            /* ST_CALLSITE[004FA21D]: CALL dword ptr [EDX + 0x1c] */
            (*g_frmPanel_0080168C->vtable->SetPanel)((SpecPanelTy *)g_frmPanel_0080168C,'\0');
          }
          if (g_helpPanel_00801690 != nullptr) {
            /* ST_CALLSITE[004FA22E]: CALL dword ptr [EAX + 0x18] */
            g_helpPanel_00801690->SetPanel('\0');
          }
          if (g_optPanel_008016DC != nullptr) {
            /* ST_CALLSITE[004FA23B]: CALL 0x00402630; direct=00402630 OptPanelTy::SwitchOptPanelOff */
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

