#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA784>0040374C

   [STObjectFactoryApplier] Central object factory for 0x0102 (ST_OBJECT_TYPE_0102).
   Evidence: registry[12] at 007CA780 stores type 0x0102 and executable pointer 0040374C; allocation
   size 24 has no unique current class-layout match */

void * __cdecl FUN_00495950(void)

{
  DumpClassC *this;

  /* ST_CALLSITE[00495952]: CALL 0x006b04d0; direct=006B04D0 FUN_006b04d0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/DumpClassC; signature=__stdcall;pointer:/DumpClassC;/uint */
  this = FUN_006b04d0(0x18);
  if (this != nullptr) {
    /* ST_CALLSITE[0049595D]: CALL 0x00405baa; direct=00405BAA DumpClassC::DumpClassC */
    g_dumpClass_007FB284 = DumpClassC::DumpClassC(this);
    return g_dumpClass_007FB284;
  }
  g_dumpClass_007FB284 = nullptr;
  return nullptr;
}

