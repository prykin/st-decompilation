#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004be1a0(int *param_1)

{
  int iVar1;

  if ((STField<byte>(param_1,0x1d1) & 2) == 0) {
    /* ST_CALLSITE[004BE1AB]: CALL dword ptr [EAX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
    iVar1 = STStructuralVirtualCall<undefined4>(param_1, 0xF8);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

