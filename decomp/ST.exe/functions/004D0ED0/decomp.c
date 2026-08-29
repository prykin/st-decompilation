#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA7F4>0040382D

   [STObjectFactoryApplier] Central object factory for 0x0202 (ST_OBJECT_TLO_FAKE).
   Evidence: registry[26] at 007CA7F0 stores type 0x0202 and executable pointer 0040382D; allocation
   size 593 uniquely matches /TLOFakeTy */

TLOFakeTy * __cdecl CreateTLOFake(void)

{
  TLOFakeTy *pTVar1;

  /* ST_CALLSITE[004D0ED5]: CALL 0x006b04d0; direct=006B04D0 FUN_006b04d0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/TLOFakeTy; signature=__stdcall;pointer:/TLOFakeTy;/uint */
  pTVar1 = FUN_006b04d0(0x251);
  if (pTVar1 != nullptr) {
    pTVar1 = TLOFakeTy::TLOFakeTy(pTVar1);
    return pTVar1;
  }
  return nullptr;
}

