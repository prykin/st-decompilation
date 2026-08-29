#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 0067FCA0 returns used as parameter 1 of FUN_00683780 @ 00683B20 | 0067FCA0 returns used
   as parameter 1 of FUN_00683780 @ 00685F71 */

RecoveredGlobalRecordView_00848A14 * __cdecl FUN_0067fca0(uint param_1)

{
  int *piVar1;
  RecoveredGlobalRecordView_00848A14 *pRVar2;

  if (((g_array_00848A38->count <= param_1) ||
      (piVar1 = DArrayAt<int>(g_array_00848A38, param_1),
      piVar1 == nullptr)) ||
     (pRVar2 = (RecoveredGlobalRecordView_00848A14 *)*piVar1,
     pRVar2 == nullptr)) {
    pRVar2 = nullptr;
  }
  return pRVar2;
}

