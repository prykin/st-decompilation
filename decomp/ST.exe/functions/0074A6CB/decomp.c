#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_0074a6cb(AnonShape_0074A6CB_17890C91 *param_1)

{
  byte *lpCriticalSection;
  uint uVar1;
  lpCriticalSection = &param_1->field_0x94;
  /* ST_CALLSITE[0074A6D6]: CALL dword ptr [0x0085bb8c] */
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (param_1->field_0064 == 0) {
    /* ST_CALLSITE[0074A6E3]: CALL dword ptr [0x0085bb90] */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar1 = 0;
  }
  else {
    param_1->field_00C0 = 0;
    if (param_1->field_0050 != nullptr) {
      FUN_0074f107(param_1->field_0050);
    }
    param_1->field_0074 = 1;
    uVar1 = FUN_00747406(param_1,1,nullptr,
                         -(uint)(param_1 != nullptr) &
                         (uint)&param_1->field_0xc);
    /* ST_CALLSITE[0074A71F]: CALL dword ptr [0x0085bb90] */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return uVar1;
}

