#include "../../pseudocode_runtime.h"


void __thiscall FUN_00617aa0(void *this,int param_1)

{
  void *pvVar1;
  DArrayTy *array;
  uint index;
  bool bVar2;

  array = *(DArrayTy **)((int)this + 0x5e);
  if (array != (DArrayTy *)0x0) {
    index = 0;
    if (0 < (int)array->count) {
      bVar2 = array->count != 0;
      do {
        if (bVar2) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime stride) */
          pvVar1 = (void *)(array->elementSize * index + (int)array->data);
        }
        else {
          pvVar1 = (void *)0x0;
        }
        if (*(int *)((int)pvVar1 + 0x1c) == param_1) {
          DArrayRemoveAt(array,index);
        }
        array = *(DArrayTy **)((int)this + 0x5e);
        index = index + 1;
        bVar2 = index < array->count;
      } while ((int)index < (int)array->count);
    }
  }
  return;
}

