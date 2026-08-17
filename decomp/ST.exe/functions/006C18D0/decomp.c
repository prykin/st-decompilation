#include "../../pseudocode_runtime.h"


undefined4 FUN_006c18d0(int param_1)

{
  if (DAT_008568b4 == 0) {
    return 0xffffffcc;
  }
  /* ST_CALLSITE[006C18EE]: CALL dword ptr [0x0085bb8c] */
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
  if ((-1 < param_1) && (param_1 < 0x20)) {
    if ((*(uint *)(&DAT_00854ff8 + param_1 * 0xc4) & 1) != 0) {
      *(uint *)(&DAT_00854ff8 + param_1 * 0xc4) = *(uint *)(&DAT_00854ff8 + param_1 * 0xc4) | 8;
      /* ST_CALLSITE[006C1923]: CALL dword ptr [0x0085bb90] */
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
      return 0;
    }
  }
  /* ST_CALLSITE[006C193A]: CALL dword ptr [0x0085bb90] */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
  return 0xfffffffc;
}

