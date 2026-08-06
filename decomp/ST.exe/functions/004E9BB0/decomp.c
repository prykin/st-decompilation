#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_004e9bb0(void *this,int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((STField<int>(this,0x4f8) == *(int *)(param_1 + 0x18)) &&
     (STField<int>(this,0x4fc) != 0)) {
    STField<undefined4>(this,0x4f8) = 0;
    STField<undefined4>(this,0x4fc) = 0;
    STField<undefined4>(this,0x61b) = 0;
  }
  return 0;
}

