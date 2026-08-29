#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CAA04>00404E2B

   [STObjectFactoryApplier] Central object factory for 0x0158 (ST_OBJECT_ST_MINE_SET).
   Evidence: registry[92] at 007CAA00 stores type 0x0158 and executable pointer 00404E2B; allocation
   size 871 uniquely matches /STMineSetC */

STMineSetC * __cdecl CreateSTMineSet(void)

{
  STMineSetC *pSVar1;

  /* ST_CALLSITE[006225D5]: CALL 0x006b04d0; direct=006B04D0 FUN_006b04d0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STMineSetC; signature=__stdcall;pointer:/STMineSetC;/uint */
  pSVar1 = FUN_006b04d0(0x367);
  if (pSVar1 != nullptr) {
    pSVar1 = STMineSetC::STMineSetC(pSVar1);
    return pSVar1;
  }
  return nullptr;
}

