#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as TLOEmbryoTy.
   Evidence: this_call_owners=[TLOEmbryoTy]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __fastcall TLOEmbryoTy::sub_00419C70(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;

  uVar1 = STAllPlayersC::RegisterObject
                    (g_allPlayers_007FA174,(char)param_1[9],
                     STReplaceLowWord((uint32_t)(param_1), (uint16_t)((short)param_1[0xc])),0xffff,param_1,
                     param_3,0);
  STAllPlayersC::_ChangeMD
            (g_allPlayers_007FA174,1,(int *)param_1[9],
             STReplaceLowWord((uint32_t)(uVar1), (uint16_t)(STField<undefined2>(param_1,0x32))));
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  STAllPlayersC::_ChangeDock
            (1,(int *)param_1[9],CONCAT22(extraout_var,STField<undefined2>(param_1,0x32)));
  return uVar1;
}

