#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void __fastcall FUN_004fae70(RecoveredRecord_004FAE70_42EA0A49 *param_1)

{
  param_1->field_013C = 0;
  return;
}

