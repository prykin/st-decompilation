#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] stack_parameter_width target=parameter:1: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=006C1994 MOV ECX,dword ptr [EBP + 0xc];
   first-use mask */

undefined4 FUN_006c1950(int param_1,byte param_2)

{
  if (PTR_008568b4 == nullptr) {
    return 0xffffffcc;
  }
  /* ST_CALLSITE[006C196E]: CALL dword ptr [0x0085bb8c] */
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
  if (((-1 < param_1) && (param_1 < 0x20)) && (((&DAT_00854ff8)[param_1 * 0xc4] & 1) != 0)) {
    (&DAT_00855024)[param_1 * 0x31] = (uint)param_2;
    /* ST_CALLSITE[006C19A8]: CALL dword ptr [0x0085bb90] */
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
    return 0;
  }
  /* ST_CALLSITE[006C19BF]: CALL dword ptr [0x0085bb90] */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
  return 0xfffffffc;
}

