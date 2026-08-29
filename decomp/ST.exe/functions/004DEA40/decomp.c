#include "../../pseudocode_runtime.h"


void __fastcall FUN_004dea40(RecoveredRecordView_004DEA40_A555DAF1 *param_1)

{
  if (param_1->field_04D0 != 0) {
    param_1->field_04D0 = param_1->field_04D0 + -1;
    g_packedRecords_A62x8[param_1->field_0024].field1600_0x7d6 =
         g_packedRecords_A62x8[param_1->field_0024].field1600_0x7d6 + -1;
  }
  return;
}

