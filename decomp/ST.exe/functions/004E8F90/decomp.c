#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004e8f90(RecoveredRecordView_004E8F90_77A5C19A *param_1)

{
  if ((param_1->field_04D8 != 0xffff) && (param_1->field_04D8 = 0xffff, param_1->field_04E0 != 0)) {
    /* ST_CALLSITE[004E8FCB]: CALL 0x00401dd4; direct=00401DD4 TLOFakeTy::sub_004D0A80 */
    TLOFakeTy::sub_004D0A80
              (g_tLOFake_00800BCC,param_1->field_04E4,param_1->field_04E8,param_1->field_04EC);
    param_1->field_04E0 = 0;
  }
  if (((param_1->field_04F8 != 0) && (param_1->field_04FC != 0)) &&
     (param_1->field_061B != nullptr)) {

    thunk_FUN_004e9bb0(param_1->field_061B,(RecoveredRecord_004E9BB0_CD9D470B *)param_1);
    param_1->field_04F8 = 0;
    param_1->field_04FC = 0;
  }
  return 0;
}

