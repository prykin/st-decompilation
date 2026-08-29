#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA7B4>00405BB9

   [STObjectFactoryApplier] Central object factory for 0x010B (ST_OBJECT_ST_DC_RESOURC).
   Evidence: registry[18] at 007CA7B0 stores type 0x010B and executable pointer 00405BB9; allocation
   size 631 uniquely matches /STDcResourcC */

STDcResourcC * __cdecl CreateSTDcResourc(void)

{
  STDcResourcC *pSVar1;

  /* ST_CALLSITE[0057F1A5]: CALL 0x006b04d0; direct=006B04D0 FUN_006b04d0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STDcResourcC; signature=__stdcall;pointer:/STDcResourcC;/uint */
  pSVar1 = FUN_006b04d0(0x277);
  if (pSVar1 != nullptr) {
    pSVar1 = STDcResourcC::STDcResourcC(pSVar1);
    return pSVar1;
  }
  return nullptr;
}

