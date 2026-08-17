#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_00750385(AnonShape_00750287_BC8A1854 *param_1)

{
  /* ST_CALLSITE[0075038D]: CALL dword ptr [0x0085bb8c] */
  EnterCriticalSection((LPCRITICAL_SECTION)&param_1->field_0x8);
  param_1->field_0064 = 0;
  FUN_00750287(param_1);
  /* ST_CALLSITE[0075039F]: CALL dword ptr [0x0085bb90] */
  LeaveCriticalSection((LPCRITICAL_SECTION)&param_1->field_0x8);
  return 0;
}

