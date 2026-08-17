#include "../../pseudocode_runtime.h"


uint FUN_0074b86c(int *param_1)

{
  uint *lpAddend;
  LONG LVar1;
  uint uVar2;

  lpAddend = (uint *)(param_1 + 2);
  /* ST_CALLSITE[0074B876]: CALL dword ptr [0x0085bc70] */
  LVar1 = InterlockedDecrement((LONG *)lpAddend);
  if (LVar1 == 0) {
    *lpAddend = *lpAddend + 1;
    if (param_1 != nullptr) {
      /* ST_CALLSITE[0074B88F]: CALL dword ptr [EAX + 0xc] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*param_1 + 0xc))(1);
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    if (1 < *lpAddend) {
      uVar2 = *lpAddend;
    }
  }
  return uVar2;
}

