#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA824>0040150F

   [STObjectFactoryApplier] Central object factory for 0x0121 (ST_OBJECT_TYPE_0121).
   Evidence: registry[32] at 007CA820 stores type 0x0121 and executable pointer 0040150F; allocation
   size 664 has no unique current class-layout match */

void * __cdecl FUN_00558ba0(void)

{
  VisibleClassTy *pVVar1;

  /* ST_CALLSITE[00558BA5]: CALL 0x006b04d0; direct=006B04D0 FUN_006b04d0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/VisibleClassTy; signature=__stdcall;pointer:/VisibleClassTy;/uint */
  pVVar1 = FUN_006b04d0(0x298);
  if (pVVar1 != nullptr) {
    pVVar1 = VisibleClassTy::VisibleClassTy(pVVar1);
    return pVVar1;
  }
  return nullptr;
}

