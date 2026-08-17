#include "../../pseudocode_runtime.h"


undefined4 FUN_0074896b(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x5c);
  /* ST_CALLSITE[00748975]: CALL dword ptr [0x0085bb8c] */
  EnterCriticalSection(lpCriticalSection);
  ((undefined1 *)param_1)[0x95] = 0;
  /* ST_CALLSITE[00748983]: CALL dword ptr [0x0085bb90] */
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}

