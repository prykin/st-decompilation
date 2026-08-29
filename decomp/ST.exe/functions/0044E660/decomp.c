#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA804>00404BB5

   [STObjectFactoryApplier] Central object factory for 0x1100 (ST_OBJECT_TYPE_1100).
   Evidence: registry[28] at 007CA800 stores type 0x1100 and executable pointer 00404BB5; allocation
   size 32 has no unique current class-layout match */

void * __cdecl FUN_0044e660(void)

{
  STAllPlayersC *pSVar1;

  /* ST_CALLSITE[0044E662]: CALL 0x006b04d0; direct=006B04D0 FUN_006b04d0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STAllPlayersC; signature=__stdcall;pointer:/STAllPlayersC;/uint */
  pSVar1 = FUN_006b04d0(0x20);
  if (pSVar1 != nullptr) {
    pSVar1 = STAllPlayersC::STAllPlayersC(pSVar1);
    return pSVar1;
  }
  return nullptr;
}

