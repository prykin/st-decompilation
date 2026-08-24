#include "../../pseudocode_runtime.h"


undefined4 * __thiscall FUN_0054eab0(void *this,int param_1,undefined4 *param_2)

{
  uint *puVar1;
  puVar1 = STField<undefined4 *>(this,0x65);
  if (param_2 != nullptr) {
    *param_2 = 0;
  }
  while( true ) {
    if (puVar1 == nullptr) {
      return nullptr;
    }
    if (puVar1[2] == param_1) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  if (param_2 == nullptr) {
    return puVar1 + 2;
  }
  *param_2 = puVar1[1];
  return puVar1 + 2;
}

