#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA80C>004025A9

   [STObjectFactoryApplier] Central object factory for 0x0109 (ST_OBJECT_TRAKS).
   Evidence: registry[29] at 007CA808 stores type 0x0109 and executable pointer 004025A9; allocation
   size 2092 uniquely matches /TraksClassTy */

TraksClassTy * __cdecl CreateTraks(void)

{
  TraksClassTy *pTVar1;

  /* ST_CALLSITE[00556735]: CALL 0x006b04d0; direct=006B04D0 FUN_006b04d0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/TraksClassTy; signature=__stdcall;pointer:/TraksClassTy;/uint */
  pTVar1 = FUN_006b04d0(0x82c);
  if (pTVar1 != nullptr) {
    pTVar1 = TraksClassTy::TraksClassTy(pTVar1);
    return pTVar1;
  }
  return nullptr;
}

