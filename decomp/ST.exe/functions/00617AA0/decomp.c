#include "../../pseudocode_runtime.h"


void __thiscall FUN_00617aa0(void *this,int param_1)

{
  void *pvVar1;
  DArrayTy *array;
  uint index;
  bool bVar2;

  array = STField<DArrayTy *>(this,0x5e);
  if (array != nullptr) {
    index = 0;
    if (0 < (int)array->count) {
      bVar2 = array->count != 0;
      do {
        if (bVar2) {
          pvVar1 = DArrayAt<void>(array, index);
        }
        else {
          pvVar1 = nullptr;
        }
        if (STField<int>(pvVar1,0x1c) == param_1) {
          DArrayRemoveAt(array,index);
        }
        array = STField<DArrayTy *>(this,0x5e);
        index = index + 1;
        bVar2 = index < array->count;
      } while ((int)index < (int)array->count);
    }
  }
  return;
}

