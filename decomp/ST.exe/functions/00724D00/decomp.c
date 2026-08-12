#include "../../pseudocode_runtime.h"


/* [STObjectFactoryApplier] Central object factory for 0x0004 (ST_OBJECT_TYPE_0004).
   Evidence: exact registry pointer; create function first */

SliderClassTy * __cdecl CreateSlider(void)

{
  SliderClassTy *pSVar1;

  pSVar1 = (SliderClassTy *)FUN_006b04d0(100);
  if (pSVar1 != nullptr) {
    pSVar1 = SliderClassTy::SliderClassTy(pSVar1);
    return pSVar1;
  }
  return nullptr;
}

