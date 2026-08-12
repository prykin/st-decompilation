#include "../../pseudocode_runtime.h"


/* [STObjectFactoryApplier] Central object factory for 0x0008 (ST_OBJECT_TYPE_0008).
   Evidence: exact registry pointer; create function first */

ViewerClassTy * __cdecl CreateViewer(void)

{
  ViewerClassTy *pVVar1;

  pVVar1 = (ViewerClassTy *)FUN_006b04d0(0x1f8);
  if (pVVar1 != nullptr) {
    pVVar1 = ViewerClassTy::ViewerClassTy(pVVar1);
    return pVVar1;
  }
  return nullptr;
}

