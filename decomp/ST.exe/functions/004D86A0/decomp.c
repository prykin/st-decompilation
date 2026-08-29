#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] ecx_context_register target=function:-1: prototype=undefined4 __stdcall
   FUN_004d86a0(STAllPlayersC * context, uint param_2, int param_3) previous_return_type=/undefined4
   Evidence: incoming ECX reaches only unadjusted __thiscall receivers of /STAllPlayersC;
   receiver_calls=1; exact RET purge=8 matches declared stack bytes=8; sites=004D8719 ->
   STAllPlayersC::sub_004D8B70 receiver=/STAllPlayersC */

undefined4 FUN_004d86a0(STAllPlayersC *context,uint param_2,int param_3)

{
  uint uVar1;
  g_packedRecords_A62x8[param_2].field15_0x1f = *(undefined4 *)(&DAT_007bf558 + param_3 * 4);
  g_packedRecords_A62x8[param_2].field16_0x23 = *(undefined4 *)(&DAT_007bf570 + param_3 * 4);
  if (g_packedRecords_A62x8[param_2].field0_0x0 == '\x03') {
    uVar1 = *(undefined4 *)(&DAT_007bf564 + param_3 * 4);
    g_packedRecords_A62x8[param_2].field1951_0x99e = *(undefined4 *)(&DAT_007bf588 + param_3 * 4);
    g_packedRecords_A62x8[param_2].field1949_0x996 = uVar1;
  }
  else {
    g_packedRecords_A62x8[param_2].field17_0x27 = *(undefined4 *)(&DAT_007bf57c + param_3 * 4);
  }
  if (param_2 == DAT_0080874d) {
    /* ST_CALLSITE[004D8719]: CALL 0x00404b8d; direct=00404B8D STAllPlayersC::sub_004D8B70 */
    STAllPlayersC::sub_004D8B70(context,(char)param_2);
  }
  return 0;
}

