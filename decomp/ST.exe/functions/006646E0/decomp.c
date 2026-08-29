#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_006646e0(RecoveredRecord_006646E0_797C098D *param_1)

{
  dword dVar1;
  uint *puVar2;
  DArrayTy *array;
  uint index;
  bool bVar3;

  array = param_1->field_0217;
  dVar1 = array->count;
  if (dVar1 == 0) {
    return 0xffffffff;
  }
  index = 0;
  if (0 < (int)dVar1) {
    bVar3 = dVar1 != 0;
    do {
      if (bVar3) {
        puVar2 = DArrayAt<uint>(array, index);
      }
      else {
        puVar2 = nullptr;
      }
      if ((0x31 < *puVar2) && (*puVar2 < 100)) {

        DArrayRemoveAt(array,index);
      }
      array = param_1->field_0217;
      index = index + 1;
      bVar3 = index < array->count;
    } while ((int)index < (int)array->count);
  }
  return param_1->field_0217->count;
}

