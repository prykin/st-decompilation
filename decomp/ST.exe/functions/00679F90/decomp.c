#include "../../pseudocode_runtime.h"


int __thiscall FUN_00679f90(void *this,int param_1,uint *param_2,int param_3)

{
  AiTactClassTy *this_00;
  int iVar1;

  /* ST_CALLSITE[00679F97]: CALL 0x00401eb0; direct=00401EB0 thunk_FUN_00678d90; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/AiTactClassTy; signature=__thiscall;pointer:/AiTactClassTy;pointer:/void;/int */
  this_00 = thunk_FUN_00678d90(this,param_1);
  if ((this_00 != nullptr) && (param_2 != nullptr)) {
    if (param_3 < 0) {
      /* ST_CALLSITE[00679FB1]: CALL 0x004010e1; direct=004010E1 AiTactClassTy::GetAiMess */
      iVar1 = AiTactClassTy::GetAiMess(this_00,(RecoveredRecordView_0068FD00_630BE91E *)param_2);
      return iVar1;
    }

    iVar1 = thunk_FUN_0068fc70(this_00,(RecoveredRecordView_0068FD00_630BE91E *)param_2,
                               (short)param_3);
    return iVar1;
  }
  return -0x34;
}

