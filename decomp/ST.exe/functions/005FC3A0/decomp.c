#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA9FC>00403558

   [STObjectFactoryApplier] Central object factory for 0x0157 (ST_OBJECT_ST_CONTAINER).
   Evidence: registry[91] at 007CA9F8 stores type 0x0157 and executable pointer 00403558; allocation
   size 1147 uniquely matches /STContainerC; calls base/helper constructor(s) STSprGameObjC; exact
   derived allocation size wins */

STContainerC * __cdecl CreateSTContainer(void)

{
  STContainerC *this;

  /* ST_CALLSITE[005FC3A6]: CALL 0x006b04d0; direct=006B04D0 FUN_006b04d0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STSprGameObjC; source view only; no Ghidra override */
  this = STPointerBoundaryCast<STContainerC *>(FUN_006b04d0(0x47b));
  if (this != nullptr) {
    /* ST_CALLSITE[005FC3B3]: CALL 0x00401807; direct=00401807 STSprGameObjC::STSprGameObjC */
    STSprGameObjC::STSprGameObjC((STSprGameObjC *)this);
    this->vtable = &STContainerCVTable;
    this->vtable_at_1d5 = &STContainerCVTable_at_1D5;
    return this;
  }
  return nullptr;
}

