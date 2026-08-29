#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA944>004034E5

   [STObjectFactoryApplier] Central object factory for 0x0135 (ST_OBJECT_ST_VOLCANO).
   Evidence: registry[68] at 007CA940 stores type 0x0135 and executable pointer 004034E5; allocation
   size 181 uniquely matches /STVolcanoC */

STVolcanoC * __cdecl CreateSTVolcano(void)

{
  STVolcanoC *pSVar1;

  /* ST_CALLSITE[00646C65]: CALL 0x006b04d0; direct=006B04D0 FUN_006b04d0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STVolcanoC; signature=__stdcall;pointer:/STVolcanoC;/uint */
  pSVar1 = FUN_006b04d0(0xb5);
  if (pSVar1 != nullptr) {
    pSVar1 = STVolcanoC::STVolcanoC(pSVar1);
    return pSVar1;
  }
  return nullptr;
}

