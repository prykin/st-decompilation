#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as STAllPlayersC.
   Evidence: this_call_owners=[STAllPlayersC]; agreed_this_calls=3; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; incoming_this_forward_calls=5;
   entry_incoming_ecx_capture=true; ret_stack_matches_explicit_parameters=true;
   direct_non_thunk_callers=0; incoming_ecx_receiver_callers=0; attributed_named_callers=3;
   owner_evidence_coverage=adequate; unique_primary_physical_vtable=true;
   callee_closed_hidden_ecx_receiver_transport */

void __thiscall STAllPlayersC::sub_004E4270(STAllPlayersC *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;


  iVar1 = thunk_FUN_004e4180(param_1);

  iVar2 = thunk_FUN_004e41c0(param_1);
  if (iVar1 < iVar2 + param_2) {

    iVar2 = thunk_FUN_004e41c0(param_1);
    param_2 = iVar1 - iVar2;
  }
  if (0 < param_2) {

    thunk_FUN_004e4230(param_1,param_2);
  }

  thunk_FUN_004e41c0(param_1);
  return;
}

