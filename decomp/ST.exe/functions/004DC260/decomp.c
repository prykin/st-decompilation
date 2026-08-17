#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004dc260(TLOBaseTy *param_1)

{
  uint uVar1;
  int iVar2;

  iVar2 = thunk_FUN_004ac910(&param_1->field_01D5,'\x0e');
  if (iVar2 == param_1->field_01F5->field_020C) {
    if (param_1->field_04D0 == CASE_2) {
      param_1->field_04D0 = CASE_1;
      param_1->field_0261 = 1;
      /* ST_CALLSITE[004DC2BD]: CALL 0x00402cf7; direct=00402CF7 TLOBaseTy::RotateSpr */
      TLOBaseTy::RotateSpr(param_1,0);
    }
    else if (param_1->field_04D0 == CASE_3) {
      param_1->field_04D0 = CASE_0;
      param_1->field_0261 = 0;
      /* ST_CALLSITE[004DC29E]: CALL 0x00402cf7; direct=00402CF7 TLOBaseTy::RotateSpr */
      TLOBaseTy::RotateSpr(param_1,0);
    }
  }
  if (param_1->field_04D0 == CASE_0) {
    if ((param_1->field_04D8 + 0xf <= g_playSystem_00802A38->field_00E4) &&
       (param_1->field_04D4 < 200)) {
      param_1->field_04D8 = g_playSystem_00802A38->field_00E4;
      iVar2 = param_1->field_04D4 + 2;
      param_1->field_04D4 = iVar2;
      if (199 < iVar2) {
        param_1->field_04D4 = 200;
      }
    }
    uVar1 = g_playSystem_00802A38->field_00E4;
    iVar2 = thunk_FUN_004e8230((int)param_1->field_0024,param_1->field_0235,0);
    if ((iVar2 + param_1->field_0271 <= uVar1) && (199 < param_1->field_04D4)) {
      param_1->field_0271 = uVar1;
      /* ST_CALLSITE[004DC366]: CALL 0x0040239c; direct=0040239C TLOBaseTy::fireFindCheckTarget */
      TLOBaseTy::fireFindCheckTarget(param_1,0,0);
      if (param_1->field_028D != nullptr) {
        param_1->field_04D0 = CASE_2;
        /* ST_CALLSITE[004DC383]: CALL 0x00402cf7; direct=00402CF7 TLOBaseTy::RotateSpr */
        TLOBaseTy::RotateSpr(param_1,0);
        return 0;
      }
    }
  }
  else if (param_1->field_04D0 == CASE_1) {
    if (param_1->field_04D4 < 1) {
      param_1->field_04D0 = CASE_3;
      param_1->field_04D4 = 0;
      param_1->field_0261 = 0;
      /* ST_CALLSITE[004DC3B3]: CALL 0x00402cf7; direct=00402CF7 TLOBaseTy::RotateSpr */
      TLOBaseTy::RotateSpr(param_1,0);
      return 0;
    }
    if (param_1->field_0295 + 0x465 <= g_playSystem_00802A38->field_00E4) {
      param_1->field_04D0 = CASE_3;
      param_1->field_0261 = 0;
      /* ST_CALLSITE[004DC3E9]: CALL 0x00402cf7; direct=00402CF7 TLOBaseTy::RotateSpr */
      TLOBaseTy::RotateSpr(param_1,0);
    }
  }
  return 0;
}

