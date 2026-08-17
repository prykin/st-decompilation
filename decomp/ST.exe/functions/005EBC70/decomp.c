#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA9E4>0040228E

   [STObjectFactoryApplier] Central object factory for 0x014F (ST_OBJECT_ST_ARTIAFACT).
   Evidence: registry[88] at 007CA9E0 stores type 0x014F and executable pointer 0040228E; allocation
   size 1143 uniquely matches /STArtiafactC; calls base/helper constructor(s) STSprGameObjC; exact
   derived allocation size wins */

STArtiafactC * __cdecl CreateSTArtiafact(void)

{
  STArtiafactC *this;

  this = (STArtiafactC *)FUN_006b04d0(0x477);
  if (this != nullptr) {
    /* ST_CALLSITE[005EBC83]: CALL 0x00401807; direct=00401807 STSprGameObjC::STSprGameObjC */
    STSprGameObjC::STSprGameObjC((STSprGameObjC *)this);
    this->vtable = &STArtiafactCVTable;
    this->vtable_at_1d5 = &STArtiafactCVTable_at_1D5;
    return this;
  }
  return nullptr;
}

