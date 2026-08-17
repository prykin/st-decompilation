#include "../../pseudocode_runtime.h"


void __fastcall FUN_0074d761(int param_1)

{
  HANDLE hHandle;

  /* ST_CALLSITE[0074D768]: CALL dword ptr [0x0085bd0c] */
  hHandle = (HANDLE)InterlockedExchange((LONG *)(param_1 + 0x14),0);
  if (hHandle != (HANDLE)0x0) {
    /* ST_CALLSITE[0074D777]: CALL dword ptr [0x0085bce0] */
    WaitForSingleObject(hHandle,0xffffffff);
    /* ST_CALLSITE[0074D77E]: CALL dword ptr [0x0085bbc8] */
    CloseHandle(hHandle);
  }
  return;
}

