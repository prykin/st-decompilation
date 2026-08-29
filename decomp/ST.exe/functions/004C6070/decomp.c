#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004c6070(RecoveredRecord_004C6070_F5B707F0 *param_1)

{
  if (param_1->field_0245 == 5) {
    /* ST_CALLSITE[004C6082]: CALL dword ptr [EAX + 0x90]; [STIndirectCallsiteApplier] exact slot 0x90; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4;/undefined4 */
    STStructuralVirtualCall<undefined4>(param_1, 0x90, 3, 0x3fb);
  }
  return 0;
}

