#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_00664650(void *this,int param_1)

{
  dword dVar1;
  int *piVar2;
  DArrayTy *array;
  uint index;
  bool bVar3;

  array = *(DArrayTy **)((int)this + 0x217);
  dVar1 = array->count;
  if (dVar1 != 0) {
    index = 0;
    if (0 < (int)dVar1) {
      bVar3 = dVar1 != 0;
      do {
        if (bVar3) {
          piVar2 = DArrayAt<int>(array, index);
        }
        else {
          piVar2 = nullptr;
        }
        if (*piVar2 == param_1) {
          DArrayRemoveAt(array,index);
        }
        array = *(DArrayTy **)((int)this + 0x217);
        index = index + 1;
        bVar3 = index < array->count;
      } while ((int)index < (int)array->count);
    }
    return *(undefined4 *)(*(int *)((int)this + 0x217) + 0xc);
  }
  return 0xffffffff;
}

