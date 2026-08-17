#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as TLOEmbryoTy.
   Evidence: this_call_owners=[TLOEmbryoTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __fastcall TLOEmbryoTy::sub_00419CF0(int *param_1,undefined4 param_2,uint param_3)

{
  /* ST_CALLSITE[00419D0B]: CALL 0x004052c2; direct=004052C2 STAllPlayersC::RegisterObject */
  STAllPlayersC::RegisterObject
            (g_allPlayers_007FA174,(char)param_1[9],
             STReplaceLowWord((uint32_t)(param_2), (uint16_t)((short)param_1[0xc])),param_3,param_1,1,0);
  return;
}

