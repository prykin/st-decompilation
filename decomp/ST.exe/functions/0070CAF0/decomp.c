#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0070CAF0 -> 0070C9E0 @ 0070CAFF

   [STPrototypeRepairApplier] Propagated parameter 2.
   Evidence: incoming stack slot is read as a int before its address is passed as a distinct output
   lifetime */

void __cdecl FUN_0070caf0(AnonShape_0070C9E0_7137F001 *param_1,uint *param_2,int param_3)

{
  uint *puVar1;
  puVar1 = FUN_0070c9e0(param_1,(char)param_3,(uint *)&param_3);
  if (puVar1 == nullptr) {
    return;
  }
  *param_2 = param_3;
  return;
}

