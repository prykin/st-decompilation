#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA7E4>00405498

   [STObjectFactoryApplier] Central object factory for 0x0200 (ST_OBJECT_TLO_EMBRYO).
   Evidence: registry[24] at 007CA7E0 stores type 0x0200 and executable pointer 00405498; allocation
   size 884 uniquely matches /TLOEmbryoTy */

TLOEmbryoTy * __cdecl CreateTLOEmbryo(void)

{
  TLOEmbryoTy *pTVar1;

  pTVar1 = (TLOEmbryoTy *)FUN_006b04d0(0x374);
  if (pTVar1 != nullptr) {
    pTVar1 = TLOEmbryoTy::TLOEmbryoTy(pTVar1);
    return pTVar1;
  }
  return nullptr;
}

