#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004b7aa0(TLOBaseTy *param_1)

{
  int iVar1;

  iVar1 = thunk_FUN_004ac910(&param_1->field_01D5,'\x0e');
  if (iVar1 == param_1->field_01F5->field_020C) {
    if (param_1->field_04D0 == CASE_1) {
      param_1->field_04D0 = CASE_2;
      /* ST_CALLSITE[004B7AF1]: CALL 0x00402cf7; direct=00402CF7 TLOBaseTy::RotateSpr */
      TLOBaseTy::RotateSpr(param_1,0);
    }
    else if (param_1->field_04D0 == CASE_3) {
      param_1->field_04D0 = CASE_0;
      /* ST_CALLSITE[004B7ADA]: CALL 0x00402cf7; direct=00402CF7 TLOBaseTy::RotateSpr */
      TLOBaseTy::RotateSpr(param_1,0);
      return 0;
    }
  }
  return 0;
}

