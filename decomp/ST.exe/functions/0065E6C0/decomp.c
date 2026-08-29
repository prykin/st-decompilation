#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0, unknown=0),
   and decompilation contains no value return */

void __fastcall FUN_0065e6c0(RecoveredRecordView_0065DA10_5A1C53AF *param_1,undefined4 param_2)

{
  DArrayTy *array;

  /* ST_CALLSITE[0065E6C4]: CALL 0x004018cf; direct=004018CF AiFltClassTy::sub_0065DA10; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArrayTy; signature=__fastcall;pointer:/SubmarineTitans/Recovered/DArrayTy;pointer:/AiFltClassTy;/undefined4 */
  array = AiFltClassTy::sub_0065DA10((AiFltClassTy *)param_1,param_2);
  if (array != nullptr) {
    if (array->count != 0) {
      thunk_FUN_00675dc0(*(uint *)&param_1->field_0024,array);
    }
    DArrayDestroy(array);
  }
  return;
}

