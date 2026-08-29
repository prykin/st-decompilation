#include "../../pseudocode_runtime.h"


/* [STObjectFactoryApplier] Central object factory for 0x0008 (ST_OBJECT_TYPE_0008).
   Evidence: exact registry pointer; create function first */

ViewerClassTy * __cdecl CreateViewer(void)

{
  ViewerClassTy *pVVar1;

  /* ST_CALLSITE[0071F215]: CALL 0x006b04d0; direct=006B04D0 FUN_006b04d0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/ViewerClassTy; signature=__stdcall;pointer:/ViewerClassTy;/uint */
  pVVar1 = FUN_006b04d0(0x1f8);
  if (pVVar1 != nullptr) {
    pVVar1 = ViewerClassTy::ViewerClassTy(pVVar1);
    return pVVar1;
  }
  return nullptr;
}

