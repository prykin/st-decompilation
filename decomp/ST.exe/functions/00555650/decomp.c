#include "../../pseudocode_runtime.h"


void __fastcall FUN_00555650(RecoveredRecord_00555650_8E7D0F7D *param_1)

{
  if (param_1->field_004C != nullptr) {

    Library::MSVCRT::FUN_0072ea90(param_1->field_004C);
    param_1->field_004C = nullptr;
  }
  return;
}

