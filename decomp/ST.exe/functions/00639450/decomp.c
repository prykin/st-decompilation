#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA7BC>00402FCC

   [STObjectFactoryApplier] Central object factory for 0x010C (ST_OBJECT_TYPE_010C).
   Evidence: registry[19] at 007CA7B8 stores type 0x010C and executable pointer 00402FCC; allocation
   size 728 has no unique current class-layout match */

void * __cdecl FUN_00639450(void)

{
  AnonShape_00639480_B53D0B0F *pAVar1;

  pAVar1 = (AnonShape_00639480_B53D0B0F *)FUN_006b04d0(0x2d8);
  if (pAVar1 != nullptr) {
    pAVar1 = thunk_FUN_00639480(pAVar1);
    return pAVar1;
  }
  return nullptr;
}

