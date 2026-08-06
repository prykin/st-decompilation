#include "../../pseudocode_runtime.h"


void __fastcall FUN_00619320(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (-1 < (int)*(uint *)(param_1 + 0x97)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    Library::Ourlib::ST3DSMAP::SprClose(g_sT3DSMAPContext_00807598,*(uint *)(param_1 + 0x97));
  }
  return;
}

