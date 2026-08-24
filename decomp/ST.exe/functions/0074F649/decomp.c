#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0074f649(int param_1,double *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  if (param_2 == nullptr) {
    uVar1 = 0x80004003;
  }
  else {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x38);
    /* ST_CALLSITE[0074F663]: CALL dword ptr [0x0085bb8c] */
    EnterCriticalSection(lpCriticalSection);
    *param_2 = (double)*(longlong *)(param_1 + 0x28) * _DAT_007a1bf8;
    /* ST_CALLSITE[0074F675]: CALL dword ptr [0x0085bb90] */
    LeaveCriticalSection(lpCriticalSection);
    uVar1 = 0;
  }
  return uVar1;
}

