#include "../../pseudocode_runtime.h"


/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions

   [STReturnSemanticsApplier] machine_eax_return.
   Evidence: every reachable RET has a full-width EAX definition established inside the callee; at
   least two direct callers consume it and no caller-use path is unresolved; machine CFG audit:
   used=20, ignored=1, unknown=0

   [STPrototypeRepairApplier] Propagated return.
   Evidence: 00753B80 returns used as parameter 1 of FUN_00755d40 @ 00755C7A | 00753B80 returns used
   as parameter 1 of FUN_00755d40 @ 00755DDA */

RecoveredRecord_00755D40_97E6B3C8 *
FUN_00753b80(RecoveredRecordView_00750F20_49A60217 *param_1,undefined4 param_2,int param_3)

{
  RecoveredRecord_00755D40_97E6B3C8 *pRVar1;

  if (param_3 == 0) {
    param_2 = param_1->field_000C->field_0024;
  }
  param_1->field_0010 = param_2;
  pRVar1 = (RecoveredRecord_00755D40_97E6B3C8 *)
           (param_1->field_0008->field_0034 + param_1->field_0010);
  (&param_1->field_000C->field_0040)[param_3 * 2] = *(undefined4 *)pRVar1;
  return pRVar1;
}

