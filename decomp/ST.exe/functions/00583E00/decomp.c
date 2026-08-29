#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA954>00405858

   [STObjectFactoryApplier] Central object factory for 0x0137 (ST_OBJECT_TYPE_0137).
   Evidence: registry[70] at 007CA950 stores type 0x0137 and executable pointer 00405858; allocation
   size 660 has no unique current class-layout match */

void * __cdecl FUN_00583e00(void)

{
  STJellyGunC *pSVar1;

  /* ST_CALLSITE[00583E05]: CALL 0x006b04d0; direct=006B04D0 FUN_006b04d0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STJellyGunC; signature=__stdcall;pointer:/STJellyGunC;/uint */
  pSVar1 = FUN_006b04d0(0x294);
  if (pSVar1 != nullptr) {
    pSVar1 = STJellyGunC::STJellyGunC(pSVar1);
    return pSVar1;
  }
  return nullptr;
}

