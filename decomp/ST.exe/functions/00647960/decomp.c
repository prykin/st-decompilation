#include "../../pseudocode_runtime.h"


void __fastcall FUN_00647960(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (-1 < (int)*(uint *)(param_1 + 0x5d)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    ST3DSMAPContext::sub_006EA270
              (g_sT3DSMAPContext_00807598,*(uint *)(param_1 + 0x5d),0,*(uint *)(param_1 + 0x71));
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (-1 < (int)*(uint *)(param_1 + 0x7a)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    ST3DSMAPContext::sub_006EA270
              (g_sT3DSMAPContext_00807598,*(uint *)(param_1 + 0x7a),0,*(uint *)(param_1 + 0x7e));
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (-1 < (int)*(uint *)(param_1 + 0x86)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    ST3DSMAPContext::sub_006EA270
              (g_sT3DSMAPContext_00807598,*(uint *)(param_1 + 0x86),0,*(uint *)(param_1 + 0x8a));
  }
  return;
}

