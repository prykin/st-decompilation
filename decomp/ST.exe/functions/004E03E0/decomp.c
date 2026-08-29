#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004e03e0(RecoveredRecordView_004E03E0_0D470130 *param_1)

{
  RecoveredRecordView_00580570_55CB0282 *this;

  if (((param_1->field_0245 == 1) || (param_1->field_0245 == 6)) && (param_1->field_04D4 != 0)) {
    this = (RecoveredRecordView_00580570_55CB0282 *)
           /* ST_CALLSITE[004E0419]: CALL 0x00405e48; direct=00405E48 thunk_FUN_004d85e0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STResourceC; source view only; no Ghidra override */
           thunk_FUN_004d85e0(param_1->field_05B0,param_1->field_05B4,param_1->field_05B8);
    if (this != nullptr) {
      /* ST_CALLSITE[004E042F]: CALL 0x00402973; direct=00402973 STResourceC::SetResource */
      STResourceC::SetResource((STResourceC *)this,param_1->field_04E0,1);
      param_1->field_04E0 = 0;
      thunk_FUN_00580570(this);
      param_1->field_04D4 = 0;
    }
  }
  if (param_1->field_05AC == 0x61) {

    thunk_FUN_004e4100(param_1->field_0024);
  }
  return 0;
}

