#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void __fastcall FUN_00423360(RecoveredRecord_00423360_E7F08AAB *param_1)

{
  param_1->field_0020 = 1;
  return;
}

