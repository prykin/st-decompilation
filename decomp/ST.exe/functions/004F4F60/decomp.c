#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA81C>004054B6

   [STObjectFactoryApplier] Central object factory for 0x0120 (ST_OBJECT_TYPE_0120).
   Evidence: registry[31] at 007CA818 stores type 0x0120 and executable pointer 004054B6; allocation
   size 3566 has no unique current class-layout match */

void * __cdecl FUN_004f4f60(void)

{
  RecoveredRecordView_004F4F90_9FDA4667 *pRVar1;

  /* ST_CALLSITE[004F4F65]: CALL 0x006b04d0; direct=006B04D0 FUN_006b04d0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/AnonShape_004F4F90_2D6E0DDA; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/AnonShape_004F4F90_2D6E0DDA;/uint */
  pRVar1 = FUN_006b04d0(0xdee);
  if (pRVar1 != nullptr) {
    pRVar1 = thunk_FUN_004f4f90(pRVar1);
    return pRVar1;
  }
  return nullptr;
}

