#include "../../pseudocode_runtime.h"


void __thiscall FUN_00490e00(void *this,int param_1)

{
  if (param_1 == 1) {
    STField<undefined4>(this,0x73e) = 1;
    return;
  }
  if (STField<int>(this,0x73e) == 1) {
    STField<int>(this,0x73e) = param_1;
    if (STField<int>(this,0x45d) == 5) {
      /* ST_CALLSITE[00490E46]: CALL 0x00401028; direct=00401028 STAllPlayersC::DeleteGuardBoat */
      STAllPlayersC::DeleteGuardBoat
                (g_allPlayers_007FA174,STField<char>(this,0x24),STField<short>(this,0x32),1);
    }
  }
  return;
}

