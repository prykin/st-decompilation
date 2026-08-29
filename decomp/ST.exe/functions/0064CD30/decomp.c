#include "../../pseudocode_runtime.h"


void __fastcall FUN_0064cd30(RecoveredRecord_0064CD30_9386233E *param_1)

{
  RecoveredRecordView_0065D030_884B498B *pRVar1;

  if (param_1 == nullptr) {
    pRVar1 = nullptr;
  }
  else {
    pRVar1 = (RecoveredRecordView_0065D030_884B498B *)&param_1->field_0x8c;
  }
  thunk_FUN_0065d030(pRVar1);
  if (param_1->field_05B3 != nullptr) {
    FUN_006b5570(param_1->field_05B3);
    param_1->field_05B3 = nullptr;
  }
  return;
}

