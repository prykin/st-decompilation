#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004e1310(RecoveredRecordView_004E1310_CAFD722B *param_1)

{
  uint uVar1;

  /* ST_CALLSITE[004E1324]: CALL 0x004053f3; direct=004053F3 STAllPlayersC::sub_004E4270 */
  STAllPlayersC::sub_004E4270(g_allPlayers_007FA174,param_1->field_0024,param_1->field_0518);
  uVar1 = g_playSystem_00802A38->field_00E4;
  param_1->field_051C = param_1->field_051C + param_1->field_0518;
  param_1->field_0524 = uVar1;
  param_1->field_0518 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (param_1->field_0024 == (uint)*(byte *)(param_1->field_0010 + 0x112d)) {
    /* ST_CALLSITE[004E1372]: CALL 0x00404b8d; direct=00404B8D STAllPlayersC::sub_004D8B70 */
    STAllPlayersC::sub_004D8B70(g_allPlayers_007FA174,(char)param_1->field_0024);
  }
  return 0;
}

