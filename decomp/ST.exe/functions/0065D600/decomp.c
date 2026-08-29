#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __fastcall FUN_0065d600(RecoveredRecordView_0065D590_F2A3738B *param_1)

{
  if ((AiTactClassTy *)param_1->field_0284 != nullptr) {

    AiTactClassTy::thunk_FUN_0068e730((AiTactClassTy *)param_1->field_0284,param_1);
  }
  return;
}

