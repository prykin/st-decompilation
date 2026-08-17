#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 004CE7A0 returns zeroed full register at 004CE7B1 @ 004CE7B3 */

uint __fastcall FUN_004ce7a0(TLOBaseTy *param_1)

{
  param_1->field_04D0 = CASE_1;
  /* ST_CALLSITE[004CE7AC]: CALL 0x00402cf7; direct=00402CF7 TLOBaseTy::RotateSpr */
  TLOBaseTy::RotateSpr(param_1,1);
  return 0;
}

