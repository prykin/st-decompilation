#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA7DC>00403B84

   [STObjectFactoryApplier] Central object factory for 0x01FF (ST_OBJECT_TYPE_01FF).
   Evidence: registry[23] at 007CA7D8 stores type 0x01FF and executable pointer 00403B84; allocation
   size 1571 has no unique current class-layout match */

TLOBaseTy * __cdecl CreateTLOBase(void)

{
  TLOBaseTy *pTVar1;

  /* ST_CALLSITE[004BE355]: CALL 0x006b04d0; direct=006B04D0 FUN_006b04d0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/TLOBaseTy; signature=__stdcall;pointer:/TLOBaseTy;/uint */
  pTVar1 = FUN_006b04d0(0x623);
  if (pTVar1 != nullptr) {
    pTVar1 = TLOBaseTy::TLOBaseTy(pTVar1);
    return pTVar1;
  }
  return nullptr;
}

