#include "../../pseudocode_runtime.h"


/* [STObjectFactoryApplier] Central object factory for 0x0008 (ST_OBJECT_TYPE_0008).
   Evidence: exact registry pointer; create function first */

ViewerClassTy * __cdecl CreateViewer(void)

{
  undefined4 *puVar1;
  ViewerClassTy *pVVar2;

  puVar1 = FUN_006b04d0(0x1f8);
  if (puVar1 != nullptr) {
    pVVar2 = (ViewerClassTy *)FUN_0071e6f0(puVar1);
    return pVVar2;
  }
  return nullptr;
}

