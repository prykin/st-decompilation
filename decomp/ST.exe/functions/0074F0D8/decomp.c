#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_0074f0d8(AnonShape_0074F0D8_3A9DA5F1 *param_1)

{
  /* ST_CALLSITE[0074F0E0]: CALL dword ptr [0x0085bb8c] */
  EnterCriticalSection((LPCRITICAL_SECTION)&param_1->field_0x1c);
  param_1->field_0038 = 0;
  param_1->field_0040 = 0;
  param_1->field_003C = 0;
  param_1->field_0044 = 0;
  param_1->field_0048 = 1;
  /* ST_CALLSITE[0074F0FC]: CALL dword ptr [0x0085bb90] */
  LeaveCriticalSection((LPCRITICAL_SECTION)&param_1->field_0x1c);
  return 0;
}

