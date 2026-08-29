#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA99C>00402AEF

   [STObjectFactoryApplier] Central object factory for 0x0146 (ST_OBJECT_ST_MAN_RUIN).
   Evidence: registry[79] at 007CA998 stores type 0x0146 and executable pointer 00402AEF; allocation
   size 117 uniquely matches /STManRuinC; calls named constructor STManRuinC::STManRuinC */

STManRuinC * __cdecl CreateSTManRuin(void)

{
  STManRuinC *this;

  /* ST_CALLSITE[00630842]: CALL 0x006b04d0; direct=006B04D0 FUN_006b04d0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STManRuinC; signature=__stdcall;pointer:/STManRuinC;/uint */
  this = FUN_006b04d0(0x75);
  if (this != nullptr) {
    /* ST_CALLSITE[0063084D]: CALL 0x00403d0a; direct=00403D0A STManRuinC::STManRuinC */
    g_manRuin_008117B0 = STManRuinC::STManRuinC(this);
    return g_manRuin_008117B0;
  }
  g_manRuin_008117B0 = nullptr;
  return nullptr;
}

