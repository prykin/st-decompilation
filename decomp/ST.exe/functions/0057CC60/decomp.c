#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA7A4>00401492

   [STObjectFactoryApplier] Central object factory for 0x0107 (ST_OBJECT_ST_FISH).
   Evidence: registry[16] at 007CA7A0 stores type 0x0107 and executable pointer 00401492; allocation
   size 619 uniquely matches /STFishC */

STFishC * __cdecl CreateSTFish(void)

{
  STFishC *pSVar1;

  /* ST_CALLSITE[0057CC65]: CALL 0x006b04d0; direct=006B04D0 FUN_006b04d0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STFishC; signature=__stdcall;pointer:/STFishC;/uint */
  pSVar1 = FUN_006b04d0(0x26b);
  if (pSVar1 != nullptr) {
    pSVar1 = STFishC::STFishC(pSVar1);
    return pSVar1;
  }
  return nullptr;
}

