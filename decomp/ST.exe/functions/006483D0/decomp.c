#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA9CC>004052F4

   [STObjectFactoryApplier] Central object factory for 0x0403 (ST_OBJECT_AI_BOSS).
   Evidence: registry[85] at 007CA9C8 stores type 0x0403 and executable pointer 004052F4; allocation
   size 1628 uniquely matches /AiBossClassTy */

AiBossClassTy * __cdecl CreateAiBoss(void)

{
  AiBossClassTy *pAVar1;

  /* ST_CALLSITE[006483D5]: CALL 0x006b04d0; direct=006B04D0 FUN_006b04d0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/AiBossClassTy; signature=__stdcall;pointer:/AiBossClassTy;/uint */
  pAVar1 = FUN_006b04d0(0x65c);
  if (pAVar1 != nullptr) {
    pAVar1 = AiBossClassTy::AiBossClassTy(pAVar1);
    return pAVar1;
  }
  return nullptr;
}

