#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 0067FCA0 returns used as parameter 1 of FUN_00683780 @ 00683B20 | 0067FCA0 returns used
   as parameter 1 of FUN_00683780 @ 00685F71 */

AnonShape_00683780_11EA4E23 * __cdecl FUN_0067fca0(uint param_1)

{
  int *piVar1;
  AnonShape_00683780_11EA4E23 *pAVar2;

  if (((g_array_00848A38->count <= param_1) ||
      (piVar1 = DArrayAt<int>(g_array_00848A38, param_1),
      piVar1 == nullptr)) ||
     (pAVar2 = (AnonShape_00683780_11EA4E23 *)*piVar1, pAVar2 == nullptr)
     ) {
    pAVar2 = nullptr;
  }
  return pAVar2;
}

