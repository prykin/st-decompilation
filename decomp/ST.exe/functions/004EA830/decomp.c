#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 004EA830 returns literal 1 at 004EA84E @ 004EA853 */

uint __fastcall FUN_004ea830(TLOBaseTy *param_1)

{
  if ((param_1->field_04D0 == CASE_0) || (param_1->field_04D0 == CASE_2)) {
    param_1->field_04D0 = CASE_1;
    /* ST_CALLSITE[004EA849]: CALL 0x00401a0f; direct=00401A0F TLOBaseTy::AddSprInit */
    TLOBaseTy::AddSprInit(param_1);
  }
  return 1;
}

