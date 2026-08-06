#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_00664600(void *this,uint param_1)

{
  dword dVar1;

  dVar1 = (STField<DArrayTy *>(this,0x217))->count;
  if (((dVar1 != 0) && ((int)param_1 < (int)dVar1)) && (-1 < (int)param_1)) {
    DArrayRemoveAt(STField<DArrayTy *>(this,0x217),param_1);
    return *(undefined4 *)(STField<int>(this,0x217) + 0xc);
  }
  return 0xffffffff;
}

