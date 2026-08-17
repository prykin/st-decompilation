#include "../../pseudocode_runtime.h"


void __fastcall FUN_0074babb(AnonShape_0074BABB_7C20C67C *param_1)

{
  if (param_1->field_0040 != 0) {
    /* ST_CALLSITE[0074BAC7]: CALL dword ptr [0x0085c0dc] */
    CoTaskMemFree((LPVOID)param_1->field_0044);
  }
  param_1->field_0040 = 0;
  param_1->field_0044 = 0;
  return;
}

