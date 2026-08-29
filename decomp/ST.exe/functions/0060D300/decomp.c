#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __fastcall FUN_0060d300(RecoveredRecordView_0060D220_EC588C54 *param_1)

{
  if (param_1->field_0244 != 0) {
    thunk_FUN_0060d220(param_1);
    FreeAndNull(&param_1->field_0244);
    param_1->field_023C = 0;
  }
  return;
}

