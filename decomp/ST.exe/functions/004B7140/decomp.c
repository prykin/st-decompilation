#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] ecx_context_register target=function:-1: prototype=int __stdcall
   FUN_004b7140(STAllPlayersC * context, undefined4 param_2, int param_3) previous_return_type=/int
   Evidence: incoming ECX reaches only unadjusted __thiscall receivers of /STAllPlayersC;
   receiver_calls=2; exact RET purge=8 matches declared stack bytes=8; sites=004B716F ->
   STAllPlayersC::sub_004B7750 receiver=/STAllPlayersC | 004B7186 -> STAllPlayersC::sub_004D8B70
   receiver=/STAllPlayersC */

int FUN_004b7140(STAllPlayersC *context,uint param_2,int param_3)

{
  char cVar1;

  cVar1 = (char)param_2;
  g_packedRecords_A62x8[cVar1].field1940_0x972 = param_3;
  if (param_3 != 0) {
    /* ST_CALLSITE[004B716F]: CALL 0x00401893; direct=00401893 STAllPlayersC::sub_004B7750 */
    STAllPlayersC::sub_004B7750(context,param_2);
  }
  if ((int)cVar1 == (uint)DAT_0080874d) {
    /* ST_CALLSITE[004B7186]: CALL 0x00404b8d; direct=00404B8D STAllPlayersC::sub_004D8B70 */
    STAllPlayersC::sub_004D8B70(context,cVar1);
  }
  return g_packedRecords_A62x8[cVar1].field1940_0x972;
}

