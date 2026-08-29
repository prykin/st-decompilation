#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA9F4>00405C09

   [STObjectFactoryApplier] Central object factory for 0x0152 (ST_OBJECT_TYPE_0152).
   Evidence: registry[90] at 007CA9F0 stores type 0x0152 and executable pointer 00405C09; allocation
   size 110 has no unique current class-layout match */

void * __cdecl FUN_00617810(void)

{
  JumpManagC *pJVar1;

  /* ST_CALLSITE[00617812]: CALL 0x006b04d0; direct=006B04D0 FUN_006b04d0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/JumpManagC; signature=__stdcall;pointer:/JumpManagC;/uint */
  pJVar1 = FUN_006b04d0(0x6e);
  if (pJVar1 != nullptr) {
    pJVar1 = JumpManagC::JumpManagC(pJVar1);
    return pJVar1;
  }
  return nullptr;
}

