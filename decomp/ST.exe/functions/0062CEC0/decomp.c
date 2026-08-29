#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA994>004046DD

   [STObjectFactoryApplier] Central object factory for 0x0145 (ST_OBJECT_ST_MAN_RUB3).
   Evidence: registry[78] at 007CA990 stores type 0x0145 and executable pointer 004046DD; allocation
   size 184 uniquely matches /STManRub3C; calls named constructor STManRub3C::STManRub3C */

STManRub3C * __cdecl CreateSTManRub3(void)

{
  STManRub3C *this;

  /* ST_CALLSITE[0062CEC5]: CALL 0x006b04d0; direct=006B04D0 FUN_006b04d0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STManRub3C; signature=__stdcall;pointer:/STManRub3C;/uint */
  this = FUN_006b04d0(0xb8);
  if (this != nullptr) {
    /* ST_CALLSITE[0062CED0]: CALL 0x004053ee; direct=004053EE STManRub3C::STManRub3C */
    g_manRub3_008117A4 = STManRub3C::STManRub3C(this);
    return g_manRub3_008117A4;
  }
  g_manRub3_008117A4 = nullptr;
  return nullptr;
}

