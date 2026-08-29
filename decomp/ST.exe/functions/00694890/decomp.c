#include "../../pseudocode_runtime.h"


void __fastcall FUN_00694890(RecoveredRecord_00694890_E22E6A2C *param_1)

{
  if (param_1->field_0010 != nullptr) {
    Library::MSVCRT::thunk_FUN_006a4950(param_1->field_0010);
  }
  param_1->field_0010 = nullptr;
  return;
}

