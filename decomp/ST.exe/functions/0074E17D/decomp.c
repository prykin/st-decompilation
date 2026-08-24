#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_0074e17d(void *this,int *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;

  puVar1 = (undefined4 *)FUN_0074deba(param_2);
  while( true ) {
    if (puVar1 == nullptr) {
      return 1;
    }
    iVar2 = FUN_0074ded7((int)puVar1);
    param_1 = (int *)FUN_0074e122(this,param_1,iVar2);
    if (param_1 == nullptr) break;
    if (puVar1 == nullptr) {
      puVar1 = *(undefined4 **)(param_2 + 4);
    }
    else {
      puVar1 = (undefined4 *)*puVar1;
    }
  }
  return 0;
}

