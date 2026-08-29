#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 004ECCC0 returns zeroed full register at 004ECCD0 @ 004ECCD2 */

uint __fastcall FUN_004eccc0(int *param_1)

{
  if (param_1[0x16b] == 0x6f) {
    thunk_FUN_0041d4f0((RecoveredRecordView_0041D4F0_86521311 *)param_1);
  }
  return 0;
}

