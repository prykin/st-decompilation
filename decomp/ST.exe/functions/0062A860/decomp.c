#include "../../pseudocode_runtime.h"


void __fastcall FUN_0062a860(int param_1)

{
  undefined4 local_24 [4];
  undefined4 local_14;
  undefined4 local_10;

  memset(local_24, 0, 0x20); /* compiler bulk-zero initialization */
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_10 = *(undefined4 *)(param_1 + 0xd2);
  local_14 = 10;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  thunk_FUN_00604870(*(void **)(param_1 + 0xce),local_24);
  return;
}

