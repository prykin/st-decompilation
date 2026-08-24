#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 006C7E30 -> EXTERNAL:0000000D @ 006C7E40 */

uint FUN_006c7e30(int param_1,undefined4 *param_2,UINT_PTR ucb)

{
  BOOL BVar1;
  byte *puVar3;

  /* ST_CALLSITE[006C7E40]: CALL dword ptr [0x0085bb60] */
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  BVar1 = IsBadHugeReadPtr(*(void **)(param_1 + 0x36),ucb);
  if (BVar1 != 0) {
    return 0xfffffffb;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  puVar3 = (byte *)(*(undefined4 **)(param_1 + 0x36));
  memmove(param_2, puVar3, ucb); /* compiler REP MOVS byte copy */
  *(UINT_PTR *)(param_1 + 0x36) = *(int *)(param_1 + 0x36) + ucb;
  return ucb;
}

