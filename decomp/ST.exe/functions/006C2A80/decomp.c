#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0056ADC0 -> 006C2A80 @ 0056B28E

   [STPrototypeApplier] Propagated return.
   Evidence: 006C2A80 returns zeroed full register at 006C2AAD @ 006C2AB1

   [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 0056ADC0 -> 006C2A80 @ 0056B28E; data at 0080759C */

uint FUN_006c2a80(int *param_1,DDXContext *param_2)

{
  void *pvVar1;

  *param_1 = 0;
  pvVar1 = Library::DKW::LIB::MemAllocClear(0xb8);
  if (pvVar1 == nullptr) {
    return 0xfffffffe;
  }
  STField<DDXContext *>(pvVar1,4) = param_2;
  *param_1 = (int)pvVar1;
  return 0;
}

