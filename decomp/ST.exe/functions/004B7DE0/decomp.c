#include "../../pseudocode_runtime.h"


bool __fastcall FUN_004b7de0(int *param_1)

{
  int iVar1;

  iVar1 = param_1[0x134];
  if (iVar1 == 2) {
    param_1[0x134] = 3;
    /* ST_CALLSITE[004B7DFC]: CALL 0x00402cf7; direct=00402CF7 TLOBaseTy::RotateSpr */
    TLOBaseTy::RotateSpr((TLOBaseTy *)param_1,0);
    /* ST_CALLSITE[004B7E11]: CALL dword ptr [EAX + 0x90]; [STIndirectCallsiteApplier] exact slot 0x90; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4;/undefined4 */
    STStructuralVirtualCall<void>(param_1, 0x90, 3, 0x3cc);
  }
  return iVar1 == 2;
}

