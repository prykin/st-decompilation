#include "../../pseudocode_runtime.h"


void __fastcall FUN_00567490(int param_1)

{

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0xf8b) != 0) {
    FUN_006c1e20();
    memset((void *)(param_1 + 0xe0b), 0, 0x180); /* compiler bulk-zero initialization */
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0xdf3) != 0) {
    FUN_0071a8d0((int *)(param_1 + 0xdf3));
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(cMf32 **)(param_1 + 0xdef) != nullptr) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    cMf32::delete(*(cMf32 **)(param_1 + 0xdef));
    *(undefined4 *)(param_1 + 0xdef) = 0;
  }
  return;
}

