#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void __fastcall FUN_00423380(RecoveredRecord_00423380_AA1491AE *param_1)

{
  param_1->field_0020 = 0;
  return;
}

