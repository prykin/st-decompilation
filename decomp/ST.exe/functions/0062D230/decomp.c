#include "../../pseudocode_runtime.h"


uint __thiscall FUN_0062d230(void *this,int *param_1)

{
  DArrayTy *array;
  uint uVar1;
  void *pvVar2;
  uint index;
  bool bVar3;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  array = *(DArrayTy **)((int)this + *param_1 * 4 + 0x30);
  if (array != nullptr) {
    uVar1 = array->count;
    index = 0;
    if (0 < (int)uVar1) {
      bVar3 = uVar1 != 0;
      while ((((!bVar3 ||
               (pvVar2 = DArrayAt<void>(array, index),
               pvVar2 == nullptr)) || (STField<int>(pvVar2,4) != param_1[1])) ||
             (((STField<int>(pvVar2,8) != param_1[2] ||
               (STField<int>(pvVar2,0xc) != param_1[3])) ||
              (STField<int>(pvVar2,0x14) != param_1[5]))))) {
        index = index + 1;
        bVar3 = index < uVar1;
        if ((int)uVar1 <= (int)index) {
          return 0xffffffff;
        }
      }
      DArrayRemoveAt(array,index);
      return index;
    }
  }
  return 0xffffffff;
}

