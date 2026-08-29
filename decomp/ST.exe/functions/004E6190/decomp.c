#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] ecx_context_register target=function:-1: prototype=undefined __stdcall
   FUN_004e6190(STAllPlayersC * context, int param_2, uint param_3) previous_return_type=/undefined
   Evidence: incoming ECX reaches only unadjusted __thiscall receivers of /STAllPlayersC;
   receiver_calls=1; exact RET purge=8 matches declared stack bytes=8; sites=004E61D7 ->
   STAllPlayersC::sub_004E6310 receiver=/STAllPlayersC */

void FUN_004e6190(STAllPlayersC *context,int param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;

  if ((((-1 < param_2) && (param_2 < 8)) && (0 < (int)param_3)) && ((int)param_3 < 0x9b)) {
    puVar1 = (uint *)(param_3 * 4 + STRecordByteAddress(g_packedRecords_A62x8, param_2, 0x327));
    uVar2 = *puVar1 + 1;
    *puVar1 = uVar2;
    /* ST_CALLSITE[004E61D7]: CALL 0x00402130; direct=00402130 STAllPlayersC::sub_004E6310 */
    STAllPlayersC::sub_004E6310(context,(byte *)param_2,param_3,uVar2);
  }
  return;
}

