#include "../../pseudocode_runtime.h"


undefined4 FUN_0074b469(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;

  if (param_2 == nullptr) {
    uVar1 = 0x80004003;
  }
  else {
    /* ST_CALLSITE[0074B483]: CALL dword ptr [0x0085bb8c] */
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x4c));
    *param_2 = *(undefined4 *)(param_1 + 0x40);
    /* ST_CALLSITE[0074B48F]: CALL dword ptr [0x0085bb90] */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x4c));
    uVar1 = 0;
  }
  return uVar1;
}

