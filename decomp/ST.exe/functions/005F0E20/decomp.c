#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_005f0e20(void *this,undefined4 param_1,int *param_2)

{
  int iVar1;

  if (param_2 == this) {
    return 4;
  }
  if ((param_2 != nullptr) && (this = (void *)(uint)DAT_0080874d, (void *)param_2[9] == this)) {
    this = (void *)param_2[8];
    if (this == (void *)0x14) {
      /* ST_CALLSITE[005F0E55]: CALL dword ptr [EDX + 0xec]; [STIndirectCallsiteApplier] exact slot 0xEC; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
      iVar1 = STStructuralVirtualCall<undefined4>(param_2, 0xEC);
      this = nullptr;
      if (iVar1 != 0) {
        return 3;
      }
    }
    else if ((this == (void *)0x3e8) || (this == (void *)0x3e9)) {
      /* ST_CALLSITE[005F0E79]: CALL dword ptr [EAX + 0xec]; [STIndirectCallsiteApplier] exact slot 0xEC; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
      iVar1 = STStructuralVirtualCall<undefined4>(param_2, 0xEC);
      this = nullptr;
      if (iVar1 != 0) {
        return 4;
      }
    }
  }
  return (uint)this & 0xffff0000;
}

