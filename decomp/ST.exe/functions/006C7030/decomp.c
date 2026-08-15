#include "../../pseudocode_runtime.h"


void FUN_006c7030(AnonShape_006C7030_23487746 *param_1)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (*(code *)param_1->field_004E)(param_1,param_1->field_0052);
  param_1->field_0017 = 0;
  FreeAndNull(&param_1->field_0x2a);
  param_1->field_0056 = 4;
  param_1->field_005E = 0;
  param_1->field_005F = 0;
  FreeAndNull(&param_1[1].field_0xe);
  return;
}

