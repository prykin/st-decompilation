#include "../../pseudocode_runtime.h"


void __fastcall FUN_0067b380(RecoveredRecord_0067B380_B0ED9EE7 *param_1)

{
  DArrayTy *pDVar1;

  if (param_1->field_06A1 != nullptr) {
    DArrayDestroy(param_1->field_06A1);
    pDVar1 = Library::DKW::TBL::DArrayCreate(nullptr,10,0x12,10);
    param_1->field_06A1 = pDVar1;
  }
  return;
}

