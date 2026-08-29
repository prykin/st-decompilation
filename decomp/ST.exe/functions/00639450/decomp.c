#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA7BC>00402FCC

   [STObjectFactoryApplier] Central object factory for 0x010C (ST_OBJECT_TYPE_010C).
   Evidence: registry[19] at 007CA7B8 stores type 0x010C and executable pointer 00402FCC; allocation
   size 728 has no unique current class-layout match */

void * __cdecl FUN_00639450(void)

{
  RecoveredRecordView_00639480_D210DAC1 *pRVar1;

  /* ST_CALLSITE[00639455]: CALL 0x006b04d0; direct=006B04D0 FUN_006b04d0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/AnonShape_00639480_B53D0B0F; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/AnonShape_00639480_B53D0B0F;/uint */
  pRVar1 = FUN_006b04d0(0x2d8);
  if (pRVar1 != nullptr) {
    pRVar1 = thunk_FUN_00639480(pRVar1);
    return pRVar1;
  }
  return nullptr;
}

