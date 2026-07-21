#include "../../pseudocode_runtime.h"


void __fastcall FUN_00567490(int param_1)

{
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cMf32 *extraout_ECX;
  cMf32 *this;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0xf8b) != 0) {
    FUN_006c1e20();
    memset((void *)(param_1 + 0xe0b), 0, 0x180); /* compiler bulk-zero initialization */
  }
  this = (cMf32 *)0x0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0xdf3) != 0) {
    FUN_0071a8d0((int *)(param_1 + 0xdf3));
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    this = extraout_ECX;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(cMf32 **)(param_1 + 0xdef) != (cMf32 *)0x0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    cMf32::delete(this,*(cMf32 **)(param_1 + 0xdef));
    *(undefined4 *)(param_1 + 0xdef) = 0;
  }
  return;
}

