#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA7C4>00405EED

   [STObjectFactoryApplier] Central object factory for 0x010D (ST_OBJECT_TYPE_010D).
   Evidence: registry[20] at 007CA7C0 stores type 0x010D and executable pointer 00405EED; allocation
   size 944 has no unique current class-layout match */

void * __cdecl FUN_0063bf70(void)

{
  RecoveredRecordView_0063BFA0_AD17F044 *pRVar1;

  /* ST_CALLSITE[0063BF75]: CALL 0x006b04d0; direct=006B04D0 FUN_006b04d0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/AnonShape_0063BFA0_2C9DA96E; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/AnonShape_0063BFA0_2C9DA96E;/uint */
  pRVar1 = FUN_006b04d0(0x3b0);
  if (pRVar1 != nullptr) {
    pRVar1 = thunk_FUN_0063bfa0(pRVar1);
    return pRVar1;
  }
  return nullptr;
}

