#include "../../pseudocode_runtime.h"


/* [STObjectFactoryApplier] Central object factory for 0x0003 (ST_OBJECT_TYPE_0003).
   Evidence: exact registry pointer; create function first */

TrackbarClassTy * __cdecl CreateTrackbar(void)

{
  TrackbarClassTy *pTVar1;


  pTVar1 = STPointerBoundaryCast<TrackbarClassTy *>(FUN_006b04d0(0x19c));
  if (pTVar1 != nullptr) {

    FUN_0072b700((undefined4 *)pTVar1);
    pTVar1->vtable = &TrackbarClassTyVTable;
    pTVar1->field_0134 = 0;
    return pTVar1;
  }
  return nullptr;
}

