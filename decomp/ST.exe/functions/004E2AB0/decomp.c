#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 004E2AB0 returns zeroed full register at 004E2AB5 @ 004E2AB7 */

uint __fastcall FUN_004e2ab0(int param_1)

{
  TLOBaseTy::sub_004E3120((TLOBaseTy *)param_1);
  return 0;
}

