#include "../../pseudocode_runtime.h"


/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

uint * FUN_0065f840(DArrayTy *param_1,uint param_2,int param_3)

{
  int iVar1;
  DArrayTy *array;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  InternalExceptionFrame local_54;
  undefined4 local_10;
  undefined2 local_c;
  DArrayTy *local_8;

  local_8 = (DArrayTy *)0x0;
  if ((((param_1 != (DArrayTy *)0x0) && (param_1->count != 0)) &&
      ((int)param_2 < (int)param_1->count)) && (0 < param_3)) {
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    iVar1 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
    if (iVar1 != 0) {
      g_currentExceptionFrame = local_54.previous;
      if (local_8 != (DArrayTy *)0x0) {
        DArrayDestroy(local_8);
      }
      return (uint *)0x0;
    }
    array = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,5,6,5);
    uVar2 = param_1->count;
    uVar4 = param_2;
    local_8 = array;
    if ((int)param_2 < (int)uVar2) {
      do {
        if (param_3 <= (int)(uVar4 - param_2)) {
          g_currentExceptionFrame = local_54.previous;
          return &array->flags;
        }
        if (uVar4 < uVar2) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(param_1, uVar4) (runtime stride) */
          puVar3 = (undefined4 *)(param_1->elementSize * uVar4 + (int)param_1->data);
        }
        else {
          puVar3 = (undefined4 *)0x0;
        }
        local_10 = *puVar3;
        local_c = *(undefined2 *)(puVar3 + 1);
        Library::DKW::TBL::DArrayAppend(array,&local_10);
        uVar2 = param_1->count;
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)uVar2);
    }
    g_currentExceptionFrame = local_54.previous;
    return &array->flags;
  }
  return (uint *)0x0;
}

