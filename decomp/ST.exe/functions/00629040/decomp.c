#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] typed_pointer_return.
   Evidence: all 1 value-return path(s) forward Listing variable param_1 with evidence-backed
   structure /SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00629040_09AFDC96 (current
   recovered extent=202) */

RecoveredRecord_00629040_09AFDC96 * __fastcall
FUN_00629040(RecoveredRecord_00629040_09AFDC96 *param_1)

{
  int iVar1;
  RecoveredRecord_00629040_09AFDC96 *pRVar2;

  pRVar2 = param_1;
  for (iVar1 = 0x35; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pRVar2 = 0;
    pRVar2 = (RecoveredRecord_00629040_09AFDC96 *)&pRVar2->field_0x4;
  }
  *(undefined2 *)pRVar2 = 0;
  pRVar2->field_0x2 = 0;
  param_1->field_00C6 = 0xffffffff;
  return param_1;
}

