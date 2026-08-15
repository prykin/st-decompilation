#include "../../pseudocode_runtime.h"


undefined1 FUN_00672b30(void)

{
  undefined1 uVar1;

  if (DAT_00857560 != 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    uVar1 = (*(code *)PTR_0081194c->field_000C)(DAT_00857560);
    return uVar1;
  }
  return 0;
}

