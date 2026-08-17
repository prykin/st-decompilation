#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004ece40(TLOBaseTy *param_1)

{
  if (param_1->field_04D0 == CASE_0) {
    param_1->field_04D0 = CASE_1;
    /* ST_CALLSITE[004ECE57]: CALL 0x00401a0f; direct=00401A0F TLOBaseTy::AddSprInit */
    TLOBaseTy::AddSprInit(param_1);
    /* ST_CALLSITE[004ECE60]: CALL 0x00402cf7; direct=00402CF7 TLOBaseTy::RotateSpr */
    TLOBaseTy::RotateSpr(param_1,0);
  }
  return 1;
}

