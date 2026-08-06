#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 004EA6C0 returns zeroed full register at 004EA6C5 @ 004EA6C7 */

uint __fastcall FUN_004ea6c0(int param_1)

{
  TLOBaseTy::sub_004EA620((TLOBaseTy *)param_1);
  return 0;
}

