#include "../../pseudocode_runtime.h"


void __thiscall FUN_005503c0(void *this,int param_1)

{
  if (DAT_00808788 == 0) {
    STField<int>(this,0xf4) = param_1;
    DAT_00808788 = 1;
    if (g_optPanel_008016DC != nullptr) {
      /* ST_CALLSITE[005503EC]: CALL 0x00404f16; direct=00404F16 OptPanelTy::Question */
      OptPanelTy::Question(g_optPanel_008016DC,'\a');
      return;
    }
    STField<undefined4>(this,0xd0) = 0x44ff;
    /* ST_CALLSITE[00550408]: CALL dword ptr [EDX + 0x20]; [STIndirectCallsiteApplier] exact slot 0x20; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4 */
    STStructuralVirtualCall<undefined4>(this, 0x20, (int)this + 0xc0);
  }
  return;
}

