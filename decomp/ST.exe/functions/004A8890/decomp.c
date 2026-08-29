#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA7FC>0040111D

   [STObjectFactoryApplier] Central object factory for 0x10FF (ST_OBJECT_TYPE_10FF).
   Evidence: registry[27] at 007CA7F8 stores type 0x10FF and executable pointer 0040111D; allocation
   size 786 has no unique current class-layout match */

STGroupBoatC * __cdecl CreateSTGroupBoat(void)

{
  STGroupBoatC *pSVar1;

  /* ST_CALLSITE[004A8895]: CALL 0x006b04d0; direct=006B04D0 FUN_006b04d0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STGroupBoatC; signature=__stdcall;pointer:/STGroupBoatC;/uint */
  pSVar1 = FUN_006b04d0(0x312);
  if (pSVar1 != nullptr) {
    pSVar1 = STGroupBoatC::STGroupBoatC(pSVar1);
    return pSVar1;
  }
  return nullptr;
}

