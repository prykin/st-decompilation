#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 0065FD00 returns zeroed full register at 0065FD30 @ 0065FD32 */

uint __fastcall FUN_0065fd00(AnonShape_0065FD00_EB74ED0C *param_1,undefined4 param_2)

{
  STGroupBoatC *this;

  if ((param_1->field_007D != 0xfffe) && (g_allPlayers_007FA174 != nullptr)) {
    this = thunk_FUN_0042b760(param_1->field_0024,param_1->field_007D);
    if (this != nullptr) {
      /* ST_CALLSITE[0065FD2D]: CALL dword ptr [EDX + 0x8] */
      this->sub_00498D20(3,0);
      return 0;
    }
  }
  return 0xffffffff;
}

