#include "../../pseudocode_runtime.h"


/* [STObjectFactoryApplier] Central object factory for 0x0009 (ST_OBJECT_TYPE_0009).
   Evidence: exact registry pointer; create function first */

RadioClassTy * __cdecl CreateRadio(void)

{
  RadioClassTy *pRVar1;

  pRVar1 = (RadioClassTy *)FUN_006b04d0(0x68);
  if (pRVar1 != nullptr) {
    pRVar1 = RadioClassTy::RadioClassTy(pRVar1);
    return pRVar1;
  }
  return nullptr;
}

