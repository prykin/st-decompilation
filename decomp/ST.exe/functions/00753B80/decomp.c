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
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    param_2 = *(undefined4 *)(param_1->field_000C + 0x24);
  }
  param_1->field_0010 = param_2;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  puVar1 = (undefined4 *)(*(int *)(param_1->field_0008 + 0x34) + param_1->field_0010);
  *(undefined4 *)(param_1->field_000C + 0x40 + param_3 * 8) = *puVar1;
  return puVar1;
}

