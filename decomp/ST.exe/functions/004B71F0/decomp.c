#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] ecx_context_register target=function:-1: prototype=int __stdcall
   FUN_004b71f0(STAllPlayersC * context, undefined4 param_2, int param_3) previous_return_type=/int
   Evidence: incoming ECX reaches only unadjusted __thiscall receivers of /STAllPlayersC;
   receiver_calls=1; exact RET purge=8 matches declared stack bytes=8; sites=004B7223 ->
   STAllPlayersC::sub_004B7750 receiver=/STAllPlayersC

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004B76D0 -> 004B71F0 @ 004B76E8; STAllPlayersC::sub_004B76D0 parameter param_1 */

int FUN_004b71f0(STAllPlayersC *context,uint param_2,int param_3)

{
  g_packedRecords_A62x8[(char)param_2].field1941_0x976 =
       g_packedRecords_A62x8[(char)param_2].field1941_0x976 + param_3;
  if (param_3 != 0) {
    /* ST_CALLSITE[004B7223]: CALL 0x00401893; direct=00401893 STAllPlayersC::sub_004B7750 */
    STAllPlayersC::sub_004B7750(context,param_2);
  }
  return g_packedRecords_A62x8[(char)param_2].field1941_0x976;
}

