#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=005F07A0 @ 005F08AD
   -> TEST TEST EAX,EAX */

int __fastcall FUN_004b7d90(int *param_1)

{
  int iVar1;

  iVar1 = param_1[0x134];
  if (iVar1 == 0) {
    param_1[0x134] = 1;
    /* ST_CALLSITE[004B7DAE]: CALL 0x00402cf7; direct=00402CF7 TLOBaseTy::RotateSpr */
    TLOBaseTy::RotateSpr((TLOBaseTy *)param_1,0);
    /* ST_CALLSITE[004B7DBE]: CALL dword ptr [EAX + 0x90]; [STIndirectCallsiteApplier] exact slot 0x90; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4;/undefined4 */
    STStructuralVirtualCall<void>(param_1, 0x90, 3, 0x3cb);
  }
  return (uint)(iVar1 == 0);
}

