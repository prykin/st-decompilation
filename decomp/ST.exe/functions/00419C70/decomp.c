#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as TLOEmbryoTy.
   Evidence: this_call_owners=[TLOEmbryoTy]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __fastcall
TLOEmbryoTy::sub_00419C70(RecoveredRecord_00419C70_4C4EF73F *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;

  /* ST_CALLSITE[00419C92]: CALL 0x004052c2; direct=004052C2 STAllPlayersC::RegisterObject; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/int; source view only; no Ghidra override */
  uVar1 = STAllPlayersC::RegisterObject
                    (g_allPlayers_007FA174,param_1->field_0x24,
                     STReplaceLowWord((uint32_t)(param_1), (uint16_t)(*(undefined2 *)&param_1->field_0x30)),
                     0xffff,(int *)param_1,param_3,0);
  /* ST_CALLSITE[00419CAA]: CALL 0x0040494e; direct=0040494E STAllPlayersC::_ChangeMD */
  STAllPlayersC::_ChangeMD
            (g_allPlayers_007FA174,1,*(int **)&param_1->field_0x24,
             STReplaceLowWord((uint32_t)(uVar1), (uint16_t)(param_1->field_0032)));
  /* ST_CALLSITE[00419CC0]: CALL 0x004019a6; direct=004019A6 STAllPlayersC::_ChangeDock */
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  STAllPlayersC::_ChangeDock
            (g_allPlayers_007FA174,1,*(int **)&param_1->field_0x24,
             CONCAT22(extraout_var,param_1->field_0032));
  return uVar1;
}

