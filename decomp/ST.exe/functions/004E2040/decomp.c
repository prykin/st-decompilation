#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004e2040(RecoveredRecord_004E2040_DF20E090 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_8;

  iVar3 = 0;
  local_8 = 0;
  piVar2 = (int *)&param_1[0x21].field_0x1f;
  do {

    iVar1 = thunk_FUN_004e22f0(param_1,iVar3);
    if (iVar1 != 0) {
      local_8 = local_8 + ((*piVar2 - piVar2[-1]) * *(int *)(&DAT_007e085c + piVar2[-3] * 4)) /
                          *piVar2;
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 10;
  } while (iVar3 < 2);
  /* ST_CALLSITE[004E209D]: CALL 0x0040497b; direct=0040497B STAllPlayersC::sub_004D76E0 */
  STAllPlayersC::sub_004D76E0
            (g_allPlayers_007FA174,param_1->field_0024,4,param_1->field_0018,0,0,local_8,0);
  return 0;
}

