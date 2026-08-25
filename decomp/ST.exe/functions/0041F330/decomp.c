#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004BE1D0 -> 0041F330 @ 004BE1D3; TLOBaseTy::sub_004BE1D0 this */

uint __fastcall FUN_0041f330(TLOBaseTy *param_1)

{
  return ~param_1->field_01D1 >> 4 & 1;
}

