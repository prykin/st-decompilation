#include "../../pseudocode_runtime.h"


/* [STObjectFactoryApplier] Central object factory for 0x0004 (ST_OBJECT_TYPE_0004).
   Evidence: exact registry pointer; create function first */

SliderClassTy * __cdecl CreateSlider(void)

{
  undefined4 *puVar1;
  SliderClassTy *pSVar2;

  puVar1 = FUN_006b04d0(100);
  if (puVar1 != nullptr) {
    pSVar2 = (SliderClassTy *)FUN_00724310(puVar1);
    return pSVar2;
  }
  return nullptr;
}

