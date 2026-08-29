#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA95C>00403B11

   [STObjectFactoryApplier] Central object factory for 0x0138 (ST_OBJECT_ST_JELLY_MAN).
   Evidence: registry[71] at 007CA958 stores type 0x0138 and executable pointer 00403B11; allocation
   size 531 uniquely matches /STJellyManC */

STJellyManC * __cdecl CreateSTJellyMan(void)

{
  STJellyManC *pSVar1;

  /* ST_CALLSITE[00582285]: CALL 0x006b04d0; direct=006B04D0 FUN_006b04d0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STJellyManC; signature=__stdcall;pointer:/STJellyManC;/uint */
  pSVar1 = FUN_006b04d0(0x213);
  if (pSVar1 != nullptr) {
    pSVar1 = STJellyManC::STJellyManC(pSVar1);
    return pSVar1;
  }
  return nullptr;
}

