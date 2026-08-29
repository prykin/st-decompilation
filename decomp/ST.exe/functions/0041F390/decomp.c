#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void __fastcall FUN_0041f390(RecoveredRecord_0041F390_BF8EDA78 *param_1)

{
  param_1->field_0221 = 2;
  return;
}

