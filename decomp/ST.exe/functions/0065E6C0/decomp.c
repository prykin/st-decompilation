#include "../../pseudocode_runtime.h"


void __fastcall FUN_0065e6c0(AnonShape_0065DA10_8B0AA883 *param_1,undefined4 param_2)

{
  DArrayTy *array;

  /* ST_CALLSITE[0065E6C4]: CALL 0x004018cf; direct=004018CF AiFltClassTy::sub_0065DA10 */
  array = (DArrayTy *)AiFltClassTy::sub_0065DA10((AiFltClassTy *)param_1,param_2);
  if (array != nullptr) {
    if (array->count != 0) {
      thunk_FUN_00675dc0(*(uint *)&param_1->field_0024,array);
    }
    DArrayDestroy(array);
  }
  return;
}

