#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void __fastcall FUN_006dc300(RecoveredRecord_006DC300_711D9253 *param_1)

{
  param_1->field_02D8 = 1;
  return;
}

