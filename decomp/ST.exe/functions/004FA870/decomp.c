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
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if ((((param_1 == 0) || (CASE_5 < param_1)) && (param_1 != CASE_E)) && (param_1 != CASE_F)) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_1 == CASE_6) {
      if (g_prodPanel_008016E8 != nullptr) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)g_prodPanel_008016E8->field_0000->field_001C)();
        return;
      }
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    else if (param_1 == CASE_7) {
      if (g_prodPanel_0080167C != nullptr) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)g_prodPanel_0080167C->field_0000->field_001C)();
        return;
      }
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    else if (param_1 == 8) {
      if (g_prodPanel_00801684 != nullptr) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)g_prodPanel_00801684->field_0000->field_001C)();
        return;
      }
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    else if (param_1 == 9) {
      if (g_infocPanel_00801698 != nullptr) {
        g_infocPanel_00801698->Update();
        return;
      }
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    else if (param_1 == 10) {
      if (g_tradePanel_00802A44 != nullptr) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)&g_tradePanel_00802A44->field_0000[1].field_0xc)();
        return;
      }
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    else if (param_1 == 0xb) {
      if (g_behPanel_00801678 != nullptr) {
        g_behPanel_00801678->Update();
        return;
      }
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    else if (param_1 == 0xc) {
      if (g_prodPanel_00801680 != nullptr) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)g_prodPanel_00801680->field_0000->field_001C)();
        return;
      }
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    else if (param_1 == 0x10) {
      if (g_upgPanel_00802A48 != nullptr) {
        g_upgPanel_00802A48->Update();
        return;
      }
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    else if (param_1 == 0x11) {
      if (g_frmPanel_0080168C != nullptr) {
        g_frmPanel_0080168C->Update();
        return;
      }
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    else if (param_1 == 0x12) {
      if (g_sAMPanel_008016EC != nullptr) {
        g_sAMPanel_008016EC->Update();
        return;
      }
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    else if ((param_1 == 0x13) && (g_helpPanel_00801690 != nullptr)) {
      HelpPanelTy::sub_00515180(g_helpPanel_00801690,'\x06');
      HelpPanelTy::sub_00515180(g_helpPanel_00801690,'\x05');
      return;
    }
  }
  else {
    switch(param_1) {
    case CASE_1:
      Update1Panel(this);
      return;
    case CASE_2:
      thunk_FUN_00502330();
      return;
    case CASE_4:
      thunk_FUN_005097b0();
      return;
    case CASE_5:
      Update5Panel(this);
      return;
    case CASE_E:
    case CASE_F:
      UpdateStackPanel(this,(uint)(byte)(param_1 - CASE_E));
    }
  }
  return;
}

