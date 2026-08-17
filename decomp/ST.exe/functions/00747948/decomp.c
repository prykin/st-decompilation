#include "../../pseudocode_runtime.h"


LONG FUN_00747948(int *param_1)

{
  LONG LVar1;

  /* ST_CALLSITE[00747952]: CALL dword ptr [0x0085bc70] */
  LVar1 = InterlockedDecrement(param_1 + 4);
  if ((LVar1 == 0) && (param_1 != nullptr)) {
    /* ST_CALLSITE[00747968]: CALL dword ptr [EAX + 0x1c] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*param_1 + 0x1c))(1);
  }
  return LVar1;
}

