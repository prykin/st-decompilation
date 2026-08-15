#include "../../pseudocode_runtime.h"


/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions

   [STReturnSemanticsApplier] machine_eax_return.
   Evidence: every reachable RET has a full-width EAX definition established inside the callee; at
   least two direct callers consume it and no caller-use path is unresolved; machine CFG audit:
   used=20, ignored=1, unknown=0 */

undefined4 * FUN_00753b80(AnonShape_00750F20_F8C16F98 *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;

  if (param_3 == 0) {
    param_2 = param_1->field_000C->field_0024;
  }
  param_1->field_0010 = param_2;
  puVar1 = (undefined4 *)(param_1->field_0008->field_0034 + param_1->field_0010);
  (&param_1->field_000C->field_0040)[param_3 * 2] = *puVar1;
  return puVar1;
}

