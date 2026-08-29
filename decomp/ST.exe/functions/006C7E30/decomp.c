#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 006C7E30 -> EXTERNAL:0000000D @ 006C7E40 */

uint FUN_006c7e30(RecoveredRecord_006C7E30_5B8C824D *param_1,undefined4 *param_2,UINT_PTR ucb)

{
  BOOL BVar1;
  byte *puVar3;

  /* ST_CALLSITE[006C7E40]: CALL dword ptr [0x0085bb60] */
  BVar1 = IsBadHugeReadPtr((void *)param_1->field_0036,ucb);
  if (BVar1 != 0) {
    return 0xfffffffb;
  }
  puVar3 = (byte *)param_1->field_0036;
  memmove(param_2, puVar3, ucb); /* compiler REP MOVS byte copy */
  param_1->field_0036 = param_1->field_0036 + ucb;
  return ucb;
}

