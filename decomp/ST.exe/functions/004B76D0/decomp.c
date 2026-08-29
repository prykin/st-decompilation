#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0044EE30 -> 004B76D0 @ 0044F3D5 | 0044EE30 -> 004B76D0 @ 0044F6F3 | 004B9FA0 ->
   004B76D0 @ 004BA37A | 004CCC10 -> 004B76D0 @ 004CD1D2 | 004D11D0 -> 004B76D0 @ 004D2293 |
   004DC760 -> 004B76D0 @ 004DC975 | 004DEC10 -> 004B76D0 @ 004DEDE1 | 004DF3B0 -> 004B76D0 @
   004DF5C5
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:0: previous_type=/uint
   parameter=/char Evidence: entry-use width=/char; unmasked_dword_reads=0; evidence=004B76D8 MOV
   EDI,dword ptr [EBP + 0x8]; first-use mask or exact narrow callee formal
   [STAbiConsistencyApplier] stack_parameter_width_revert target=parameter:0: parameter=/uint
   Evidence: previous automatic narrow-width proof no longer qualifies; restoring generated baseline
   /uint

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=8, used=0, unknown=0),
   and decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as STAllPlayersC.
   Evidence: this_call_owners=[STAllPlayersC]; agreed_this_calls=8; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; incoming_this_forward_calls=2;
   entry_incoming_ecx_capture=true; ret_stack_matches_explicit_parameters=true;
   direct_non_thunk_callers=0; incoming_ecx_receiver_callers=0; attributed_named_callers=7;
   owner_evidence_coverage=adequate; unique_primary_physical_vtable=true;
   callee_closed_hidden_ecx_receiver_transport */

void __thiscall STAllPlayersC::sub_004B76D0(STAllPlayersC *this,uint param_1,int param_2)

{
  int iVar1;


  iVar1 = thunk_FUN_004b72e0((char)param_1,param_2);

  thunk_FUN_004b71f0(this,param_1,iVar1);
  return;
}

