#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STAllPlayersC.
   Evidence: this_call_owners=[STAllPlayersC]; agreed_this_calls=2; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=11; incoming_this_forward_calls=1;
   entry_incoming_ecx_capture=true; ret_stack_matches_explicit_parameters=true;
   direct_non_thunk_callers=0; incoming_ecx_receiver_callers=0; attributed_named_callers=2;
   owner_evidence_coverage=adequate; unique_primary_physical_vtable=true;
   callee_closed_hidden_ecx_receiver_transport */

undefined4 __thiscall
STAllPlayersC::sub_004D7480
          (STAllPlayersC *this,char param_1,int param_2,undefined4 param_3,int param_4,int param_5,
          int param_6,int param_7)

{
  int iVar1;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  local_18 = param_3;
  local_8 = param_7;
  iVar1 = (int)param_1;
  local_c = param_6;
  local_10 = param_5;
  local_14 = param_4;

  Library::DKW::TBL::DArrayAppend
            ((DArrayTy *)(&g_packedRecords_A62x8[iVar1].field_0x7ee + param_2 * 0x44),&local_18);
  (&g_packedRecords_A62x8[iVar1].field1626_0x80e)[param_2 * 0x11] =
       (&g_packedRecords_A62x8[iVar1].field1626_0x80e)[param_2 * 0x11] + param_4;
  (&g_packedRecords_A62x8[iVar1].field1627_0x812)[param_2 * 0x11] =
       (&g_packedRecords_A62x8[iVar1].field1627_0x812)[param_2 * 0x11] + param_5;
  (&g_packedRecords_A62x8[iVar1].field1628_0x816)[param_2 * 0x11] =
       (&g_packedRecords_A62x8[iVar1].field1628_0x816)[param_2 * 0x11] + param_6;
  (&g_packedRecords_A62x8[iVar1].field1629_0x81a)[param_2 * 0x11] =
       (&g_packedRecords_A62x8[iVar1].field1629_0x81a)[param_2 * 0x11] + param_7;

  thunk_FUN_004d78e0(param_1);
  return 0;
}

