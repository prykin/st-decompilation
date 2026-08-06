#include "../../pseudocode_runtime.h"


LONG FUN_0074767f(int *param_1)

{
  LONG LVar1;

  LVar1 = InterlockedDecrement(param_1 + 5);
  if ((LVar1 == 0) && (param_1 != nullptr)) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 0x1c))(1);
  }
  return LVar1;
}

