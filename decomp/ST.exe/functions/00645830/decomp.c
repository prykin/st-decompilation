#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA79C>00402419

   [STObjectFactoryApplier] Central object factory for 0x0106 (ST_OBJECT_ST_TORP).
   Evidence: registry[15] at 007CA798 stores type 0x0106 and executable pointer 00402419; allocation
   size 649 uniquely matches /STTorpC; calls base/helper constructor(s) STGameObjC; exact derived
   allocation size wins */

STTorpC * __cdecl CreateSTTorp(void)

{
  STGameObjC *this;

  this = (STGameObjC *)FUN_006b04d0(0x289);
  if (this != nullptr) {
    /* ST_CALLSITE[00645844]: CALL 0x00401933; direct=00401933 STGameObjC::STGameObjC */
    STGameObjC::STGameObjC(this);
    /* ST_CALLSITE[00645851]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC */
    STT3DSprC::STT3DSprC((STT3DSprC *)&this->field_0x1d5);
    *(VTable_0079D60C **)&this->field_0x1d5 = &VTable_0079D60C;
    this->vtable = (STGameObjCVTable *)&STTorpCVTable;
    return (STTorpC *)this;
  }
  return nullptr;
}

