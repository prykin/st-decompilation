#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004dd500(AnonShape_004DD500_8D93FB74 *param_1,undefined4 param_2)

{
  if ((param_1->field_0231 == 0) && (g_manRub3_008117A4 != nullptr)) {
    thunk_FUN_0062e440(param_1->field_0024,(short)param_1->field_05B0,(short)param_1->field_05B4,
                       (short)param_1->field_05B8,param_1->field_0018,
                       STReplaceLowWord((uint32_t)(param_2), (uint16_t)(param_1->field_0032)));
  }
  return 0;
}

