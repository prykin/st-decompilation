#include "../../pseudocode_runtime.h"


int __fastcall FUN_0074ff8c(AnonShape_0074FF8C_0691EA28 *param_1)

{
  /* ST_CALLSITE[0074FF94]: CALL dword ptr [0x0085bb88] */
  InitializeCriticalSection((LPCRITICAL_SECTION)&param_1->field_0x8);
  FUN_0074de63((undefined4 *)&param_1->field_0x20);
  FUN_0074de63((undefined4 *)&param_1->field_0x38);
  FUN_0074d1ea(&param_1->field_0x50,1);
  param_1->field_0054 = 0;
  param_1->field_0058 = 0;
  param_1->field_005C = 0;
  param_1->field_0060 = 0;
  param_1->field_0064 = 0;
  param_1->field_0068 = 0;
  param_1->field_006C = 0;
  return (int)param_1;
}

