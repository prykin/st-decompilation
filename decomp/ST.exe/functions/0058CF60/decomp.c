#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA97C>00403BF7

   [STObjectFactoryApplier] Central object factory for 0x014D (ST_OBJECT_TYPE_014D).
   Evidence: registry[75] at 007CA978 stores type 0x014D and executable pointer 00403BF7; allocation
   size 667 has no unique current class-layout match */

void * __cdecl FUN_0058cf60(void)

{
  STSatC *pSVar1;

  /* ST_CALLSITE[0058CF65]: CALL 0x006b04d0; direct=006B04D0 FUN_006b04d0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STSatC; signature=__stdcall;pointer:/STSatC;/uint */
  pSVar1 = FUN_006b04d0(0x29b);
  if (pSVar1 != nullptr) {
    pSVar1 = STSatC::STSatC(pSVar1);
    return pSVar1;
  }
  return nullptr;
}

