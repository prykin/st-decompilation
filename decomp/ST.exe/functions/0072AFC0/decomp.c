#include "../../pseudocode_runtime.h"


void FUN_0072afc0(void)

{
  if (DAT_0085713c != (HANDLE)0x0) {
    if (PTR_00857134 != nullptr) {
      /* ST_CALLSITE[0072AFDA]: CALL dword ptr [0x0085bb8c] */
      EnterCriticalSection((LPCRITICAL_SECTION)(*PTR_00857134 + 0x4f0));
      /* ST_CALLSITE[0072AFEF]: CALL dword ptr [0x0085bbc8] */
      CloseHandle(*(HANDLE *)(*PTR_00857134 + 0x508));
      *(undefined4 *)(*PTR_00857134 + 0x508) = 0;
    }
    /* ST_CALLSITE[0072B00F]: CALL dword ptr [0x0085bb6c] */
    TerminateThread(DAT_0085713c,0);
    DAT_0085713c = (HANDLE)0x0;
    if (PTR_00857134 == nullptr) {
      DAT_0085713c = (HANDLE)0x0;
      return;
    }
    /* ST_CALLSITE[0072B031]: CALL dword ptr [0x0085bb90] */
    LeaveCriticalSection((LPCRITICAL_SECTION)(*PTR_00857134 + 0x4f0));
  }
  if (PTR_00857134 != nullptr) {
    FUN_006b3bb0(PTR_00857134,DAT_007f1080);
    DAT_007f1080 = 0xffffffff;
    PTR_00857134 = nullptr;
  }
  return;
}

