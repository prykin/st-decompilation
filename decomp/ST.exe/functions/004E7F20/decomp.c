#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] machine_word_predicate.
   Evidence: every reachable RET is immediately dominated by an exact full-EAX definition of 0 or 1,
   and at least two resolved callers consume the machine word; machine CFG audit: used=8, ignored=0,
   unknown=0

   [STMethodOwnerApplier] Structural method owner recovered as STAllPlayersC.
   Evidence: this_call_owners=[STAllPlayersC]; agreed_this_calls=8; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; incoming_this_forward_calls=1;
   entry_incoming_ecx_capture=true; ret_stack_matches_explicit_parameters=true;
   direct_non_thunk_callers=0; incoming_ecx_receiver_callers=0; attributed_named_callers=6;
   owner_evidence_coverage=adequate; unique_primary_physical_vtable=true;
   callee_closed_hidden_ecx_receiver_transport */

int __thiscall STAllPlayersC::sub_004E7F20(STAllPlayersC *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;

  if ((&DAT_007e53bc)[param_2] == '\0') {
    return 0;
  }
  iVar2 = 0;
  while (((iVar2 == param_1 ||
          (*(uint *)(iVar2 * 4 + STRecordByteAddress(g_packedRecords_A62x8, param_1, 0xA22)) < g_playSystem_00802A38->field_00E4))

         || (iVar1 = thunk_FUN_004e60d0(iVar2,param_2), iVar1 < param_3))) {
    iVar2 = iVar2 + 1;
    if (7 < iVar2) {
      return 0;
    }
  }
  return 1;
}

