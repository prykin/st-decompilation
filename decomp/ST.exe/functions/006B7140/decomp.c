#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0054D640 -> 006B7140 @ 0054DAF4 | 0054D640 -> 006B7140 @ 0054DB4D */

int FUN_006b7140(int *param_1)

{
  int *piVar1;

  piVar1 = param_1 + 0x10;
  *piVar1 = 0;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*(int *)*param_1 + 0x30))
            ((int *)*param_1,param_1 + 6,Library::DKW::DDX::FUN_006b7170,piVar1,0x10);
  return *piVar1 + 1;
}

