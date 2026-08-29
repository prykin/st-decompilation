#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004dc660(RecoveredRecordView_004DC660_DF43CFA8 *param_1)

{
  uint uVar1;

  if (*(char *)(g_bulkInitializedRecords_008087C7 + param_1->field_0024) == '\x01') {
    param_1->field_04D0 = 2;
    param_1->field_04D8 = 0;
    param_1->field_04D4 = 0;
    uVar1 = g_playSystem_00802A38->field_00E4;
    param_1->field_04E0 = 1;
    param_1->field_04DC = uVar1;
    return 0;
  }
  param_1->field_04D0 = 2;
  param_1->field_04D8 = 0;
  param_1->field_04D4 = 0;
  uVar1 = g_playSystem_00802A38->field_00E4;
  param_1->field_04E0 = 0;
  param_1->field_04DC = uVar1;
  return 0;
}

