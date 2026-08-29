#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA7EC>00404D2C

   [STObjectFactoryApplier] Central object factory for 0x0201 (ST_OBJECT_TLO_BLD_MARK).
   Evidence: registry[25] at 007CA7E8 stores type 0x0201 and executable pointer 00404D2C; allocation
   size 60 uniquely matches /TLOBldMark */

TLOBldMark * __cdecl CreateTLOBldMark(void)

{
  TLOBldMark *pTVar1;

  /* ST_CALLSITE[004C6B22]: CALL 0x006b04d0; direct=006B04D0 FUN_006b04d0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/TLOBldMark; signature=__stdcall;pointer:/TLOBldMark;/uint */
  pTVar1 = FUN_006b04d0(0x3c);
  if (pTVar1 != nullptr) {
    pTVar1 = TLOBldMark::TLOBldMark(pTVar1);
    return pTVar1;
  }
  return nullptr;
}

