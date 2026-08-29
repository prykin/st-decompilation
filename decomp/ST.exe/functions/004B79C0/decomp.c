#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] machine_word_predicate.
   Evidence: every reachable RET is immediately dominated by an exact full-EAX definition of 0 or 1,
   and at least two resolved callers consume the machine word; machine CFG audit: used=8, ignored=0,
   unknown=0

   [STMethodOwnerApplier] Structural method owner recovered as STAllPlayersC.
   Evidence: this_call_owners=[STAllPlayersC]; agreed_this_calls=8; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; incoming_this_forward_calls=2;
   entry_incoming_ecx_capture=true; ret_stack_matches_explicit_parameters=true;
   direct_non_thunk_callers=0; incoming_ecx_receiver_callers=0; attributed_named_callers=7;
   owner_evidence_coverage=adequate; unique_primary_physical_vtable=true;
   callee_closed_hidden_ecx_receiver_transport */

int __thiscall STAllPlayersC::sub_004B79C0(STAllPlayersC *this,char param_1,int param_2)

{
  int iVar1;
  int iVar2;
  DArrayTy *array;
  uint index;
  int local_10 [3];


  iVar1 = thunk_FUN_004b72b0(param_1);

  iVar2 = thunk_FUN_004b71c0(param_1);
  if (iVar1 <= iVar2) {
    return 1;
  }
  index = 0;
  array = g_packedRecords_A62x8[param_1].field1948_0x992;
  if (array->count != 0) {
    do {

      DArrayGetElement(array,index,local_10);
      if (local_10[0] == param_2) {
        return 1;
      }
      array = g_packedRecords_A62x8[param_1].field1948_0x992;
      index = index + 1;
    } while (index < array->count);
  }
  return 0;
}

