#include "../../pseudocode_runtime.h"


undefined4 FUN_006c1f00(int param_1,uint *param_2,uint *param_3)

{
  if (DAT_008568b4 == 0) {
    return 0xffffffcc;
  }
  if ((-1 < param_1) && (param_1 < 0x20)) {
    /* ST_CALLSITE[006C1F2B]: CALL dword ptr [0x0085bb8c] */
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
    if (param_2 != nullptr) {
      *param_2 = *(uint *)(&DAT_00854ff8 + param_1 * 0xc4) & 1;
    }
    if (param_3 != nullptr) {
      *param_3 = *(uint *)(&DAT_00854ff8 + param_1 * 0xc4) >> 1 & 1;
    }
    /* ST_CALLSITE[006C1F6E]: CALL dword ptr [0x0085bb90] */
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
    return 0;
  }
  return 0xfffffffc;
}

