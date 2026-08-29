#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 004CCC10 -> 004B7080 @ 004CCEF1 | 00522810 -> 004B7080 @ 00522AFA | 00652810 ->
   004B7080 @ 0065555A
   [STAbiConsistencyApplier] ecx_context_register target=function:-1: prototype=int __stdcall
   FUN_004b7080(STAllPlayersC * context, uint param_2, int param_3) previous_return_type=/int
   Evidence: incoming ECX reaches only unadjusted __thiscall receivers of /STAllPlayersC;
   receiver_calls=1; exact RET purge=8 matches declared stack bytes=8; sites=004B70B3 ->
   STAllPlayersC::sub_004B7750 receiver=/STAllPlayersC */

int FUN_004b7080(STAllPlayersC *context,uint param_2,int param_3)

{
  g_packedRecords_A62x8[(char)param_2].field1940_0x972 =
       g_packedRecords_A62x8[(char)param_2].field1940_0x972 + param_3;
  if (param_3 != 0) {
    /* ST_CALLSITE[004B70B3]: CALL 0x00401893; direct=00401893 STAllPlayersC::sub_004B7750 */
    STAllPlayersC::sub_004B7750(context,param_2);
  }
  return g_packedRecords_A62x8[(char)param_2].field1940_0x972;
}

