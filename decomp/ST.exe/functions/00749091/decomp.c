#include "../../pseudocode_runtime.h"


void __fastcall FUN_00749091(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(HANDLE *)(param_1 + 0x30) != (HANDLE)0x0) {
    /* ST_CALLSITE[0074909C]: CALL dword ptr [0x0085bbc8] */
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    CloseHandle(*(HANDLE *)(param_1 + 0x30));
  }
  /* ST_CALLSITE[007490AE]: CALL dword ptr [0x0085bb84] */
  DeleteCriticalSection((LPCRITICAL_SECTION)(-(uint)(param_1 != 0) & param_1 + 0x10U));
  FUN_0074b777();
  return;
}

