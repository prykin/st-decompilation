#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004d8e30(TLOBaseTy *param_1)

{
  if (param_1->field_04D0 == CASE_0) {
    param_1->field_04D0 = CASE_1;
    TLOBaseTy::AddSprInit(param_1);
    TLOBaseTy::RotateSpr(param_1,0);
  }
  return 1;
}

