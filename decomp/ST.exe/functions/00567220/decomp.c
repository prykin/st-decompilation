#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __fastcall FUN_00567220(RecoveredRecordView_00567220_6B6F72F8 *param_1)

{

  if (param_1->field_0F8B != 0) {
    FUN_006c1e20();
    memset(&param_1->field_0xe0b, 0, 0x180); /* compiler bulk-zero initialization */
  }
  if ((AnonShape_006C2390_A203A467 *)param_1->field_0DF7 != nullptr) {
    FUN_006c2390((AnonShape_006C2390_A203A467 *)param_1->field_0DF7);
    param_1->field_0DF7 = 0;
  }
  if (param_1->field_0F8B != 0) {
    FUN_006c2050();
  }
  param_1->field_0F8B = 0;
  return;
}

