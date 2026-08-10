#include "../../pseudocode_runtime.h"


/* [STObjectFactoryApplier] Central object factory for 0x0009 (ST_OBJECT_TYPE_0009).
   Evidence: exact registry pointer; create function first */

RadioClassTy * __cdecl CreateRadio(void)

{
  undefined4 *puVar1;
  RadioClassTy *pRVar2;

  puVar1 = FUN_006b04d0(0x68);
  if (puVar1 != nullptr) {
    pRVar2 = (RadioClassTy *)FUN_0071e040(puVar1);
    return pRVar2;
  }
  return nullptr;
}

