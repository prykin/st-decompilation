#include "../../pseudocode_runtime.h"


bool __fastcall FUN_0074a347(int param_1)

{
  int iVar1;

  /* ST_CALLSITE[0074A352]: CALL dword ptr [0x0085bb8c] */
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x94));
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)(param_1 + 0x6c);
  /* ST_CALLSITE[0074A363]: CALL dword ptr [0x0085bb90] */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x94));
  return iVar1 != 0;
}

