#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA774>00401C5D

   [STObjectFactoryApplier] Central object factory for 0x0100 (ST_OBJECT_TYPE_0100).
   Evidence: registry[10] at 007CA770 stores type 0x0100 and executable pointer 00401C5D; allocation
   size 32 has no unique current class-layout match */

OpticClassC * __cdecl CreateOpticClass(void)

{
  OpticClassC *this;

  /* ST_CALLSITE[004A88F2]: CALL 0x006b04d0; direct=006B04D0 FUN_006b04d0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/OpticClassC; signature=__stdcall;pointer:/OpticClassC;/uint */
  this = FUN_006b04d0(0x20);
  if (this != nullptr) {
    /* ST_CALLSITE[004A88FD]: CALL 0x00401da7; direct=00401DA7 OpticClassC::OpticClassC */
    g_opticClass_007FB2A0 = OpticClassC::OpticClassC(this);
    return g_opticClass_007FB2A0;
  }
  g_opticClass_007FB2A0 = nullptr;
  return nullptr;
}

