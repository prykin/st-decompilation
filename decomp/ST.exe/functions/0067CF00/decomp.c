#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA9C4>00405916

   [STObjectFactoryApplier] Central object factory for 0x0402 (ST_OBJECT_TYPE_0402).
   Evidence: registry[84] at 007CA9C0 stores type 0x0402 and executable pointer 00405916; allocation
   size 1794 has no unique current class-layout match */

AiPlrClassTy * __cdecl CreateAiPlr(void)

{
  AiPlrClassTy *pAVar1;

  /* ST_CALLSITE[0067CF05]: CALL 0x006b04d0; direct=006B04D0 FUN_006b04d0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/AiPlrClassTy; signature=__stdcall;pointer:/AiPlrClassTy;/uint */
  pAVar1 = FUN_006b04d0(0x702);
  if (pAVar1 != nullptr) {
    pAVar1 = AiPlrClassTy::AiPlrClassTy(pAVar1);
    return pAVar1;
  }
  return nullptr;
}

