#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0064CD80 -> 00402E14 @ 0064CF3E */

void __fastcall FUN_00402e14(AiEventClassTy *param_1)

{
  RecoveredRecordView_0065D030_884B498B *pRVar1;

  if (param_1 == nullptr) {
    pRVar1 = nullptr;
  }
  else {
    pRVar1 = (RecoveredRecordView_0065D030_884B498B *)&param_1->field_008C;
  }
  thunk_FUN_0065d030(pRVar1);
  if (param_1->field_05B3 != nullptr) {
    FUN_006b5570(param_1->field_05B3);
    param_1->field_05B3 = nullptr;
  }
  return;
}

