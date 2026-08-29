#include "../../pseudocode_runtime.h"


/* [STObjectFactoryApplier] Central object factory for 0x0004 (ST_OBJECT_TYPE_0004).
   Evidence: exact registry pointer; create function first */

SliderClassTy * __cdecl CreateSlider(void)

{
  SliderClassTy *pSVar1;

  /* ST_CALLSITE[00724D02]: CALL 0x006b04d0; direct=006B04D0 FUN_006b04d0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SliderClassTy; signature=__stdcall;pointer:/SliderClassTy;/uint */
  pSVar1 = FUN_006b04d0(100);
  if (pSVar1 != nullptr) {
    pSVar1 = SliderClassTy::SliderClassTy(pSVar1);
    return pSVar1;
  }
  return nullptr;
}

