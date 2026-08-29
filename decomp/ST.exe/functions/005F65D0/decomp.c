#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA98C>00401F82

   [STObjectFactoryApplier] Central object factory for 0x0144 (ST_OBJECT_ST_COLL3).
   Evidence: registry[77] at 007CA988 stores type 0x0144 and executable pointer 00401F82; allocation
   size 755 uniquely matches /STColl3C */

STColl3C * __cdecl CreateSTColl3(void)

{
  STColl3C *pSVar1;

  /* ST_CALLSITE[005F65D5]: CALL 0x006b04d0; direct=006B04D0 FUN_006b04d0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STColl3C; signature=__stdcall;pointer:/STColl3C;/uint */
  pSVar1 = FUN_006b04d0(0x2f3);
  if (pSVar1 != nullptr) {
    pSVar1 = STColl3C::STColl3C(pSVar1);
    return pSVar1;
  }
  return nullptr;
}

