#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004eaf90(RecoveredRecordView_004EAF90_6FAC7F27 *param_1)

{
  uint uVar1;
  uVar1 = 0;
  switch(param_1->field_04D0) {
  case 1:
    if (param_1->field_04D4 == DAT_0079aa0c + -1) {
      return 1;
    }
    break;
  case 3:
    if (param_1->field_04D4 < DAT_0079aa14) {
      return 0;
    }
  case 0:
  case 2:
    uVar1 = 1;
  }
  return uVar1;
}

