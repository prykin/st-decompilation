#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_0074d39e(void *this,undefined4 *param_1)

{
  DWORD DVar1;
  uint uVar2;
  /* ST_CALLSITE[0074D3AA]: CALL dword ptr [0x0085bce0] */
  DVar1 = WaitForSingleObject(STField<HANDLE>(this,4),0);
  if (DVar1 == 0) {
    if (param_1 != nullptr) {
      *param_1 = STField<undefined4>(this,0xc);
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

