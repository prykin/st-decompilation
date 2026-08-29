#include "../../pseudocode_runtime.h"


/* [STObjectFactoryApplier] Central object factory for 0x0009 (ST_OBJECT_TYPE_0009).
   Evidence: exact registry pointer; create function first */

RadioClassTy * __cdecl CreateRadio(void)

{
  RadioClassTy *pRVar1;

  /* ST_CALLSITE[0071E6D2]: CALL 0x006b04d0; direct=006B04D0 FUN_006b04d0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/RadioClassTy; signature=__stdcall;pointer:/RadioClassTy;/uint */
  pRVar1 = FUN_006b04d0(0x68);
  if (pRVar1 != nullptr) {
    pRVar1 = RadioClassTy::RadioClassTy(pRVar1);
    return pRVar1;
  }
  return nullptr;
}

