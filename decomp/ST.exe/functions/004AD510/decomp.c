#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void __fastcall FUN_004ad510(RecoveredRecord_004AD510_C348FA0E *param_1)

{
  param_1->field_0010 = 0;
  return;
}

