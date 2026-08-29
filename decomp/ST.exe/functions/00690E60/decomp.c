#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA9BC>00402671

   [STObjectFactoryApplier] Central object factory for 0x0401 (ST_OBJECT_AI_TACT).
   Evidence: registry[83] at 007CA9B8 stores type 0x0401 and executable pointer 00402671; allocation
   size 324 uniquely matches /AiTactClassTy */

AiTactClassTy * __cdecl CreateAiTact(void)

{
  AiTactClassTy *pAVar1;

  /* ST_CALLSITE[00690E65]: CALL 0x006b04d0; direct=006B04D0 FUN_006b04d0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/AiTactClassTy; signature=__stdcall;pointer:/AiTactClassTy;/uint */
  pAVar1 = FUN_006b04d0(0x144);
  if (pAVar1 != nullptr) {
    pAVar1 = AiTactClassTy::AiTactClassTy(pAVar1);
    return pAVar1;
  }
  return nullptr;
}

