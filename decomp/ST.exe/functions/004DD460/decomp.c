#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004dd460(RecoveredRecordView_004DD460_8E9BA356 *param_1)

{

  param_1->field_04D0 = 0;
  param_1->field_04D4 = 0;
  param_1->field_04D8 = 0;
  memset(&param_1->field_0x4e0, 0, 0xa0); /* compiler bulk-zero initialization */
  if ((param_1->field_0231 != 0) && (g_manRub3_008117A4 != nullptr)) {

    thunk_FUN_0062e440(param_1->field_0024,(short)param_1->field_05B0,(short)param_1->field_05B4,
                       (short)param_1->field_05B8,param_1->field_0018,
                       STReplaceLowWord((uint32_t)(param_1->field_0231), (uint16_t)(param_1->field_0032)));
  }
  return 0;
}

