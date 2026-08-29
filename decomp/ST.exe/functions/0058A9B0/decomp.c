#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA96C>00401D7A | P:007CA974>00401D7A

   [STObjectFactoryApplier] Central object factory for 0x0140 (ST_OBJECT_ST_OCTOPUS_0140).
   Evidence: registry[73] at 007CA968 stores type 0x0140 and executable pointer 00401D7A; allocation
   size 685 uniquely matches /STOctopusC */

STOctopusC * __cdecl CreateSTOctopus(void)

{
  STOctopusC *pSVar1;

  /* ST_CALLSITE[0058A9B5]: CALL 0x006b04d0; direct=006B04D0 FUN_006b04d0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STOctopusC; signature=__stdcall;pointer:/STOctopusC;/uint */
  pSVar1 = FUN_006b04d0(0x2ad);
  if (pSVar1 != nullptr) {
    pSVar1 = STOctopusC::STOctopusC(pSVar1);
    return pSVar1;
  }
  return nullptr;
}

