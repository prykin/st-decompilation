#include "../../pseudocode_runtime.h"


/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004FA870_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_4=4;CASE_5=5;CASE_E=14;CASE_F=15

   [STMethodOwnerApplier] Structural method owner recovered as CPanelTy.
   Evidence: this_call_owners=[CPanelTy]; agreed_this_calls=18; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_sub_004FA870_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_E=14;CASE_F=15 */

void __thiscall CPanelTy::sub_004FA870(CPanelTy *this,CPanelTy_sub_004FA870_param_1Enum param_1)

{
  if (this->field_012C != 0) {
    *(undefined1 *)((int)this->field_0B1F + param_1 + 0x2f) = 1;
    return;
  }
  if ((((param_1 == 0) || (CASE_5 < param_1)) && (param_1 != CASE_E)) && (param_1 != CASE_F)) {
    if (param_1 == CASE_6) {
      if (g_researchPanel_008016E8 != nullptr) {
        /* ST_CALLSITE[004FA8C8]: CALL dword ptr [EDX + 0x1c] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (*(code *)g_researchPanel_008016E8->field_0000->field_001C)();
        return;
      }
    }
    else if (param_1 == CASE_7) {
      if (g_bldBoatPanel_0080167C != nullptr) {
        /* ST_CALLSITE[004FA8E4]: CALL dword ptr [EAX + 0x1c] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (*(code *)g_bldBoatPanel_0080167C->field_0000->field_001C)();
        return;
      }
    }
    else if (param_1 == 8) {
      if (g_bldObjPanel_00801684 != nullptr) {
        /* ST_CALLSITE[004FA900]: CALL dword ptr [EDX + 0x1c] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (*(code *)g_bldObjPanel_00801684->field_0000->field_001C)();
        return;
      }
    }
    else if (param_1 == 9) {
      if (g_infocPanel_00801698 != nullptr) {
        /* ST_CALLSITE[004FA91C]: CALL dword ptr [EAX + 0x20] */
        g_infocPanel_00801698->Update();
        return;
      }
    }
    else if (param_1 == 10) {
      if (g_tradePanel_00802A44 != nullptr) {
        /* ST_CALLSITE[004FA938]: CALL dword ptr [EDX + 0x20] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)&g_tradePanel_00802A44->field_0000[1].field_0xc)();
        return;
      }
    }
    else if (param_1 == 0xb) {
      if (g_behPanel_00801678 != nullptr) {
        /* ST_CALLSITE[004FA954]: CALL dword ptr [EAX + 0x20] */
        g_behPanel_00801678->Update();
        return;
      }
    }
    else if (param_1 == 0xc) {
      if (g_bldLabPanel_00801680 != nullptr) {
        /* ST_CALLSITE[004FA970]: CALL dword ptr [EDX + 0x1c] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (*(code *)g_bldLabPanel_00801680->field_0000->field_001C)();
        return;
      }
    }
    else if (param_1 == 0x10) {
      if (g_upgPanel_00802A48 != nullptr) {
        /* ST_CALLSITE[004FA98C]: CALL dword ptr [EAX + 0x20] */
        g_upgPanel_00802A48->Update();
        return;
      }
    }
    else if (param_1 == 0x11) {
      if (g_frmPanel_0080168C != nullptr) {
        /* ST_CALLSITE[004FA9A8]: CALL dword ptr [EDX + 0x20] */
        g_frmPanel_0080168C->Update();
        return;
      }
    }
    else if (param_1 == 0x12) {
      if (g_sAMPanel_008016EC != nullptr) {
        /* ST_CALLSITE[004FA9C4]: CALL dword ptr [EAX + 0x20] */
        g_sAMPanel_008016EC->Update();
        return;
      }
    }
    else if ((param_1 == 0x13) && (g_helpPanel_00801690 != nullptr)) {
      /* ST_CALLSITE[004FA9DC]: CALL 0x00402d38; direct=00402D38 HelpPanelTy::sub_00515180 */
      HelpPanelTy::sub_00515180(g_helpPanel_00801690,'\x06');
      /* ST_CALLSITE[004FA9E9]: CALL 0x00402d38; direct=00402D38 HelpPanelTy::sub_00515180 */
      HelpPanelTy::sub_00515180(g_helpPanel_00801690,'\x05');
      return;
    }
  }
  else {
    switch(param_1) {
    case CASE_1:
      /* ST_CALLSITE[004FAA17]: CALL 0x0040206d; direct=0040206D CPanelTy::Update1Panel */
      Update1Panel(this);
      return;
    case CASE_2:
      thunk_FUN_00502330();
      return;
    case CASE_4:
      thunk_FUN_005097b0();
      return;
    case CASE_5:
      /* ST_CALLSITE[004FAA3B]: CALL 0x004025cc; direct=004025CC CPanelTy::Update5Panel */
      Update5Panel(this);
      return;
    case CASE_E:
    case CASE_F:
      /* ST_CALLSITE[004FAA4A]: CALL 0x0040415b; direct=0040415B CPanelTy::UpdateStackPanel */
      UpdateStackPanel(this,(uint)(byte)(param_1 - CASE_E));
    }
  }
  return;
}

